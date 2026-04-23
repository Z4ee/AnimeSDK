#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TITANATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1909DC70)
#define RPG_GAMECORE_TITANATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1909DF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanAtlasRow_TypeDefinitionIndex = 14498;

	class TitanAtlasRow : public ::System::Object
	{
	public:
		::System::UInt32 TitanVoicePoolID; // 0x10
		::System::UInt32 TitanGroupID; // 0x14
		::System::UInt32 ChangeUnlockID; // 0x18
		::System::UInt32 TitanID; // 0x1C
		::RPG::Client::TextID TitanName; // 0x20
		::RPG::Client::TextID TitanDesc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TitanAtlasRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TitanAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
