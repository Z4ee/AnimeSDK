#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define STRUCT_2_BD9D83395C3D28CB___C_METHOD_1_FB0EDEF64D42DFEF_OFFSET UNITYSDK_OFFSET(0x12DE51F0)
#define STRUCT_2_BD9D83395C3D28CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DE51A0)
#define STRUCT_2_BD9D83395C3D28CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE51E0)

inline static constexpr unsigned int Struct_2_BD9D83395C3D28CB___c_TypeDefinitionIndex = 55518;

class Struct_2_BD9D83395C3D28CB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__27_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_BD9D83395C3D28CB___c_TypeDefinitionIndex)->GetStaticField(0x41CB0);
	}
	static ::Struct_2_BD9D83395C3D28CB___c** StaticGet___9()
	{
		return (::Struct_2_BD9D83395C3D28CB___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_BD9D83395C3D28CB___c_TypeDefinitionIndex)->GetStaticField(0x41CB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_BD9D83395C3D28CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BD9D83395C3D28CB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_FB0EDEF64D42DFEF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BD9D83395C3D28CB___C_METHOD_1_FB0EDEF64D42DFEF_OFFSET))(this, a1, a2);
	}
};
