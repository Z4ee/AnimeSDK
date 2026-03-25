#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageBudgetTool/EntityType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define STAGEBUDGETTOOL_ENTITYBUDGETCOMPONENTEDITORONLY__CTOR_OFFSET UNITYSDK_OFFSET(0xABD9770)

namespace StageBudgetTool
{
	inline static constexpr unsigned int EntityBudgetComponentEditorOnly_TypeDefinitionIndex = 38591;

	class EntityBudgetComponentEditorOnly : public ::UnityEngine::MonoBehaviour
	{
	public:
		::StageBudgetTool::EntityType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_ENTITYBUDGETCOMPONENTEDITORONLY__CTOR_OFFSET))(this);
		}
	};
}
