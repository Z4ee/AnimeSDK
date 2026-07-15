#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }
namespace RPG::Client::ActivityAlley { class ClientAlleyPlacingShip; }

#define CLASS_1_0C578216CB9F7F43_METHOD_1_247668E30061368C_OFFSET UNITYSDK_OFFSET(0x15EA1E00)
#define CLASS_1_0C578216CB9F7F43_METHOD_1_5EAE0D43B6EA01F3_OFFSET UNITYSDK_OFFSET(0x15EA2970)
#define CLASS_1_0C578216CB9F7F43_METHOD_1_5F2444DCDF857405_OFFSET UNITYSDK_OFFSET(0x15EA2850)
#define CLASS_1_0C578216CB9F7F43_METHOD_1_E36E68CDD0777E58_OFFSET UNITYSDK_OFFSET(0x15EA0F30)

inline static constexpr unsigned int Class_1_0C578216CB9F7F43_TypeDefinitionIndex = 70712;

class Class_1_0C578216CB9F7F43 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityAlley::ClientAlleyPlacingShip* Method_1_E36E68CDD0777E58(::RPG::Client::ActivityAlley::AlleyPackShipData* a1)
	{
		return ((::RPG::Client::ActivityAlley::ClientAlleyPlacingShip*(*)(::RPG::Client::ActivityAlley::AlleyPackShipData*))((::PBYTE)hIl2Cpp + CLASS_1_0C578216CB9F7F43_METHOD_1_E36E68CDD0777E58_OFFSET))(a1);
	}

	static ::RPG::Client::ActivityAlley::AlleyPackGroupData* Method_1_247668E30061368C(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
	{
		return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_0C578216CB9F7F43_METHOD_1_247668E30061368C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5F2444DCDF857405(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1, ::RPG::Client::ActivityAlley::AlleyPackGoodData* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + CLASS_1_0C578216CB9F7F43_METHOD_1_5F2444DCDF857405_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5EAE0D43B6EA01F3(::RPG::Client::ActivityAlley::AlleyPackGroupData* a1, ::RPG::Client::ActivityAlley::AlleyPackGroupData* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::ActivityAlley::AlleyPackGroupData*, ::RPG::Client::ActivityAlley::AlleyPackGroupData*))((::PBYTE)hIl2Cpp + CLASS_1_0C578216CB9F7F43_METHOD_1_5EAE0D43B6EA01F3_OFFSET))(a1, a2);
	}
};
