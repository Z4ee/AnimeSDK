#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define CLASS_1_91F5B5FCD8262EE8___C_METHOD_1_7E79C83BFC6668A6_OFFSET UNITYSDK_OFFSET(0x142F5220)
#define CLASS_1_91F5B5FCD8262EE8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142F51D0)
#define CLASS_1_91F5B5FCD8262EE8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142F5210)

inline static constexpr unsigned int Class_1_91F5B5FCD8262EE8___c_TypeDefinitionIndex = 56791;

class Class_1_91F5B5FCD8262EE8___c : public ::System::Object
{
public:
	static ::Class_1_91F5B5FCD8262EE8___c** StaticGet___9()
	{
		return (::Class_1_91F5B5FCD8262EE8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91F5B5FCD8262EE8___c_TypeDefinitionIndex)->GetStaticField(0x42400);
	}
	static ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__200_0()
	{
		return (::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91F5B5FCD8262EE8___c_TypeDefinitionIndex)->GetStaticField(0x42408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7E79C83BFC6668A6(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8___C_METHOD_1_7E79C83BFC6668A6_OFFSET))(this, a1);
	}
};
