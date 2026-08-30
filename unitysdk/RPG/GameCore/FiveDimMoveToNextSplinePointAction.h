#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION_METHOD_3_99B4A8F5E2DB1A95_OFFSET UNITYSDK_OFFSET(0x1D0F5440)
#define RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION_METHOD_3_E8AF509602BC3F90_OFFSET UNITYSDK_OFFSET(0x1D0F54C0)
#define RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F54B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveToNextSplinePointAction_TypeDefinitionIndex = 18455;

	class FiveDimMoveToNextSplinePointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99B4A8F5E2DB1A95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION_METHOD_3_99B4A8F5E2DB1A95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8AF509602BC3F90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETONEXTSPLINEPOINTACTION_METHOD_3_E8AF509602BC3F90_OFFSET))(a1, a2);
		}
	};
}
