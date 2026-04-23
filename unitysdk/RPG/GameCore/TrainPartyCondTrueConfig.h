#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_5_1CA2F0CBEA04C73F_OFFSET UNITYSDK_OFFSET(0x190A8FC0)
#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_5_F32D92E3D06B4655_OFFSET UNITYSDK_OFFSET(0x190A90F0)
#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190A9070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondTrueConfig_TypeDefinitionIndex = 17187;

	class TrainPartyCondTrueConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1CA2F0CBEA04C73F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_5_1CA2F0CBEA04C73F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F32D92E3D06B4655(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_5_F32D92E3D06B4655_OFFSET))(a1, a2);
		}
	};
}
