#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrackNpcAlertConfig; }
namespace RPG::GameCore { class TrackNpcPerceiveConfig; }
namespace RPG::GameCore { class TrackNpcTrackConfig; }

#define RPG_GAMECORE_TRACKNPCZONECONFIG_METHOD_2_30D414AA1C03A2B1_OFFSET UNITYSDK_OFFSET(0x1D52F5A0)
#define RPG_GAMECORE_TRACKNPCZONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcZoneConfig_TypeDefinitionIndex = 21934;

	class TrackNpcZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::VisionZoneTag ZoneTag; // 0x10
		::RPG::GameCore::TrackNpcPerceiveConfig* PerceiveConfig; // 0x18
		::RPG::GameCore::TrackNpcAlertConfig* AlertConfig; // 0x20
		::RPG::GameCore::TrackNpcTrackConfig* TrackConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCZONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_30D414AA1C03A2B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNpcZoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNpcZoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCZONECONFIG_METHOD_2_30D414AA1C03A2B1_OFFSET))(a1, a2);
		}
	};
}
