#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DFD780)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DFED10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigRow_TypeDefinitionIndex = 14605;

	class TravelBrochureConfigRow : public ::System::Object
	{
	public:
		::System::String* PasterAchievementPic; // 0x10
		::System::String* BackgroundPrefab; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x20
		::System::String* FrontPrefab; // 0x28
		::System::String* PicPath; // 0x30
		::System::UInt32 DiaryGroupID; // 0x38
		::RPG::GameCore::TravelBrochureType Type; // 0x3C
		::System::UInt32 ID; // 0x40
		::System::Boolean ShowInDirectory; // 0x44
		::System::Boolean ShowUnlockToast; // 0x45
		::System::UInt32 Sort; // 0x48
		::System::UInt32 FinishQuestID; // 0x4C
		::RPG::Client::TextID DirectoryName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelBrochureConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelBrochureConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
