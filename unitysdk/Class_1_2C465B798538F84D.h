#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_2C465B798538F84D_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1887D430)
#define CLASS_1_2C465B798538F84D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1887D4D0)
#define CLASS_1_2C465B798538F84D__CTOR_OFFSET UNITYSDK_OFFSET(0x1887D3D0)

inline static constexpr unsigned int Class_1_2C465B798538F84D_TypeDefinitionIndex = 70142;

class Class_1_2C465B798538F84D : public ::System::Object
{
public:
	::UnityEngine::Renderer* JAMDAALMOAL; // 0x10
	::System::Int32 LAPPEBCGDEG; // 0x18
	::System::Single NEHMFKCDKDI; // 0x1C
	::System::Single NHGFCDCCBNL; // 0x20

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
};
