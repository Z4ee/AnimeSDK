#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_84AF36216A2A3C44_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18D22540)
#define CLASS_1_84AF36216A2A3C44_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x18D23320)
#define CLASS_1_84AF36216A2A3C44__CTOR_OFFSET UNITYSDK_OFFSET(0x18D224E0)

inline static constexpr unsigned int Class_1_84AF36216A2A3C44_TypeDefinitionIndex = 39416;

class Class_1_84AF36216A2A3C44 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::Class_3_7E25C9E6907AC48F* Field_1_1; // 0x10
	::Class_1_D33B7D6901AE39E9* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* Field_1_3; // 0x20

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_84AF36216A2A3C44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84AF36216A2A3C44_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84AF36216A2A3C44_METHOD_1_DD784213055292FB_OFFSET))(this);
	}
};
