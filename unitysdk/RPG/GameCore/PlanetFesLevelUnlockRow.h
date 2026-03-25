#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESLEVELUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174BE420)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174BEB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLevelUnlockRow_TypeDefinitionIndex = 11197;

	class PlanetFesLevelUnlockRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Description; // 0x28
		::RPG::Client::TextID Name; // 0x38

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
