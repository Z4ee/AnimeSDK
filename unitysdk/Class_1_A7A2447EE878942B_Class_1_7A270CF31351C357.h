#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace System { class Action; }

#define CLASS_1_A7A2447EE878942B_CLASS_1_7A270CF31351C357_METHOD_1_37079999D5E462A6_OFFSET UNITYSDK_OFFSET(0xF98BC70)
#define CLASS_1_A7A2447EE878942B_CLASS_1_7A270CF31351C357__CTOR_OFFSET UNITYSDK_OFFSET(0xF98BC60)

inline static constexpr unsigned int Class_1_A7A2447EE878942B_Class_1_7A270CF31351C357_TypeDefinitionIndex = 57629;

class Class_1_A7A2447EE878942B_Class_1_7A270CF31351C357 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_CLASS_1_7A270CF31351C357__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_37079999D5E462A6(::MoleMole::Config::ConfigUIVirtualJoystick* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*))((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_CLASS_1_7A270CF31351C357_METHOD_1_37079999D5E462A6_OFFSET))(this, a1);
	}
};
