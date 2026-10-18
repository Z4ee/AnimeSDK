#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LittleGameDynamicVar; }

#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_METHOD_4_252349DBE1046341_OFFSET UNITYSDK_OFFSET(0x1D6D9B90)
#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_METHOD_4_F47D8E7C1B29F972_OFFSET UNITYSDK_OFFSET(0x1D6D9BD0)
#define RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D9BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetLevelVarShortAction_TypeDefinitionIndex = 18653;

	class FiveDimSetLevelVarShortAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameDynamicVar* Name; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Boolean IsSetOnce; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_252349DBE1046341(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_METHOD_4_252349DBE1046341_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F47D8E7C1B29F972(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLEVELVARSHORTACTION_METHOD_4_F47D8E7C1B29F972_OFFSET))(a1, a2);
		}
	};
}
