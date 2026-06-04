#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_7;
namespace Proto { class AlleyPlacingShip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYALLEY_CLIENTALLEYPLACINGSHIP_TOPROTO_OFFSET UNITYSDK_OFFSET(0xB0A0830)
#define RPG_CLIENT_ACTIVITYALLEY_CLIENTALLEYPLACINGSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A0920)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int ClientAlleyPlacingShip_TypeDefinitionIndex = 69156;

	class ClientAlleyPlacingShip : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7FF19F6206AF6DD7_7*>* GoodsList; // 0x10
		::System::UInt32 ShipId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_CLIENTALLEYPLACINGSHIP__CTOR_OFFSET))(this);
		}

		::Proto::AlleyPlacingShip* ToProto()
		{
			return ((::Proto::AlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_CLIENTALLEYPLACINGSHIP_TOPROTO_OFFSET))(this);
		}
	};
}
