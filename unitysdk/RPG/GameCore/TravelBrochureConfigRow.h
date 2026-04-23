#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B2D20)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190B3E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigRow_TypeDefinitionIndex = 14574;

	class TravelBrochureConfigRow : public ::System::Object
	{
	public:
		::System::String* BackgroundPrefab; // 0x10
		::System::String* PicPath; // 0x18
		::System::String* FrontPrefab; // 0x20
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x28
		::System::String* PasterAchievementPic; // 0x30
		::System::UInt32 FinishQuestID; // 0x38
		::System::UInt32 DiaryGroupID; // 0x3C
		::RPG::GameCore::TravelBrochureType Type; // 0x40
		::System::UInt32 Sort; // 0x44
		::System::UInt32 ID; // 0x48
		::System::Boolean ShowUnlockToast; // 0x4C
		::System::Boolean ShowInDirectory; // 0x4D
		::RPG::Client::TextID DirectoryName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TravelBrochureConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelBrochureConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
