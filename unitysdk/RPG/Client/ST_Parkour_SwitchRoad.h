#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ST_PARKOUR_SWITCHROAD_METHOD_4_24E28BE7C123299D_OFFSET UNITYSDK_OFFSET(0x1D320520)
#define RPG_CLIENT_ST_PARKOUR_SWITCHROAD_METHOD_4_8B94C91ABFA772B8_OFFSET UNITYSDK_OFFSET(0x1D3204D0)
#define RPG_CLIENT_ST_PARKOUR_SWITCHROAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D320510)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_SwitchRoad_TypeDefinitionIndex = 10255;

	class ST_Parkour_SwitchRoad : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean LeavePlayer; // 0x18
		::System::Boolean NeedAheadOfPlayer; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SWITCHROAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8B94C91ABFA772B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_SwitchRoad*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_SwitchRoad*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SWITCHROAD_METHOD_4_8B94C91ABFA772B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_24E28BE7C123299D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_SwitchRoad* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_SwitchRoad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SWITCHROAD_METHOD_4_24E28BE7C123299D_OFFSET))(a1, a2);
		}
	};
}
