#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE_METHOD_4_03119D01ACEE7A79_OFFSET UNITYSDK_OFFSET(0x1D0331B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE_METHOD_4_ACC500152EF0A365_OFFSET UNITYSDK_OFFSET(0x1D030F40)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D030F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasCustomValue_TypeDefinitionIndex = 15895;

	class DiceCombatPredicateConfig_HasCustomValue : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget ReadTarget; // 0x20
		::System::String* Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_03119D01ACEE7A79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE_METHOD_4_03119D01ACEE7A79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ACC500152EF0A365(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE_METHOD_4_ACC500152EF0A365_OFFSET))(a1, a2);
		}
	};
}
