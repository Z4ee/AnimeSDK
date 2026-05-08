#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class ConfigEntityJoystickOrders;
namespace System { class Action; }

#define CLASS_1_7FB212E2C96187FB_CLASS_1_14C4167470D4AD46_METHOD_1_9999B40581F1C31D_OFFSET UNITYSDK_OFFSET(0x1532C5B0)
#define CLASS_1_7FB212E2C96187FB_CLASS_1_14C4167470D4AD46__CTOR_OFFSET UNITYSDK_OFFSET(0x1532C5A0)

inline static constexpr unsigned int Class_1_7FB212E2C96187FB_Class_1_14C4167470D4AD46_TypeDefinitionIndex = 53920;

class Class_1_7FB212E2C96187FB_Class_1_14C4167470D4AD46 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FB212E2C96187FB_CLASS_1_14C4167470D4AD46__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9999B40581F1C31D(::ConfigEntityJoystickOrders* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigEntityJoystickOrders*))((::PBYTE)hIl2Cpp + CLASS_1_7FB212E2C96187FB_CLASS_1_14C4167470D4AD46_METHOD_1_9999B40581F1C31D_OFFSET))(this, a1);
	}
};
