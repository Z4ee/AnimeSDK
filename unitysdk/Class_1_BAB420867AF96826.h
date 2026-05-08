#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9305AC8F57DDC7FC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BAB420867AF96826_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x11942390)
#define CLASS_1_BAB420867AF96826__CTOR_OFFSET UNITYSDK_OFFSET(0x11942310)

inline static constexpr unsigned int Class_1_BAB420867AF96826_TypeDefinitionIndex = 64547;

class Class_1_BAB420867AF96826 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9305AC8F57DDC7FC*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAB420867AF96826__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAB420867AF96826_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}
};
