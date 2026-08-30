#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCMARKTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3DF4C0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DFB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMarkTypeRow_TypeDefinitionIndex = 14620;

	class RogueDLCMarkTypeRow : public ::System::Object
	{
	public:
		::System::String* MarkTypeChessBoardIcon; // 0x10
		::RPG::Client::TextID MarkTypeNameID; // 0x18
		::System::UInt32 BlockIntroID; // 0x28
		::System::UInt32 MarkTypeID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCMarkTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCMarkTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
