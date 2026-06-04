#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B0615ADCECBB24D2_COMPARETO_OFFSET UNITYSDK_OFFSET(0xAB194B0)
#define CLASS_1_B0615ADCECBB24D2__CTOR_OFFSET UNITYSDK_OFFSET(0xAB19520)

inline static constexpr unsigned int Class_1_B0615ADCECBB24D2_TypeDefinitionIndex = 59434;

class Class_1_B0615ADCECBB24D2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0615ADCECBB24D2__CTOR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_B0615ADCECBB24D2* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_B0615ADCECBB24D2*))((::PBYTE)hIl2Cpp + CLASS_1_B0615ADCECBB24D2_COMPARETO_OFFSET))(this, a1);
	}
};
