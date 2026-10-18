#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace StageBudgetTool { class Passage; }

#define STAGEBUDGETTOOL_PASSAGEBUDGETCOMPONENTEDITORONLY__CTOR_OFFSET UNITYSDK_OFFSET(0xE97FF70)

namespace StageBudgetTool
{
	inline static constexpr unsigned int PassageBudgetComponentEditorOnly_TypeDefinitionIndex = 47712;

	class PassageBudgetComponentEditorOnly : public ::UnityEngine::MonoBehaviour
	{
	public:
		::StageBudgetTool::Passage* passage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_PASSAGEBUDGETCOMPONENTEDITORONLY__CTOR_OFFSET))(this);
		}
	};
}
