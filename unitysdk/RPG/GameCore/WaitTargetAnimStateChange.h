#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_METHOD_4_112C218C992DC2A1_OFFSET UNITYSDK_OFFSET(0x1D1BDAC0)
#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_METHOD_4_195FA657B393C51F_OFFSET UNITYSDK_OFFSET(0x1D1BDB10)
#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BDB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTargetAnimStateChange_TypeDefinitionIndex = 21488;

	class WaitTargetAnimStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::System::String*>* FromStateNames; // 0x28
		::Il2CppArray<::System::String*>* ToStateNames; // 0x30
		::System::Boolean IsTransitionIn; // 0x38
		::System::Boolean IsListenAllLayer; // 0x39
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTARGETANIMSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_112C218C992DC2A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTargetAnimStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTargetAnimStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_METHOD_4_112C218C992DC2A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_195FA657B393C51F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_METHOD_4_195FA657B393C51F_OFFSET))(a1, a2);
		}
	};
}
