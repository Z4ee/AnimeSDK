#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_360616289308DD39___C_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x114ADBB0)
#define CLASS_1_360616289308DD39___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114ADB60)
#define CLASS_1_360616289308DD39___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114ADBA0)

inline static constexpr unsigned int Class_1_360616289308DD39___c_TypeDefinitionIndex = 58415;

class Class_1_360616289308DD39___c : public ::System::Object
{
public:
	static ::Class_1_360616289308DD39___c** StaticGet___9()
	{
		return (::Class_1_360616289308DD39___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_360616289308DD39___c_TypeDefinitionIndex)->GetStaticField(0x33C70);
	}
	static ::System::Action** StaticGet___9__3_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_360616289308DD39___c_TypeDefinitionIndex)->GetStaticField(0x33C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_360616289308DD39___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_360616289308DD39___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_360616289308DD39___C_METHOD_1_8B848E52913DFCE9_OFFSET))(this);
	}
};
