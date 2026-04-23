#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NPCDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B78620)
#define RPG_GAMECORE_NPCDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B78D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCDataRow_TypeDefinitionIndex = 13537;

	class NPCDataRow : public ::System::Object
	{
	public:
		::System::String* ConfigEntityPath; // 0x10
		::System::String* JsonPath; // 0x18
		::RPG::Client::TextID DefaultNPCName; // 0x20
		::RPG::Client::TextID DefaultNPCTitle; // 0x30
		::RPG::GameCore::NPCSubType SubType; // 0x40
		::System::UInt32 SeriesID; // 0x44
		::System::UInt32 ID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::NPCDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
