#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RPG_EDITOR_SKILLGRIDCONFIG_GET_COLS_OFFSET UNITYSDK_OFFSET(0x16849600)
#define RPG_EDITOR_SKILLGRIDCONFIG_GET_DIRSPACINGPX_OFFSET UNITYSDK_OFFSET(0x16849560)
#define RPG_EDITOR_SKILLGRIDCONFIG_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x16849710)
#define RPG_EDITOR_SKILLGRIDCONFIG_GET_UNITPX_OFFSET UNITYSDK_OFFSET(0x168494C0)
#define RPG_EDITOR_SKILLGRIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16849820)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillGridConfig_TypeDefinitionIndex = 52328;

	class SkillGridConfig : public ::System::Object
	{
	public:
		::System::Boolean IsHorizontalLayout; // 0x10
		::System::Int32 SplitValue; // 0x14
		::UnityEngine::RectTransform* RootContent; // 0x18
		::System::Single DirSpacing; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLGRIDCONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_UnitPx()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLGRIDCONFIG_GET_UNITPX_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_DirSpacingPx()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLGRIDCONFIG_GET_DIRSPACINGPX_OFFSET))(this);
		}

		::System::Int32 get_Cols()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLGRIDCONFIG_GET_COLS_OFFSET))(this);
		}

		::System::Int32 get_Rows()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLGRIDCONFIG_GET_ROWS_OFFSET))(this);
		}
	};
}
