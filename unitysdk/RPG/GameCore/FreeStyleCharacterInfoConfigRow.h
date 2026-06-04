#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTERINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1976D660)
#define RPG_GAMECORE_FREESTYLECHARACTERINFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1976D7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterInfoConfigRow_TypeDefinitionIndex = 12667;

	class FreeStyleCharacterInfoConfigRow : public ::System::Object
	{
	public:
		::System::String* FreeStyleCharacterID; // 0x10
		::System::UInt32 AvatarFlagID; // 0x18
		::System::UInt32 AvatarBodyID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERINFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
