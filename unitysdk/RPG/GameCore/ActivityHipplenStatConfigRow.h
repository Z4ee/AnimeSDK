#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENSTATCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA09B30)
#define RPG_GAMECORE_ACTIVITYHIPPLENSTATCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA09DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenStatConfigRow_TypeDefinitionIndex = 11640;

	class ActivityHipplenStatConfigRow : public ::System::Object
	{
	public:
		::System::String* OutlineIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* BgColor; // 0x20
		::System::String* SmallIconPath; // 0x28
		::RPG::GameCore::HipplenStatType StatType; // 0x30
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSTATCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenStatConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenStatConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSTATCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
