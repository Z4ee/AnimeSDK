#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNDIVISIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D72780)
#define RPG_GAMECORE_ROGUETOURNDIVISIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D72A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournDivisionRow_TypeDefinitionIndex = 14158;

	class RogueTournDivisionRow : public ::System::Object
	{
	public:
		::System::String* DivisionIconPrefabPath; // 0x10
		::System::String* DivisionIconPath; // 0x18
		::System::String* DivisionSmallIconPath; // 0x20
		::RPG::Client::TextID DivisionName; // 0x28
		::System::UInt32 DivisionProgress; // 0x38
		::System::UInt32 DivisionLevel; // 0x3C
		::RPG::Client::TextID DivisionHintDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournDivisionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournDivisionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
