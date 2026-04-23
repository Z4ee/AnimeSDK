#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENSTATCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861F5E0)
#define RPG_GAMECORE_ACTIVITYHIPPLENSTATCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1861F880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenStatConfigRow_TypeDefinitionIndex = 11103;

	class ActivityHipplenStatConfigRow : public ::System::Object
	{
	public:
		::System::String* BgColor; // 0x10
		::System::String* OutlineIconPath; // 0x18
		::System::String* SmallIconPath; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::RPG::GameCore::HipplenStatType StatType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSTATCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenStatConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenStatConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSTATCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
