#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_EDITGRAPHSPLINECONTROLPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA663CA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EditGraphSplineControlPointInfo_TypeDefinitionIndex = 57254;

	class EditGraphSplineControlPointInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_EDITGRAPHSPLINECONTROLPOINTINFO__CTOR_OFFSET))(this);
		}
	};
}
