#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NPCDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE87700)
#define RPG_GAMECORE_NPCDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE87EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCDataRow_TypeDefinitionIndex = 14173;

	class NPCDataRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID DefaultNPCTitle; // 0x28
		::RPG::Client::TextID DefaultNPCName; // 0x38
		::System::UInt32 SeriesID; // 0x48
		::RPG::GameCore::NPCSubType SubType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
