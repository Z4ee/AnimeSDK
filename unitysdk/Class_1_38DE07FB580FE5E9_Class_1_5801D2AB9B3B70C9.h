#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_1_38DE07FB580FE5E9_CLASS_1_5801D2AB9B3B70C9_METHOD_1_52A3AA58C4A0DC27_1_OFFSET UNITYSDK_OFFSET(0x1765CFF0)
#define CLASS_1_38DE07FB580FE5E9_CLASS_1_5801D2AB9B3B70C9_METHOD_1_52A3AA58C4A0DC27_OFFSET UNITYSDK_OFFSET(0x1765CFD0)
#define CLASS_1_38DE07FB580FE5E9_CLASS_1_5801D2AB9B3B70C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1765CFC0)

inline static constexpr unsigned int Class_1_38DE07FB580FE5E9_Class_1_5801D2AB9B3B70C9_TypeDefinitionIndex = 63041;

class Class_1_38DE07FB580FE5E9_Class_1_5801D2AB9B3B70C9 : public ::System::Object
{
public:
	::UnityEngine::Gradient* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38DE07FB580FE5E9_CLASS_1_5801D2AB9B3B70C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52A3AA58C4A0DC27(::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_38DE07FB580FE5E9_CLASS_1_5801D2AB9B3B70C9_METHOD_1_52A3AA58C4A0DC27_OFFSET))(this, a1);
	}

	::System::Void Method_1_52A3AA58C4A0DC27_1(::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_38DE07FB580FE5E9_CLASS_1_5801D2AB9B3B70C9_METHOD_1_52A3AA58C4A0DC27_1_OFFSET))(this, a1);
	}
};
