#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_METHOD_3_040A960E10227C35_OFFSET UNITYSDK_OFFSET(0x1D5E88D0)
#define RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_METHOD_3_AE01F3558DC48D25_OFFSET UNITYSDK_OFFSET(0x1D5E8850)
#define RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E88A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipHideLandOnBtn_TypeDefinitionIndex = 20740;

	class TravelShipHideLandOnBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE01F3558DC48D25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipHideLandOnBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipHideLandOnBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_METHOD_3_AE01F3558DC48D25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_040A960E10227C35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipHideLandOnBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipHideLandOnBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDELANDONBTN_METHOD_3_040A960E10227C35_OFFSET))(a1, a2);
		}
	};
}
