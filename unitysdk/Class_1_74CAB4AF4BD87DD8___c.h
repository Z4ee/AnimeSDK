#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class ParameterInfo; }

#define CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_0565F11B120C78A5_OFFSET UNITYSDK_OFFSET(0x1EBB3880)
#define CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_234AA9733AA0B793_1_OFFSET UNITYSDK_OFFSET(0x1EBB3850)
#define CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_234AA9733AA0B793_OFFSET UNITYSDK_OFFSET(0x1EBB3820)
#define CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_B214BED5EB17C0A6_OFFSET UNITYSDK_OFFSET(0x1EBB37C0)
#define CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_F6CA94987AA2EB10_OFFSET UNITYSDK_OFFSET(0x1EBB38E0)
#define CLASS_1_74CAB4AF4BD87DD8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB3770)
#define CLASS_1_74CAB4AF4BD87DD8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB37B0)

inline static constexpr unsigned int Class_1_74CAB4AF4BD87DD8___c_TypeDefinitionIndex = 30337;

class Class_1_74CAB4AF4BD87DD8___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__109_0()
	{
		return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74CAB4AF4BD87DD8___c_TypeDefinitionIndex)->GetStaticField(0x24F60);
	}
	static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__34_1()
	{
		return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74CAB4AF4BD87DD8___c_TypeDefinitionIndex)->GetStaticField(0x24F68);
	}
	static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__34_0()
	{
		return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74CAB4AF4BD87DD8___c_TypeDefinitionIndex)->GetStaticField(0x24F70);
	}
	static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__101_0()
	{
		return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74CAB4AF4BD87DD8___c_TypeDefinitionIndex)->GetStaticField(0x24F78);
	}
	static ::Class_1_74CAB4AF4BD87DD8___c** StaticGet___9()
	{
		return (::Class_1_74CAB4AF4BD87DD8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74CAB4AF4BD87DD8___c_TypeDefinitionIndex)->GetStaticField(0x24F80);
	}
	static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__125_0()
	{
		return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_74CAB4AF4BD87DD8___c_TypeDefinitionIndex)->GetStaticField(0x24F88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_B214BED5EB17C0A6(::System::Type* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_B214BED5EB17C0A6_OFFSET))(this, a1);
	}

	::System::Type* Method_1_234AA9733AA0B793(::System::Reflection::ParameterInfo* a1)
	{
		return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_234AA9733AA0B793_OFFSET))(this, a1);
	}

	::System::Type* Method_1_234AA9733AA0B793_1(::System::Reflection::ParameterInfo* a1)
	{
		return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_234AA9733AA0B793_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0565F11B120C78A5(::System::Reflection::ConstructorInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_0565F11B120C78A5_OFFSET))(this, a1);
	}

	::System::String* Method_1_F6CA94987AA2EB10(::System::Type* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_74CAB4AF4BD87DD8___C_METHOD_1_F6CA94987AA2EB10_OFFSET))(this, a1);
	}
};
