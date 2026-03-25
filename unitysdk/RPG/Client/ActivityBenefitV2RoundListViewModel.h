#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91EDF801EFB7E1C2;
namespace RPG::Client { class ActivityBenefitV2RoundListViewModel_Round; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x8EF5FA0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EF6700)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_GETROUND_OFFSET UNITYSDK_OFFSET(0x8EF6AB0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_GET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x8EF6A60)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8EF6080)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL__ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0x8EF6B40)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RoundListViewModel_TypeDefinitionIndex = 49820;

	class ActivityBenefitV2RoundListViewModel : public ::System::Object
	{
	public:
		::Class_1_91EDF801EFB7E1C2* _Season; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitV2RoundListViewModel_Round*>* _Rounds; // 0x18

		::System::Void _ctor(::Class_1_91EDF801EFB7E1C2* season)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_91EDF801EFB7E1C2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL__CTOR_OFFSET))(this, season);
		}

		static ::RPG::Client::ActivityBenefitV2RoundListViewModel* Create()
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_RoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_GET_ROUNDCOUNT_OFFSET))(this);
		}

		::RPG::Client::ActivityBenefitV2RoundListViewModel_Round* GetRound(::System::Int32 index)
		{
			return ((::RPG::Client::ActivityBenefitV2RoundListViewModel_Round*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL_GETROUND_OFFSET))(this, index);
		}

		::System::Void _OnDrawFinished(::System::Int32 roundIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUNDLISTVIEWMODEL__ONDRAWFINISHED_OFFSET))(this, roundIndex);
		}
	};
}
