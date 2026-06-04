#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class UIMusicVisualization_MusicMixingBehavior; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Graphic; }

#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGMONOPLUGIN_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0xCB72310)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCB723A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMusicVisualization_MusicMixingMonoPlugin_TypeDefinitionIndex = 66245;

	class UIMusicVisualization_MusicMixingMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::UIMusicVisualization_MusicMixingBehavior*>
	{
	public:
		::System::Single MusicBlockLeftPercent; // 0x30
		::System::Single MusicBlockRightPercent; // 0x34
		::System::Single MusicBlockWidthFactor; // 0x38
		::System::Single MusicProgress; // 0x3C
		::UnityEngine::Vector4 MusicMixingChannel; // 0x40
		::System::Single MusicMixingTransitionTime; // 0x50
		::Il2CppArray<::UnityEngine::UI::Graphic*>* Graphics; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean SetMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGMONOPLUGIN_SETMATERIAL_OFFSET))(this, a1);
		}
	};
}
