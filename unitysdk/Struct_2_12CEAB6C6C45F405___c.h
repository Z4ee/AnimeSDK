#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA093D24932D214F.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define STRUCT_2_12CEAB6C6C45F405___C_METHOD_1_1767BB8CA57A90CE_OFFSET UNITYSDK_OFFSET(0x113E30B0)
#define STRUCT_2_12CEAB6C6C45F405___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x113E3060)
#define STRUCT_2_12CEAB6C6C45F405___C__CTOR_OFFSET UNITYSDK_OFFSET(0x113E30A0)

inline static constexpr unsigned int Struct_2_12CEAB6C6C45F405___c_TypeDefinitionIndex = 55670;

class Struct_2_12CEAB6C6C45F405___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Struct_2_FA093D24932D214F>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Struct_2_FA093D24932D214F>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_12CEAB6C6C45F405___c_TypeDefinitionIndex)->GetStaticField(0x326A0);
	}
	static ::Struct_2_12CEAB6C6C45F405___c** StaticGet___9()
	{
		return (::Struct_2_12CEAB6C6C45F405___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_12CEAB6C6C45F405___c_TypeDefinitionIndex)->GetStaticField(0x326A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_1767BB8CA57A90CE(::Struct_2_FA093D24932D214F a1, ::Struct_2_FA093D24932D214F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_FA093D24932D214F, ::Struct_2_FA093D24932D214F))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405___C_METHOD_1_1767BB8CA57A90CE_OFFSET))(this, a1, a2);
	}
};
