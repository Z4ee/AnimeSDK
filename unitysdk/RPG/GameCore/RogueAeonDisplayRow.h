#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEAEONDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175DD710)
#define RPG_GAMECORE_ROGUEAEONDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175DDF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonDisplayRow_TypeDefinitionIndex = 13557;

	class RogueAeonDisplayRow : public ::System::Object
	{
	public:
		::System::String* AeonImage; // 0x10
		::System::String* AeonFigure; // 0x18
		::System::String* AeonIcon; // 0x20
		::System::String* AeonBuffIcon; // 0x28
		::RPG::Client::TextID RogueAeonPathName; // 0x30
		::RPG::Client::TextID RogueAeonPathName2; // 0x40
		::System::UInt32 DisplayID; // 0x50
		::RPG::Client::TextID RogueAeonName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueAeonDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAeonDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
