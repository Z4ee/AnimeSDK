#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE_INIT_OFFSET UNITYSDK_OFFSET(0xC0BBFB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE_UNINIT_OFFSET UNITYSDK_OFFSET(0xC0BC050)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xC0BC100)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0BCF10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC0BCF50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0xC0BCF60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropDirectionDissolve_TypeDefinitionIndex = 65405;

	class MonoEffectPluginCharaPropDirectionDissolve : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean EnableDissolve; // 0x40
		::UnityEngine::Transform* DissolveTargetPlane; // 0x48
		::System::Boolean Toggle_DissolveOutlineSize1; // 0x50
		::System::Single DissolveOutlineSize1; // 0x54
		::System::Boolean Toggle_DissolveOutlineSize2; // 0x58
		::System::Single DissolveOutlineSize2; // 0x5C
		::System::Boolean Toggle_DissolveOutlineEmission; // 0x60
		::System::Single DissolveOutlineEmission; // 0x64
		::System::Boolean Toggle_DissolveOutlineColor1; // 0x68
		::UnityEngine::Color DissolveOutlineColor1; // 0x6C
		::System::Boolean Toggle_DissolveOutlineColor2; // 0x7C
		::UnityEngine::Color DissolveOutlineColor2; // 0x80
		::System::Boolean Toggle_DissolveOutlineSmoothStep; // 0x90
		::UnityEngine::Vector2 DissolveOutlineSmoothStep; // 0x94
		::Il2CppArray<::System::Boolean>* Field_6_14; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE_UNINIT_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE___IFIXBASEPROXY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIRECTIONDISSOLVE___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
