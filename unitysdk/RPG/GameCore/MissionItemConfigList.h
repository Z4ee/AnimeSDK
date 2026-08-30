#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionItemConfig; }

#define RPG_GAMECORE_MISSIONITEMCONFIGLIST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1AC1A0)
#define RPG_GAMECORE_MISSIONITEMCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionItemConfigList_TypeDefinitionIndex = 18784;

	class MissionItemConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* ItemConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionItemConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionItemConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIGLIST_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
