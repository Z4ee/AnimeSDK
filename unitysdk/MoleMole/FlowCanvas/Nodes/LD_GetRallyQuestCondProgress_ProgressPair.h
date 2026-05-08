#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS_PROGRESSPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1174F080)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetRallyQuestCondProgress_ProgressPair_TypeDefinitionIndex = 40818;

	class LD_GetRallyQuestCondProgress_ProgressPair : public ::System::Object
	{
	public:
		::System::Int32 Progress; // 0x10
		::System::Int32 TargetNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS_PROGRESSPAIR__CTOR_OFFSET))(this);
		}
	};
}
