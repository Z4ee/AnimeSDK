#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_CF7C69273BEAA52F_CLASS_1_488B847E901C5F18_METHOD_1_4CB71B5F59699725_OFFSET UNITYSDK_OFFSET(0x12262050)
#define CLASS_1_CF7C69273BEAA52F_CLASS_1_488B847E901C5F18__CTOR_OFFSET UNITYSDK_OFFSET(0x12260630)

inline static constexpr unsigned int Class_1_CF7C69273BEAA52F_Class_1_488B847E901C5F18_TypeDefinitionIndex = 76960;

class Class_1_CF7C69273BEAA52F_Class_1_488B847E901C5F18 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::UnityEngine::Vector2 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_488B847E901C5F18__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4CB71B5F59699725(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_488B847E901C5F18_METHOD_1_4CB71B5F59699725_OFFSET))(this, a1);
	}
};
