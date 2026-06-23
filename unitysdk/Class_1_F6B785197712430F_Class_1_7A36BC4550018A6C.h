#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeleportSelections; }
namespace System { class Action; }

#define CLASS_1_F6B785197712430F_CLASS_1_7A36BC4550018A6C_METHOD_1_E901F7D3F9825211_OFFSET UNITYSDK_OFFSET(0x1306A030)
#define CLASS_1_F6B785197712430F_CLASS_1_7A36BC4550018A6C__CTOR_OFFSET UNITYSDK_OFFSET(0x1306A000)

inline static constexpr unsigned int Class_1_F6B785197712430F_Class_1_7A36BC4550018A6C_TypeDefinitionIndex = 72958;

class Class_1_F6B785197712430F_Class_1_7A36BC4550018A6C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_CLASS_1_7A36BC4550018A6C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E901F7D3F9825211(::MoleMole::Config::ConfigTeleportSelections* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeleportSelections*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_CLASS_1_7A36BC4550018A6C_METHOD_1_E901F7D3F9825211_OFFSET))(this, a1);
	}
};
