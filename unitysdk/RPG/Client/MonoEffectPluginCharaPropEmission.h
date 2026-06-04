#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_INIT_OFFSET UNITYSDK_OFFSET(0xC0C1DD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_UNINIT_OFFSET UNITYSDK_OFFSET(0xC0C20E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xC0C1E70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C2180)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC0C21A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0xC0C21B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropEmission_TypeDefinitionIndex = 65407;

	class MonoEffectPluginCharaPropEmission : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_EmissionThreshold; // 0x40
		::System::Single _EmissionThreshold; // 0x44
		::System::Boolean Toggle_EmissionIntensity; // 0x48
		::System::Single _EmissionIntensity; // 0x4C
		::Il2CppArray<::System::Boolean>* Field_6_4; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION_UNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION___IFIXBASEPROXY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPEMISSION___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
