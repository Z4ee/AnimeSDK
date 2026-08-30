#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5C0150)
#define RPG_GAMECORE_TAROTBOOKSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C0330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookStoryRow_TypeDefinitionIndex = 15063;

	class TarotBookStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ClueList; // 0x10
		::System::UInt32 PreStoryID; // 0x18
		::System::UInt32 CharacterID; // 0x1C
		::System::UInt32 CardID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookStoryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
