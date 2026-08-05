#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A30A38FC1C190E3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D6E7E76075C6E2_5_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x15FCC490)
#define CLASS_1_B9D6E7E76075C6E2_5_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x15FCC840)
#define CLASS_1_B9D6E7E76075C6E2_5_METHOD_1_75351BABD20240A0_OFFSET UNITYSDK_OFFSET(0x15FCC680)
#define CLASS_1_B9D6E7E76075C6E2_5_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x15FCC4A0)
#define CLASS_1_B9D6E7E76075C6E2_5__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCC480)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_5_TypeDefinitionIndex = 84401;

class Class_1_B9D6E7E76075C6E2_5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0A30A38FC1C190E3*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_5__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_0A30A38FC1C190E3*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0A30A38FC1C190E3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_5_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_5_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_75351BABD20240A0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_5_METHOD_1_75351BABD20240A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_0A30A38FC1C190E3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0A30A38FC1C190E3*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_5_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}
};
