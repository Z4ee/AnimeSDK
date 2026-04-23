#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA98E2F0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA98E330)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__GET_DIALOGTARGETRENDERERS_B__27_0_OFFSET UNITYSDK_OFFSET(0xA98E340)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRendererOverlay___c_TypeDefinitionIndex = 64529;

	class MonoEffectPluginDialogRendererOverlay___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MonoEffectPluginDialogRendererOverlay___c** StaticGet___9()
		{
			return (::RPG::Client::MonoEffectPluginDialogRendererOverlay___c**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRendererOverlay___c_TypeDefinitionIndex)->GetStaticField(0x3CF20);
		}
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRendererOverlay___c_TypeDefinitionIndex)->GetStaticField(0x3CF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_DialogTargetRenderers_b__27_0(::UnityEngine::Renderer* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__GET_DIALOGTARGETRENDERERS_B__27_0_OFFSET))(this, r);
		}
	};
}
