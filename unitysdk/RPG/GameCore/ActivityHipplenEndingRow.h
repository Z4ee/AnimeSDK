#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFC220)
#define RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFC600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenEndingRow_TypeDefinitionIndex = 10868;

	class ActivityHipplenEndingRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::System::Boolean IsShowInGuidePage; // 0x28
		::RPG::GameCore::HipplenStatType StatType; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 RewardID; // 0x44
		::RPG::Client::TextID UnlockDesc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenEndingRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenEndingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
