#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A6D15448CE937EA2___C_METHOD_1_76AAE40741F092B2_OFFSET UNITYSDK_OFFSET(0x140DF1A0)
#define CLASS_2_A6D15448CE937EA2___C_METHOD_1_7FFDF359C363D0D4_OFFSET UNITYSDK_OFFSET(0x140DF190)
#define CLASS_2_A6D15448CE937EA2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140DF140)
#define CLASS_2_A6D15448CE937EA2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140DF180)

inline static constexpr unsigned int Class_2_A6D15448CE937EA2___c_TypeDefinitionIndex = 68275;

class Class_2_A6D15448CE937EA2___c : public ::System::Object
{
public:
	static ::Class_2_A6D15448CE937EA2___c** StaticGet___9()
	{
		return (::Class_2_A6D15448CE937EA2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A6D15448CE937EA2___c_TypeDefinitionIndex)->GetStaticField(0x392B0);
	}
	static ::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::String*>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A6D15448CE937EA2___c_TypeDefinitionIndex)->GetStaticField(0x392B8);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__16_1()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A6D15448CE937EA2___c_TypeDefinitionIndex)->GetStaticField(0x392C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A6D15448CE937EA2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6D15448CE937EA2___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7FFDF359C363D0D4(::Struct_2_DAA84C1CDD754F37 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + CLASS_2_A6D15448CE937EA2___C_METHOD_1_7FFDF359C363D0D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_76AAE40741F092B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A6D15448CE937EA2___C_METHOD_1_76AAE40741F092B2_OFFSET))(this, a1);
	}
};
