#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_METHOD_5_A41BB61113CFA6A6_OFFSET UNITYSDK_OFFSET(0x1D5DC3F0)
#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_METHOD_5_CAF938C4D11A8FC2_OFFSET UNITYSDK_OFFSET(0x1D5DC440)
#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DC430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondCardIdxBetweenConfig_TypeDefinitionIndex = 17878;

	class TrainPartyCondCardIdxBetweenConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A41BB61113CFA6A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_METHOD_5_A41BB61113CFA6A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CAF938C4D11A8FC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_METHOD_5_CAF938C4D11A8FC2_OFFSET))(a1, a2);
		}
	};
}
