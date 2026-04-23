#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionResConfig; }

#define RPG_GAMECORE_MISSIONRESCONFIGLIST_METHOD_2_B45F12D7A5717E54_OFFSET UNITYSDK_OFFSET(0x18B2ED30)
#define RPG_GAMECORE_MISSIONRESCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2EE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionResConfigList_TypeDefinitionIndex = 18052;

	class MissionResConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionWithResIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::MissionResConfig*>* MissionResList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONRESCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B45F12D7A5717E54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionResConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionResConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONRESCONFIGLIST_METHOD_2_B45F12D7A5717E54_OFFSET))(a1, a2);
		}
	};
}
