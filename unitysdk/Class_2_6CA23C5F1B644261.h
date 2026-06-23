#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/Struct_2_AC7338C796E27967.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6CA23C5F1B644261_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x15845C70)
#define CLASS_2_6CA23C5F1B644261_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x15845AF0)
#define CLASS_2_6CA23C5F1B644261__CTOR_OFFSET UNITYSDK_OFFSET(0x15845BB0)

inline static constexpr unsigned int Class_2_6CA23C5F1B644261_TypeDefinitionIndex = 41286;

class Class_2_6CA23C5F1B644261 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::List_1<::Struct_2_AC7338C796E27967>* Field_2_2; // 0x80
	::System::Single Field_2_1; // 0x88
	::System::Single Field_2_0; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CA23C5F1B644261__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CA23C5F1B644261_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CA23C5F1B644261_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
