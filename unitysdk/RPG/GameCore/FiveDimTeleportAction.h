#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPortalTarget; }

#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_2D8E1775A12540C8_OFFSET UNITYSDK_OFFSET(0x1D107170)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_D3E5C2A0F623BEB3_OFFSET UNITYSDK_OFFSET(0x1D1071B0)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1071A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTeleportAction_TypeDefinitionIndex = 18445;

	class FiveDimTeleportAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x10
		::System::Boolean NoCameraBlend; // 0x18
		::System::Boolean WaitFullStreaming; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D8E1775A12540C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTeleportAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTeleportAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_2D8E1775A12540C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D3E5C2A0F623BEB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_D3E5C2A0F623BEB3_OFFSET))(a1, a2);
		}
	};
}
