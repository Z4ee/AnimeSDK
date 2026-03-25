#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPortalTarget; }

#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_3B313E75D5516570_OFFSET UNITYSDK_OFFSET(0x172102D0)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_BA3715B663ECB924_OFFSET UNITYSDK_OFFSET(0x172101F0)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x172102B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTeleportAction_TypeDefinitionIndex = 17123;

	class FiveDimTeleportAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA3715B663ECB924(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTeleportAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTeleportAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_BA3715B663ECB924_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B313E75D5516570(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_3_3B313E75D5516570_OFFSET))(a1, a2);
		}
	};
}
