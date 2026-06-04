#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelRotatableRegionPoseBakedInfo; }

#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1988A950)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1988AA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRotatableRegionBakedInfo_TypeDefinitionIndex = 16297;

	class LevelRotatableRegionBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelRotatableRegionPoseBakedInfo*>* PoseList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRotatableRegionBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRotatableRegionBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
