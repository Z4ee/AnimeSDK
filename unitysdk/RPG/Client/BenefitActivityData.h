#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_BENEFITACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x91E2110)
#define RPG_CLIENT_BENEFITACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x91E1F00)
#define RPG_CLIENT_BENEFITACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91E1EF0)
#define RPG_CLIENT_BENEFITACTIVITYDATA__EXISTINGOPERTABLETAB_OFFSET UNITYSDK_OFFSET(0x91E2070)
#define RPG_CLIENT_BENEFITACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x91E1FB0)
#define RPG_CLIENT_BENEFITACTIVITYDATA__ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x91E2170)
#define RPG_CLIENT_BENEFITACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x91E2280)
#define RPG_CLIENT_BENEFITACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x91E2210)

namespace RPG::Client
{
	inline static constexpr unsigned int BenefitActivityData_TypeDefinitionIndex = 49969;

	class BenefitActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean _HaveRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean _ExistingOpertableTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA__EXISTINGOPERTABLETAB_OFFSET))(this);
		}

		::System::Boolean _IsAllRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA__ISALLREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}
	};
}
