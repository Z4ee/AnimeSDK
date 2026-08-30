#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIG_METHOD_2_3A0D2E855633E4C4_OFFSET UNITYSDK_OFFSET(0x1D7DB6E0)
#define RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DB870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleFlowStateConfig_TypeDefinitionIndex = 16052;

	class ExpeditionBattleFlowStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ExpeditionBattleFlowStateType Type; // 0x10
		::System::String* JsonPath; // 0x18
		::System::UInt32 MinReplayCount; // 0x20
		::System::UInt32 MaxReplayCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3A0D2E855633E4C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleFlowStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleFlowStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIG_METHOD_2_3A0D2E855633E4C4_OFFSET))(a1, a2);
		}
	};
}
