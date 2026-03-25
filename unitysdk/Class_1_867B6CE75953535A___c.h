#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_867B6CE75953535A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1694F310)
#define CLASS_1_867B6CE75953535A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1694F350)
#define CLASS_1_867B6CE75953535A___C___CTOR_B__91_0_OFFSET UNITYSDK_OFFSET(0x1694F360)

inline static constexpr unsigned int Class_1_867B6CE75953535A___c_TypeDefinitionIndex = 32350;

class Class_1_867B6CE75953535A___c : public ::System::Object
{
public:
	static ::Class_1_867B6CE75953535A___c** StaticGet___9()
	{
		return (::Class_1_867B6CE75953535A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A___c_TypeDefinitionIndex)->GetStaticField(0x166B0);
	}
	static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__91_0()
	{
		return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A___c_TypeDefinitionIndex)->GetStaticField(0x166B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__91_0(::System::Reflection::MethodInfo* method)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A___C___CTOR_B__91_0_OFFSET))(this, method);
	}
};
