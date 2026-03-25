#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_877;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DB2D61E7A20DFB38_1_GET_STEPS_OFFSET UNITYSDK_OFFSET(0x10BAC270)
#define CLASS_1_DB2D61E7A20DFB38_1_SET_STEPS_OFFSET UNITYSDK_OFFSET(0x10BAC280)
#define CLASS_1_DB2D61E7A20DFB38_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAC290)

inline static constexpr unsigned int Class_1_DB2D61E7A20DFB38_1_TypeDefinitionIndex = 59309;

class Class_1_DB2D61E7A20DFB38_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_877*>* _Steps_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_877*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_877*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_1__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_877*>* get_Steps()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_877*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_1_GET_STEPS_OFFSET))(this);
	}

	::System::Void set_Steps(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_877*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_877*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_1_SET_STEPS_OFFSET))(this, value);
	}
};
