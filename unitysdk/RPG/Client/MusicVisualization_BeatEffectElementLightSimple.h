#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementLightSimple_ControlType.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementLightSimple_LightType.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_159F4A26A6FBCACF;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace VLB { class VolumetricLightBeam; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xD922030)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_29D3471F269E3CC3_OFFSET UNITYSDK_OFFSET(0xD9220D0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xD921BA0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_95D919A3FFE39CED_OFFSET UNITYSDK_OFFSET(0xD922150)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_A05498267EE1C590_OFFSET UNITYSDK_OFFSET(0xD922340)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD9224E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementLightSimple_TypeDefinitionIndex = 70812;

	class MusicVisualization_BeatEffectElementLightSimple : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::RPG::Client::MusicVisualization_BeatEffectElementLightSimple_LightType LightMode; // 0x30
		::RPG::Client::MusicVisualization_BeatEffectElementLightSimple_ControlType ControlMode; // 0x34
		::System::Boolean IncludeChilds; // 0x38
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x40
		::System::Collections::Generic::List_1<::VLB::VolumetricLightBeam*>* _volumetricLightBeams; // 0x48
		::System::Int32 _ColorIndex; // 0x50
		::System::Single _PerMusicVal; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_89EF21CA0414B145()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_89EF21CA0414B145_OFFSET))(this);
		}

		::System::Void Method_2_097468641FDED14E(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
		}

		::System::Void Method_2_29D3471F269E3CC3(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_29D3471F269E3CC3_OFFSET))(this, a1);
		}

		::System::Void Method_2_95D919A3FFE39CED(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_95D919A3FFE39CED_OFFSET))(this, a1);
		}

		::System::Void Method_2_A05498267EE1C590(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_A05498267EE1C590_OFFSET))(this, a1);
		}
	};
}
