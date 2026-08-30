#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UIImageNode; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_TOGGLEUITOP_METHOD_3_1D42A66ED10B6672_OFFSET UNITYSDK_OFFSET(0x1D5D4E50)
#define RPG_GAMECORE_TOGGLEUITOP_METHOD_3_F5A5E7C4631539C2_OFFSET UNITYSDK_OFFSET(0x1D5D4DB0)
#define RPG_GAMECORE_TOGGLEUITOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D4E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleUITop_TypeDefinitionIndex = 22894;

	class ToggleUITop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::System::String* TriggerName; // 0x28
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x30
		::Il2CppArray<::RPG::GameCore::UIImageNode*>* UIImageNodes; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEUITOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F5A5E7C4631539C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleUITop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleUITop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEUITOP_METHOD_3_F5A5E7C4631539C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D42A66ED10B6672(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleUITop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleUITop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEUITOP_METHOD_3_1D42A66ED10B6672_OFFSET))(a1, a2);
		}
	};
}
