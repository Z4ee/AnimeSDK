#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/RPG/GameCore/PlanetFesStandType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7993E0)
#define RPG_GAMECORE_PLANETFESAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7999C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarRow_TypeDefinitionIndex = 12108;

	class PlanetFesAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Skill1List; // 0x10
		::System::String* Description; // 0x18
		::Il2CppArray<::System::UInt32>* GachaUnlockIDList; // 0x20
		::Il2CppArray<::System::UInt32>* Skill2List; // 0x28
		::System::String* MiniIcon; // 0x30
		::System::String* CargoIcon; // 0x38
		::System::String* AnimConfig; // 0x40
		::System::String* HeadIcon; // 0x48
		::System::String* MidIcon; // 0x50
		::System::String* Body; // 0x58
		::RPG::Client::TextID Name; // 0x60
		::System::UInt32 CD; // 0x70
		::System::UInt32 ItemID; // 0x74
		::System::UInt32 IncomeParam; // 0x78
		::RPG::GameCore::PlanetFesStandType PlanetType; // 0x7C
		::RPG::GameCore::PlanetFesLandType LandType; // 0x80
		::System::UInt32 Rarity; // 0x84
		::System::UInt32 ID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAvatarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
