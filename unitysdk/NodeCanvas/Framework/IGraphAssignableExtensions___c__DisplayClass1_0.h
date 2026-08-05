#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IGraphAssignable; }
namespace System { template <typename T> class Action_1; }

#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB97230)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS___C__DISPLAYCLASS1_0__TRYSTARTSUBGRAPH_B__0_OFFSET UNITYSDK_OFFSET(0x1EB97240)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int IGraphAssignableExtensions___c__DisplayClass1_0_TypeDefinitionIndex = 30809;

	class IGraphAssignableExtensions___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10
		::NodeCanvas::Framework::IGraphAssignable* assignable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryStartSubGraph_b__0(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS___C__DISPLAYCLASS1_0__TRYSTARTSUBGRAPH_B__0_OFFSET))(this, result);
		}
	};
}
