#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93D590)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93DCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicStyleTypeSelectRow_TypeDefinitionIndex = 14731;

	class RogueMagicStyleTypeSelectRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID EnumDesc; // 0x18
		::System::UInt32 DisplayID; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::RPG::GameCore::RogueMagicStyleType EnumType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
