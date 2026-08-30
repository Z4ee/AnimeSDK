#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginTargetHeadIcon; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define CLASS_2_155DA6246380CC0F_METHOD_2_35CC4B5D602CFB61_OFFSET UNITYSDK_OFFSET(0xBA8C830)
#define CLASS_2_155DA6246380CC0F_METHOD_2_A2EF5AA9E7B48126_OFFSET UNITYSDK_OFFSET(0xBA8C350)
#define CLASS_2_155DA6246380CC0F_METHOD_2_B0AF566FEE2FD340_OFFSET UNITYSDK_OFFSET(0xBA8C7C0)
#define CLASS_2_155DA6246380CC0F_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xBA8C1C0)
#define CLASS_2_155DA6246380CC0F_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xBA8C770)
#define CLASS_2_155DA6246380CC0F__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA8CAD0)
#define CLASS_2_155DA6246380CC0F__CTOR_OFFSET UNITYSDK_OFFSET(0xBA8CAC0)

inline static constexpr unsigned int Class_2_155DA6246380CC0F_TypeDefinitionIndex = 69871;

class Class_2_155DA6246380CC0F : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::String** StaticGet_MBIJMCFCHEI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_155DA6246380CC0F_TypeDefinitionIndex)->GetStaticField(0x58150);
	}
	::System::String* FADILKPGCEM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155DA6246380CC0F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_155DA6246380CC0F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155DA6246380CC0F_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155DA6246380CC0F_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::String* Method_2_A2EF5AA9E7B48126()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155DA6246380CC0F_METHOD_2_A2EF5AA9E7B48126_OFFSET))(this);
	}

	::System::Void Method_2_35CC4B5D602CFB61(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_155DA6246380CC0F_METHOD_2_35CC4B5D602CFB61_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginTargetHeadIcon* Method_2_B0AF566FEE2FD340()
	{
		return ((::RPG::Client::MonoEffectPluginTargetHeadIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155DA6246380CC0F_METHOD_2_B0AF566FEE2FD340_OFFSET))(this);
	}
};
