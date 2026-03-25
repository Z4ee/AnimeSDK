#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCMARKTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176036E0)
#define RPG_GAMECORE_ROGUEDLCMARKTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17603D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMarkTypeRow_TypeDefinitionIndex = 13515;

	class RogueDLCMarkTypeRow : public ::System::Object
	{
	public:
		::System::String* MarkTypeChessBoardIcon; // 0x10
		::System::UInt32 MarkTypeID; // 0x18
		::System::UInt32 BlockIntroID; // 0x1C
		::RPG::Client::TextID MarkTypeNameID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCMarkTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCMarkTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMARKTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
