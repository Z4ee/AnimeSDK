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

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_INIT_OFFSET UNITYSDK_OFFSET(0x1910B4B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_UNINIT_OFFSET UNITYSDK_OFFSET(0x1910B7A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1910B550)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDIFFUSELIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1910B7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropDiffuseLighting_TypeDefinitionIndex = 66817;

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
	};
}
