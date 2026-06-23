#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Variable; }
namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_FRAMEWORK_EXPOSEDPARAMETER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D805930)
#define NODECANVAS_FRAMEWORK_EXPOSEDPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D805AF0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ExposedParameter_TypeDefinitionIndex = 29973;

	class ExposedParameter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_EXPOSEDPARAMETER__CTOR_OFFSET))(this);
		}

		static ::NodeCanvas::Framework::ExposedParameter* CreateInstance(::NodeCanvas::Framework::Variable* target)
		{
			return ((::NodeCanvas::Framework::ExposedParameter*(*)(::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_EXPOSEDPARAMETER_CREATEINSTANCE_OFFSET))(target);
		}
	};
}
