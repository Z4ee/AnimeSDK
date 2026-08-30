#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }
namespace RPG::Client::RelicSmartSuit { class PlanDataManager; }
namespace System { class Exception; }

#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17955F40)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__0_OFFSET UNITYSDK_OFFSET(0x17958100)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__1_OFFSET UNITYSDK_OFFSET(0x17958120)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__2_OFFSET UNITYSDK_OFFSET(0x17958140)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__3_OFFSET UNITYSDK_OFFSET(0x17958210)
#define RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__4_OFFSET UNITYSDK_OFFSET(0x17958230)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PlanDataManager___c__DisplayClass11_0_TypeDefinitionIndex = 74315;

	class PlanDataManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* getRecommendDataPromise; // 0x10
		::RPG::Client::RelicSmartSuit::PlanDataManager* __4__this; // 0x18
		::RPG::Client::Promises::Promise* promise; // 0x20
		::RPG::Client::Promises::Promise* getRecommendBigDataPromise; // 0x28
		::System::UInt32 avatarRealID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRelicSmartSuitPlanDatas_b__0(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestRelicSmartSuitPlanDatas_b__1(::RPG::Client::Recommend::RelicRecommendBigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _RequestRelicSmartSuitPlanDatas_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__2_OFFSET))(this);
		}

		::System::Void _RequestRelicSmartSuitPlanDatas_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__3_OFFSET))(this);
		}

		::System::Void _RequestRelicSmartSuitPlanDatas_b__4(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PLANDATAMANAGER___C__DISPLAYCLASS11_0__REQUESTRELICSMARTSUITPLANDATAS_B__4_OFFSET))(this, a1);
		}
	};
}
