#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_56;

#define RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC6D8300)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC6D8140)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0xC6D87F0)
#define RPG_CLIENT_RELICFILTERPLANICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D8BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanIconData_TypeDefinitionIndex = 62529;

	class RelicFilterPlanIconData : public ::System::Object
	{
	public:
		::System::Boolean IsAvatarIcon; // 0x10
		::System::UInt32 IconId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanIconData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanIconData* Create_1(::Class_1_21C7581DFE99F091_56* a1)
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)(::Class_1_21C7581DFE99F091_56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void FillToServerData(::Class_1_21C7581DFE99F091_56* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_FILLTOSERVERDATA_OFFSET))(this, a1);
		}
	};
}
