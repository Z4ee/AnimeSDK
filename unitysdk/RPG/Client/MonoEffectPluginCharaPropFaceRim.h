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

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_INIT_OFFSET UNITYSDK_OFFSET(0x9CB6470)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CB6810)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x9CB6510)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM__CTOR_OFFSET UNITYSDK_OFFSET(0x9CB68B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9CB68D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CB68E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropFaceRim_TypeDefinitionIndex = 57237;

	class MonoEffectPluginCharaPropFaceRim : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_FresnelColor; // 0x40
		::UnityEngine::Color _FresnelColor; // 0x44
		::System::Boolean Toggle_FresnelBSI; // 0x54
		::UnityEngine::Vector4 _FresnelBSI; // 0x58
		::System::Boolean Toggle_FresnelColorStrength; // 0x68
		::System::Single _FresnelColorStrength; // 0x6C
		::Il2CppArray<::System::Boolean>* Field_6_6; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM_UNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* P0, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* P1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACERIM___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
