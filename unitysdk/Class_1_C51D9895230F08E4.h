#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_830;
class Class_1_91114DA5C6FB0192;
class Class_2_6FA6B85E6CAB5D02;
class Class_3_01B4CC30216C9ABE_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C51D9895230F08E4_METHOD_1_04309940D97A325F_OFFSET UNITYSDK_OFFSET(0x1C3E6E60)
#define CLASS_1_C51D9895230F08E4_METHOD_1_314386A59E248091_OFFSET UNITYSDK_OFFSET(0x1C3E6C80)
#define CLASS_1_C51D9895230F08E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E6BF0)

inline static constexpr unsigned int Class_1_C51D9895230F08E4_TypeDefinitionIndex = 88114;

class Class_1_C51D9895230F08E4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_830*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C51D9895230F08E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_314386A59E248091(::Class_3_01B4CC30216C9ABE_1* a1, ::Class_1_91114DA5C6FB0192* a2, ::Class_2_6FA6B85E6CAB5D02* a3, ::Class_3_01B4CC30216C9ABE_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_01B4CC30216C9ABE_1*, ::Class_1_91114DA5C6FB0192*, ::Class_2_6FA6B85E6CAB5D02*, ::Class_3_01B4CC30216C9ABE_1*))((::PBYTE)hIl2Cpp + CLASS_1_C51D9895230F08E4_METHOD_1_314386A59E248091_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_04309940D97A325F(::Class_0_16E4307DCC419505_830* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_830*))((::PBYTE)hIl2Cpp + CLASS_1_C51D9895230F08E4_METHOD_1_04309940D97A325F_OFFSET))(this, a1);
	}
};
