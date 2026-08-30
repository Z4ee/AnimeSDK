#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK_METHOD_3_2A6C7C1EFF05BC71_OFFSET UNITYSDK_OFFSET(0x1D52C910)
#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK_METHOD_3_B2E2C43DC76881BC_OFFSET UNITYSDK_OFFSET(0x1D52C950)
#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52C940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleSpecialSkillMark_TypeDefinitionIndex = 23410;

	class ToggleSpecialSkillMark : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* AllowSkillType; // 0x20
		::System::String* TriggerName; // 0x28
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESPECIALSKILLMARK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A6C7C1EFF05BC71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleSpecialSkillMark*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleSpecialSkillMark*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESPECIALSKILLMARK_METHOD_3_2A6C7C1EFF05BC71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2E2C43DC76881BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleSpecialSkillMark* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleSpecialSkillMark*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESPECIALSKILLMARK_METHOD_3_B2E2C43DC76881BC_OFFSET))(a1, a2);
		}
	};
}
