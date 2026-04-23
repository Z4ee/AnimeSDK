#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTHEMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1863AB60)
#define RPG_GAMECORE_ACTIVITYTHEMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1863ADB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityThemeRow_TypeDefinitionIndex = 10716;

	class ActivityThemeRow : public ::System::Object
	{
	public:
		::System::String* LittleCornerIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* CornerIconPath; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 ThemeID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTHEMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityThemeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityThemeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTHEMEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
