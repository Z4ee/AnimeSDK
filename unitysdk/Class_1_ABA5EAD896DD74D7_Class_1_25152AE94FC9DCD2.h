#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUICamera; }
namespace System { class Action; }

#define CLASS_1_ABA5EAD896DD74D7_CLASS_1_25152AE94FC9DCD2_METHOD_1_961BD9B37034EA03_OFFSET UNITYSDK_OFFSET(0x17011660)
#define CLASS_1_ABA5EAD896DD74D7_CLASS_1_25152AE94FC9DCD2__CTOR_OFFSET UNITYSDK_OFFSET(0x17011650)

inline static constexpr unsigned int Class_1_ABA5EAD896DD74D7_Class_1_25152AE94FC9DCD2_TypeDefinitionIndex = 56725;

class Class_1_ABA5EAD896DD74D7_Class_1_25152AE94FC9DCD2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABA5EAD896DD74D7_CLASS_1_25152AE94FC9DCD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_961BD9B37034EA03(::MoleMole::Config::ConfigUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUICamera*))((::PBYTE)hIl2Cpp + CLASS_1_ABA5EAD896DD74D7_CLASS_1_25152AE94FC9DCD2_METHOD_1_961BD9B37034EA03_OFFSET))(this, a1);
	}
};
