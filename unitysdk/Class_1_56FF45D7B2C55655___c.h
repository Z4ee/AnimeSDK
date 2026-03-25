#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class Action; }

#define CLASS_1_56FF45D7B2C55655___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x88F41D0)
#define CLASS_1_56FF45D7B2C55655___C__CTOR_OFFSET UNITYSDK_OFFSET(0x88F4200)
#define CLASS_1_56FF45D7B2C55655___C__ENABLEENVPROFILE_B__55_0_OFFSET UNITYSDK_OFFSET(0x88F42B0)
#define CLASS_1_56FF45D7B2C55655___C__LOADAREA_B__2_0_OFFSET UNITYSDK_OFFSET(0x88F4210)
#define CLASS_1_56FF45D7B2C55655___C__LOADAREA_B__2_1_OFFSET UNITYSDK_OFFSET(0x88F4260)

inline static constexpr unsigned int Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex = 60549;

class Class_1_56FF45D7B2C55655___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x48F80);
	}
	static ::Class_1_56FF45D7B2C55655___c** StaticGet___9()
	{
		return (::Class_1_56FF45D7B2C55655___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x48F88);
	}
	static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__55_0()
	{
		return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x48F90);
	}
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FF45D7B2C55655___c_TypeDefinitionIndex)->GetStaticField(0x48F98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__CTOR_OFFSET))(this);
	}

	::System::Void _LoadArea_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__LOADAREA_B__2_0_OFFSET))(this);
	}

	::System::Void _LoadArea_b__2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__LOADAREA_B__2_1_OFFSET))(this);
	}

	::System::Void _EnableEnvProfile_b__55_0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655___C__ENABLEENVPROFILE_B__55_0_OFFSET))(this, _);
	}
};
