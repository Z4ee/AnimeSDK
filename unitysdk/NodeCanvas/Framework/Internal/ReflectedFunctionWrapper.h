#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedWrapper.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDFUNCTIONWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D357B10)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDFUNCTIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D358120)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedFunctionWrapper_TypeDefinitionIndex = 30435;

	class ReflectedFunctionWrapper : public ::NodeCanvas::Framework::Internal::ReflectedWrapper
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDFUNCTIONWRAPPER__CTOR_OFFSET))(this);
		}

		static ::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper* Create(::System::Reflection::MethodInfo* method, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Internal::ReflectedFunctionWrapper*(*)(::System::Reflection::MethodInfo*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDFUNCTIONWRAPPER_CREATE_OFFSET))(method, bb);
		}
	};
}
