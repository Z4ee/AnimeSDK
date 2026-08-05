#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4B3401D95328DA92_CLASS_1_E66E395270A1D67A_METHOD_1_DD5273C867903AD0_OFFSET UNITYSDK_OFFSET(0x1679B2F0)
#define CLASS_2_4B3401D95328DA92_CLASS_1_E66E395270A1D67A__CTOR_OFFSET UNITYSDK_OFFSET(0x1679B2E0)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Class_1_E66E395270A1D67A_TypeDefinitionIndex = 68331;

class Class_2_4B3401D95328DA92_Class_1_E66E395270A1D67A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_E66E395270A1D67A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DD5273C867903AD0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_E66E395270A1D67A_METHOD_1_DD5273C867903AD0_OFFSET))(this, a1);
	}
};
