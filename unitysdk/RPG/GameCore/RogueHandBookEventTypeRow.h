#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B3D9A0)
#define RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3DB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookEventTypeRow_TypeDefinitionIndex = 14100;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueHandBookEventTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHandBookEventTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
