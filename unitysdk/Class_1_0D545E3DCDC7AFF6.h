#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_115;

#define CLASS_1_0D545E3DCDC7AFF6_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E29CC0)
#define CLASS_1_0D545E3DCDC7AFF6__CTOR_OFFSET UNITYSDK_OFFSET(0x18E29D50)

inline static constexpr unsigned int Class_1_0D545E3DCDC7AFF6_TypeDefinitionIndex = 40253;

class Class_1_0D545E3DCDC7AFF6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_115* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D545E3DCDC7AFF6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D545E3DCDC7AFF6_CLEAR_OFFSET))(this);
	}
};
