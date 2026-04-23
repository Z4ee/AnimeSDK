#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesSummaryNominateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESSUMMARYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C0B630)
#define RPG_GAMECORE_PLANETFESSUMMARYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0B890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSummaryRow_TypeDefinitionIndex = 11609;

	class PlanetFesSummaryRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::GameCore::PlanetFesSummaryNominateType ID; // 0x20
		::System::UInt32 TargetNum; // 0x24
		::RPG::Client::TextID Description; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSUMMARYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesSummaryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesSummaryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSUMMARYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
