#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION_METHOD_4_A47565BFCF240F4F_OFFSET UNITYSDK_OFFSET(0x1D69FCB0)
#define RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION_METHOD_4_DB00C6E30A4CD6DE_OFFSET UNITYSDK_OFFSET(0x1D69FC30)
#define RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69FCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveToNextSplinePointAction_TypeDefinitionIndex = 18664;

	class FiveDimMoveToNextSplinePointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DB00C6E30A4CD6DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION_METHOD_4_DB00C6E30A4CD6DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A47565BFCF240F4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION_METHOD_4_A47565BFCF240F4F_OFFSET))(a1, a2);
		}
	};
}
