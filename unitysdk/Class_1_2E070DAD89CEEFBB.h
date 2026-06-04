#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_160;
class Class_2_254035C1FAAB431D;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2E070DAD89CEEFBB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA7F8440)
#define CLASS_1_2E070DAD89CEEFBB_METHOD_1_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0xA7F8530)
#define CLASS_1_2E070DAD89CEEFBB_METHOD_1_E4EC369A340C0A3C_OFFSET UNITYSDK_OFFSET(0xA7F84D0)
#define CLASS_1_2E070DAD89CEEFBB__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F8370)

inline static constexpr unsigned int Class_1_2E070DAD89CEEFBB_TypeDefinitionIndex = 74155;

class Class_1_2E070DAD89CEEFBB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::Class_2_254035C1FAAB431D* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_254035C1FAAB431D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_254035C1FAAB431D*))((::PBYTE)hIl2Cpp + CLASS_1_2E070DAD89CEEFBB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E070DAD89CEEFBB_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_E4EC369A340C0A3C(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E070DAD89CEEFBB_METHOD_1_E4EC369A340C0A3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF0EF72A03B510AB(::Class_1_D17272E82AE804C2_160* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_160*))((::PBYTE)hIl2Cpp + CLASS_1_2E070DAD89CEEFBB_METHOD_1_CF0EF72A03B510AB_OFFSET))(this, a1);
	}
};
