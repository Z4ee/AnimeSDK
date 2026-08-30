#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4C7B8542D6DC5824;
namespace RPG::Client { class RelicPresetPlanData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_RELICPRESETAVATARPLANS_ADDPLAN_OFFSET UNITYSDK_OFFSET(0x1B66F0F0)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_CREATEBYSERVER_OFFSET UNITYSDK_OFFSET(0x1B66E640)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_DELETEPLAN_OFFSET UNITYSDK_OFFSET(0x1B66F480)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B66ED60)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_ISPLANFULL_OFFSET UNITYSDK_OFFSET(0x1B66F090)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_TRYGETPLAN_OFFSET UNITYSDK_OFFSET(0x1B66F200)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_1_OFFSET UNITYSDK_OFFSET(0x1B66FB20)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_2_OFFSET UNITYSDK_OFFSET(0x1B66FC70)
#define RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_OFFSET UNITYSDK_OFFSET(0x1B66F2D0)
#define RPG_CLIENT_RELICPRESETAVATARPLANS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66EC30)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetAvatarPlans_TypeDefinitionIndex = 66871;

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

		static ::RPG::Client::RelicPresetAvatarPlans* CreateByServer(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_4C7B8542D6DC5824*>* a2)
		{
			return ((::RPG::Client::RelicPresetAvatarPlans*(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_1_4C7B8542D6DC5824*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_CREATEBYSERVER_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPlanFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_ISPLANFULL_OFFSET))(this);
		}

		::System::Void AddPlan(::Class_1_4C7B8542D6DC5824* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4C7B8542D6DC5824*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_ADDPLAN_OFFSET))(this, a1);
		}

		::System::Void DeletePlan(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_DELETEPLAN_OFFSET))(this, a1);
		}

		::System::Boolean TryGetPlan(::System::UInt32 a1, ::RPG::Client::RelicPresetPlanData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetPlanData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_TRYGETPLAN_OFFSET))(this, a1, a2);
		}

		::System::Void UpdatePlan(::Class_1_4C7B8542D6DC5824* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4C7B8542D6DC5824*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_OFFSET))(this, a1);
		}

		::System::Void UpdatePlan_1(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_1_OFFSET))(this, a1, a2);
		}

		::System::Void UpdatePlan_2(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAVATARPLANS_UPDATEPLAN_2_OFFSET))(this, a1, a2);
		}
	};
}
