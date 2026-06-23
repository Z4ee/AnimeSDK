#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_A4501C46DB7049A7_METHOD_1_6100984B3BC988C7_OFFSET UNITYSDK_OFFSET(0x1587A820)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_A4501C46DB7049A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1587A810)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_A4501C46DB7049A7_TypeDefinitionIndex = 61827;

class Class_2_A7165A858F83C5DB_Class_1_A4501C46DB7049A7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_A4501C46DB7049A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6100984B3BC988C7(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_A4501C46DB7049A7_METHOD_1_6100984B3BC988C7_OFFSET))(this, a1);
	}
};
