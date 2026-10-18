#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TITANATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB8A330)
#define RPG_GAMECORE_TITANATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8A5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanAtlasRow_TypeDefinitionIndex = 15298;

	class TitanAtlasRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TitanName; // 0x10
		::System::UInt32 TitanGroupID; // 0x20
		::System::UInt32 ChangeUnlockID; // 0x24
		::RPG::Client::TextID TitanDesc; // 0x28
		::System::UInt32 TitanID; // 0x38
		::System::UInt32 TitanVoicePoolID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TitanAtlasRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TitanAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
