#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7F8300)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F8340)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__GET_DIALOGTARGETRENDERERS_B__27_0_OFFSET UNITYSDK_OFFSET(0xD7F8350)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRendererOverlay___c_TypeDefinitionIndex = 69999;

	class MonoEffectPluginDialogRendererOverlay___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MonoEffectPluginDialogRendererOverlay___c** StaticGet___9()
		{
			return (::RPG::Client::MonoEffectPluginDialogRendererOverlay___c**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRendererOverlay___c_TypeDefinitionIndex)->GetStaticField(0x647F0);
		}
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRendererOverlay___c_TypeDefinitionIndex)->GetStaticField(0x647F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_DialogTargetRenderers_b__27_0(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDEREROVERLAY___C__GET_DIALOGTARGETRENDERERS_B__27_0_OFFSET))(this, a1);
		}
	};
}
