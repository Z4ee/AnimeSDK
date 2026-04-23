#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialTriggerParam; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190D8960)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190D91D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideGroupRow_TypeDefinitionIndex = 14592;

	class TutorialGuideGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* TriggerParams; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* FinishTriggerParams; // 0x18
		::Il2CppArray<::System::UInt32>* TutorialGuideIDList; // 0x20
		::RPG::Client::TextID MessageText; // 0x28
		::System::UInt32 GroupID; // 0x38
		::System::Boolean CanReview; // 0x3C
		::RPG::GameCore::TutorialGuideShowType TutorialShowType; // 0x40
		::System::UInt32 Order; // 0x44
		::System::UInt32 RewardID; // 0x48
		::System::UInt32 TutorialType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TutorialGuideGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
