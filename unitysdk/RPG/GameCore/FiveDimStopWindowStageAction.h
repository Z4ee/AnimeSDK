#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_METHOD_3_371B0AC2A1C5E5C5_OFFSET UNITYSDK_OFFSET(0x1BEB5BA0)
#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_METHOD_3_C8C2A75393B0DE00_OFFSET UNITYSDK_OFFSET(0x1BEB5C20)
#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB5C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopWindowStageAction_TypeDefinitionIndex = 17990;

	class FiveDimStopWindowStageAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_371B0AC2A1C5E5C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopWindowStageAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopWindowStageAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_METHOD_3_371B0AC2A1C5E5C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C8C2A75393B0DE00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_METHOD_3_C8C2A75393B0DE00_OFFSET))(a1, a2);
		}
	};
}
