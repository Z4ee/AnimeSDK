#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1364;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_590E456C5F748D1A_METHOD_1_0F29DB2C983A3B9B_OFFSET UNITYSDK_OFFSET(0xB2ED550)
#define CLASS_1_590E456C5F748D1A_METHOD_1_4EB24CB07ADB4533_OFFSET UNITYSDK_OFFSET(0xB2ED8E0)
#define CLASS_1_590E456C5F748D1A_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0xB2ED610)
#define CLASS_1_590E456C5F748D1A__CTOR_OFFSET UNITYSDK_OFFSET(0xB2ED9D0)

inline static constexpr unsigned int Class_1_590E456C5F748D1A_TypeDefinitionIndex = 74993;

class Class_1_590E456C5F748D1A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1364*>* LJFGOENLCKD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_590E456C5F748D1A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1364* Method_1_0F29DB2C983A3B9B(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_1364*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_590E456C5F748D1A_METHOD_1_0F29DB2C983A3B9B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1364*>* Method_1_4EB24CB07ADB4533()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1364*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_590E456C5F748D1A_METHOD_1_4EB24CB07ADB4533_OFFSET))(this);
	}

	::System::Void Method_1_87BD4DF5EA15A3A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_590E456C5F748D1A_METHOD_1_87BD4DF5EA15A3A8_OFFSET))(this);
	}
};
