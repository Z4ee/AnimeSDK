#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9224F0)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D922C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockTypeRow_TypeDefinitionIndex = 14616;

	class RogueDLCBlockTypeRow : public ::System::Object
	{
	public:
		::System::String* BlockTypeChessBoardColor; // 0x10
		::System::String* BlockTypeChessBoardIcon; // 0x18
		::System::String* BlockTypeIcon; // 0x20
		::RPG::Client::TextID BlockTypeNameID; // 0x28
		::System::UInt32 BlockTypeID; // 0x38
		::System::UInt32 BlockIntroID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCBlockTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCBlockTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
