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

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_INIT_OFFSET UNITYSDK_OFFSET(0xC0C3A30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_UNINIT_OFFSET UNITYSDK_OFFSET(0xC0C4240)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xC0C3AD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C42E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC0C4320)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0xC0C4330)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropFaceExpression_TypeDefinitionIndex = 65410;

	class MonoEffectPluginCharaPropFaceExpression : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_ExCheekColor; // 0x40
		::UnityEngine::Color _ExCheekColor; // 0x44
		::System::Boolean Toggle_ExMapThreshold; // 0x54
		::System::Single _ExMapThreshold; // 0x58
		::System::Boolean Toggle_ExSpecularIntensity; // 0x5C
		::System::Single _ExSpecularIntensity; // 0x60
		::System::Boolean Toggle_ExCheekIntensity; // 0x64
		::System::Single _ExCheekIntensity; // 0x68
		::System::Boolean Toggle_ExShyColor; // 0x6C
		::UnityEngine::Color _ExShyColor; // 0x70
		::System::Boolean Toggle_ExShyIntensity; // 0x80
		::System::Single _ExShyIntensity; // 0x84
		::System::Boolean Toggle_ExShadowColor; // 0x88
		::UnityEngine::Color _ExShadowColor; // 0x8C
		::System::Boolean Toggle_ExEyeColor; // 0x9C
		::UnityEngine::Color _ExEyeColor; // 0xA0
		::System::Boolean Toggle_ExShadowIntensity; // 0xB0
		::System::Single _ExShadowIntensity; // 0xB4
		::Il2CppArray<::System::Boolean>* Field_6_18; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION_UNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION___IFIXBASEPROXY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEEXPRESSION___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
