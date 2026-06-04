#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHONETHEMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A02070)
#define RPG_GAMECORE_PHONETHEMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A02770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneThemeRow_TypeDefinitionIndex = 13754;

	class PhoneThemeRow : public ::System::Object
	{
	public:
		::System::String* PhoneThemeItem; // 0x10
		::System::String* PhoneThemeApp; // 0x18
		::System::String* PhoneThemeMain; // 0x20
		::System::UInt32 ShowParam; // 0x28
		::RPG::GameCore::PersonalizeShowType ShowType; // 0x2C
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhoneThemeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhoneThemeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
