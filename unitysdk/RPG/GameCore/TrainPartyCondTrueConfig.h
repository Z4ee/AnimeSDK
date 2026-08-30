#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_5_A6D450DA86470231_OFFSET UNITYSDK_OFFSET(0x1D5DC580)
#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_5_F32D92E3D06B4655_OFFSET UNITYSDK_OFFSET(0x1D5DC5D0)
#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DC5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondTrueConfig_TypeDefinitionIndex = 17874;

	class TrainPartyCondTrueConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A6D450DA86470231(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_5_A6D450DA86470231_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F32D92E3D06B4655(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_5_F32D92E3D06B4655_OFFSET))(a1, a2);
		}
	};
}
