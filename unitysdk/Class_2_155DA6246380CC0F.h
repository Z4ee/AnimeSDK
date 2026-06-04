#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginTargetHeadIcon; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define CLASS_2_155DA6246380CC0F_METHOD_2_35CC4B5D602CFB61_OFFSET UNITYSDK_OFFSET(0xA785380)
#define CLASS_2_155DA6246380CC0F_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xA7852C0)
#define CLASS_2_155DA6246380CC0F_METHOD_2_A2EF5AA9E7B48126_OFFSET UNITYSDK_OFFSET(0xA784EA0)
#define CLASS_2_155DA6246380CC0F_METHOD_2_B0AF566FEE2FD340_OFFSET UNITYSDK_OFFSET(0xA785310)
#define CLASS_2_155DA6246380CC0F_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xA784D10)
#define CLASS_2_155DA6246380CC0F__CCTOR_OFFSET UNITYSDK_OFFSET(0xA785620)
#define CLASS_2_155DA6246380CC0F__CTOR_OFFSET UNITYSDK_OFFSET(0xA785610)

inline static constexpr unsigned int Class_2_155DA6246380CC0F_TypeDefinitionIndex = 65357;

class Class_2_155DA6246380CC0F : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_155DA6246380CC0F_TypeDefinitionIndex)->GetStaticField(0x60E10);
	}
	::System::String* Field_2_1; // 0x18

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

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155DA6246380CC0F_METHOD_2_89EF21CA0414B145_OFFSET))(this);
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
