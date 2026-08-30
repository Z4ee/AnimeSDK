#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE96309E1BBEC794;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DD584E66F5D339D3_2_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0xB70A170)
#define CLASS_1_DD584E66F5D339D3_2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB70A130)
#define CLASS_1_DD584E66F5D339D3_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB709F10)

inline static constexpr unsigned int Class_1_DD584E66F5D339D3_2_TypeDefinitionIndex = 63418;

class Class_1_DD584E66F5D339D3_2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CE96309E1BBEC794*>* DPHNABJHCFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD584E66F5D339D3_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD584E66F5D339D3_2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_CE96309E1BBEC794* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_CE96309E1BBEC794*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD584E66F5D339D3_2_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}
};
