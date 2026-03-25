#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE96309E1BBEC794;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_7E97FE7B356A7427_OFFSET UNITYSDK_OFFSET(0xA1F2290)
#define CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA1F2250)
#define CLASS_1_F3EB7D0860A6C71F_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F2070)

inline static constexpr unsigned int Class_1_F3EB7D0860A6C71F_3_TypeDefinitionIndex = 51426;

class Class_1_F3EB7D0860A6C71F_3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CE96309E1BBEC794*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_CE96309E1BBEC794* Method_1_7E97FE7B356A7427(::System::UInt32 a1)
	{
		return ((::Class_1_CE96309E1BBEC794*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_7E97FE7B356A7427_OFFSET))(this, a1);
	}
};
