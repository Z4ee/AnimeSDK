#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_D36393D5F41E9497___C_METHOD_1_A10116A1FF064790_OFFSET UNITYSDK_OFFSET(0x13E74E00)
#define CLASS_1_D36393D5F41E9497___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E74DB0)
#define CLASS_1_D36393D5F41E9497___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E74DF0)

inline static constexpr unsigned int Class_1_D36393D5F41E9497___c_TypeDefinitionIndex = 89706;

class Class_1_D36393D5F41E9497___c : public ::System::Object
{
public:
	static ::Class_1_D36393D5F41E9497___c** StaticGet___9()
	{
		return (::Class_1_D36393D5F41E9497___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D36393D5F41E9497___c_TypeDefinitionIndex)->GetStaticField(0x360E0);
	}
	static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__75_0()
	{
		return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D36393D5F41E9497___c_TypeDefinitionIndex)->GetStaticField(0x360E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D36393D5F41E9497___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D36393D5F41E9497___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_A10116A1FF064790(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D36393D5F41E9497___C_METHOD_1_A10116A1FF064790_OFFSET))(this, a1);
	}
};
