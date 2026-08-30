#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Editor { class SkillPointSimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLPOINTCONFIG_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xE466560)
#define RPG_EDITOR_SKILLPOINTCONFIG_METHOD_1_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xE4664C0)
#define RPG_EDITOR_SKILLPOINTCONFIG_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE466660)
#define RPG_EDITOR_SKILLPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE4666B0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillPointConfig_TypeDefinitionIndex = 52330;

	class SkillPointConfig : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::System::String* SkillID; // 0x18
		::UnityEngine::Vector2Int LayoutPosition; // 0x20
		::System::Boolean IsUseSimPoint; // 0x28
		::System::Collections::Generic::List_1<::RPG::Editor::SkillPointSimConfig*>* SimSkills; // 0x30
		::System::Boolean IsUseDeco; // 0x38
		::UnityEngine::GameObject* DecoGo; // 0x40
		::System::String* NextSkillID; // 0x48
		::UnityEngine::GameObject* TargLine; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LsTargLine; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3C56C1AF247AC1EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTCONFIG_METHOD_1_3C56C1AF247AC1EC_OFFSET))(this);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTCONFIG_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTCONFIG_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
