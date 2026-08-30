#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_31FF0D5A926BE076_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A601B10)
#define CLASS_1_31FF0D5A926BE076__CTOR_OFFSET UNITYSDK_OFFSET(0x1A601B70)

inline static constexpr unsigned int Class_1_31FF0D5A926BE076_TypeDefinitionIndex = 40499;

class Class_1_31FF0D5A926BE076 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* HNGCINHIGJD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31FF0D5A926BE076__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31FF0D5A926BE076_CLEAR_OFFSET))(this);
	}
};
