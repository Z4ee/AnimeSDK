#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoNPCCrowdPlatModelComponent;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_92D31F2659FD114C_1_OFFSET UNITYSDK_OFFSET(0x1A552490)
#define CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_92D31F2659FD114C_OFFSET UNITYSDK_OFFSET(0x1A552360)
#define CLASS_2_39CEA7F613ED7FAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A552310)
#define CLASS_2_39CEA7F613ED7FAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A552350)

inline static constexpr unsigned int Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex = 65605;

class Class_2_39CEA7F613ED7FAD___c : public ::System::Object
{
public:
	static ::System::Action_1<::MonoNPCCrowdPlatModelComponent*>** StaticGet___9__10_2()
	{
		return (::System::Action_1<::MonoNPCCrowdPlatModelComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x3EA50);
	}
	static ::System::Action_1<::MonoNPCCrowdPlatModelComponent*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::MonoNPCCrowdPlatModelComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x3EA58);
	}
	static ::Class_2_39CEA7F613ED7FAD___c** StaticGet___9()
	{
		return (::Class_2_39CEA7F613ED7FAD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_39CEA7F613ED7FAD___c_TypeDefinitionIndex)->GetStaticField(0x3EA60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_92D31F2659FD114C(::MonoNPCCrowdPlatModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoNPCCrowdPlatModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_92D31F2659FD114C_OFFSET))(this, a1);
	}

	::System::Void Method_1_92D31F2659FD114C_1(::MonoNPCCrowdPlatModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoNPCCrowdPlatModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD___C_METHOD_1_92D31F2659FD114C_1_OFFSET))(this, a1);
	}
};
