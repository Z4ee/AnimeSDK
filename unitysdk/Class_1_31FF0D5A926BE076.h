#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_31FF0D5A926BE076_METHOD_1_9D1FB11C5C24E13D_OFFSET UNITYSDK_OFFSET(0xE04CBB0)
#define CLASS_1_31FF0D5A926BE076_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE04CB90)
#define CLASS_1_31FF0D5A926BE076__CTOR_OFFSET UNITYSDK_OFFSET(0xE04CB30)

inline static constexpr unsigned int Class_1_31FF0D5A926BE076_TypeDefinitionIndex = 39865;

class Class_1_31FF0D5A926BE076 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31FF0D5A926BE076__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31FF0D5A926BE076_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_9D1FB11C5C24E13D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31FF0D5A926BE076_METHOD_1_9D1FB11C5C24E13D_OFFSET))(this);
	}
};
