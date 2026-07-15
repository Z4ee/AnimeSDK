#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/SkillPointSimConfig_PointType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Editor { class SkillLineAssetConfig_ActiveState; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_SKILLLINEASSETCONFIG_LINETYPESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x106C28E0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillLineAssetConfig_LineTypeState_TypeDefinitionIndex = 49667;

	class SkillLineAssetConfig_LineTypeState : public ::System::Object
	{
	public:
		::RPG::Editor::SkillPointSimConfig_PointType Key; // 0x10
		::System::Collections::Generic::List_1<::RPG::Editor::SkillLineAssetConfig_ActiveState*>* ActiveStates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLLINEASSETCONFIG_LINETYPESTATE__CTOR_OFFSET))(this);
		}
	};
}
