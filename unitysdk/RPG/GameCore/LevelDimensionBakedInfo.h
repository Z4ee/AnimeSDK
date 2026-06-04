#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGroupBakedInfo; }
namespace RPG::GameCore { class LevelSubmapEntityBakedInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19870B60)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19870D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionBakedInfo_TypeDefinitionIndex = 16295;

	class LevelDimensionBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelGroupBakedInfo*>* GroupList; // 0x18
		::System::String* NavMeshLargeMonster; // 0x20
		::Il2CppArray<::RPG::GameCore::LevelSubmapEntityBakedInfo*>* SubmapEntityList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
