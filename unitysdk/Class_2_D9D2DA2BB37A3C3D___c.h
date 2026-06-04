#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D9D2DA2BB37A3C3D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB423C0)
#define CLASS_2_D9D2DA2BB37A3C3D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB42400)
#define CLASS_2_D9D2DA2BB37A3C3D___C___BUILDENTITIES_B__34_0_OFFSET UNITYSDK_OFFSET(0xAB42480)
#define CLASS_2_D9D2DA2BB37A3C3D___C___INITENV_B__19_0_OFFSET UNITYSDK_OFFSET(0xAB42420)
#define CLASS_2_D9D2DA2BB37A3C3D___C___ONENTITYASYNCLOADCOMPLETE_B__18_0_OFFSET UNITYSDK_OFFSET(0xAB42410)

inline static constexpr unsigned int Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex = 56456;

class Class_2_D9D2DA2BB37A3C3D___c : public ::System::Object
{
public:
	static ::Class_2_D9D2DA2BB37A3C3D___c** StaticGet___9()
	{
		return (::Class_2_D9D2DA2BB37A3C3D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex)->GetStaticField(0x87B0);
	}
	static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__19_0()
	{
		return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex)->GetStaticField(0x87B8);
	}
	static ::System::Action** StaticGet___9__18_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex)->GetStaticField(0x87C0);
	}
	static ::System::Comparison_1<::RPG::GameCore::LittleGameEntityConfig*>** StaticGet___9__34_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::LittleGameEntityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D___c_TypeDefinitionIndex)->GetStaticField(0x87C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnEntityAsyncLoadComplete_b__18_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C___ONENTITYASYNCLOADCOMPLETE_B__18_0_OFFSET))(this);
	}

	::System::Void __InitEnv_b__19_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C___INITENV_B__19_0_OFFSET))(this, a1);
	}

	::System::Int32 __BuildEntities_b__34_0(::RPG::GameCore::LittleGameEntityConfig* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___C___BUILDENTITIES_B__34_0_OFFSET))(this, a1, a2);
	}
};
