#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5E5940)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigRow_TypeDefinitionIndex = 15199;

	class TravelBrochureConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x10
		::System::String* PasterAchievementPic; // 0x18
		::System::String* BackgroundPrefab; // 0x20
		::System::String* PicPath; // 0x28
		::System::String* FrontPrefab; // 0x30
		::System::Boolean ShowInDirectory; // 0x38
		::System::Boolean ShowUnlockToast; // 0x39
		::RPG::GameCore::TravelBrochureType Type; // 0x3C
		::RPG::Client::TextID DirectoryName; // 0x40
		::System::UInt32 Sort; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 DiaryGroupID; // 0x58
		::System::UInt32 FinishQuestID; // 0x5C

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
