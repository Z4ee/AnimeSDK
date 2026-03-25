#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK_METHOD_3_7C1A524956A5B574_OFFSET UNITYSDK_OFFSET(0x178A2590)
#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK_METHOD_3_84D618E0C8C38A05_OFFSET UNITYSDK_OFFSET(0x1788B0A0)
#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x1788B070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleSpecialSkillMark_TypeDefinitionIndex = 21932;

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

		static ::System::Void Method_3_7C1A524956A5B574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleSpecialSkillMark*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleSpecialSkillMark*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESPECIALSKILLMARK_METHOD_3_7C1A524956A5B574_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_84D618E0C8C38A05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleSpecialSkillMark* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleSpecialSkillMark*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESPECIALSKILLMARK_METHOD_3_84D618E0C8C38A05_OFFSET))(a1, a2);
		}
	};
}
