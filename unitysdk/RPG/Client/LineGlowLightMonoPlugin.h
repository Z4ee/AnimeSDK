#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_E87F0EF9CD288BB9_LineGlowBlendingMode.h"
#include "unitysdk/RPG/Client/LineGlowLightMonoPlugin_MaskChannle.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightTAMonoPluginBase_1.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_4_E87F0EF9CD288BB9;
namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_LINEGLOWLIGHTMONOPLUGIN_SETTSC_OFFSET UNITYSDK_OFFSET(0x19B7A270)
#define RPG_CLIENT_LINEGLOWLIGHTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7A2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LineGlowLightMonoPlugin_TypeDefinitionIndex = 67630;

	class LineGlowLightMonoPlugin : public ::ScenenLightManager::SceneManagedLightTAMonoPluginBase_1<::Class_4_E87F0EF9CD288BB9*>
	{
	public:
		::UnityEngine::Color Color; // 0x30
		::System::Single AlphaScale; // 0x40
		::System::Single BaseFadeOut; // 0x44
		::System::Single NoiseFrequence; // 0x48
		::System::Single NoiseSpeed; // 0x4C
		::System::Single HeadFade; // 0x50
		::System::Single Deform; // 0x54
		::System::Single FarDistanceFade; // 0x58
		::RPG::Client::LineGlowLightMonoPlugin_MaskChannle Channle; // 0x5C
		::Class_4_E87F0EF9CD288BB9_LineGlowBlendingMode BlendingMode; // 0x60
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x64
		::System::Int32 LightQualityVersion; // 0x68
		::System::String* CustomMatPath; // 0x70
		::UnityEngine::Material* CustomMat; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEGLOWLIGHTMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetTSC(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEGLOWLIGHTMONOPLUGIN_SETTSC_OFFSET))(this, a1, a2);
		}
	};
}
