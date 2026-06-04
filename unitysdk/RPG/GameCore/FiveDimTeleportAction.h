#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPortalTarget; }

#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_0EA890DB81AD620E_OFFSET UNITYSDK_OFFSET(0x1975BED0)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_1BA6B0EED99DB807_OFFSET UNITYSDK_OFFSET(0x1975BF40)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1975BF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTeleportAction_TypeDefinitionIndex = 17751;

	class FiveDimTeleportAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x10
		::System::Boolean TriggerFiveDimLoadingView; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EA890DB81AD620E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTeleportAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTeleportAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_0EA890DB81AD620E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1BA6B0EED99DB807(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_1BA6B0EED99DB807_OFFSET))(a1, a2);
		}
	};
}
