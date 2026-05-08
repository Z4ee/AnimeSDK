#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_393067F66831E081_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0xB4FC5E0)
#define CLASS_1_393067F66831E081_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB4FC630)
#define CLASS_1_393067F66831E081_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xB4FC750)
#define CLASS_1_393067F66831E081__CTOR_OFFSET UNITYSDK_OFFSET(0xB4FC520)

inline static constexpr unsigned int Class_1_393067F66831E081_TypeDefinitionIndex = 45865;

class Class_1_393067F66831E081 : public ::System::Object
{
public:
	static ::Class_1_393067F66831E081** StaticGet_Field_1_6()
	{
		return (::Class_1_393067F66831E081**)Il2CppClass::FromTypeDefinitionIndex(Class_1_393067F66831E081_TypeDefinitionIndex)->GetStaticField(0x3ADC0);
	}
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt64, ::Share::EItemType>, ::System::Int32>* Field_1_4; // 0x10
	::System::Object* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_5; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_393067F66831E081__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_393067F66831E081* a1)
	{
		return ((::System::Void(*)(::Class_1_393067F66831E081*))((::PBYTE)hIl2Cpp + CLASS_1_393067F66831E081_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_393067F66831E081_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::Class_1_393067F66831E081* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_393067F66831E081*(*)())((::PBYTE)hIl2Cpp + CLASS_1_393067F66831E081_METHOD_1_528BD4865C714C5C_OFFSET))();
	}
};
