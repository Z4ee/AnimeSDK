#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_INIT_OFFSET UNITYSDK_OFFSET(0x9CACE30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CAD110)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x9CACED0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x9CAD1B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9CAD1F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CAD200)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropCustomLightDir_TypeDefinitionIndex = 57228;

	class MonoEffectPluginCharaPropCustomLightDir : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Single UseCustomDir; // 0x40
		::UnityEngine::Vector3 CustomLightDir; // 0x44
		::UnityEngine::Transform* LightTrans; // 0x50
		::Il2CppArray<::System::Boolean>* Field_6_3; // 0x58
		::UnityEngine::Vector4 Field_6_4; // 0x60
		::UnityEngine::Vector3 Field_6_5; // 0x70
		::UnityEngine::Material* Field_6_6; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR_UNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* P0, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* P1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCUSTOMLIGHTDIR___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
