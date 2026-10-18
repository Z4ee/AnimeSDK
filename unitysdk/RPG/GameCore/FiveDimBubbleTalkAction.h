#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_4_3BB2B65884E257D7_OFFSET UNITYSDK_OFFSET(0x1D685F70)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_4_DCD2A7C7F8BA60DB_OFFSET UNITYSDK_OFFSET(0x1D685F20)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D685F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBubbleTalkAction_TypeDefinitionIndex = 18772;

	class FiveDimBubbleTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean UseCondition; // 0x10
		::System::String* LevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveLevelVarValues; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimActionBubbleTalkInfo*>* BubbleTalkInfoList; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::Single LoopInterval; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DCD2A7C7F8BA60DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBubbleTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBubbleTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_4_DCD2A7C7F8BA60DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3BB2B65884E257D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_4_3BB2B65884E257D7_OFFSET))(a1, a2);
		}
	};
}
