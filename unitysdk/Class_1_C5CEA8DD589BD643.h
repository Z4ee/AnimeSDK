#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6293765FEB857026;

#define CLASS_1_C5CEA8DD589BD643_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x178E0150)
#define CLASS_1_C5CEA8DD589BD643_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x178E0170)
#define CLASS_1_C5CEA8DD589BD643_GET_RANK_OFFSET UNITYSDK_OFFSET(0x178E0190)
#define CLASS_1_C5CEA8DD589BD643_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x178E0160)
#define CLASS_1_C5CEA8DD589BD643_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x178E0180)
#define CLASS_1_C5CEA8DD589BD643_SET_RANK_OFFSET UNITYSDK_OFFSET(0x178E01A0)
#define CLASS_1_C5CEA8DD589BD643__CTOR_OFFSET UNITYSDK_OFFSET(0x178E01B0)

inline static constexpr unsigned int Class_1_C5CEA8DD589BD643_TypeDefinitionIndex = 80394;

class Class_1_C5CEA8DD589BD643 : public ::System::Object
{
public:
	::Class_1_6293765FEB857026* _Config_k__BackingField; // 0x10
	::System::Int32 _Rank_k__BackingField; // 0x18
	::System::Int32 _Points_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5CEA8DD589BD643__CTOR_OFFSET))(this);
	}

	::Class_1_6293765FEB857026* get_Config()
	{
		return ((::Class_1_6293765FEB857026*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5CEA8DD589BD643_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::Class_1_6293765FEB857026* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6293765FEB857026*))((::PBYTE)hIl2Cpp + CLASS_1_C5CEA8DD589BD643_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Int32 get_Points()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5CEA8DD589BD643_GET_POINTS_OFFSET))(this);
	}

	::System::Void set_Points(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C5CEA8DD589BD643_SET_POINTS_OFFSET))(this, a1);
	}

	::System::Int32 get_Rank()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5CEA8DD589BD643_GET_RANK_OFFSET))(this);
	}

	::System::Void set_Rank(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C5CEA8DD589BD643_SET_RANK_OFFSET))(this, a1);
	}
};
