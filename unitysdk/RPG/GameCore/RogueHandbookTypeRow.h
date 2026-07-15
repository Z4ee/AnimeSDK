#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEHANDBOOKTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB0790)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB0EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandbookTypeRow_TypeDefinitionIndex = 14243;

	class RogueHandbookTypeRow : public ::System::Object
	{
	public:
		::System::String* HandBookIconPath; // 0x10
		::System::UInt32 HandBookType; // 0x18
		::RPG::Client::TextID RogueHandBookType; // 0x20
		::RPG::Client::TextID RogueHandBookDesc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueHandbookTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHandbookTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
