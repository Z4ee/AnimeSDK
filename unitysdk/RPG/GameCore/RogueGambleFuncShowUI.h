#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_METHOD_3_7F77A672A6490015_OFFSET UNITYSDK_OFFSET(0x19B3C380)
#define RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_METHOD_3_BECDF456A3AB6732_OFFSET UNITYSDK_OFFSET(0x19B3C300)
#define RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3C350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGambleFuncShowUI_TypeDefinitionIndex = 20879;

	class RogueGambleFuncShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterUI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGacha; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BECDF456A3AB6732(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueGambleFuncShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueGambleFuncShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_METHOD_3_BECDF456A3AB6732_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F77A672A6490015(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueGambleFuncShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueGambleFuncShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_METHOD_3_7F77A672A6490015_OFFSET))(a1, a2);
		}
	};
}
