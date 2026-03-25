#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesSummaryNominateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESSUMMARYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174C0020)
#define RPG_GAMECORE_PLANETFESSUMMARYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174C0280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSummaryRow_TypeDefinitionIndex = 11206;

	class PlanetFesSummaryRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::Client::TextID Description; // 0x20
		::System::UInt32 TargetNum; // 0x30
		::RPG::GameCore::PlanetFesSummaryNominateType ID; // 0x34

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
