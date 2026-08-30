#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class Action; }

#define CLASS_2_4EEAD21E873B5A41___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D7FB0)
#define CLASS_2_4EEAD21E873B5A41___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170D7FF0)
#define CLASS_2_4EEAD21E873B5A41___C___APPLYENVIRONMENTPROFILE_B__26_0_OFFSET UNITYSDK_OFFSET(0x170D8010)
#define CLASS_2_4EEAD21E873B5A41___C___ONENTITYASYNCLOADCOMPLETE_B__19_0_OFFSET UNITYSDK_OFFSET(0x170D8000)

inline static constexpr unsigned int Class_2_4EEAD21E873B5A41___c_TypeDefinitionIndex = 60513;

class Class_2_4EEAD21E873B5A41___c : public ::System::Object
{
public:
	static ::Class_2_4EEAD21E873B5A41___c** StaticGet___9()
	{
		return (::Class_2_4EEAD21E873B5A41___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4EEAD21E873B5A41___c_TypeDefinitionIndex)->GetStaticField(0x66B60);
	}
	static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__26_0()
	{
		return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4EEAD21E873B5A41___c_TypeDefinitionIndex)->GetStaticField(0x66B68);
	}
	static ::System::Action** StaticGet___9__19_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4EEAD21E873B5A41___c_TypeDefinitionIndex)->GetStaticField(0x66B70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnEntityAsyncLoadComplete_b__19_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C___ONENTITYASYNCLOADCOMPLETE_B__19_0_OFFSET))(this);
	}

	::System::Void __ApplyEnvironmentProfile_b__26_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C___APPLYENVIRONMENTPROFILE_B__26_0_OFFSET))(this, a1);
	}
};
