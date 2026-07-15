#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropRimLight_FilterType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_INIT_OFFSET UNITYSDK_OFFSET(0x19118850)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0x19118810)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_UNINIT_OFFSET UNITYSDK_OFFSET(0x19118B70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19118BC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1911A060)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropRimLight_TypeDefinitionIndex = 66840;

	class MonoEffectPluginCharaPropRimLight : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_Filter; // 0x40
		::RPG::Client::MonoEffectPluginCharaPropRimLight_FilterType _Filter; // 0x44
		::System::Boolean Toggle_RimBasicBias; // 0x48
		::System::Single _RimBasicBias; // 0x4C
		::System::Boolean Toggle_RimWidth; // 0x50
		::System::Single _RimWidth; // 0x54
		::System::Boolean Toggle_RimOffset; // 0x58
		::UnityEngine::Vector4 _RimOffset; // 0x5C
		::System::Boolean Toggle_FresnelColor; // 0x6C
		::UnityEngine::Color _FresnelColor; // 0x70
		::System::Boolean Toggle_FresnelBSI; // 0x80
		::UnityEngine::Vector4 _FresnelBSI; // 0x84
		::System::Boolean Toggle_FresnelColorStrength; // 0x94
		::System::Single _FresnelColorStrength; // 0x98
		::System::Boolean Toggle_RColor0; // 0x9C
		::UnityEngine::Color _RimColor0; // 0xA0
		::System::Boolean Toggle_RColor1; // 0xB0
		::UnityEngine::Color _RimColor1; // 0xB4
		::System::Boolean Toggle_RColor2; // 0xC4
		::UnityEngine::Color _RimColor2; // 0xC8
		::System::Boolean Toggle_RColor3; // 0xD8
		::UnityEngine::Color _RimColor3; // 0xDC
		::System::Boolean Toggle_RColor4; // 0xEC
		::UnityEngine::Color _RimColor4; // 0xF0
		::System::Boolean Toggle_RColor5; // 0x100
		::UnityEngine::Color _RimColor5; // 0x104
		::System::Boolean Toggle_RColor6; // 0x114
		::UnityEngine::Color _RimColor6; // 0x118
		::System::Boolean Toggle_RColor7; // 0x128
		::UnityEngine::Color _RimColor7; // 0x12C
		::System::Boolean Toggle_RColorIntensity; // 0x13C
		::System::Single _RimColorIntensity; // 0x140
		::Il2CppArray<::UnityEngine::Color>* Field_6_32; // 0x148
		::Il2CppArray<::System::Boolean>* Field_6_33; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_UNINIT_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMLIGHT_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
