#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHARACTERSKILLITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCAD5BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterSkillItemData_TypeDefinitionIndex = 72678;

	class CharacterSkillItemData : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* SkillItemNameText; // 0x10
		::UnityEngine::UI::InputField* SkillLevelInput; // 0x18
		::UnityEngine::GameObject* SkillItemRootGO; // 0x20
		::System::String* SkillName; // 0x28
		::System::Int32 SkillLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSKILLITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
