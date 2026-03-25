#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_INIT_OFFSET UNITYSDK_OFFSET(0x9CB83B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CB8450)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x9CB84F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS__CTOR_OFFSET UNITYSDK_OFFSET(0x9CB88B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9CB88D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CB88E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropMaps_TypeDefinitionIndex = 57246;

	class MonoEffectPluginCharaPropMaps : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_MainTex; // 0x40
		::UnityEngine::Texture2D* _MainTex; // 0x48
		::System::Boolean Toggle_Color; // 0x50
		::UnityEngine::Color _Color; // 0x54
		::System::Boolean Toggle_BackColor; // 0x64
		::UnityEngine::Color _BackColor; // 0x68
		::System::Boolean Toggle_LightMap; // 0x78
		::UnityEngine::Texture2D* _LightMap; // 0x80
		::Il2CppArray<::System::Boolean>* Field_6_8; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_UNINIT_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* P0, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* P1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPMAPS___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
