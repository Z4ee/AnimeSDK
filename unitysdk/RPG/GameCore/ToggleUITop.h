#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UIImageNode; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_TOGGLEUITOP_METHOD_3_1D42A66ED10B6672_OFFSET UNITYSDK_OFFSET(0x19DEB550)
#define RPG_GAMECORE_TOGGLEUITOP_METHOD_3_A105286713684F8B_OFFSET UNITYSDK_OFFSET(0x19DEB480)
#define RPG_GAMECORE_TOGGLEUITOP__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEB500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleUITop_TypeDefinitionIndex = 21898;

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

		static ::System::Void Method_3_A105286713684F8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleUITop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleUITop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEUITOP_METHOD_3_A105286713684F8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D42A66ED10B6672(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleUITop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleUITop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLEUITOP_METHOD_3_1D42A66ED10B6672_OFFSET))(a1, a2);
		}
	};
}
