#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_2_945315E4BCB7843F_CLASS_1_8C49929084A0092F_METHOD_1_A7FD041C3B0AC101_OFFSET UNITYSDK_OFFSET(0x1413F4F0)
#define CLASS_2_945315E4BCB7843F_CLASS_1_8C49929084A0092F_METHOD_1_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0x1413F4E0)
#define CLASS_2_945315E4BCB7843F_CLASS_1_8C49929084A0092F__CTOR_OFFSET UNITYSDK_OFFSET(0x1413F4D0)

inline static constexpr unsigned int Class_2_945315E4BCB7843F_Class_1_8C49929084A0092F_TypeDefinitionIndex = 59897;

class Class_2_945315E4BCB7843F_Class_1_8C49929084A0092F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::Class_1_516A565475879095<::System::UInt32, ::System::UInt32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_8C49929084A0092F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_8C49929084A0092F_METHOD_1_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7FD041C3B0AC101(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_8C49929084A0092F_METHOD_1_A7FD041C3B0AC101_OFFSET))(this, a1);
	}
};
