#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA98BF60)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA98BFA0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER___C__GET_DIALOGTARGETRENDERERS_B__27_0_OFFSET UNITYSDK_OFFSET(0xA98BFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRenderer___c_TypeDefinitionIndex = 64525;

	class MonoEffectPluginDialogRenderer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRenderer___c_TypeDefinitionIndex)->GetStaticField(0x3CDD0);
		}
		static ::RPG::Client::MonoEffectPluginDialogRenderer___c** StaticGet___9()
		{
			return (::RPG::Client::MonoEffectPluginDialogRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRenderer___c_TypeDefinitionIndex)->GetStaticField(0x3CDD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_DialogTargetRenderers_b__27_0(::UnityEngine::Renderer* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER___C__GET_DIALOGTARGETRENDERERS_B__27_0_OFFSET))(this, r);
		}
	};
}
