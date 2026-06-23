#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D400CC0)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedFieldNode___c__DisplayClass0_0_TypeDefinitionIndex = 29709;

	class PureReflectedFieldNode___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* field; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}
	};
}
