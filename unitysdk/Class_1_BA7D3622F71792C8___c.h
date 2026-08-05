#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_BA7D3622F71792C8___C_METHOD_1_A69B343AACEF858F_OFFSET UNITYSDK_OFFSET(0x137DB420)
#define CLASS_1_BA7D3622F71792C8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x137DB3D0)
#define CLASS_1_BA7D3622F71792C8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x137DB410)

inline static constexpr unsigned int Class_1_BA7D3622F71792C8___c_TypeDefinitionIndex = 50726;

class Class_1_BA7D3622F71792C8___c : public ::System::Object
{
public:
	static ::Class_1_BA7D3622F71792C8___c** StaticGet___9()
	{
		return (::Class_1_BA7D3622F71792C8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BA7D3622F71792C8___c_TypeDefinitionIndex)->GetStaticField(0x31530);
	}
	static ::System::Comparison_1<::System::UInt64>** StaticGet___9__31_0()
	{
		return (::System::Comparison_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BA7D3622F71792C8___c_TypeDefinitionIndex)->GetStaticField(0x31538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BA7D3622F71792C8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA7D3622F71792C8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A69B343AACEF858F(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BA7D3622F71792C8___C_METHOD_1_A69B343AACEF858F_OFFSET))(this, a1, a2);
	}
};
