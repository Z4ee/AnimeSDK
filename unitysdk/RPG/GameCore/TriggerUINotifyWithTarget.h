#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_METHOD_3_6576CC1597FD05E4_OFFSET UNITYSDK_OFFSET(0x178CFDB0)
#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_METHOD_3_F1CE56DF34465372_OFFSET UNITYSDK_OFFSET(0x178CFD30)
#define RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x178CFD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerUINotifyWithTarget_TypeDefinitionIndex = 21120;

	class TriggerUINotifyWithTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyTypeName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1CE56DF34465372(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUINotifyWithTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUINotifyWithTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_METHOD_3_F1CE56DF34465372_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6576CC1597FD05E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerUINotifyWithTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerUINotifyWithTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUINOTIFYWITHTARGET_METHOD_3_6576CC1597FD05E4_OFFSET))(a1, a2);
		}
	};
}
