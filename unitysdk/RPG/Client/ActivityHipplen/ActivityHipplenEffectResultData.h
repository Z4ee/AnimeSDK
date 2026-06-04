#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_ADD_OFFSET UNITYSDK_OFFSET(0xB0CA350)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_CEILTOINT_OFFSET UNITYSDK_OFFSET(0xB0CA8D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB0CAAC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_GETVIEWDATABYTYPE_OFFSET UNITYSDK_OFFSET(0xB0C9860)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_GETVIEWDATA_OFFSET UNITYSDK_OFFSET(0xB0CADD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xB0CA150)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C9AF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__GETHIPPLENSTATTYPEORDER_OFFSET UNITYSDK_OFFSET(0xB0CB2B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__GETVIEWDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xB0CB310)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenEffectResultData_TypeDefinitionIndex = 70359;

	class ActivityHipplenEffectResultData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* TempStatusChange; // 0x10
		::Il2CppArray<::System::Int32>* StatusChange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_RESET_OFFSET))(this);
		}

		::System::Void Add(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_ADD_OFFSET))(this, a1);
		}

		::System::Void CeilToInt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_CEILTOINT_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* Clone()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_CLONE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* GetViewData(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_GETVIEWDATA_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetViewDataByType(::RPG::GameCore::HipplenStatType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_GETVIEWDATABYTYPE_OFFSET))(this, a1);
		}

		::System::Int32 _GetHipplenStatTypeOrder(::RPG::GameCore::HipplenStatType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__GETHIPPLENSTATTYPEORDER_OFFSET))(this, a1);
		}

		::System::Int32 _GetViewData_b__5_0(::RPG::Client::ActivityHipplen::StatusViewData a1, ::RPG::Client::ActivityHipplen::StatusViewData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::StatusViewData, ::RPG::Client::ActivityHipplen::StatusViewData))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__GETVIEWDATA_B__5_0_OFFSET))(this, a1, a2);
		}
	};
}
