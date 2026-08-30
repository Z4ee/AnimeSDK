#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEHANDBOOKMIRACLETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E7950)
#define RPG_GAMECORE_ROGUEHANDBOOKMIRACLETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E7B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookMiracleTypeRow_TypeDefinitionIndex = 14672;

	class RogueHandBookMiracleTypeRow : public ::System::Object
	{
	public:
		::System::String* TypeIcon; // 0x10
		::System::UInt32 RogueHandbookMiracleType; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C
		::RPG::Client::TextID RogueMiracleTypeTitle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKMIRACLETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueHandBookMiracleTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHandBookMiracleTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKMIRACLETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
