#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_98BFD40A7DBF3534___C_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17CF1BF0)
#define CLASS_2_98BFD40A7DBF3534___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CF1BA0)
#define CLASS_2_98BFD40A7DBF3534___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF1BE0)

inline static constexpr unsigned int Class_2_98BFD40A7DBF3534___c_TypeDefinitionIndex = 84814;

class Class_2_98BFD40A7DBF3534___c : public ::System::Object
{
public:
	static ::Class_2_98BFD40A7DBF3534___c** StaticGet___9()
	{
		return (::Class_2_98BFD40A7DBF3534___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98BFD40A7DBF3534___c_TypeDefinitionIndex)->GetStaticField(0x47740);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__18_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_98BFD40A7DBF3534___c_TypeDefinitionIndex)->GetStaticField(0x47748);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_98BFD40A7DBF3534___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98BFD40A7DBF3534___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98BFD40A7DBF3534___C_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
