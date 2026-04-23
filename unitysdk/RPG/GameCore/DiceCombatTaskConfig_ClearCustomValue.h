#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_B46391B8175E6BBA_OFFSET UNITYSDK_OFFSET(0x1887C040)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_C0AFC7B146B5F61B_OFFSET UNITYSDK_OFFSET(0x18876560)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18876510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ClearCustomValue_TypeDefinitionIndex = 15233;

	class DiceCombatTaskConfig_ClearCustomValue : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B46391B8175E6BBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_B46391B8175E6BBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0AFC7B146B5F61B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_C0AFC7B146B5F61B_OFFSET))(a1, a2);
		}
	};
}
