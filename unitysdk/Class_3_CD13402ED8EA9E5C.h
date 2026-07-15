#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_CD13402ED8EA9E5C_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15643180)
#define CLASS_3_CD13402ED8EA9E5C_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15643190)
#define CLASS_3_CD13402ED8EA9E5C__CTOR_OFFSET UNITYSDK_OFFSET(0x156431F0)

inline static constexpr unsigned int Class_3_CD13402ED8EA9E5C_TypeDefinitionIndex = 70606;

class Class_3_CD13402ED8EA9E5C : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Int32>
{
public:
	::System::Int32 Field_3_0; // 0x18
	::System::Int32 Field_3_1; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CD13402ED8EA9E5C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 get_value()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD13402ED8EA9E5C_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CD13402ED8EA9E5C_SET_VALUE_OFFSET))(this, a1);
	}
};
