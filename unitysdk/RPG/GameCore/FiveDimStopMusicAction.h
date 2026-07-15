#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_METHOD_3_71A7B6447F6B02C6_OFFSET UNITYSDK_OFFSET(0x1BEB59E0)
#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_METHOD_3_ED47C4D4F1AFAFB7_OFFSET UNITYSDK_OFFSET(0x1BEB5A60)
#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB5A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopMusicAction_TypeDefinitionIndex = 17968;

	class FiveDimStopMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_71A7B6447F6B02C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopMusicAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopMusicAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_METHOD_3_71A7B6447F6B02C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED47C4D4F1AFAFB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_METHOD_3_ED47C4D4F1AFAFB7_OFFSET))(a1, a2);
		}
	};
}
