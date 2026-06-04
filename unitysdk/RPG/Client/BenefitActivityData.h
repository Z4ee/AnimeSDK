#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_BENEFITACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xB425F60)
#define RPG_CLIENT_BENEFITACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB425D50)
#define RPG_CLIENT_BENEFITACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB425D40)
#define RPG_CLIENT_BENEFITACTIVITYDATA__EXISTINGOPERTABLETAB_OFFSET UNITYSDK_OFFSET(0xB425EC0)
#define RPG_CLIENT_BENEFITACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0xB425E00)
#define RPG_CLIENT_BENEFITACTIVITYDATA__ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB425FC0)
#define RPG_CLIENT_BENEFITACTIVITYDATA___IFIXBASEPROXY_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xB4260C0)
#define RPG_CLIENT_BENEFITACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xB426060)

namespace RPG::Client
{
	inline static constexpr unsigned int BenefitActivityData_TypeDefinitionIndex = 57594;

	class BenefitActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BENEFITACTIVITYDATA__CTOR_OFFSET))(this, a1);
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
