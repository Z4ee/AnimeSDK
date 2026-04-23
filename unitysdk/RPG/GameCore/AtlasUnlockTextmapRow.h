#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186ACE20)
#define RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186ACFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AtlasUnlockTextmapRow_TypeDefinitionIndex = 11986;

	class AtlasUnlockTextmapRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::System::UInt32 UnlockID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AtlasUnlockTextmapRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AtlasUnlockTextmapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
