#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_METHOD_3_B870D485B211C8AD_OFFSET UNITYSDK_OFFSET(0x1CDD2BE0)
#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_METHOD_3_E67DF8C1B151C71B_OFFSET UNITYSDK_OFFSET(0x1CDD2B80)
#define RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD2BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionApplyMoveStateInGridMoveDirection_TypeDefinitionIndex = 18131;

	class CakeRaceActionApplyMoveStateInGridMoveDirection : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceMoveState MoveState; // 0x10
		::RPG::GameCore::CakeRaceMoveState EnableOnPreMoveState; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E67DF8C1B151C71B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_METHOD_3_E67DF8C1B151C71B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B870D485B211C8AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONAPPLYMOVESTATEINGRIDMOVEDIRECTION_METHOD_3_B870D485B211C8AD_OFFSET))(a1, a2);
		}
	};
}
