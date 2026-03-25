#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2DE342D55868E1FE;
class Class_2_6313984181A582D7;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_83F10EA9ADCB8FE5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x166582B0)
#define CLASS_1_83F10EA9ADCB8FE5__CTOR_OFFSET UNITYSDK_OFFSET(0x166581D0)

inline static constexpr unsigned int Class_1_83F10EA9ADCB8FE5_TypeDefinitionIndex = 28830;

class Class_1_83F10EA9ADCB8FE5 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_6313984181A582D7*>* Field_1_3; // 0x10
	::Class_2_2DE342D55868E1FE* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_1; // 0x24

	::System::Void _ctor(::Class_2_2DE342D55868E1FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2DE342D55868E1FE*))((::PBYTE)hIl2Cpp + CLASS_1_83F10EA9ADCB8FE5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83F10EA9ADCB8FE5_EXECUTE_OFFSET))(this);
	}
};
