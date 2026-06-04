#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_METHOD_3_02CB9CAD9CFD4D64_OFFSET UNITYSDK_OFFSET(0x19DEB2E0)
#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_METHOD_3_21D8B96B204DF8F5_OFFSET UNITYSDK_OFFSET(0x19DEB260)
#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEB2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleTotalDamageFinishNotify_TypeDefinitionIndex = 21959;

	class ToggleTotalDamageFinishNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DisableAutoNotify; // 0x18
		::System::Boolean TriggerImmediately; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21D8B96B204DF8F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleTotalDamageFinishNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleTotalDamageFinishNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_METHOD_3_21D8B96B204DF8F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02CB9CAD9CFD4D64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleTotalDamageFinishNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleTotalDamageFinishNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_METHOD_3_02CB9CAD9CFD4D64_OFFSET))(a1, a2);
		}
	};
}
