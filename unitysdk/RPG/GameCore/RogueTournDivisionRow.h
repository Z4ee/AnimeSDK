#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNDIVISIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB74520)
#define RPG_GAMECORE_ROGUETOURNDIVISIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB74820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournDivisionRow_TypeDefinitionIndex = 14367;

	class RogueTournDivisionRow : public ::System::Object
	{
	public:
		::System::String* DivisionIconPath; // 0x10
		::System::String* DivisionIconPrefabPath; // 0x18
		::System::String* DivisionSmallIconPath; // 0x20
		::RPG::Client::TextID DivisionName; // 0x28
		::RPG::Client::TextID DivisionHintDesc; // 0x38
		::System::UInt32 DivisionProgress; // 0x48
		::System::UInt32 DivisionLevel; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournDivisionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournDivisionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
