#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1236;
class Class_2_E10154A6F87051D0;
namespace System { class Action; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CD925DCDD7147BC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18467890)
#define CLASS_1_CD925DCDD7147BC4_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x18467110)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x18467B30)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_2141629C305AE58B_OFFSET UNITYSDK_OFFSET(0x18467410)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x18467850)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x184671D0)
#define CLASS_1_CD925DCDD7147BC4_METHOD_1_A7654415815DFA30_OFFSET UNITYSDK_OFFSET(0x18467290)
#define CLASS_1_CD925DCDD7147BC4__CTOR_OFFSET UNITYSDK_OFFSET(0x18467120)

inline static constexpr unsigned int Class_1_CD925DCDD7147BC4_TypeDefinitionIndex = 73769;

class Class_1_CD925DCDD7147BC4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1236* Field_1_0; // 0x10
	::System::Type* Field_1_1; // 0x18
	::Class_2_E10154A6F87051D0* _GameContext_k__BackingField; // 0x20
	::System::Action* Field_1_3; // 0x28
	::System::Object* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_1236*>* Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x41

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

	::Class_0_16E4307DCC419505_1236* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_1236*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_1_0FA0973E87FBD363(::Class_0_16E4307DCC419505_1236* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1236*))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_1_2141629C305AE58B(::Class_0_16E4307DCC419505_1236* a1, ::System::Object* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1236*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4_METHOD_1_2141629C305AE58B_OFFSET))(this, a1, a2, a3);
	}
};
