#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLeverSwitchState.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_METHOD_3_1D339B44E96F5650_OFFSET UNITYSDK_OFFSET(0x197458D0)
#define RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_METHOD_3_8DF3A8AEFC40AA99_OFFSET UNITYSDK_OFFSET(0x19745860)
#define RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197458B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLeverSwitchConfig_TypeDefinitionIndex = 17646;

	class FiveDimLeverSwitchConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsLeverSwitch; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* LeftValues; // 0x20
		::Il2CppArray<::System::Int16>* RightValues; // 0x28
		::RPG::GameCore::FiveDimLeverSwitchState DefautState; // 0x30
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x38
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x40
		::RPG::GameCore::FiveDimEffectItem* ArrowInteractEffect; // 0x48
		::System::Single ArrowInteractEffectDelay; // 0x50
		::System::Boolean SendEventOnInit; // 0x54
		::RPG::GameCore::LittleGameEvent* SwitchLeftEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* SwitchRightEvent; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8DF3A8AEFC40AA99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLeverSwitchConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLeverSwitchConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_METHOD_3_8DF3A8AEFC40AA99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D339B44E96F5650(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLeverSwitchConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLeverSwitchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVERSWITCHCONFIG_METHOD_3_1D339B44E96F5650_OFFSET))(a1, a2);
		}
	};
}
