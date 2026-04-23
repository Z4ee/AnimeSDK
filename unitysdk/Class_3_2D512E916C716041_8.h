#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_2D512E916C716041_8_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x182CA410)
#define CLASS_3_2D512E916C716041_8_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x182CA490)
#define CLASS_3_2D512E916C716041_8__CTOR_OFFSET UNITYSDK_OFFSET(0x182CA460)

inline static constexpr unsigned int Class_3_2D512E916C716041_8_TypeDefinitionIndex = 20127;

class Class_3_2D512E916C716041_8 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D512E916C716041_8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2D512E916C716041_8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2D512E916C716041_8*&))((::PBYTE)hIl2Cpp + CLASS_3_2D512E916C716041_8_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2D512E916C716041_8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2D512E916C716041_8*))((::PBYTE)hIl2Cpp + CLASS_3_2D512E916C716041_8_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
