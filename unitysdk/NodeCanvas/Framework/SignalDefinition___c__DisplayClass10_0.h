#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class DynamicParameterDefinition; }
namespace System { class String; }

#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDDD20)
#define NODECANVAS_FRAMEWORK_SIGNALDEFINITION___C__DISPLAYCLASS10_0__REMOVEPARAMETER_B__0_OFFSET UNITYSDK_OFFSET(0x1DFDDD30)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int SignalDefinition___c__DisplayClass10_0_TypeDefinitionIndex = 31292;

	class SignalDefinition___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveParameter_b__0(::ParadoxNotion::DynamicParameterDefinition* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::ParadoxNotion::DynamicParameterDefinition*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_SIGNALDEFINITION___C__DISPLAYCLASS10_0__REMOVEPARAMETER_B__0_OFFSET))(this, p);
		}
	};
}
