#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEWORKBENCHSHOWUI_METHOD_3_D72D284FC0A47856_OFFSET UNITYSDK_OFFSET(0x19BD3CA0)
#define RPG_GAMECORE_ROGUEWORKBENCHSHOWUI_METHOD_3_EB8414080349407F_OFFSET UNITYSDK_OFFSET(0x19BD3D20)
#define RPG_GAMECORE_ROGUEWORKBENCHSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD3CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkBenchShowUI_TypeDefinitionIndex = 20877;

	class RogueWorkBenchShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFirstEnterUI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D72D284FC0A47856(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkBenchShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkBenchShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOWUI_METHOD_3_D72D284FC0A47856_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB8414080349407F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkBenchShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkBenchShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOWUI_METHOD_3_EB8414080349407F_OFFSET))(a1, a2);
		}
	};
}
