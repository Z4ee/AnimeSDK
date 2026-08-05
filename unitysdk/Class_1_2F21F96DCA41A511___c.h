#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Component; }

#define CLASS_1_2F21F96DCA41A511___C_METHOD_1_57D09AC07F4EF031_OFFSET UNITYSDK_OFFSET(0x17E6D920)
#define CLASS_1_2F21F96DCA41A511___C_METHOD_1_5D234E7750FB8692_OFFSET UNITYSDK_OFFSET(0x17E6D8B0)
#define CLASS_1_2F21F96DCA41A511___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6D860)
#define CLASS_1_2F21F96DCA41A511___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6D8A0)

inline static constexpr unsigned int Class_1_2F21F96DCA41A511___c_TypeDefinitionIndex = 49254;

class Class_1_2F21F96DCA41A511___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F21F96DCA41A511___c_TypeDefinitionIndex)->GetStaticField(0x3EBC0);
	}
	static ::Class_1_2F21F96DCA41A511___c** StaticGet___9()
	{
		return (::Class_1_2F21F96DCA41A511___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F21F96DCA41A511___c_TypeDefinitionIndex)->GetStaticField(0x3EBC8);
	}
	static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F21F96DCA41A511___c_TypeDefinitionIndex)->GetStaticField(0x3EBD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5D234E7750FB8692(::UnityEngine::Component* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511___C_METHOD_1_5D234E7750FB8692_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57D09AC07F4EF031(::UnityEngine::Component* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511___C_METHOD_1_57D09AC07F4EF031_OFFSET))(this, a1);
	}
};
