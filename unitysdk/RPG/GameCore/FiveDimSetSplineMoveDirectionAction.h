#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_METHOD_4_6CB4C5AEAEDACDBB_OFFSET UNITYSDK_OFFSET(0x1D6DB380)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_METHOD_4_CD071509B4C96048_OFFSET UNITYSDK_OFFSET(0x1D6DB340)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSplineMoveDirectionAction_TypeDefinitionIndex = 18662;

	class FiveDimSetSplineMoveDirectionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimSplineMoveDirection Direction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CD071509B4C96048(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_METHOD_4_CD071509B4C96048_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6CB4C5AEAEDACDBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_METHOD_4_6CB4C5AEAEDACDBB_OFFSET))(a1, a2);
		}
	};
}
