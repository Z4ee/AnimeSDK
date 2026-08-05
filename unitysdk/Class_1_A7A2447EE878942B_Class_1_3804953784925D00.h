#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace System { class Action; }

#define CLASS_1_A7A2447EE878942B_CLASS_1_3804953784925D00_METHOD_1_E71D4D3F67EBA6A5_OFFSET UNITYSDK_OFFSET(0x115527D0)
#define CLASS_1_A7A2447EE878942B_CLASS_1_3804953784925D00__CTOR_OFFSET UNITYSDK_OFFSET(0x115527C0)

inline static constexpr unsigned int Class_1_A7A2447EE878942B_Class_1_3804953784925D00_TypeDefinitionIndex = 56759;

class Class_1_A7A2447EE878942B_Class_1_3804953784925D00 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_CLASS_1_3804953784925D00__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E71D4D3F67EBA6A5(::MoleMole::Config::ConfigUIVirtualJoystick* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*))((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_CLASS_1_3804953784925D00_METHOD_1_E71D4D3F67EBA6A5_OFFSET))(this, a1);
	}
};
