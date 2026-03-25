#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D46F0)
#define RPG_GAMECORE_TAROTBOOKCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177D4810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCardRow_TypeDefinitionIndex = 13954;

	class TarotBookCardRow : public ::System::Object
	{
	public:
		::System::UInt32 CharacterID; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookCardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
