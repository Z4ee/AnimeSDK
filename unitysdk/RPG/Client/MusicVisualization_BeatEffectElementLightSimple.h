#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementLightSimple_ControlType.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementLightSimple_LightType.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_159F4A26A6FBCACF;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace VLB { class VolumetricLightBeam; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xD921400)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_1A0D3B20C2CC55DC_OFFSET UNITYSDK_OFFSET(0xD9214A0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_72C9BF8D288CE1D3_1_OFFSET UNITYSDK_OFFSET(0xD921700)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_72C9BF8D288CE1D3_OFFSET UNITYSDK_OFFSET(0xD921520)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xD920F70)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD921880)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementLightSimple_TypeDefinitionIndex = 70774;

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

		::System::Void Method_2_1A0D3B20C2CC55DC(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_1A0D3B20C2CC55DC_OFFSET))(this, a1);
		}

		::System::Void Method_2_72C9BF8D288CE1D3(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_72C9BF8D288CE1D3_OFFSET))(this, a1);
		}

		::System::Void Method_2_72C9BF8D288CE1D3_1(::Class_1_159F4A26A6FBCACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_159F4A26A6FBCACF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTLIGHTSIMPLE_METHOD_2_72C9BF8D288CE1D3_1_OFFSET))(this, a1);
		}
	};
}
