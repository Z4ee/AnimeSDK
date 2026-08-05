#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_2D1A85EC3B1D6976___C_METHOD_1_A69B343AACEF858F_OFFSET UNITYSDK_OFFSET(0x15BB04F0)
#define CLASS_1_2D1A85EC3B1D6976___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BB04A0)
#define CLASS_1_2D1A85EC3B1D6976___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB04E0)

inline static constexpr unsigned int Class_1_2D1A85EC3B1D6976___c_TypeDefinitionIndex = 42550;

class Class_1_2D1A85EC3B1D6976___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::UInt64>** StaticGet___9__28_0()
	{
		return (::System::Comparison_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D1A85EC3B1D6976___c_TypeDefinitionIndex)->GetStaticField(0x34BA0);
	}
	static ::Class_1_2D1A85EC3B1D6976___c** StaticGet___9()
	{
		return (::Class_1_2D1A85EC3B1D6976___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D1A85EC3B1D6976___c_TypeDefinitionIndex)->GetStaticField(0x34BA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D1A85EC3B1D6976___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D1A85EC3B1D6976___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A69B343AACEF858F(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_2D1A85EC3B1D6976___C_METHOD_1_A69B343AACEF858F_OFFSET))(this, a1, a2);
	}
};
