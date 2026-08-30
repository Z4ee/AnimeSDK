#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesSummaryNominateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESSUMMARYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A2530)
#define RPG_GAMECORE_PLANETFESSUMMARYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A2790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSummaryRow_TypeDefinitionIndex = 12197;

	class PlanetFesSummaryRow : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesSummaryNominateType ID; // 0x10
		::System::UInt32 TargetNum; // 0x14
		::RPG::Client::TextID Description; // 0x18
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSUMMARYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesSummaryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesSummaryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSUMMARYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
