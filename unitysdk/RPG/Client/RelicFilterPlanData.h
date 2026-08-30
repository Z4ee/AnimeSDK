#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_26;
class Class_1_76E9E7372239DF6D;
namespace RPG::Client { class RelicFilterPlanIconData; }
namespace RPG::Client { class RelicFilterPlanSettingsData; }
namespace System { class String; }

#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B664E10)
#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B664BA0)
#define RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0x1B665120)
#define RPG_CLIENT_RELICFILTERPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B664D10)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanData_TypeDefinitionIndex = 66885;

	class RelicFilterPlanData : public ::System::Object
	{
	public:
		::RPG::Client::RelicFilterPlanIconData* Icon; // 0x10
		::System::String* Name; // 0x18
		::RPG::Client::RelicFilterPlanSettingsData* Settings; // 0x20
		::System::Int64 UpdateTimestamp; // 0x28
		::System::UInt32 SlotIndex; // 0x30
		::System::Boolean IsMarked; // 0x34
		::System::UInt32 AvatarIdOnCreate; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanData* Create_1(::Class_1_21DCD4640D389503_26* a1)
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)(::Class_1_21DCD4640D389503_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void FillToServerData(::Class_1_76E9E7372239DF6D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_76E9E7372239DF6D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET))(this, a1);
		}
	};
}
