#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_1DAC1F9F4B999C38___C_METHOD_1_A69B343AACEF858F_OFFSET UNITYSDK_OFFSET(0xF4FA560)
#define CLASS_1_1DAC1F9F4B999C38___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF4FA510)
#define CLASS_1_1DAC1F9F4B999C38___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF4FA550)

inline static constexpr unsigned int Class_1_1DAC1F9F4B999C38___c_TypeDefinitionIndex = 74198;

class Class_1_1DAC1F9F4B999C38___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::UInt64>** StaticGet___9__28_0()
	{
		return (::System::Comparison_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DAC1F9F4B999C38___c_TypeDefinitionIndex)->GetStaticField(0x40D20);
	}
	static ::Class_1_1DAC1F9F4B999C38___c** StaticGet___9()
	{
		return (::Class_1_1DAC1F9F4B999C38___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DAC1F9F4B999C38___c_TypeDefinitionIndex)->GetStaticField(0x40D28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A69B343AACEF858F(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_1DAC1F9F4B999C38___C_METHOD_1_A69B343AACEF858F_OFFSET))(this, a1, a2);
	}
};
