#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialTriggerParam; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B06B160)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06BD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideGroupRow_TypeDefinitionIndex = 14774;

	class TutorialGuideGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* FinishTriggerParams; // 0x10
		::Il2CppArray<::System::UInt32>* TutorialGuideIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* TriggerParams; // 0x20
		::System::Boolean CanReview; // 0x28
		::System::UInt32 GroupID; // 0x2C
		::System::UInt32 RewardID; // 0x30
		::RPG::GameCore::TutorialGuideShowType TutorialShowType; // 0x34
		::System::UInt32 TutorialType; // 0x38
		::System::UInt32 Order; // 0x3C
		::RPG::Client::TextID MessageText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
