#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPARKOURAICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18625DF0)
#define RPG_GAMECORE_ACTIVITYPARKOURAICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18626340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityParkourAIConfigRow_TypeDefinitionIndex = 11488;

	class ActivityParkourAIConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* ResPath; // 0x18
		::System::Single SwitchRoadScore; // 0x20
		::System::Single SpeedUpRegionScore; // 0x24
		::System::Single LocalPlayerScore; // 0x28
		::System::Single LeavePlayerScore; // 0x2C
		::System::Single NearPlayerScore; // 0x30
		::System::Single ObstacleScore; // 0x34
		::System::Single SpeedItemScore; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::System::Single SkillItemScore; // 0x50
		::System::Single ActionIntervalTime; // 0x54
		::System::Single SlowDownRegionScore; // 0x58
		::System::Single AIPlayerScore; // 0x5C
		::System::UInt32 ID; // 0x60
		::System::UInt32 CalcStepCnt; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPARKOURAICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityParkourAIConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityParkourAIConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPARKOURAICONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
