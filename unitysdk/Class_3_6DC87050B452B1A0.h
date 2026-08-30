#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_6DC87050B452B1A0_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1D5C03A0)
#define CLASS_3_6DC87050B452B1A0_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1D5C0360)
#define CLASS_3_6DC87050B452B1A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C0390)

inline static constexpr unsigned int Class_3_6DC87050B452B1A0_TypeDefinitionIndex = 23906;

class Class_3_6DC87050B452B1A0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::AttackType LEOAGAFACAD; // 0x18
	::RPG::GameCore::AttackType HBEANJNDDMC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DC87050B452B1A0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DC87050B452B1A0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DC87050B452B1A0*&))((::PBYTE)hIl2Cpp + CLASS_3_6DC87050B452B1A0_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6DC87050B452B1A0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6DC87050B452B1A0*))((::PBYTE)hIl2Cpp + CLASS_3_6DC87050B452B1A0_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
