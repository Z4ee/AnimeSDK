#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_SUMMEREVENTBEATMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x182E06C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int SummerEventBeatMap_TypeDefinitionIndex = 66052;

	class SummerEventBeatMap : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Single weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SUMMEREVENTBEATMAP__CTOR_OFFSET))(this);
		}
	};
}
