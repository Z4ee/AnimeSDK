#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E36A18B0B6134C;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_BD12FF8BFA888E84_CLASS_1_CDE1FB4EDF7C1F0C_METHOD_1_FF144E21CB3D0EED_OFFSET UNITYSDK_OFFSET(0x180678E0)
#define CLASS_3_BD12FF8BFA888E84_CLASS_1_CDE1FB4EDF7C1F0C__CTOR_OFFSET UNITYSDK_OFFSET(0x180678D0)

inline static constexpr unsigned int Class_3_BD12FF8BFA888E84_Class_1_CDE1FB4EDF7C1F0C_TypeDefinitionIndex = 66979;

class Class_3_BD12FF8BFA888E84_Class_1_CDE1FB4EDF7C1F0C : public ::System::Object
{
public:
	::Class_1_D1E36A18B0B6134C* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_CLASS_1_CDE1FB4EDF7C1F0C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF144E21CB3D0EED(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_BD12FF8BFA888E84_CLASS_1_CDE1FB4EDF7C1F0C_METHOD_1_FF144E21CB3D0EED_OFFSET))(this, a1);
	}
};
