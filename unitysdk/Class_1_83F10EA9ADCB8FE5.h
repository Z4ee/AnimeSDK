#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1D7B82CFD3ED1219;
class Class_2_2DE342D55868E1FE;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_83F10EA9ADCB8FE5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18AAE090)
#define CLASS_1_83F10EA9ADCB8FE5__CTOR_OFFSET UNITYSDK_OFFSET(0x18AADFB0)

inline static constexpr unsigned int Class_1_83F10EA9ADCB8FE5_TypeDefinitionIndex = 34847;

class Class_1_83F10EA9ADCB8FE5 : public ::System::Object
{
public:
	::Class_2_2DE342D55868E1FE* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_2_1D7B82CFD3ED1219*>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor(::Class_2_2DE342D55868E1FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2DE342D55868E1FE*))((::PBYTE)hIl2Cpp + CLASS_1_83F10EA9ADCB8FE5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83F10EA9ADCB8FE5_EXECUTE_OFFSET))(this);
	}
};
