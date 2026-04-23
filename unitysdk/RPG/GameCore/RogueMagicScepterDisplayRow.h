#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D22310)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D22630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterDisplayRow_TypeDefinitionIndex = 14086;

	class RogueMagicScepterDisplayRow : public ::System::Object
	{
	public:
		::System::String* ScepterIconPath; // 0x10
		::System::String* ScepterFigurePath; // 0x18
		::System::UInt32 ScepterID; // 0x20
		::RPG::Client::TextID ScepterBGDesc; // 0x28
		::RPG::Client::TextID ScepterTriggerDesc; // 0x38
		::RPG::Client::TextID ScepterName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicScepterDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicScepterDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
