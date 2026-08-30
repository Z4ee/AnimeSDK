#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_4_D66C6130E0653A01_OFFSET UNITYSDK_OFFSET(0x1CD74A30)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_4_EBD60B99107DC6E4_OFFSET UNITYSDK_OFFSET(0x1CD74950)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD749E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionMultiTimeConfig_TypeDefinitionIndex = 16855;

	class ActionTriggerActionMultiTimeConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::RPG::GameCore::MiActionConfigBase* Action; // 0x18
		::RPG::GameCore::MiParameterConfigBase* TriggerCountParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EBD60B99107DC6E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_4_EBD60B99107DC6E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D66C6130E0653A01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionMultiTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONMULTITIMECONFIG_METHOD_4_D66C6130E0653A01_OFFSET))(a1, a2);
		}
	};
}
