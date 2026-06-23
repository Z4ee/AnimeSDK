#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_29F1B20C4E0B9E4F_2_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x1860AC80)
#define CLASS_2_29F1B20C4E0B9E4F_2_METHOD_2_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x1860AA90)
#define CLASS_2_29F1B20C4E0B9E4F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1860AB90)

inline static constexpr unsigned int Class_2_29F1B20C4E0B9E4F_2_TypeDefinitionIndex = 64890;

class Class_2_29F1B20C4E0B9E4F_2 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29F1B20C4E0B9E4F_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29F1B20C4E0B9E4F_2_METHOD_2_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29F1B20C4E0B9E4F_2_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
