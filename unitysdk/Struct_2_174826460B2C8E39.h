#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32361ACFB28DADC0.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_174826460B2C8E39_METHOD_2_6D4F419B5F1705BF_1_OFFSET UNITYSDK_OFFSET(0x38FA4F0)
#define STRUCT_2_174826460B2C8E39_METHOD_2_6D4F419B5F1705BF_OFFSET UNITYSDK_OFFSET(0x38FA4E0)
#define STRUCT_2_174826460B2C8E39_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x38FA500)

inline static constexpr unsigned int Struct_2_174826460B2C8E39_TypeDefinitionIndex = 74665;

struct alignas(8) Struct_2_174826460B2C8E39
{
	::Struct_2_32361ACFB28DADC0 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_32361ACFB28DADC0>* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_32361ACFB28DADC0>* Field_2_3; // 0x28

	::System::Boolean Method_2_6D4F419B5F1705BF(::Struct_2_32361ACFB28DADC0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_32361ACFB28DADC0))((::PBYTE)hIl2Cpp + STRUCT_2_174826460B2C8E39_METHOD_2_6D4F419B5F1705BF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D4F419B5F1705BF_1(::Struct_2_32361ACFB28DADC0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_32361ACFB28DADC0))((::PBYTE)hIl2Cpp + STRUCT_2_174826460B2C8E39_METHOD_2_6D4F419B5F1705BF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_174826460B2C8E39_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
