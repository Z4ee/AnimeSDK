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
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_INIT_OFFSET UNITYSDK_OFFSET(0xA96F240)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_UNINIT_OFFSET UNITYSDK_OFFSET(0xA96F520)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA96F2E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0xA96F5C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA96F5E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0xA96F5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropDiffuseLighting_TypeDefinitionIndex = 64483;

	class MonoEffectPluginCharaPropDiffuseLighting : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_DiffuseRampMultiTex; // 0x40
		::UnityEngine::Texture2D* _DiffuseRampMultiTex; // 0x48
		::System::Boolean Toggle_ShadowRamp; // 0x50
		::System::Single _ShadowRamp; // 0x54
		::Il2CppArray<::System::Boolean>* Field_6_4; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_UNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* P0, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* P1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
