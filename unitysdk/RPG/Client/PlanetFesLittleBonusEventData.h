#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesBonusEventData.h"

class Class_1_9BD68750D8B87DAA;

#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET UNITYSDK_OFFSET(0x1A975F20)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET UNITYSDK_OFFSET(0x1A9762C0)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0x1A976120)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A975EA0)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET UNITYSDK_OFFSET(0x1A976180)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0x1A976060)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLittleBonusEventData_TypeDefinitionIndex = 63599;

	class PlanetFesLittleBonusEventData : public ::RPG::Client::PlanetFesBonusEventData
	{
	public:
		::System::Boolean _WaitInteractResult; // 0x80
		::System::Boolean _IsPreviousExist; // 0x81

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean CanRefreshAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::Class_1_9BD68750D8B87DAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BD68750D8B87DAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__SYNCDETAIL_OFFSET))(this, a1);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Void _OnEventFinishCountUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET))(this);
		}

		::System::Void RequestInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET))(this);
		}
	};
}
