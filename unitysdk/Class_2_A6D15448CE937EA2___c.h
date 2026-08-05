#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A6D15448CE937EA2___C_METHOD_1_76AAE40741F092B2_OFFSET UNITYSDK_OFFSET(0x12B01DE0)
#define CLASS_2_A6D15448CE937EA2___C_METHOD_1_7FFDF359C363D0D4_OFFSET UNITYSDK_OFFSET(0x12B01E80)
#define CLASS_2_A6D15448CE937EA2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B01D90)
#define CLASS_2_A6D15448CE937EA2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B01DD0)

inline static constexpr unsigned int Class_2_A6D15448CE937EA2___c_TypeDefinitionIndex = 77744;

class Class_2_A6D15448CE937EA2___c : public ::System::Object
{
public:
	static ::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::String*>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A6D15448CE937EA2___c_TypeDefinitionIndex)->GetStaticField(0x39330);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__16_1()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A6D15448CE937EA2___c_TypeDefinitionIndex)->GetStaticField(0x39338);
	}
	static ::Class_2_A6D15448CE937EA2___c** StaticGet___9()
	{
		return (::Class_2_A6D15448CE937EA2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A6D15448CE937EA2___c_TypeDefinitionIndex)->GetStaticField(0x39340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A6D15448CE937EA2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6D15448CE937EA2___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_76AAE40741F092B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A6D15448CE937EA2___C_METHOD_1_76AAE40741F092B2_OFFSET))(this, a1);
	}

	::System::String* Method_1_7FFDF359C363D0D4(::Struct_2_DAA84C1CDD754F37 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + CLASS_2_A6D15448CE937EA2___C_METHOD_1_7FFDF359C363D0D4_OFFSET))(this, a1);
	}
};
