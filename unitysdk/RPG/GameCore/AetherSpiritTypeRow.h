#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERSPIRITTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1868F990)
#define RPG_GAMECORE_AETHERSPIRITTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18690100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherSpiritTypeRow_TypeDefinitionIndex = 10481;

	class AetherSpiritTypeRow : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Color; // 0x18
		::System::String* UnfullColor; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* IconNatureForWeakActive; // 0x30
		::System::String* SPInfoEffFront; // 0x38
		::System::String* SmallIconPath; // 0x40
		::RPG::GameCore::AetherSpiritType SpiritType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherSpiritTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherSpiritTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
