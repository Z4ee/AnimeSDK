#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1086;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DB2D61E7A20DFB38_3_GET_STEPS_OFFSET UNITYSDK_OFFSET(0x18591510)
#define CLASS_1_DB2D61E7A20DFB38_3_SET_STEPS_OFFSET UNITYSDK_OFFSET(0x18591520)
#define CLASS_1_DB2D61E7A20DFB38_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18591530)

inline static constexpr unsigned int Class_1_DB2D61E7A20DFB38_3_TypeDefinitionIndex = 69128;

class Class_1_DB2D61E7A20DFB38_3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1086*>* _Steps_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1086*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1086*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_3__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1086*>* get_Steps()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1086*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_3_GET_STEPS_OFFSET))(this);
	}

	::System::Void set_Steps(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1086*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1086*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_3_SET_STEPS_OFFSET))(this, a1);
	}
};
