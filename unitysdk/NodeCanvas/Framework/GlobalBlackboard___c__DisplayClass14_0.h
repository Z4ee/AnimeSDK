#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class GlobalBlackboard; }
namespace System { class String; }

#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCF230)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD___C__DISPLAYCLASS14_0__FIND_B__0_OFFSET UNITYSDK_OFFSET(0x1AFCF240)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GlobalBlackboard___c__DisplayClass14_0_TypeDefinitionIndex = 27489;

	class GlobalBlackboard___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Find_b__0(::NodeCanvas::Framework::GlobalBlackboard* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::GlobalBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD___C__DISPLAYCLASS14_0__FIND_B__0_OFFSET))(this, b);
		}
	};
}
