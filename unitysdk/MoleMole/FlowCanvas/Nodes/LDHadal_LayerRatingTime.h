#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_LAYERRATINGTIME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1160C6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_LAYERRATINGTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1160C810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_LayerRatingTime_TypeDefinitionIndex = 59540;

	class LDHadal_LayerRatingTime : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Single, ::MoleMole::Level::RatingType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_LAYERRATINGTIME__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::MoleMole::Level::RatingType ratingType)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_LAYERRATINGTIME_INVOKE_OFFSET))(this, ratingType);
		}
	};
}
