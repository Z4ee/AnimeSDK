#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRACKNPCTRACKCONFIG_METHOD_2_1475B64C80A48835_OFFSET UNITYSDK_OFFSET(0x19DED8E0)
#define RPG_GAMECORE_TRACKNPCTRACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEDA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcTrackConfig_TypeDefinitionIndex = 20957;

	class TrackNpcTrackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single VisibleDelta; // 0x10
		::System::Single InvisibleDelta; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCTRACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1475B64C80A48835(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNpcTrackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNpcTrackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCTRACKCONFIG_METHOD_2_1475B64C80A48835_OFFSET))(a1, a2);
		}
	};
}
