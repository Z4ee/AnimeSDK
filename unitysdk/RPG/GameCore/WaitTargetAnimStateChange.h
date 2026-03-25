#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_METHOD_4_C981C5C4B2F184A9_OFFSET UNITYSDK_OFFSET(0x17906310)
#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_METHOD_4_E3B9800126EF48F8_OFFSET UNITYSDK_OFFSET(0x17906230)
#define RPG_GAMECORE_WAITTARGETANIMSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x179062B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTargetAnimStateChange_TypeDefinitionIndex = 20493;

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

		static ::System::Void Method_4_E3B9800126EF48F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTargetAnimStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTargetAnimStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_METHOD_4_E3B9800126EF48F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C981C5C4B2F184A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTARGETANIMSTATECHANGE_METHOD_4_C981C5C4B2F184A9_OFFSET))(a1, a2);
		}
	};
}
