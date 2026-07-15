#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_METHOD_3_D41613BCE9AC3605_OFFSET UNITYSDK_OFFSET(0x1B9A3550)
#define RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_METHOD_3_EB67D204EC0DF9F4_OFFSET UNITYSDK_OFFSET(0x1B9A35D0)
#define RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A35A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateChangeListenerConfig_TypeDefinitionIndex = 19616;

	class PropStateChangeListenerConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropState FromState; // 0x18
		::RPG::GameCore::PropState ToState; // 0x1C
		::System::Boolean FromAnyState; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D41613BCE9AC3605(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateChangeListenerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateChangeListenerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_METHOD_3_D41613BCE9AC3605_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB67D204EC0DF9F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateChangeListenerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateChangeListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGELISTENERCONFIG_METHOD_3_EB67D204EC0DF9F4_OFFSET))(a1, a2);
		}
	};
}
