#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERGUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1717ABD0)
#define RPG_GAMECORE_DRINKMAKERGUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1717B4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestRow_TypeDefinitionIndex = 12029;

	class DrinkMakerGuestRow : public ::System::Object
	{
	public:
		::System::String* BigIconPath; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* EmotionProblemList; // 0x18
		::Il2CppArray<::System::UInt32>* FavorTagList; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* LinePath; // 0x30
		::RPG::Client::TextID BartenderGuestDesc; // 0x38
		::System::UInt32 MaxFaith; // 0x48
		::System::UInt32 FinishQuestID; // 0x4C
		::System::UInt32 GuestID; // 0x50
		::System::UInt32 FinishSubMissionID; // 0x54
		::System::UInt32 MaxFaithReward; // 0x58
		::RPG::Client::TextID BartenderGuestName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerGuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerGuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
