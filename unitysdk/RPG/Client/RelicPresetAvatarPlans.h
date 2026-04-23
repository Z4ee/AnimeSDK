#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A12346BA559A290;
namespace RPG::Client { class RelicPresetPlanData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_RELICPRESETAVATARPLANS_ADDPLAN_OFFSET UNITYSDK_OFFSET(0xAF9C050)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_CREATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xAF9B770)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_DELETEPLAN_OFFSET UNITYSDK_OFFSET(0xAF9C420)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF9BCE0)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_ISPLANFULL_OFFSET UNITYSDK_OFFSET(0xAF9BFF0)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_TRYGETPLAN_OFFSET UNITYSDK_OFFSET(0xAF9C160)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_1_OFFSET UNITYSDK_OFFSET(0xAF9C930)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_2_OFFSET UNITYSDK_OFFSET(0xAF9CA80)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_OFFSET UNITYSDK_OFFSET(0xAF9C270)
#define RPG_CLIENT_RELICPRESETAVATARPLANS__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9BBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetAvatarPlans_TypeDefinitionIndex = 61581;

	class RelicPresetAvatarPlans : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicPresetPlanData*>* PlanDict; // 0x10
		::System::UInt32 MaxPlanCount; // 0x18
		::System::UInt32 AvatarID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicPresetAvatarPlans* CreateByServer(::System::UInt32 avatarID, ::System::Collections::Generic::IEnumerable_1<::Class_1_0A12346BA559A290*>* plans)
		{
			return ((::RPG::Client::RelicPresetAvatarPlans*(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_1_0A12346BA559A290*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_CREATEBYSERVER_OFFSET))(avatarID, plans);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPlanFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_ISPLANFULL_OFFSET))(this);
		}

		::System::Void AddPlan(::Class_1_0A12346BA559A290* plan)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A12346BA559A290*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_ADDPLAN_OFFSET))(this, plan);
		}

		::System::Void DeletePlan(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_DELETEPLAN_OFFSET))(this, uniqueID);
		}

		::System::Boolean TryGetPlan(::System::UInt32 uniqueID, ::RPG::Client::RelicPresetPlanData*& planData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetPlanData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_TRYGETPLAN_OFFSET))(this, uniqueID, planData);
		}

		::System::Void UpdatePlan(::Class_1_0A12346BA559A290* plan)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A12346BA559A290*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_OFFSET))(this, plan);
		}

		::System::Void UpdatePlan_1(::System::UInt32 uniqueID, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_1_OFFSET))(this, uniqueID, name);
		}

		::System::Void UpdatePlan_2(::System::UInt32 uniqueID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* relicUniqueIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_2_OFFSET))(this, uniqueID, relicUniqueIDs);
		}
	};
}
