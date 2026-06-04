#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21F7296E79A49D3E;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_E5089DBCFA972BFF___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xACFD1E0)
#define CLASS_1_E5089DBCFA972BFF___C__DISPLAYCLASS8_0__UNREGISTEREVENTS_B__0_OFFSET UNITYSDK_OFFSET(0xACFD450)

inline static constexpr unsigned int Class_1_E5089DBCFA972BFF___c__DisplayClass8_0_TypeDefinitionIndex = 72559;

class Class_1_E5089DBCFA972BFF___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_1_21F7296E79A49D3E*>* __9__0; // 0x10
	::System::Object* owner; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UnregisterEvents_b__0(::Class_1_21F7296E79A49D3E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21F7296E79A49D3E*))((::PBYTE)hIl2Cpp + CLASS_1_E5089DBCFA972BFF___C__DISPLAYCLASS8_0__UNREGISTEREVENTS_B__0_OFFSET))(this, a1);
	}
};
