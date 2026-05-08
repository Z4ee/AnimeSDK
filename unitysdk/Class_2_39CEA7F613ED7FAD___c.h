#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoNPCCrowdPlatModelComponent;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_0AB129FA512E2566_1_OFFSET UNITYSDK_OFFSET(0x122CDC50)
#define CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_0AB129FA512E2566_OFFSET UNITYSDK_OFFSET(0x122CDB20)
#define CLASS_2_39CEA7F613ED7FAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122CDAD0)
#define CLASS_2_39CEA7F613ED7FAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122CDB10)

inline static constexpr unsigned int Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex = 64255;

class Class_2_39CEA7F613ED7FAD___c : public ::System::Object
{
public:
	static ::Class_2_39CEA7F613ED7FAD___c** StaticGet___9()
	{
		return (::Class_2_39CEA7F613ED7FAD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x3A050);
	}
	static ::System::Action_1<::MonoNPCCrowdPlatModelComponent*>** StaticGet___9__10_2()
	{
		return (::System::Action_1<::MonoNPCCrowdPlatModelComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x3A058);
	}
	static ::System::Action_1<::MonoNPCCrowdPlatModelComponent*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::MonoNPCCrowdPlatModelComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x3A060);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0AB129FA512E2566(::MonoNPCCrowdPlatModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoNPCCrowdPlatModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_0AB129FA512E2566_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AB129FA512E2566_1(::MonoNPCCrowdPlatModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoNPCCrowdPlatModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_0AB129FA512E2566_1_OFFSET))(this, a1);
	}
};
