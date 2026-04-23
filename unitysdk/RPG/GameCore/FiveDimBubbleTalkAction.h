#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_3_40A28EAFDBD21E77_OFFSET UNITYSDK_OFFSET(0x188F30F0)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_3_8C1697CDBB9294F1_OFFSET UNITYSDK_OFFSET(0x188F8D40)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F30D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBubbleTalkAction_TypeDefinitionIndex = 17835;

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

		static ::System::Void Method_3_8C1697CDBB9294F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBubbleTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBubbleTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_3_8C1697CDBB9294F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40A28EAFDBD21E77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_METHOD_3_40A28EAFDBD21E77_OFFSET))(a1, a2);
		}
	};
}
