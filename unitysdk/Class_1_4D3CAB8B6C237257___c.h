#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4D3CAB8B6C237257___C_METHOD_1_CF25A8E334D2A4E0_OFFSET UNITYSDK_OFFSET(0x132862F0)
#define CLASS_1_4D3CAB8B6C237257___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x132862A0)
#define CLASS_1_4D3CAB8B6C237257___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132862E0)

inline static constexpr unsigned int Class_1_4D3CAB8B6C237257___c_TypeDefinitionIndex = 87029;

class Class_1_4D3CAB8B6C237257___c : public ::System::Object
{
public:
	static ::Class_1_4D3CAB8B6C237257___c** StaticGet___9()
	{
		return (::Class_1_4D3CAB8B6C237257___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D3CAB8B6C237257___c_TypeDefinitionIndex)->GetStaticField(0x3E890);
	}
	static ::System::Comparison_1<::Struct_2_ABC67D4EFBF3BD9A_2>** StaticGet___9__67_0()
	{
		return (::System::Comparison_1<::Struct_2_ABC67D4EFBF3BD9A_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D3CAB8B6C237257___c_TypeDefinitionIndex)->GetStaticField(0x3E898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CF25A8E334D2A4E0(::Struct_2_ABC67D4EFBF3BD9A_2 a1, ::Struct_2_ABC67D4EFBF3BD9A_2 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_ABC67D4EFBF3BD9A_2, ::Struct_2_ABC67D4EFBF3BD9A_2))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257___C_METHOD_1_CF25A8E334D2A4E0_OFFSET))(this, a1, a2);
	}
};
