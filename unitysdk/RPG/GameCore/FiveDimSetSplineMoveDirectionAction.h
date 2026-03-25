#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_METHOD_3_280888297D4D9F86_OFFSET UNITYSDK_OFFSET(0x1720B260)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_METHOD_3_F953842DACD875D9_OFFSET UNITYSDK_OFFSET(0x1720B1F0)
#define RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720B240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSplineMoveDirectionAction_TypeDefinitionIndex = 17130;

	class FiveDimSetSplineMoveDirectionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimSplineMoveDirection Direction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F953842DACD875D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_METHOD_3_F953842DACD875D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_280888297D4D9F86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINEMOVEDIRECTIONACTION_METHOD_3_280888297D4D9F86_OFFSET))(a1, a2);
		}
	};
}
