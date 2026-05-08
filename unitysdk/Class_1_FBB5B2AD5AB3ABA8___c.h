#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_FBB5B2AD5AB3ABA8___C_METHOD_1_61676C795523BFAD_OFFSET UNITYSDK_OFFSET(0x101473C0)
#define CLASS_1_FBB5B2AD5AB3ABA8___C_METHOD_1_9A4A40EFCCA747BA_1_OFFSET UNITYSDK_OFFSET(0x10147450)
#define CLASS_1_FBB5B2AD5AB3ABA8___C_METHOD_1_9A4A40EFCCA747BA_OFFSET UNITYSDK_OFFSET(0x10147320)
#define CLASS_1_FBB5B2AD5AB3ABA8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x101472D0)
#define CLASS_1_FBB5B2AD5AB3ABA8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10147310)

inline static constexpr unsigned int Class_1_FBB5B2AD5AB3ABA8___c_TypeDefinitionIndex = 81769;

class Class_1_FBB5B2AD5AB3ABA8___c : public ::System::Object
{
public:
	static ::Class_1_FBB5B2AD5AB3ABA8___c** StaticGet___9()
	{
		return (::Class_1_FBB5B2AD5AB3ABA8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBB5B2AD5AB3ABA8___c_TypeDefinitionIndex)->GetStaticField(0x453A0);
	}
	static ::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::String*>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBB5B2AD5AB3ABA8___c_TypeDefinitionIndex)->GetStaticField(0x453A8);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__42_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBB5B2AD5AB3ABA8___c_TypeDefinitionIndex)->GetStaticField(0x453B0);
	}
	static ::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::String*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Struct_2_DAA84C1CDD754F37, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FBB5B2AD5AB3ABA8___c_TypeDefinitionIndex)->GetStaticField(0x453B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBB5B2AD5AB3ABA8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBB5B2AD5AB3ABA8___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_9A4A40EFCCA747BA(::Struct_2_DAA84C1CDD754F37 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + CLASS_1_FBB5B2AD5AB3ABA8___C_METHOD_1_9A4A40EFCCA747BA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_61676C795523BFAD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBB5B2AD5AB3ABA8___C_METHOD_1_61676C795523BFAD_OFFSET))(this, a1);
	}

	::System::String* Method_1_9A4A40EFCCA747BA_1(::Struct_2_DAA84C1CDD754F37 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + CLASS_1_FBB5B2AD5AB3ABA8___C_METHOD_1_9A4A40EFCCA747BA_1_OFFSET))(this, a1);
	}
};
