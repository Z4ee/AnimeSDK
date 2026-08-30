#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesBonusEventData.h"

class Class_1_2E7F169E0B5641A4;

#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET UNITYSDK_OFFSET(0x1C379DC0)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET UNITYSDK_OFFSET(0x1C37A190)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0x1C379FF0)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C379D40)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET UNITYSDK_OFFSET(0x1C37A050)
#define RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0x1C379F00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiddleBonusEventData_TypeDefinitionIndex = 66585;

	class PlanetFesMiddleBonusEventData : public ::RPG::Client::PlanetFesBonusEventData
	{
	public:
		::System::UInt32 _TotalNum; // 0x80
		::System::UInt32 _TakenNum; // 0x84
		::System::Boolean _WaitInteractResult; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean CanRefreshAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::Class_1_2E7F169E0B5641A4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E7F169E0B5641A4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__SYNCDETAIL_OFFSET))(this, a1);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Void _OnEventFinishCountUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET))(this);
		}

		::System::Void RequestInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMIDDLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET))(this);
		}
	};
}
