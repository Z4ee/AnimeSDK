#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/ReflectedWrapper.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace System::Reflection { class MethodInfo; }

#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTIONWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D842F90)
#define NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D843570)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int ReflectedActionWrapper_TypeDefinitionIndex = 30313;

	class ReflectedActionWrapper : public ::NodeCanvas::Framework::Internal::ReflectedWrapper
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTIONWRAPPER__CTOR_OFFSET))(this);
		}

		static ::NodeCanvas::Framework::Internal::ReflectedActionWrapper* Create(::System::Reflection::MethodInfo* method, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Internal::ReflectedActionWrapper*(*)(::System::Reflection::MethodInfo*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_REFLECTEDACTIONWRAPPER_CREATE_OFFSET))(method, bb);
		}
	};
}
