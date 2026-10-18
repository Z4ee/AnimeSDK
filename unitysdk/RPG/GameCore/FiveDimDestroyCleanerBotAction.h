#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_METHOD_4_559F9F7E732EA7C2_OFFSET UNITYSDK_OFFSET(0x1D68AF80)
#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_METHOD_4_C651FA19C7318E9D_OFFSET UNITYSDK_OFFSET(0x1D68AF10)
#define RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68AF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyCleanerBotAction_TypeDefinitionIndex = 18732;

	class FiveDimDestroyCleanerBotAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* NormalCleanerBotPreset; // 0x10
		::System::String* EnhancedCleanerBotPreset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C651FA19C7318E9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_METHOD_4_C651FA19C7318E9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_559F9F7E732EA7C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYCLEANERBOTACTION_METHOD_4_559F9F7E732EA7C2_OFFSET))(a1, a2);
		}
	};
}
