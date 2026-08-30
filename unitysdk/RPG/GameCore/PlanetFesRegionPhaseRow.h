#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESREGIONPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D345B90)
#define RPG_GAMECORE_PLANETFESREGIONPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D345F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesRegionPhaseRow_TypeDefinitionIndex = 12174;

	class PlanetFesRegionPhaseRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ProgressValue; // 0x28
		::System::UInt32 BuffID; // 0x2C
		::System::UInt32 PhaseID; // 0x30
		::System::UInt32 RewardID; // 0x34
		::RPG::Client::TextID Description; // 0x38
		::RPG::Client::TextID EffectDesc; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESREGIONPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesRegionPhaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesRegionPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESREGIONPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
