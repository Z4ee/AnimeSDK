#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/RPG/Client/TAUtils/OverrideLightModule.h"
#include "unitysdk/UnityEngine/Space.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_INIT_OFFSET UNITYSDK_OFFSET(0xC0C8A30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_UNINIT_OFFSET UNITYSDK_OFFSET(0xC0C8A90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xC0C8AE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C8BE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC0C8C40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0xC0C8C50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropOverrideLight_TypeDefinitionIndex = 65424;

	class MonoEffectPluginCharaPropOverrideLight : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::UnityEngine::Space OverrideLightSpace; // 0x40
		::RPG::Client::TAUtils::OverrideLightModule OverrideLightModule; // 0x48
		::UnityEngine::Material* Field_6_2; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_UNINIT_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT___IFIXBASEPROXY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOVERRIDELIGHT___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
