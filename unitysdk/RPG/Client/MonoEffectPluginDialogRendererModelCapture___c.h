#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERERMODELCAPTURE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CCB130)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERERMODELCAPTURE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9CCB170)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERERMODELCAPTURE___C__GET_DIALOGTARGETRENDERERS_B__31_0_OFFSET UNITYSDK_OFFSET(0x9CCB180)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRendererModelCapture___c_TypeDefinitionIndex = 57273;

	class MonoEffectPluginDialogRendererModelCapture___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRendererModelCapture___c_TypeDefinitionIndex)->GetStaticField(0x37010);
		}
		static ::RPG::Client::MonoEffectPluginDialogRendererModelCapture___c** StaticGet___9()
		{
			return (::RPG::Client::MonoEffectPluginDialogRendererModelCapture___c**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRendererModelCapture___c_TypeDefinitionIndex)->GetStaticField(0x37018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERERMODELCAPTURE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERERMODELCAPTURE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_DialogTargetRenderers_b__31_0(::UnityEngine::Renderer* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERERMODELCAPTURE___C__GET_DIALOGTARGETRENDERERS_B__31_0_OFFSET))(this, r);
		}
	};
}
