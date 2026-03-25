#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace StageBudgetTool { class Block; }

#define STAGEBUDGETTOOL_BLOCKBUDGETCOMPONENTEDITORONLY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xABD9710)
#define STAGEBUDGETTOOL_BLOCKBUDGETCOMPONENTEDITORONLY__CTOR_OFFSET UNITYSDK_OFFSET(0xABD9750)

namespace StageBudgetTool
{
	inline static constexpr unsigned int BlockBudgetComponentEditorOnly_TypeDefinitionIndex = 38590;

	class BlockBudgetComponentEditorOnly : public ::UnityEngine::MonoBehaviour
	{
	public:
		::StageBudgetTool::Block* block; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_BLOCKBUDGETCOMPONENTEDITORONLY__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_BLOCKBUDGETCOMPONENTEDITORONLY_ONENABLE_OFFSET))(this);
		}
	};
}
