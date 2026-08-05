#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }

#define CLASS_1_D2356E012BEEA60E_METHOD_1_08944AEC1C478772_OFFSET UNITYSDK_OFFSET(0x16C08050)
#define CLASS_1_D2356E012BEEA60E_METHOD_1_413472096512A213_1_OFFSET UNITYSDK_OFFSET(0x16C08040)
#define CLASS_1_D2356E012BEEA60E_METHOD_1_413472096512A213_OFFSET UNITYSDK_OFFSET(0x16C08030)
#define CLASS_1_D2356E012BEEA60E_METHOD_1_65585810E2458BA4_1_OFFSET UNITYSDK_OFFSET(0x16C08080)
#define CLASS_1_D2356E012BEEA60E_METHOD_1_65585810E2458BA4_OFFSET UNITYSDK_OFFSET(0x16C08060)
#define CLASS_1_D2356E012BEEA60E_METHOD_1_E060D3D63722AD61_OFFSET UNITYSDK_OFFSET(0x16C08070)
#define CLASS_1_D2356E012BEEA60E__CTOR_OFFSET UNITYSDK_OFFSET(0x16C08020)

inline static constexpr unsigned int Class_1_D2356E012BEEA60E_TypeDefinitionIndex = 48101;

class Class_1_D2356E012BEEA60E : public ::System::Object
{
public:
	::MoleMole::Cameras::ScopedOverShoulderCamera* Field_1_1; // 0x10
	::MoleMole::EntityHandle Field_1_3; // 0x18
	::MoleMole::EntityHandle Field_1_2; // 0x28
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2356E012BEEA60E__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2356E012BEEA60E_METHOD_1_413472096512A213_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_413472096512A213_1()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2356E012BEEA60E_METHOD_1_413472096512A213_1_OFFSET))(this);
	}

	::System::Void Method_1_08944AEC1C478772(::MoleMole::Cameras::ScopedOverShoulderCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ScopedOverShoulderCamera*))((::PBYTE)hIl2Cpp + CLASS_1_D2356E012BEEA60E_METHOD_1_08944AEC1C478772_OFFSET))(this, a1);
	}

	::System::Void Method_1_65585810E2458BA4(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_D2356E012BEEA60E_METHOD_1_65585810E2458BA4_OFFSET))(this, a1);
	}

	::MoleMole::Cameras::ScopedOverShoulderCamera* Method_1_E060D3D63722AD61()
	{
		return ((::MoleMole::Cameras::ScopedOverShoulderCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2356E012BEEA60E_METHOD_1_E060D3D63722AD61_OFFSET))(this);
	}

	::System::Void Method_1_65585810E2458BA4_1(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_D2356E012BEEA60E_METHOD_1_65585810E2458BA4_1_OFFSET))(this, a1);
	}
};
