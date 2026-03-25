#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimActionRandomBubbleTalkInfoGroup; }

#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_METHOD_3_67EC433F0F799BEE_OFFSET UNITYSDK_OFFSET(0x17206E70)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_METHOD_3_9C2859E6B82E3D82_OFFSET UNITYSDK_OFFSET(0x17206E00)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17206E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRandomBubbleTalkAction_TypeDefinitionIndex = 17232;

	class FiveDimRandomBubbleTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup*>* BubbleTalkInfoGroupList; // 0x10
		::System::Boolean IsLoop; // 0x18
		::System::Single LoopInterval; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C2859E6B82E3D82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_METHOD_3_9C2859E6B82E3D82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67EC433F0F799BEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_METHOD_3_67EC433F0F799BEE_OFFSET))(a1, a2);
		}
	};
}
