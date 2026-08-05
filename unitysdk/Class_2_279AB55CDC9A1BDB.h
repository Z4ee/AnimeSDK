#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_163;

#define CLASS_2_279AB55CDC9A1BDB_METHOD_2_B991AA5072E9A99A_OFFSET UNITYSDK_OFFSET(0x14C5F7E0)
#define CLASS_2_279AB55CDC9A1BDB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14C5F640)
#define CLASS_2_279AB55CDC9A1BDB__CTOR_OFFSET UNITYSDK_OFFSET(0x14C5F7D0)

inline static constexpr unsigned int Class_2_279AB55CDC9A1BDB_TypeDefinitionIndex = 64029;

class Class_2_279AB55CDC9A1BDB : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_163<::System::Boolean>* Field_2_0; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_1; // 0x88
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_3; // 0x90
	::System::Action_1<::System::Int32>* Field_2_2; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279AB55CDC9A1BDB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279AB55CDC9A1BDB_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean Method_2_B991AA5072E9A99A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_279AB55CDC9A1BDB_METHOD_2_B991AA5072E9A99A_OFFSET))(this);
	}
};
