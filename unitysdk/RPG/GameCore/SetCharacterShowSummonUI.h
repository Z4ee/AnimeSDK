#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_METHOD_3_9CF148C4A745594C_OFFSET UNITYSDK_OFFSET(0x18E11690)
#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_METHOD_3_ED9BE5B4E4F1FC85_OFFSET UNITYSDK_OFFSET(0x18E11600)
#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18E11660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterShowSummonUI_TypeDefinitionIndex = 22333;

	class SetCharacterShowSummonUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ShowSummoner; // 0x20
		::System::Boolean ShowSummoned; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED9BE5B4E4F1FC85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterShowSummonUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterShowSummonUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_METHOD_3_ED9BE5B4E4F1FC85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9CF148C4A745594C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterShowSummonUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterShowSummonUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_METHOD_3_9CF148C4A745594C_OFFSET))(a1, a2);
		}
	};
}
