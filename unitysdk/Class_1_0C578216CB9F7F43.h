#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }
namespace RPG::Client::ActivityAlley { class ClientAlleyPlacingShip; }

#define CLASS_1_0C578216CB9F7F43_METHOD_1_572729F5327ACF7F_OFFSET UNITYSDK_OFFSET(0xAF1BED0)
#define CLASS_1_0C578216CB9F7F43_METHOD_1_5EAE0D43B6EA01F3_OFFSET UNITYSDK_OFFSET(0xAF1D8B0)
#define CLASS_1_0C578216CB9F7F43_METHOD_1_7338D2E09ECF5FAD_OFFSET UNITYSDK_OFFSET(0xAF1D790)
#define CLASS_1_0C578216CB9F7F43_METHOD_1_8E56FB48CC81BED7_OFFSET UNITYSDK_OFFSET(0xAF1CE00)

inline static constexpr unsigned int Class_1_0C578216CB9F7F43_TypeDefinitionIndex = 69191;

class Class_1_0C578216CB9F7F43 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityAlley::ClientAlleyPlacingShip* Method_1_572729F5327ACF7F(::RPG::Client::ActivityAlley::AlleyPackShipData* a1)
	{
		return ((::RPG::Client::ActivityAlley::ClientAlleyPlacingShip*(*)(::RPG::Client::ActivityAlley::AlleyPackShipData*))((::PBYTE)hIl2Cpp + CLASS_1_0C578216CB9F7F43_METHOD_1_572729F5327ACF7F_OFFSET))(a1);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackGroupData* Method_1_8E56FB48CC81BED7(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_0C578216CB9F7F43_METHOD_1_8E56FB48CC81BED7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7338D2E09ECF5FAD(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_0C578216CB9F7F43_METHOD_1_7338D2E09ECF5FAD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5EAE0D43B6EA01F3(::RPG::Client::ActivityAlley::AlleyPackGroupData* a1, ::RPG::Client::ActivityAlley::AlleyPackGroupData* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::ActivityAlley::AlleyPackGroupData*, ::RPG::Client::ActivityAlley::AlleyPackGroupData*))((::PBYTE)hIl2Cpp + CLASS_1_0C578216CB9F7F43_METHOD_1_5EAE0D43B6EA01F3_OFFSET))(a1, a2);
	}
};
