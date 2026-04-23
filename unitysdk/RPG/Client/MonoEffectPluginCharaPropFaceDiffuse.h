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

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_INIT_OFFSET UNITYSDK_OFFSET(0xA975B10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_UNINIT_OFFSET UNITYSDK_OFFSET(0xA9770A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA975DF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE__CTOR_OFFSET UNITYSDK_OFFSET(0xA977140)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA9771D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0xA9771E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropFaceDiffuse_TypeDefinitionIndex = 64488;

	class MonoEffectPluginCharaPropFaceDiffuse : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_ShadowColor; // 0x40
		::UnityEngine::Color _ShadowColor; // 0x44
		::System::Boolean EnableShadowRampSeparated; // 0x54
		::System::Boolean Toggle_DarkColor; // 0x55
		::UnityEngine::Color _DarkColor; // 0x58
		::System::Boolean Toggle_EyeShadowColor; // 0x68
		::UnityEngine::Color _EyeShadowColor; // 0x6C
		::System::Boolean Toggle_EyeBaseShadowColor; // 0x7C
		::UnityEngine::Color _EyeBaseShadowColor; // 0x80
		::System::Boolean Toggle_ShadowThreshold; // 0x90
		::System::Single _ShadowThreshold; // 0x94
		::System::Boolean Toggle_ShadowFeather; // 0x98
		::System::Single _ShadowFeather; // 0x9C
		::System::Boolean Toggle_BackShadowRange; // 0xA0
		::System::Single _BackShadowRange; // 0xA4
		::System::Boolean Toggle_NoseLineColor; // 0xA8
		::UnityEngine::Color _NoseLineColor; // 0xAC
		::System::Boolean Toggle_NoseLinePower; // 0xBC
		::System::Single _NoseLinePower; // 0xC0
		::System::Boolean Toggle_LipLinefixColor; // 0xC4
		::UnityEngine::Color _LipLinefixColor; // 0xC8
		::System::Boolean Toggle_LipLineFixThrd; // 0xD8
		::System::Single _LipLineFixThrd; // 0xDC
		::System::Boolean Toggle_LipLineFixStart; // 0xE0
		::System::Single _LipLineFixStart; // 0xE4
		::System::Boolean Toggle_LipLineFixMax; // 0xE8
		::System::Single _LipLineFixMax; // 0xEC
		::System::Boolean Toggle_EyeEffectProcs; // 0xF0
		::System::Single _EyeEffectProcs; // 0xF4
		::System::Boolean Toggle_EyeEffectColor; // 0xF8
		::UnityEngine::Color _EyeEffectColor; // 0xFC
		::System::Boolean Toggle_faceBloom; // 0x10C
		::System::Single faceBloom; // 0x110
		::System::Boolean Toggle_eyeBloom; // 0x114
		::System::Single eyeBloom; // 0x118
		::System::Boolean DisabledEyeBlend; // 0x11C
		::System::Boolean Toggle_StencilEye; // 0x11D
		::System::Int32 _StencilEye; // 0x120
		::System::Boolean Field_6_38; // 0x124
		::System::Int32 Field_6_39; // 0x128
		::System::Boolean Field_6_40; // 0x12C
		::System::Boolean Field_6_41; // 0x12D
		::Il2CppArray<::System::Boolean>* Field_6_42; // 0x130
		::Il2CppArray<::System::Boolean>* Field_6_43; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE_UNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* P0, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* P1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEDIFFUSE___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
