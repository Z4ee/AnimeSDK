#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_37;
namespace RPG::Client { class RelicFilterPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICFILTERPLANDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x19874150)
#define RPG_CLIENT_RELICFILTERPLANDATAGROUP_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x19874490)
#define RPG_CLIENT_RELICFILTERPLANDATAGROUP_GETRELICFILTERPLANDATA_OFFSET UNITYSDK_OFFSET(0x19874410)
#define RPG_CLIENT_RELICFILTERPLANDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19874220)
#define RPG_CLIENT_RELICFILTERPLANDATAGROUP__SYNC_OFFSET UNITYSDK_OFFSET(0x19874270)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanDataGroup_TypeDefinitionIndex = 63893;

	class RelicFilterPlanDataGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicFilterPlanData*>* _RelicFilterPlanData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanDataGroup* Create(::Class_1_7FF19F6206AF6DD7_37* a1)
		{
			return ((::RPG::Client::RelicFilterPlanDataGroup*(*)(::Class_1_7FF19F6206AF6DD7_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP_CREATE_OFFSET))(a1);
		}

		::System::Void _Sync(::Class_1_7FF19F6206AF6DD7_37* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP__SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::RelicFilterPlanData* GetRelicFilterPlanData(::System::Int32 a1)
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP_GETRELICFILTERPLANDATA_OFFSET))(this, a1);
		}

		::System::Int32 GetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATAGROUP_GETCOUNT_OFFSET))(this);
		}
	};
}
