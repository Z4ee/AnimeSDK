#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_F928E4D53E0661A6___C_METHOD_1_A37026F5FDBACF68_OFFSET UNITYSDK_OFFSET(0x17EA0FE0)
#define CLASS_2_F928E4D53E0661A6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EA0F90)
#define CLASS_2_F928E4D53E0661A6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA0FD0)

inline static constexpr unsigned int Class_2_F928E4D53E0661A6___c_TypeDefinitionIndex = 74546;

class Class_2_F928E4D53E0661A6___c : public ::System::Object
{
public:
	static ::Class_2_F928E4D53E0661A6___c** StaticGet___9()
	{
		return (::Class_2_F928E4D53E0661A6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F928E4D53E0661A6___c_TypeDefinitionIndex)->GetStaticField(0x3EDE0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F928E4D53E0661A6___c_TypeDefinitionIndex)->GetStaticField(0x3EDE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F928E4D53E0661A6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F928E4D53E0661A6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A37026F5FDBACF68(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F928E4D53E0661A6___C_METHOD_1_A37026F5FDBACF68_OFFSET))(this, a1, a2);
	}
};
