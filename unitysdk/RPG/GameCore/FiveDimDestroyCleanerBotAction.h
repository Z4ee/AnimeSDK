#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_METHOD_3_0177DBF484F2A0A7_OFFSET UNITYSDK_OFFSET(0x1D858BA0)
#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_METHOD_3_FAD37642CEFC8DB0_OFFSET UNITYSDK_OFFSET(0x1D858B30)
#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D858B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyCleanerBotAction_TypeDefinitionIndex = 18522;

	class FiveDimDestroyCleanerBotAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* NormalCleanerBotPreset; // 0x10
		::System::String* EnhancedCleanerBotPreset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FAD37642CEFC8DB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_METHOD_3_FAD37642CEFC8DB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0177DBF484F2A0A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_METHOD_3_0177DBF484F2A0A7_OFFSET))(a1, a2);
		}
	};
}
