#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelNPCUseAnimationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCINFOOVERRIDEIDLEANIM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1DAC90)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDEIDLEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DAF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCInfoOverrideIdleAnim_TypeDefinitionIndex = 17169;

	class LevelNPCInfoOverrideIdleAnim : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelNPCUseAnimationType DefaultAnimationType; // 0x10
		::System::String* DefaultIdleStateName; // 0x18
		::System::UInt32 DefaultIdleFreeStyleMotionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDEIDLEANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCInfoOverrideIdleAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCInfoOverrideIdleAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDEIDLEANIM_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
