#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_4_6BF032646FD715CE_OFFSET UNITYSDK_OFFSET(0x16E9E400)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_4_F37DDA742DE0BECF_OFFSET UNITYSDK_OFFSET(0x16E9E320)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E9E3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionListConfig_TypeDefinitionIndex = 15616;

	class ActionTriggerActionListConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiActionConfigBase*>* ActionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F37DDA742DE0BECF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_4_F37DDA742DE0BECF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6BF032646FD715CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_4_6BF032646FD715CE_OFFSET))(a1, a2);
		}
	};
}
