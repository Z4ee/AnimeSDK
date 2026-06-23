#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_0AECE78A0888504E_CLASS_1_3319155F62CA40A9_METHOD_1_6F7E1B9943316EFD_OFFSET UNITYSDK_OFFSET(0x1556C510)
#define CLASS_3_0AECE78A0888504E_CLASS_1_3319155F62CA40A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1556C500)

inline static constexpr unsigned int Class_3_0AECE78A0888504E_Class_1_3319155F62CA40A9_TypeDefinitionIndex = 66382;

class Class_3_0AECE78A0888504E_Class_1_3319155F62CA40A9 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_CLASS_1_3319155F62CA40A9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6F7E1B9943316EFD(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_CLASS_1_3319155F62CA40A9_METHOD_1_6F7E1B9943316EFD_OFFSET))(this, a1);
	}
};
