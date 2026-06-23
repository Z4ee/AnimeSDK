#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class Node; }

#define NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS114_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D528830)
#define NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS114_0__ISPARENTOF_B__0_OFFSET UNITYSDK_OFFSET(0x1D528840)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Node___c__DisplayClass114_0_TypeDefinitionIndex = 29349;

	class Node___c__DisplayClass114_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Node* childNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS114_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsParentOf_b__0(::NodeCanvas::Framework::Connection* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Connection*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS114_0__ISPARENTOF_B__0_OFFSET))(this, c);
		}
	};
}
