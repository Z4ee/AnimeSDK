#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_85F04A82B3DCEB31_METHOD_2_39D556581A246D56_OFFSET UNITYSDK_OFFSET(0x18D39D30)
#define CLASS_2_85F04A82B3DCEB31_METHOD_2_762A9412773049BE_OFFSET UNITYSDK_OFFSET(0x18D4A170)
#define CLASS_2_85F04A82B3DCEB31_METHOD_2_B96F1E8A3443563C_OFFSET UNITYSDK_OFFSET(0x18D3A070)
#define CLASS_2_85F04A82B3DCEB31__CTOR_OFFSET UNITYSDK_OFFSET(0x18D39AC0)

inline static constexpr unsigned int Class_2_85F04A82B3DCEB31_TypeDefinitionIndex = 34789;

class Class_2_85F04A82B3DCEB31 : public ::Class_1_B55037134F9E6688
{
public:
	::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B55037134F9E6688*>* Field_2_1; // 0x20

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_39D556581A246D56()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31_METHOD_2_39D556581A246D56_OFFSET))(this);
	}

	::System::Void Method_2_762A9412773049BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31_METHOD_2_762A9412773049BE_OFFSET))(this);
	}

	::System::Void Method_2_B96F1E8A3443563C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_85F04A82B3DCEB31_METHOD_2_B96F1E8A3443563C_OFFSET))(this, a1);
	}
};
