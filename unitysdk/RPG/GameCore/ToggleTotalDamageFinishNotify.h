#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_METHOD_3_02CB9CAD9CFD4D64_OFFSET UNITYSDK_OFFSET(0x1C157830)
#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_METHOD_3_9F9EDA3F4AD586E1_OFFSET UNITYSDK_OFFSET(0x1C1577F0)
#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C157820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleTotalDamageFinishNotify_TypeDefinitionIndex = 22393;

	class ToggleTotalDamageFinishNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DisableAutoNotify; // 0x18
		::System::Boolean TriggerImmediately; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F9EDA3F4AD586E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleTotalDamageFinishNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleTotalDamageFinishNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_METHOD_3_9F9EDA3F4AD586E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02CB9CAD9CFD4D64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleTotalDamageFinishNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleTotalDamageFinishNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_METHOD_3_02CB9CAD9CFD4D64_OFFSET))(a1, a2);
		}
	};
}
