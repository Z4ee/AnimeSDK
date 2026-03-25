#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_2C465B798538F84D_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10C85660)
#define CLASS_1_2C465B798538F84D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10C85700)
#define CLASS_1_2C465B798538F84D__CTOR_OFFSET UNITYSDK_OFFSET(0x10C85600)
#define CLASS_1_2C465B798538F84D___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10C85A70)

inline static constexpr unsigned int Class_1_2C465B798538F84D_TypeDefinitionIndex = 57438;

class Class_1_2C465B798538F84D : public ::System::Object
{
public:
	::UnityEngine::Renderer* Field_1_0; // 0x10
	::System::Single Field_1_3; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C465B798538F84D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C465B798538F84D_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C465B798538F84D_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C465B798538F84D___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
