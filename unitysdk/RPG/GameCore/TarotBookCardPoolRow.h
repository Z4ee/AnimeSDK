#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKCARDPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D4500)
#define RPG_GAMECORE_TAROTBOOKCARDPOOLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177D46E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookCardPoolRow_TypeDefinitionIndex = 13948;

	class TarotBookCardPoolRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ClueList; // 0x10
		::Il2CppArray<::System::UInt32>* StoryList; // 0x18
		::Il2CppArray<::System::UInt32>* CardList; // 0x20
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDPOOLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookCardPoolRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookCardPoolRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCARDPOOLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
