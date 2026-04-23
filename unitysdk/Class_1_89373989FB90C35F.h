#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }
namespace RPG::Client::ActivityAlley { class ClientAlleyPlacingShip; }

#define CLASS_1_89373989FB90C35F_METHOD_1_1C67AE34DDCA79E1_OFFSET UNITYSDK_OFFSET(0x9B8CD90)
#define CLASS_1_89373989FB90C35F_METHOD_1_7338D2E09ECF5FAD_OFFSET UNITYSDK_OFFSET(0x9B8D640)
#define CLASS_1_89373989FB90C35F_METHOD_1_A4EE0BB5AF797A37_OFFSET UNITYSDK_OFFSET(0x9B8D760)
#define CLASS_1_89373989FB90C35F_METHOD_1_EAB675F5C0DC88DE_OFFSET UNITYSDK_OFFSET(0x9B8BDC0)

inline static constexpr unsigned int Class_1_89373989FB90C35F_TypeDefinitionIndex = 68217;

class Class_1_89373989FB90C35F : public ::System::Object
{
public:
	static ::RPG::Client::ActivityAlley::ClientAlleyPlacingShip* Method_1_EAB675F5C0DC88DE(::RPG::Client::ActivityAlley::AlleyPackShipData* a1)
	{
		return ((::RPG::Client::ActivityAlley::ClientAlleyPlacingShip*(*)(::RPG::Client::ActivityAlley::AlleyPackShipData*))((::PBYTE)hIl2Cpp + CLASS_1_89373989FB90C35F_METHOD_1_EAB675F5C0DC88DE_OFFSET))(a1);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackGroupData* Method_1_1C67AE34DDCA79E1(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_89373989FB90C35F_METHOD_1_1C67AE34DDCA79E1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7338D2E09ECF5FAD(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_89373989FB90C35F_METHOD_1_7338D2E09ECF5FAD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A4EE0BB5AF797A37(::RPG::Client::ActivityAlley::AlleyPackGroupData* a1, ::RPG::Client::ActivityAlley::AlleyPackGroupData* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::ActivityAlley::AlleyPackGroupData*, ::RPG::Client::ActivityAlley::AlleyPackGroupData*))((::PBYTE)hIl2Cpp + CLASS_1_89373989FB90C35F_METHOD_1_A4EE0BB5AF797A37_OFFSET))(a1, a2);
	}
};
