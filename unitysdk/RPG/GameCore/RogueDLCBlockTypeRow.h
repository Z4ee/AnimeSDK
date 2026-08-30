#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D5620)
#define RPG_GAMECORE_ROGUEDLCBLOCKTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D5D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockTypeRow_TypeDefinitionIndex = 14616;

	class RogueDLCBlockTypeRow : public ::System::Object
	{
	public:
		::System::String* BlockTypeChessBoardColor; // 0x10
		::System::String* BlockTypeIcon; // 0x18
		::System::String* BlockTypeChessBoardIcon; // 0x20
		::System::UInt32 BlockTypeID; // 0x28
		::System::UInt32 BlockIntroID; // 0x2C
		::RPG::Client::TextID BlockTypeNameID; // 0x30

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
