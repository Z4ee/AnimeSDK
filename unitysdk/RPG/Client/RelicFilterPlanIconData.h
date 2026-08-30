#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_70;

#define RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B664EE0)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B664D20)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0x1B6653E0)
#define RPG_CLIENT_RELICFILTERPLANICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6657D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanIconData_TypeDefinitionIndex = 66887;

	class RelicFilterPlanIconData : public ::System::Object
	{
	public:
		::System::UInt32 IconId; // 0x10
		::System::Boolean IsAvatarIcon; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanIconData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanIconData* Create_1(::Class_1_21C7581DFE99F091_70* a1)
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)(::Class_1_21C7581DFE99F091_70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void FillToServerData(::Class_1_21C7581DFE99F091_70* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_FILLTOSERVERDATA_OFFSET))(this, a1);
		}
	};
}
