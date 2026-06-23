#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIData.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREAUIDATAADAPTER_GETANCHORS_OFFSET UNITYSDK_OFFSET(0x7A33A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREAUIDATAADAPTER_GETSTYLES_OFFSET UNITYSDK_OFFSET(0x7A33B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREAUIDATAADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x7A33C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDTargetAreaUIDataAdapter_TypeDefinitionIndex = 49785;

	struct alignas(8) LDDTargetAreaUIDataAdapter
	{
		::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData Value; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _anchors; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _styles; // 0x30

		::System::Void _ctor(::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData inValue)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREAUIDATAADAPTER__CTOR_OFFSET))(this, inValue);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAnchors()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREAUIDATAADAPTER_GETANCHORS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetStyles()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREAUIDATAADAPTER_GETSTYLES_OFFSET))(this);
		}
	};
}
