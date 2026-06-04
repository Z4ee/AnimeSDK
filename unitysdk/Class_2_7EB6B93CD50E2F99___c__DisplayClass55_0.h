#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
class Class_2_B28AAD03E01DF611;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE4A0510)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0___SETUPMODIFIERHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xE4A1DF0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0___SETUPMODIFIERHINTS_B__2_OFFSET UNITYSDK_OFFSET(0xE4A1F40)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass55_0_TypeDefinitionIndex = 66666;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass55_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_52DF42E136544C98*>* displayData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupModifierHints_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0___SETUPMODIFIERHINTS_B__0_OFFSET))(this, a1);
	}

	::System::Void __SetupModifierHints_b__2(::Class_2_B28AAD03E01DF611* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B28AAD03E01DF611*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS55_0___SETUPMODIFIERHINTS_B__2_OFFSET))(this, a1, a2);
	}
};
