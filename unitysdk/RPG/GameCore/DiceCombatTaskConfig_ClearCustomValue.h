#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_05F4E9773E3F0FCB_OFFSET UNITYSDK_OFFSET(0x17170740)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_4F672748709D1DAD_OFFSET UNITYSDK_OFFSET(0x1716C460)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1716C410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ClearCustomValue_TypeDefinitionIndex = 14757;

	class DiceCombatTaskConfig_ClearCustomValue : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05F4E9773E3F0FCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_05F4E9773E3F0FCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4F672748709D1DAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_4F672748709D1DAD_OFFSET))(a1, a2);
		}
	};
}
