#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_METHOD_3_ADD3A53B8DF15FAD_OFFSET UNITYSDK_OFFSET(0x188F5630)
#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_METHOD_3_C6A83391188F4FF8_OFFSET UNITYSDK_OFFSET(0x18901180)
#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F5610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFinishChenLingGameBoyAction_TypeDefinitionIndex = 17743;

	class FiveDimFinishChenLingGameBoyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6A83391188F4FF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_METHOD_3_C6A83391188F4FF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADD3A53B8DF15FAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_METHOD_3_ADD3A53B8DF15FAD_OFFSET))(a1, a2);
		}
	};
}
