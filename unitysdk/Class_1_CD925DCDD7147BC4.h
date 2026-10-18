#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1440;
class Class_2_E10154A6F87051D0;
namespace System { class Action; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CD925DCDD7147BC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD1090)
#define CLASS_1_CD925DCDD7147BC4_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xDCD0910)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0xDCD1330)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_2141629C305AE58B_OFFSET UNITYSDK_OFFSET(0xDCD0C10)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0xDCD1050)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xDCD09D0)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_A7654415815DFA30_OFFSET UNITYSDK_OFFSET(0xDCD0A90)
#define CLASS_1_CD925DCDD7147BC4__CTOR_OFFSET UNITYSDK_OFFSET(0xDCD0920)

inline static constexpr unsigned int Class_1_CD925DCDD7147BC4_TypeDefinitionIndex = 77724;

class Class_1_CD925DCDD7147BC4 : public ::System::Object
{
public:
	::System::Object* DPDKOIMJPCG; // 0x10
	::System::Type* ADGCMDEOPPA; // 0x18
	::System::Action* JNKOMBPOHAG; // 0x20
	::Class_2_E10154A6F87051D0* _GameContext_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_1440* GDHFEAKLHFJ; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_1440*>* PAHJPOGLALP; // 0x38
	::System::Boolean JMGIJJDOPGJ; // 0x40
	::System::Boolean AKBAIKCDEHP; // 0x41

	::System::Void _ctor(::Class_2_E10154A6F87051D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E10154A6F87051D0*))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4__CTOR_OFFSET))(this, a1);
	}

	::Class_2_E10154A6F87051D0* get_GameContext()
	{
		return ((::Class_2_E10154A6F87051D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_GET_GAMECONTEXT_OFFSET))(this);
	}

	::System::Void Method_1_A7654415815DFA30(::System::Type* a1, ::System::Object* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_A7654415815DFA30_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_1440* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_1440*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_1_0FA0973E87FBD363(::Class_0_16E4307DCC419505_1440* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1440*))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_1_2141629C305AE58B(::Class_0_16E4307DCC419505_1440* a1, ::System::Object* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1440*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_2141629C305AE58B_OFFSET))(this, a1, a2, a3);
	}
};
