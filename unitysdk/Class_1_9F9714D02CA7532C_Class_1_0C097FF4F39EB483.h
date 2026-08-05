#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigTextureColor;
namespace System { class Action; }

#define CLASS_1_9F9714D02CA7532C_CLASS_1_0C097FF4F39EB483_METHOD_1_7F6163F651B9AFE4_OFFSET UNITYSDK_OFFSET(0x14E2F1A0)
#define CLASS_1_9F9714D02CA7532C_CLASS_1_0C097FF4F39EB483__CTOR_OFFSET UNITYSDK_OFFSET(0x14E2F190)

inline static constexpr unsigned int Class_1_9F9714D02CA7532C_Class_1_0C097FF4F39EB483_TypeDefinitionIndex = 87933;

class Class_1_9F9714D02CA7532C_Class_1_0C097FF4F39EB483 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_CLASS_1_0C097FF4F39EB483__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F6163F651B9AFE4(::ConfigTextureColor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigTextureColor*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_CLASS_1_0C097FF4F39EB483_METHOD_1_7F6163F651B9AFE4_OFFSET))(this, a1);
	}
};
