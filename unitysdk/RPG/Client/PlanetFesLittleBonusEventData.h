#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesBonusEventData.h"

class Class_1_2E7F169E0B5641A4;

#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA_CANREFRESHAPPEAR_OFFSET UNITYSDK_OFFSET(0xDB53950)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA_REQUESTINTERACT_OFFSET UNITYSDK_OFFSET(0xDB53CF0)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0xDB53B50)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB538D0)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__ONEVENTFINISHCOUNTUPDATE_OFFSET UNITYSDK_OFFSET(0xDB53BB0)
#define RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0xDB53A90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLittleBonusEventData_TypeDefinitionIndex = 66584;

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

		::System::Void _SyncDetail(::Class_1_2E7F169E0B5641A4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E7F169E0B5641A4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLITTLEBONUSEVENTDATA__SYNCDETAIL_OFFSET))(this, a1);
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
