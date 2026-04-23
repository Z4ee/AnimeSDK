#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DB2D61E7A20DFB38_METHOD_1_4D7FC15E501C5206_OFFSET UNITYSDK_OFFSET(0x9A892B0)
#define CLASS_1_DB2D61E7A20DFB38_METHOD_1_7DD6F879FF07BDE1_OFFSET UNITYSDK_OFFSET(0x9A89230)
#define CLASS_1_DB2D61E7A20DFB38__CTOR_OFFSET UNITYSDK_OFFSET(0x9A892A0)

inline static constexpr unsigned int Class_1_DB2D61E7A20DFB38_TypeDefinitionIndex = 60750;

class Class_1_DB2D61E7A20DFB38 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_758*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_758*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_758*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_DB2D61E7A20DFB38* Method_1_7DD6F879FF07BDE1(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_758*>* a1)
	{
		return ((::Class_1_DB2D61E7A20DFB38*(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_758*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_METHOD_1_7DD6F879FF07BDE1_OFFSET))(a1);
	}

	::System::Boolean Method_1_4D7FC15E501C5206()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_METHOD_1_4D7FC15E501C5206_OFFSET))(this);
	}
};
