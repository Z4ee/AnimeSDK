#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B60F0A00B4DBE12A_Class_1_618A19C96A416850.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_4_F2674FD657D3F85A_CLASS_2_AE007F32E714FC49__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD6A20)

inline static constexpr unsigned int Class_4_F2674FD657D3F85A_Class_2_AE007F32E714FC49_TypeDefinitionIndex = 80495;

class Class_4_F2674FD657D3F85A_Class_2_AE007F32E714FC49 : public ::Class_3_B60F0A00B4DBE12A_Class_1_618A19C96A416850
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_2_0; // 0x58
	::UnityEngine::Vector3 Field_2_1; // 0x68
	::System::Int32 Field_2_3; // 0x74
	::System::Boolean Field_2_4; // 0x78
	::System::Single Field_2_2; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F2674FD657D3F85A_CLASS_2_AE007F32E714FC49__CTOR_OFFSET))(this);
	}
};
