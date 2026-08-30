#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/SkillPointSimConfig_PointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLPOINTSIMCONFIG_GET_CONTENTTITLE_OFFSET UNITYSDK_OFFSET(0x16849A60)
#define RPG_EDITOR_SKILLPOINTSIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x168499F0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillPointSimConfig_TypeDefinitionIndex = 52331;

	class SkillPointSimConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int LayoutPosition; // 0x10
		::RPG::Editor::SkillPointSimConfig_PointType Type; // 0x18
		::UnityEngine::GameObject* TargLine; // 0x20
		::System::String* ContentSkillID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTSIMCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* get_ContentTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTSIMCONFIG_GET_CONTENTTITLE_OFFSET))(this);
		}
	};
}
