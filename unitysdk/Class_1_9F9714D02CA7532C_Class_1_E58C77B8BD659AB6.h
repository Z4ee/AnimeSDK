#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigTextureColor;
namespace System { class Action; }

#define CLASS_1_9F9714D02CA7532C_CLASS_1_E58C77B8BD659AB6_METHOD_1_258A552FC78100FD_OFFSET UNITYSDK_OFFSET(0x13283850)
#define CLASS_1_9F9714D02CA7532C_CLASS_1_E58C77B8BD659AB6__CTOR_OFFSET UNITYSDK_OFFSET(0x13283840)

inline static constexpr unsigned int Class_1_9F9714D02CA7532C_Class_1_E58C77B8BD659AB6_TypeDefinitionIndex = 67645;

class Class_1_9F9714D02CA7532C_Class_1_E58C77B8BD659AB6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_CLASS_1_E58C77B8BD659AB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_258A552FC78100FD(::ConfigTextureColor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigTextureColor*))((::PBYTE)hIl2Cpp + CLASS_1_9F9714D02CA7532C_CLASS_1_E58C77B8BD659AB6_METHOD_1_258A552FC78100FD_OFFSET))(this, a1);
	}
};
