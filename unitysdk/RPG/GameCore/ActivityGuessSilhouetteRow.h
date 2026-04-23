#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYGUESSSILHOUETTEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861CD00)
#define RPG_GAMECORE_ACTIVITYGUESSSILHOUETTEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1861D260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityGuessSilhouetteRow_TypeDefinitionIndex = 11057;

	class ActivityGuessSilhouetteRow : public ::System::Object
	{
	public:
		::System::String* KeyIconPath; // 0x10
		::System::String* Aim01; // 0x18
		::System::String* Unlock; // 0x20
		::System::String* KeyIconPath2; // 0x28
		::System::String* SilhouetteIconPath; // 0x30
		::System::String* Tab; // 0x38
		::System::String* Daily; // 0x40
		::System::String* Title; // 0x48
		::System::String* Aim02; // 0x50
		::System::UInt32 ActivityID; // 0x58
		::System::UInt32 MissionID; // 0x5C
		::System::UInt32 Day; // 0x60
		::System::UInt32 Order; // 0x64
		::System::UInt32 QuestID; // 0x68
		::System::UInt32 FinishSubMissionID; // 0x6C
		::System::UInt32 ActivityModuleID; // 0x70
		::System::UInt32 BranchQuestID; // 0x74
		::System::UInt32 SilhouetteID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYGUESSSILHOUETTEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityGuessSilhouetteRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityGuessSilhouetteRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYGUESSSILHOUETTEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
