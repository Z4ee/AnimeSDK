#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPortalTarget; }

#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_4_53AFE4C4A595C499_OFFSET UNITYSDK_OFFSET(0x1D6B33C0)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_4_5F31596B007CAAAA_OFFSET UNITYSDK_OFFSET(0x1D6B3400)
#define RPG_GAMECORE_FIVEDIMTELEPORTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B33F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTeleportAction_TypeDefinitionIndex = 18654;

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

		static ::System::Void Method_4_53AFE4C4A595C499(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTeleportAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTeleportAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_4_53AFE4C4A595C499_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F31596B007CAAAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTELEPORTACTION_METHOD_4_5F31596B007CAAAA_OFFSET))(a1, a2);
		}
	};
}
