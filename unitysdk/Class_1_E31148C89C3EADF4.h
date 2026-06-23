#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_09CC5D2676B783CA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E31148C89C3EADF4_METHOD_1_49EA499B34A9AB4C_OFFSET UNITYSDK_OFFSET(0x13D21DF0)
#define CLASS_1_E31148C89C3EADF4_METHOD_1_5D0387964FCFFB35_OFFSET UNITYSDK_OFFSET(0x13D21D60)
#define CLASS_1_E31148C89C3EADF4_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13D22200)
#define CLASS_1_E31148C89C3EADF4_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13D21D00)
#define CLASS_1_E31148C89C3EADF4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D21CC0)
#define CLASS_1_E31148C89C3EADF4_METHOD_1_D289CDBDF3174E89_OFFSET UNITYSDK_OFFSET(0x13D21FF0)
#define CLASS_1_E31148C89C3EADF4__CTOR_OFFSET UNITYSDK_OFFSET(0x13D21D50)

inline static constexpr unsigned int Class_1_E31148C89C3EADF4_TypeDefinitionIndex = 70133;

class Class_1_E31148C89C3EADF4 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31148C89C3EADF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31148C89C3EADF4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31148C89C3EADF4_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Int32 Method_1_5D0387964FCFFB35(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E31148C89C3EADF4_METHOD_1_5D0387964FCFFB35_OFFSET))(this, a1);
	}

	::System::Void Method_1_49EA499B34A9AB4C(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E31148C89C3EADF4_METHOD_1_49EA499B34A9AB4C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D289CDBDF3174E89(::Class_3_09CC5D2676B783CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_09CC5D2676B783CA*))((::PBYTE)hIl2Cpp + CLASS_1_E31148C89C3EADF4_METHOD_1_D289CDBDF3174E89_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E31148C89C3EADF4_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
