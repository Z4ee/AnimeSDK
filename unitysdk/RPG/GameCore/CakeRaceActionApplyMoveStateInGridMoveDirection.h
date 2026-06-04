#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_METHOD_3_0F105FF1E5C570ED_OFFSET UNITYSDK_OFFSET(0x195E45A0)
#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_METHOD_3_B870D485B211C8AD_OFFSET UNITYSDK_OFFSET(0x195E4630)
#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x195E4610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionApplyMoveStateInGridMoveDirection_TypeDefinitionIndex = 17440;

	class CakeRaceActionApplyMoveStateInGridMoveDirection : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceMoveState MoveState; // 0x10
		::RPG::GameCore::CakeRaceMoveState EnableOnPreMoveState; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0F105FF1E5C570ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_METHOD_3_0F105FF1E5C570ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B870D485B211C8AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_METHOD_3_B870D485B211C8AD_OFFSET))(a1, a2);
		}
	};
}
