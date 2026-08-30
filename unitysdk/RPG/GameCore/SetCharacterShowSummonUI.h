#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_METHOD_3_9CF148C4A745594C_OFFSET UNITYSDK_OFFSET(0x1E813ED0)
#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_METHOD_3_E7E269A4DA4BF6E9_OFFSET UNITYSDK_OFFSET(0x1E813E80)
#define RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E813EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterShowSummonUI_TypeDefinitionIndex = 23100;

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

		static ::System::Void Method_3_E7E269A4DA4BF6E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterShowSummonUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterShowSummonUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_METHOD_3_E7E269A4DA4BF6E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9CF148C4A745594C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterShowSummonUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterShowSummonUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHOWSUMMONUI_METHOD_3_9CF148C4A745594C_OFFSET))(a1, a2);
		}
	};
}
