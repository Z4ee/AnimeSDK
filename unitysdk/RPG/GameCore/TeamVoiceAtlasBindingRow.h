#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMVOICEATLASBINDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1498C0)
#define RPG_GAMECORE_TEAMVOICEATLASBINDINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C149A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamVoiceAtlasBindingRow_TypeDefinitionIndex = 12204;

	class TeamVoiceAtlasBindingRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 AtlasVoiceID; // 0x14
		::System::UInt32 LinkAvatar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMVOICEATLASBINDINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamVoiceAtlasBindingRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamVoiceAtlasBindingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMVOICEATLASBINDINGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
