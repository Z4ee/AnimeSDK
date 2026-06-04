#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }

#define CLASS_1_D70A30D666F20D90___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA595540)
#define CLASS_1_D70A30D666F20D90___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA595570)
#define CLASS_1_D70A30D666F20D90___C__ENABLEENVPROFILE_B__58_0_OFFSET UNITYSDK_OFFSET(0xA595580)

inline static constexpr unsigned int Class_1_D70A30D666F20D90___c_TypeDefinitionIndex = 68943;

class Class_1_D70A30D666F20D90___c : public ::System::Object
{
public:
	static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__58_0()
	{
		return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D70A30D666F20D90___c_TypeDefinitionIndex)->GetStaticField(0x63DD0);
	}
	static ::Class_1_D70A30D666F20D90___c** StaticGet___9()
	{
		return (::Class_1_D70A30D666F20D90___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D70A30D666F20D90___c_TypeDefinitionIndex)->GetStaticField(0x63DD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__CTOR_OFFSET))(this);
	}

	::System::Void _EnableEnvProfile_b__58_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__ENABLEENVPROFILE_B__58_0_OFFSET))(this, a1);
	}
};
