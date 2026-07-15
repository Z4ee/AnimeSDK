#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTHEMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AB126D0)
#define RPG_GAMECORE_ACTIVITYTHEMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB12920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityThemeRow_TypeDefinitionIndex = 10822;

	class ActivityThemeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* CornerIconPath; // 0x18
		::System::String* LittleCornerIconPath; // 0x20
		::System::UInt32 ThemeID; // 0x28
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTHEMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityThemeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityThemeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTHEMEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
