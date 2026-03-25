#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21F7296E79A49D3E;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x114EF420)
#define CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS8_0__UNREGISTEREVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x114EF690)

inline static constexpr unsigned int Class_1_9B96198DED39ABEB___c__DisplayClass8_0_TypeDefinitionIndex = 63497;

class Class_1_9B96198DED39ABEB___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_1_21F7296E79A49D3E*>* __9__0; // 0x10
	::System::Object* owner; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UnregisterEvents_b__0(::Class_1_21F7296E79A49D3E* wrapper)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21F7296E79A49D3E*))((::PBYTE)hIl2Cpp + CLASS_1_9B96198DED39ABEB___C__DISPLAYCLASS8_0__UNREGISTEREVENTS_B__0_OFFSET))(this, wrapper);
	}
};
