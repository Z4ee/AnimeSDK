#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24431A17BC9432A1;
class Class_1_52DCEE691286F89A_1;
namespace RPG::Client { class RelicFilterPlanIconData; }
namespace RPG::Client { class RelicFilterPlanSettingsData; }
namespace System { class String; }

#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xAF914F0)
#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAF91280)
#define RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0xAF91800)
#define RPG_CLIENT_RELICFILTERPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF913F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanData_TypeDefinitionIndex = 61594;

	class RelicFilterPlanData : public ::System::Object
	{
	public:
		::RPG::Client::RelicFilterPlanIconData* Icon; // 0x10
		::System::String* Name; // 0x18
		::RPG::Client::RelicFilterPlanSettingsData* Settings; // 0x20
		::System::UInt32 AvatarIdOnCreate; // 0x28
		::System::Boolean IsMarked; // 0x2C
		::System::Int64 UpdateTimestamp; // 0x30
		::System::UInt32 SlotIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanData* Create_1(::Class_1_52DCEE691286F89A_1* severData)
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)(::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET))(severData);
		}

		::System::Void FillToServerData(::Class_1_24431A17BC9432A1* req)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24431A17BC9432A1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET))(this, req);
		}
	};
}
