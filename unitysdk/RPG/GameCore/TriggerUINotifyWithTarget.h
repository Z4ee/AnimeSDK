#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_METHOD_3_6576CC1597FD05E4_OFFSET UNITYSDK_OFFSET(0x1D29ACB0)
#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_METHOD_3_EB647B0FAFD9CE63_OFFSET UNITYSDK_OFFSET(0x1D29AC70)
#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29ACA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerUINotifyWithTarget_TypeDefinitionIndex = 22668;

	class TriggerUINotifyWithTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyTypeName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB647B0FAFD9CE63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUINotifyWithTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUINotifyWithTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_METHOD_3_EB647B0FAFD9CE63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6576CC1597FD05E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUINotifyWithTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUINotifyWithTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_METHOD_3_6576CC1597FD05E4_OFFSET))(a1, a2);
		}
	};
}
