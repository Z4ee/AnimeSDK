#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_INIT_OFFSET UNITYSDK_OFFSET(0x1911D9F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_UNINIT_OFFSET UNITYSDK_OFFSET(0x1911EB20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1911DA90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY__CTOR_OFFSET UNITYSDK_OFFSET(0x1911EC40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropStarrySky_TypeDefinitionIndex = 66844;

	class MonoEffectPluginCharaPropStarrySky : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean _EnableStarrySky; // 0x40
		::System::Boolean Toggle_SkyTex; // 0x41
		::UnityEngine::Texture2D* _SkyTex; // 0x48
		::System::Boolean Toggle_SkyTexTiling; // 0x50
		::UnityEngine::Vector2 _SkyTexTiling; // 0x54
		::System::Boolean Toggle_SkyTexOffset; // 0x5C
		::UnityEngine::Vector2 _SkyTexOffset; // 0x60
		::System::Boolean Toggle_SkyMask; // 0x68
		::UnityEngine::Texture2D* _SkyMask; // 0x70
		::System::Boolean Toggle_SkyMaskTiling; // 0x78
		::UnityEngine::Vector2 _SkyMaskTiling; // 0x7C
		::System::Boolean Toggle_SkyMaskOffset; // 0x84
		::UnityEngine::Vector2 _SkyMaskOffset; // 0x88
		::System::Boolean Toggle_SkyRange; // 0x90
		::System::Single _SkyRange; // 0x94
		::System::Boolean Toggle_SkyStarColor; // 0x98
		::UnityEngine::Color _SkyStarColor; // 0x9C
		::System::Boolean Toggle_SkyStarTex; // 0xAC
		::UnityEngine::Texture2D* _SkyStarTex; // 0xB0
		::System::Boolean Toggle_SkyStarTexTiling; // 0xB8
		::UnityEngine::Vector2 _SkyStarTexTiling; // 0xBC
		::System::Boolean Toggle_SkyStarTexOffset; // 0xC4
		::UnityEngine::Vector2 _SkyStarTexOffset; // 0xC8
		::System::Boolean Toggle_SkyStarTexScale; // 0xD0
		::System::Single _SkyStarTexScale; // 0xD4
		::System::Boolean Toggle_SkyStarSpeed; // 0xD8
		::UnityEngine::Vector4 _SkyStarSpeed; // 0xDC
		::System::Boolean Toggle_SkyStarDepthScale; // 0xEC
		::System::Single _SkyStarDepthScale; // 0xF0
		::System::Boolean Toggle_SkyStarMaskTex; // 0xF4
		::UnityEngine::Texture2D* _SkyStarMaskTex; // 0xF8
		::System::Boolean Toggle_SkyStarMaskTexTiling; // 0x100
		::UnityEngine::Vector2 _SkyStarMaskTexTiling; // 0x104
		::System::Boolean Toggle_SkyStarMaskTexOffset; // 0x10C
		::UnityEngine::Vector2 _SkyStarMaskTexOffset; // 0x110
		::System::Boolean Toggle_SkyStarMaskTexScale; // 0x118
		::System::Single _SkyStarMaskTexScale; // 0x11C
		::System::Boolean Toggle_SkyStarMaskTexSpeed; // 0x120
		::System::Single _SkyStarMaskTexSpeed; // 0x124
		::System::Boolean Toggle_SkyFresnelColor; // 0x128
		::UnityEngine::Color _SkyFresnelColor; // 0x12C
		::System::Boolean Toggle_SkyFresnelBaise; // 0x13C
		::System::Single _SkyFresnelBaise; // 0x140
		::System::Boolean Toggle_SkyFresnelScale; // 0x144
		::System::Single _SkyFresnelScale; // 0x148
		::System::Boolean Toggle_SkyFresnelSmooth; // 0x14C
		::System::Single _SkyFresnelSmooth; // 0x150
		::Il2CppArray<::System::Boolean>* Field_6_47; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTARRYSKY_UNINIT_OFFSET))(this, a1);
		}
	};
}
