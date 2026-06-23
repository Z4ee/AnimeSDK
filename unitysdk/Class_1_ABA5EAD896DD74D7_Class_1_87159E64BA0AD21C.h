#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUICamera; }
namespace System { class Action; }

#define CLASS_1_ABA5EAD896DD74D7_CLASS_1_87159E64BA0AD21C_METHOD_1_ADB008069A9427D8_OFFSET UNITYSDK_OFFSET(0x1313A800)
#define CLASS_1_ABA5EAD896DD74D7_CLASS_1_87159E64BA0AD21C__CTOR_OFFSET UNITYSDK_OFFSET(0x1313A7F0)

inline static constexpr unsigned int Class_1_ABA5EAD896DD74D7_Class_1_87159E64BA0AD21C_TypeDefinitionIndex = 77196;

class Class_1_ABA5EAD896DD74D7_Class_1_87159E64BA0AD21C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABA5EAD896DD74D7_CLASS_1_87159E64BA0AD21C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ADB008069A9427D8(::MoleMole::Config::ConfigUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUICamera*))((::PBYTE)hIl2Cpp + CLASS_1_ABA5EAD896DD74D7_CLASS_1_87159E64BA0AD21C_METHOD_1_ADB008069A9427D8_OFFSET))(this, a1);
	}
};
