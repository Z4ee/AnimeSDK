#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_NODES_SWITCHMACROLOCALENUM___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5337B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchMacroLocalEnum___c__DisplayClass1_0_TypeDefinitionIndex = 30245;

	class SwitchMacroLocalEnum___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* strs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHMACROLOCALENUM___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}
	};
}
