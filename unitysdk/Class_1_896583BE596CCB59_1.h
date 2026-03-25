#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_896583BE596CCB59_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BA07B0)
#define CLASS_1_896583BE596CCB59_1_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x8BA0AC0)
#define CLASS_1_896583BE596CCB59_1_METHOD_1_26C8C7762CE5A301_OFFSET UNITYSDK_OFFSET(0x8BA0930)
#define CLASS_1_896583BE596CCB59_1_METHOD_1_2A883DD032F22BF2_OFFSET UNITYSDK_OFFSET(0x8BA0830)
#define CLASS_1_896583BE596CCB59_1_METHOD_1_3EE388428E110DEC_OFFSET UNITYSDK_OFFSET(0x8BA08A0)
#define CLASS_1_896583BE596CCB59_1_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x8BA0AD0)
#define CLASS_1_896583BE596CCB59_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8BA0AE0)

inline static constexpr unsigned int Class_1_896583BE596CCB59_1_TypeDefinitionIndex = 59140;

class Class_1_896583BE596CCB59_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_866*>* _Items_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2A883DD032F22BF2(::Class_0_16E4307DCC419505_866* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_866*))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_METHOD_1_2A883DD032F22BF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3EE388428E110DEC(::Class_0_16E4307DCC419505_866* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_866*))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_METHOD_1_3EE388428E110DEC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_26C8C7762CE5A301()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_METHOD_1_26C8C7762CE5A301_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_866*>* get_Items()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_866*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_GET_ITEMS_OFFSET))(this);
	}

	::System::Void set_Items(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_866*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_866*>*))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_SET_ITEMS_OFFSET))(this, value);
	}
};
