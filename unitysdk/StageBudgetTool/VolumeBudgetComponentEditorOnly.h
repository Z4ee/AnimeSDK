#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace StageBudgetTool { class Volume; }

#define STAGEBUDGETTOOL_VOLUMEBUDGETCOMPONENTEDITORONLY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x197E5750)
#define STAGEBUDGETTOOL_VOLUMEBUDGETCOMPONENTEDITORONLY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x197E56C0)
#define STAGEBUDGETTOOL_VOLUMEBUDGETCOMPONENTEDITORONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x197E5770)

namespace StageBudgetTool
{
	inline static constexpr unsigned int VolumeBudgetComponentEditorOnly_TypeDefinitionIndex = 48185;

	class VolumeBudgetComponentEditorOnly : public ::UnityEngine::MonoBehaviour
	{
	public:
		::StageBudgetTool::Volume* volume; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_VOLUMEBUDGETCOMPONENTEDITORONLY__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_VOLUMEBUDGETCOMPONENTEDITORONLY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_VOLUMEBUDGETCOMPONENTEDITORONLY_ONDISABLE_OFFSET))(this);
		}
	};
}
