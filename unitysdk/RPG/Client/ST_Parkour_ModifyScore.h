#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_METHOD_4_3FD933B79C4CB108_OFFSET UNITYSDK_OFFSET(0x1CD62E20)
#define RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_METHOD_4_5F1E8AD70496397C_OFFSET UNITYSDK_OFFSET(0x1CD62DE0)
#define RPG_CLIENT_ST_PARKOUR_MODIFYSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD62E10)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ModifyScore_TypeDefinitionIndex = 10254;

	class ST_Parkour_ModifyScore : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single ActionIntervalTime; // 0x18
		::System::Single SwitchRoadScore; // 0x1C
		::System::Single SlowDownRegionScore; // 0x20
		::System::Single SpeedUpRegionScore; // 0x24
		::System::Single SpeedItemScore; // 0x28
		::System::Single SkillItemScore; // 0x2C
		::System::Single ObstacleScore; // 0x30
		::System::Single LocalPlayerScore; // 0x34
		::System::Single AIPlayerScore; // 0x38
		::System::Single LeavePlayerScore; // 0x3C
		::System::Single NearPlayerScore; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_MODIFYSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5F1E8AD70496397C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ModifyScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ModifyScore*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_METHOD_4_5F1E8AD70496397C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3FD933B79C4CB108(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ModifyScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ModifyScore*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_MODIFYSCORE_METHOD_4_3FD933B79C4CB108_OFFSET))(a1, a2);
		}
	};
}
