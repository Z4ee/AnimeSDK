#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERSPIRITTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CBCF5A0)
#define RPG_GAMECORE_AETHERSPIRITTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCFD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherSpiritTypeRow_TypeDefinitionIndex = 10910;

	class AetherSpiritTypeRow : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* IconNatureForWeakActive; // 0x20
		::System::String* UnfullColor; // 0x28
		::System::String* SPInfoEffFront; // 0x30
		::System::String* Color; // 0x38
		::System::String* Name; // 0x40
		::RPG::GameCore::AetherSpiritType SpiritType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherSpiritTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherSpiritTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERSPIRITTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
