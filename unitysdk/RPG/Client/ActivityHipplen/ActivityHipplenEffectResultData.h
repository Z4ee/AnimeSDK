#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_ADD_OFFSET UNITYSDK_OFFSET(0x8F160F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x8F141D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x8F146F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_GETVIEWDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x8F16BA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_GETVIEWDATA_OFFSET UNITYSDK_OFFSET(0x8F16CF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_RESET_OFFSET UNITYSDK_OFFSET(0x8F140C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F14D30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__GETHIPPLENSTATTYPEORDER_OFFSET UNITYSDK_OFFSET(0x8F170A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__GETVIEWDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x8F17100)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenEffectResultData_TypeDefinitionIndex = 61637;

	class ActivityHipplenEffectResultData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* StatusChange; // 0x10
		::Il2CppArray<::System::Single>* TempStatusChange; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_RESET_OFFSET))(this);
		}

		::System::Void Add(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_ADD_OFFSET))(this, data);
		}

		::System::Void CeilToInt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_CEILTOINT_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* Clone()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_CLONE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* GetViewData(::System::Boolean excludePressure, ::System::Boolean sort)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_GETVIEWDATA_OFFSET))(this, excludePressure, sort);
		}

		::System::Int32 GetViewDataByType(::RPG::GameCore::HipplenStatType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA_GETVIEWDATABYTYPE_OFFSET))(this, type);
		}

		::System::Int32 _GetHipplenStatTypeOrder(::RPG::GameCore::HipplenStatType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__GETHIPPLENSTATTYPEORDER_OFFSET))(this, type);
		}

		::System::Int32 _GetViewData_b__5_0(::RPG::Client::ActivityHipplen::StatusViewData x, ::RPG::Client::ActivityHipplen::StatusViewData y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::StatusViewData, ::RPG::Client::ActivityHipplen::StatusViewData))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTRESULTDATA__GETVIEWDATA_B__5_0_OFFSET))(this, x, y);
		}
	};
}
