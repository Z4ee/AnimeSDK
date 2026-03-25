#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_D1A6E9473F023498_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x82870)
#define STRUCT_2_D1A6E9473F023498_METHOD_2_6B969755041FB9B8_1_OFFSET UNITYSDK_OFFSET(0x82860)
#define STRUCT_2_D1A6E9473F023498_METHOD_2_6B969755041FB9B8_OFFSET UNITYSDK_OFFSET(0x82850)

inline static constexpr unsigned int Struct_2_D1A6E9473F023498_TypeDefinitionIndex = 64071;

struct alignas(8) Struct_2_D1A6E9473F023498
{
	::Struct_2_2F8FC043285F98CD Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_2F8FC043285F98CD>* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_2F8FC043285F98CD>* Field_2_3; // 0x28

	::System::Boolean Method_2_6B969755041FB9B8(::Struct_2_2F8FC043285F98CD a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F8FC043285F98CD))((::PBYTE)hIl2Cpp + STRUCT_2_D1A6E9473F023498_METHOD_2_6B969755041FB9B8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6B969755041FB9B8_1(::Struct_2_2F8FC043285F98CD a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F8FC043285F98CD))((::PBYTE)hIl2Cpp + STRUCT_2_D1A6E9473F023498_METHOD_2_6B969755041FB9B8_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D1A6E9473F023498_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
