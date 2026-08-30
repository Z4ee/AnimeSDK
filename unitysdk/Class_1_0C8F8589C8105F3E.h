#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_16;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0C8F8589C8105F3E_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1B277500)
#define CLASS_1_0C8F8589C8105F3E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B277560)

inline static constexpr unsigned int Class_1_0C8F8589C8105F3E_TypeDefinitionIndex = 35775;

class Class_1_0C8F8589C8105F3E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_16*>* DHPACGHECNM; // 0x10
	::System::Single IEHPFADHJFD; // 0x18
	::System::Single IFEPJHGNCOI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C8F8589C8105F3E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C8F8589C8105F3E_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
