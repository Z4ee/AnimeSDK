#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_INIT_OFFSET UNITYSDK_OFFSET(0xA979210)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_UNINIT_OFFSET UNITYSDK_OFFSET(0xA979AB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA9792B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xA979B50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA979B70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0xA979B80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropHairRimLight_TypeDefinitionIndex = 64493;

	class MonoEffectPluginCharaPropHairRimLight : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_RimLightMode; // 0x40
		::System::Single _RimLightMode; // 0x44
		::System::Boolean Toggle_RColor0; // 0x48
		::UnityEngine::Color _RimColor0; // 0x4C
		::System::Boolean Toggle_RimWidth; // 0x5C
		::System::Single _RimWidth; // 0x60
		::System::Boolean Toggle_RimBlendMode; // 0x64
		::System::Single _RimBlendMode; // 0x68
		::System::Boolean Toggle_RimSoftness0; // 0x6C
		::System::Single _RimSoftness0; // 0x70
		::System::Boolean Toggle_RimDarkenValue; // 0x74
		::System::Single _RimDarkenValue; // 0x78
		::System::Boolean Toggle_RimOffset; // 0x7C
		::UnityEngine::Vector4 _RimOffset; // 0x80
		::System::Boolean Toggle_FresnelColor; // 0x90
		::UnityEngine::Color _FresnelColor; // 0x94
		::System::Boolean Toggle_FresnelBSI; // 0xA4
		::UnityEngine::Vector4 _FresnelBSI; // 0xA8
		::System::Boolean Toggle_FresnelColorStrength; // 0xB8
		::System::Single _FresnelColorStrength; // 0xBC
		::Il2CppArray<::System::Boolean>* Field_6_20; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT_UNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* P0, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* P1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPHAIRRIMLIGHT___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
