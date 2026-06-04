#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class NoviceQuestSingleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOVICEQUESTACTIVITYDATA_GETSORTEDDATAS_OFFSET UNITYSDK_OFFSET(0xC2EBDA0)
#define RPG_CLIENT_NOVICEQUESTACTIVITYDATA_REFRESHDATAS_OFFSET UNITYSDK_OFFSET(0xC2EB940)
#define RPG_CLIENT_NOVICEQUESTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xC2EBB80)
#define RPG_CLIENT_NOVICEQUESTACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2EB8F0)
#define RPG_CLIENT_NOVICEQUESTACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xC2EBDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int NoviceQuestActivityData_TypeDefinitionIndex = 57637;

	class NoviceQuestActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NoviceQuestSingleData*>* _PromotionDatas; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTACTIVITYDATA_REFRESHDATAS_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NoviceQuestSingleData*>* GetSortedDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NoviceQuestSingleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTACTIVITYDATA_GETSORTEDDATAS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOVICEQUESTACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}
	};
}
