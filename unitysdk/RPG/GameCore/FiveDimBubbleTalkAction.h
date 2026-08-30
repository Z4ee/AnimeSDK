#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_3_297AEE164183AA20_OFFSET UNITYSDK_OFFSET(0x1D0A4A50)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_3_394A91F04095C9C8_OFFSET UNITYSDK_OFFSET(0x1D0A4A00)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBubbleTalkAction_TypeDefinitionIndex = 18562;

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

		static ::System::Void Method_3_394A91F04095C9C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBubbleTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBubbleTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_3_394A91F04095C9C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_297AEE164183AA20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_3_297AEE164183AA20_OFFSET))(a1, a2);
		}
	};
}
