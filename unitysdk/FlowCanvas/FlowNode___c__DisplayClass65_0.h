#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class Port; }
namespace System { class Type; }

#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7130)
#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS65_0__GETFIRSTOUTPUTOFTYPE_B__1_OFFSET UNITYSDK_OFFSET(0x1DAD7140)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode___c__DisplayClass65_0_TypeDefinitionIndex = 31246;

	class FlowNode___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFirstOutputOfType_b__1(::FlowCanvas::Port* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS65_0__GETFIRSTOUTPUTOFTYPE_B__1_OFFSET))(this, p);
		}
	};
}
