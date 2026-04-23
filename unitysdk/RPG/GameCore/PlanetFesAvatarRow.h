#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/RPG/GameCore/PlanetFesStandType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C020F0)
#define RPG_GAMECORE_PLANETFESAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C026F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarRow_TypeDefinitionIndex = 11520;

	class PlanetFesAvatarRow : public ::System::Object
	{
	public:
		::System::String* CargoIcon; // 0x10
		::System::String* Description; // 0x18
		::System::String* MiniIcon; // 0x20
		::System::String* HeadIcon; // 0x28
		::Il2CppArray<::System::UInt32>* GachaUnlockIDList; // 0x30
		::Il2CppArray<::System::UInt32>* Skill1List; // 0x38
		::Il2CppArray<::System::UInt32>* Skill2List; // 0x40
		::System::String* AnimConfig; // 0x48
		::System::String* MidIcon; // 0x50
		::System::String* Body; // 0x58
		::System::UInt32 IncomeParam; // 0x60
		::System::UInt32 ID; // 0x64
		::System::UInt32 Rarity; // 0x68
		::RPG::GameCore::PlanetFesStandType PlanetType; // 0x6C
		::RPG::GameCore::PlanetFesLandType LandType; // 0x70
		::RPG::Client::TextID Name; // 0x78
		::System::UInt32 ItemID; // 0x88
		::System::UInt32 CD; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
