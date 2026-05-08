#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_062BFB08AAE2E5CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB0780)

inline static constexpr unsigned int Class_2_062BFB08AAE2E5CA_TypeDefinitionIndex = 83662;

class Class_2_062BFB08AAE2E5CA : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_062BFB08AAE2E5CA__CTOR_OFFSET))(this);
	}
};
