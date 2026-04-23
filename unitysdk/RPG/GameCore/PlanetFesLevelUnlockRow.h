#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESLEVELUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C09A30)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0A170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLevelUnlockRow_TypeDefinitionIndex = 11600;

	class PlanetFesLevelUnlockRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID Description; // 0x20
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesLevelUnlockRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesLevelUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
