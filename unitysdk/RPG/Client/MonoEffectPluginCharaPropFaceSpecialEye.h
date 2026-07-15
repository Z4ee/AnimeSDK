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

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACESPECIALEYE_INIT_OFFSET UNITYSDK_OFFSET(0x19114120)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACESPECIALEYE_UNINIT_OFFSET UNITYSDK_OFFSET(0x191148C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACESPECIALEYE_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x191141C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACESPECIALEYE__CTOR_OFFSET UNITYSDK_OFFSET(0x19114910)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropFaceSpecialEye_TypeDefinitionIndex = 66826;

	class MonoEffectPluginCharaPropFaceSpecialEye : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean _EnableSpecialEye; // 0x40
		::System::Boolean _UseEmission; // 0x41
		::System::Boolean Toggle_SpecialEyeShapeTexture; // 0x42
		::UnityEngine::Texture2D* _SpecialEyeShapeTexture; // 0x48
		::System::Boolean Toggle_EyeShapeTexTiling; // 0x50
		::UnityEngine::Vector2 _EyeShapeTexTiling; // 0x54
		::System::Boolean Toggle_EyeShapeTexOffset; // 0x5C
		::UnityEngine::Vector2 _EyeShapeTexOffset; // 0x60
		::System::Boolean Toggle_EyeCenter; // 0x68
		::UnityEngine::Vector4 _EyeCenter; // 0x6C
		::System::Boolean Toggle_EyeSPColor1; // 0x7C
		::UnityEngine::Color _EyeSPColor1; // 0x80
		::System::Boolean Toggle_EyeSPColor2; // 0x90
		::UnityEngine::Color _EyeSPColor2; // 0x94
		::System::Boolean Toggle_SpecialEyeIntensity; // 0xA4
		::System::Single _SpecialEyeIntensity; // 0xA8
		::Il2CppArray<::System::Boolean>* Field_6_16; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACESPECIALEYE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACESPECIALEYE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACESPECIALEYE_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACESPECIALEYE_UNINIT_OFFSET))(this);
		}
	};
}
