#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAbilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_METHOD_3_35E9E444541C4974_OFFSET UNITYSDK_OFFSET(0x1E0139A0)
#define RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_METHOD_3_D3445AFCF4B46B4D_OFFSET UNITYSDK_OFFSET(0x1E015040)
#define RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E013990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesItemAbilityConfig_TypeDefinitionIndex = 18231;

	class ChenLingFesItemAbilityConfig : public ::RPG::GameCore::ChenLingFesAbilityConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoopTrigger; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDayStart; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDayEnd; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMoveItem; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPutdownItem; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterItem; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnJumpTrigger; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLeaveItem; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterFever; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitFever; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D3445AFCF4B46B4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesItemAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesItemAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_METHOD_3_D3445AFCF4B46B4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35E9E444541C4974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesItemAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesItemAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMABILITYCONFIG_METHOD_3_35E9E444541C4974_OFFSET))(a1, a2);
		}
	};
}
