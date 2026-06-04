#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193ED260)
#define RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193ED640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenEndingRow_TypeDefinitionIndex = 11161;

	class ActivityHipplenEndingRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID UnlockDesc; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 ID; // 0x48
		::System::Boolean IsShowInGuidePage; // 0x4C
		::System::UInt32 RewardID; // 0x50
		::RPG::GameCore::HipplenStatType StatType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenEndingRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenEndingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
