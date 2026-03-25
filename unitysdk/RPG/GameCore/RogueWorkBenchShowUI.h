#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEWORKBENCHSHOWUI_METHOD_3_46FAA2BF84DA4797_OFFSET UNITYSDK_OFFSET(0x17672F40)
#define RPG_GAMECORE_ROGUEWORKBENCHSHOWUI_METHOD_3_5BE551463F291B68_OFFSET UNITYSDK_OFFSET(0x17672FC0)
#define RPG_GAMECORE_ROGUEWORKBENCHSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x17672F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkBenchShowUI_TypeDefinitionIndex = 20282;

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

		static ::System::Void Method_3_46FAA2BF84DA4797(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkBenchShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkBenchShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOWUI_METHOD_3_46FAA2BF84DA4797_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5BE551463F291B68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkBenchShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkBenchShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOWUI_METHOD_3_5BE551463F291B68_OFFSET))(a1, a2);
		}
	};
}
