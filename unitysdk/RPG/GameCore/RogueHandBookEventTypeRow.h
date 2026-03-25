#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1760BFE0)
#define RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1760C1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookEventTypeRow_TypeDefinitionIndex = 13564;

	class RogueHandBookEventTypeRow : public ::System::Object
	{
	public:
		::System::String* TypeIcon; // 0x10
		::RPG::Client::TextID RogueEventTypeTitle; // 0x18
		::System::UInt32 RogueHandBookEventType; // 0x28
		::System::UInt32 ActivityModuleID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueHandBookEventTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHandBookEventTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
