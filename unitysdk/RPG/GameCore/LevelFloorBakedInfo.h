#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelDimensionBakedInfo; }
namespace RPG::GameCore { class LevelNavGraphInfo; }
namespace RPG::GameCore { class LevelRotatableBakedInfo; }
namespace RPG::GameCore { class PerFloorConflictRelativeMissionBakedData; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELFLOORBAKEDINFO_METHOD_2_BBD91CA5689DA08A_OFFSET UNITYSDK_OFFSET(0x18A418D0)
#define RPG_GAMECORE_LEVELFLOORBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A41AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorBakedInfo_TypeDefinitionIndex = 16277;

	class LevelFloorBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelDimensionBakedInfo*>* DimensionList; // 0x10
		::RPG::GameCore::PerFloorConflictRelativeMissionBakedData* ConflictRelativeMissionData; // 0x18
		::RPG::GameCore::LevelRotatableBakedInfo* Rotatable; // 0x20
		::RPG::GameCore::LevelNavGraphInfo* NavGraph; // 0x28
		::System::String* NavMesh; // 0x30
		::System::Boolean HasLegacyGroup; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BBD91CA5689DA08A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelFloorBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelFloorBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDINFO_METHOD_2_BBD91CA5689DA08A_OFFSET))(a1, a2);
		}
	};
}
