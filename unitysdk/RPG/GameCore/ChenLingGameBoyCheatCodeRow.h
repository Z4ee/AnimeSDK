#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C388510)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C388B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyCheatCodeRow_TypeDefinitionIndex = 13581;

	class ChenLingGameBoyCheatCodeRow : public ::System::Object
	{
	public:
		::System::String* CorrectmapPath; // 0x10
		::System::String* GameBoyCheatCodeString; // 0x18
		::System::String* WrongmapPath; // 0x20
		::System::String* BasemapPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
