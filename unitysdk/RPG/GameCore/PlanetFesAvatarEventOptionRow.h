#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESAVATAREVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D797B40)
#define RPG_GAMECORE_PLANETFESAVATAREVENTOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D797E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarEventOptionRow_TypeDefinitionIndex = 12158;

	class PlanetFesAvatarEventOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextOptionList; // 0x10
		::System::UInt32 RewardPoolID; // 0x18
		::RPG::Client::TextID EventContent; // 0x20
		::RPG::Client::TextID OptionBubbleTalk; // 0x30
		::System::UInt32 ActivityRewardID; // 0x40
		::System::UInt32 EventOptionID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREVENTOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREVENTOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
