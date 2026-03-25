#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKSTARPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D6F70)
#define RPG_GAMECORE_TAROTBOOKSTARPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177D7070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookStarPanelRow_TypeDefinitionIndex = 13976;

	class TarotBookStarPanelRow : public ::System::Object
	{
	public:
		::System::String* LockedImgPath; // 0x10
		::System::UInt32 Position; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSTARPANELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookStarPanelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookStarPanelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKSTARPANELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
