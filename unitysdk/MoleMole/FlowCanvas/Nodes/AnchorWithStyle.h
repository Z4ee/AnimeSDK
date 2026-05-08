#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_ANCHORWITHSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnchorWithStyle_TypeDefinitionIndex = 64449;

	struct alignas(8) AnchorWithStyle
	{
		::System::String* AnchorName; // 0x10
		::System::String* Style; // 0x18

		::System::Void _ctor(::System::String* inAnchorName, ::System::String* inStyle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ANCHORWITHSTYLE__CTOR_OFFSET))(this, inAnchorName, inStyle);
		}
	};
}
