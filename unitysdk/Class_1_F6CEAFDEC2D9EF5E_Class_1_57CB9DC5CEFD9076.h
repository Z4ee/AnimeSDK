#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeaponGacha; }
namespace System { class Action; }

#define CLASS_1_F6CEAFDEC2D9EF5E_CLASS_1_57CB9DC5CEFD9076_METHOD_1_9A37BF64607D777C_OFFSET UNITYSDK_OFFSET(0x1402ED70)
#define CLASS_1_F6CEAFDEC2D9EF5E_CLASS_1_57CB9DC5CEFD9076__CTOR_OFFSET UNITYSDK_OFFSET(0x1402ED60)

inline static constexpr unsigned int Class_1_F6CEAFDEC2D9EF5E_Class_1_57CB9DC5CEFD9076_TypeDefinitionIndex = 51385;

class Class_1_F6CEAFDEC2D9EF5E_Class_1_57CB9DC5CEFD9076 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_CLASS_1_57CB9DC5CEFD9076__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A37BF64607D777C(::MoleMole::Config::ConfigUIWeaponGacha* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIWeaponGacha*))((::PBYTE)hIl2Cpp + CLASS_1_F6CEAFDEC2D9EF5E_CLASS_1_57CB9DC5CEFD9076_METHOD_1_9A37BF64607D777C_OFFSET))(this, a1);
	}
};
