#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_4_2EFF0F8B47634368_OFFSET UNITYSDK_OFFSET(0x1C9EA3B0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_4_6BF032646FD715CE_OFFSET UNITYSDK_OFFSET(0x1C9EA410)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9EA400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionListConfig_TypeDefinitionIndex = 16858;

	class ActionTriggerActionListConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiActionConfigBase*>* ActionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2EFF0F8B47634368(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_4_2EFF0F8B47634368_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6BF032646FD715CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_4_6BF032646FD715CE_OFFSET))(a1, a2);
		}
	};
}
