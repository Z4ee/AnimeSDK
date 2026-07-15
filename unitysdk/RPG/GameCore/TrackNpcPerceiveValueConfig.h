#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRACKNPCPERCEIVEVALUECONFIG_METHOD_2_654B493F1648967E_OFFSET UNITYSDK_OFFSET(0x1C159AF0)
#define RPG_GAMECORE_TRACKNPCPERCEIVEVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C159CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcPerceiveValueConfig_TypeDefinitionIndex = 21368;

	class TrackNpcPerceiveValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CrouchDelta; // 0x10
		::System::Single StandDelta; // 0x14
		::System::Single WalkDelta; // 0x18
		::System::Single RunDelta; // 0x1C
		::System::Single FastRunDelta; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCPERCEIVEVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_654B493F1648967E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNpcPerceiveValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNpcPerceiveValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCPERCEIVEVALUECONFIG_METHOD_2_654B493F1648967E_OFFSET))(a1, a2);
		}
	};
}
