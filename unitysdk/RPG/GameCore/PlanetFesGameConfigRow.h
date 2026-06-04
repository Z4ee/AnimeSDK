#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESGAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A1D450)
#define RPG_GAMECORE_PLANETFESGAMECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1D660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGameConfigRow_TypeDefinitionIndex = 11672;

	class PlanetFesGameConfigRow : public ::System::Object
	{
	public:
		::System::String* ParamStr1; // 0x10
		::System::UInt32 RewardPool; // 0x18
		::System::UInt32 RaiseCurveID; // 0x1C
		::System::UInt32 ParamInt3; // 0x20
		::RPG::GameCore::PlanetFesGameType GameID; // 0x24
		::System::UInt32 LandID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesGameConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesGameConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
