#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_39B4A4D8C0001FBB_CLASS_1_3319155F62CA40A9_METHOD_1_6F7E1B9943316EFD_OFFSET UNITYSDK_OFFSET(0x14200300)
#define CLASS_3_39B4A4D8C0001FBB_CLASS_1_3319155F62CA40A9__CTOR_OFFSET UNITYSDK_OFFSET(0x142002F0)

inline static constexpr unsigned int Class_3_39B4A4D8C0001FBB_Class_1_3319155F62CA40A9_TypeDefinitionIndex = 53542;

class Class_3_39B4A4D8C0001FBB_Class_1_3319155F62CA40A9 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39B4A4D8C0001FBB_CLASS_1_3319155F62CA40A9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6F7E1B9943316EFD(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_39B4A4D8C0001FBB_CLASS_1_3319155F62CA40A9_METHOD_1_6F7E1B9943316EFD_OFFSET))(this, a1);
	}
};
