#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_135;

#define CLASS_1_0D545E3DCDC7AFF6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDDC910)
#define CLASS_1_0D545E3DCDC7AFF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDC9A0)

inline static constexpr unsigned int Class_1_0D545E3DCDC7AFF6_TypeDefinitionIndex = 42028;

class Class_1_0D545E3DCDC7AFF6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_135* NLIFDJHPHLP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D545E3DCDC7AFF6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D545E3DCDC7AFF6_CLEAR_OFFSET))(this);
	}
};
