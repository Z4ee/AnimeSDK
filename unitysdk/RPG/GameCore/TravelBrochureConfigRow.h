#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B46B0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B57D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigRow_TypeDefinitionIndex = 14105;

	class TravelBrochureConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x10
		::System::String* PasterAchievementPic; // 0x18
		::System::String* FrontPrefab; // 0x20
		::System::String* PicPath; // 0x28
		::System::String* BackgroundPrefab; // 0x30
		::RPG::Client::TextID DirectoryName; // 0x38
		::System::UInt32 FinishQuestID; // 0x48
		::System::Boolean ShowUnlockToast; // 0x4C
		::System::Boolean ShowInDirectory; // 0x4D
		::RPG::GameCore::TravelBrochureType Type; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 Sort; // 0x58
		::System::UInt32 DiaryGroupID; // 0x5C

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
