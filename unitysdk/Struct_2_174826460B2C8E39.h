#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32361ACFB28DADC0.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_174826460B2C8E39_METHOD_2_6D4F419B5F1705BF_1_OFFSET UNITYSDK_OFFSET(0x2DF41D0)
#define STRUCT_2_174826460B2C8E39_METHOD_2_6D4F419B5F1705BF_OFFSET UNITYSDK_OFFSET(0x2DF41C0)
#define STRUCT_2_174826460B2C8E39_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x2DF41E0)

inline static constexpr unsigned int Struct_2_174826460B2C8E39_TypeDefinitionIndex = 78151;

struct alignas(8) Struct_2_174826460B2C8E39
{
	::Struct_2_32361ACFB28DADC0 BHCMCMADHBF; // 0x10
	::System::Boolean IEHPOEMGPGF; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_32361ACFB28DADC0>* AIHKMDCDKMN; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_32361ACFB28DADC0>* CPCAAHPHEFI; // 0x28

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
