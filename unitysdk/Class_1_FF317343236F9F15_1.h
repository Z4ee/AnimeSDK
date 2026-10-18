#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_114;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_FF317343236F9F15_1_METHOD_1_300FA190EAA92566_OFFSET UNITYSDK_OFFSET(0xBFBE930)
#define CLASS_1_FF317343236F9F15_1_METHOD_1_F1BD4E00D07E522D_OFFSET UNITYSDK_OFFSET(0xBFBE9D0)
#define CLASS_1_FF317343236F9F15_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBFBEA90)

inline static constexpr unsigned int Class_1_FF317343236F9F15_1_TypeDefinitionIndex = 80109;

class Class_1_FF317343236F9F15_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF317343236F9F15_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_300FA190EAA92566()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF317343236F9F15_1_METHOD_1_300FA190EAA92566_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_114* Method_1_F1BD4E00D07E522D(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_114*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF317343236F9F15_1_METHOD_1_F1BD4E00D07E522D_OFFSET))(this, a1);
	}
};
