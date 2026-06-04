#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_2D512E916C716041_6_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x195A42A0)
#define CLASS_3_2D512E916C716041_6_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x195A4320)
#define CLASS_3_2D512E916C716041_6__CTOR_OFFSET UNITYSDK_OFFSET(0x195A42F0)

inline static constexpr unsigned int Class_3_2D512E916C716041_6_TypeDefinitionIndex = 19978;

class Class_3_2D512E916C716041_6 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D512E916C716041_6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2D512E916C716041_6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2D512E916C716041_6*&))((::PBYTE)hIl2Cpp + CLASS_3_2D512E916C716041_6_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2D512E916C716041_6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2D512E916C716041_6*))((::PBYTE)hIl2Cpp + CLASS_3_2D512E916C716041_6_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
