#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1032;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DB2D61E7A20DFB38_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE403F0)
#define CLASS_1_DB2D61E7A20DFB38_2_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xDE40790)
#define CLASS_1_DB2D61E7A20DFB38_2_METHOD_1_3EE388428E110DEC_OFFSET UNITYSDK_OFFSET(0xDE40510)
#define CLASS_1_DB2D61E7A20DFB38_2_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xDE40460)
#define CLASS_1_DB2D61E7A20DFB38_2_METHOD_1_BCEEAF7D62186A24_OFFSET UNITYSDK_OFFSET(0xDE405A0)
#define CLASS_1_DB2D61E7A20DFB38_2_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xDE407A0)
#define CLASS_1_DB2D61E7A20DFB38_2__CTOR_OFFSET UNITYSDK_OFFSET(0xDE407B0)

inline static constexpr unsigned int Class_1_DB2D61E7A20DFB38_2_TypeDefinitionIndex = 67471;

class Class_1_DB2D61E7A20DFB38_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1032*>* _Items_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_1032* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1032*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_2_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3EE388428E110DEC(::Class_0_16E4307DCC419505_1032* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1032*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_2_METHOD_1_3EE388428E110DEC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BCEEAF7D62186A24()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_2_METHOD_1_BCEEAF7D62186A24_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1032*>* get_Items()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1032*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_2_GET_ITEMS_OFFSET))(this);
	}

	::System::Void set_Items(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1032*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1032*>*))((::PBYTE)hIl2Cpp + CLASS_1_DB2D61E7A20DFB38_2_SET_ITEMS_OFFSET))(this, a1);
	}
};
