#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0AE62590626D9F39_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15E36540)
#define CLASS_1_0AE62590626D9F39_GET_PRIVILEGEPOINTS_OFFSET UNITYSDK_OFFSET(0x15E36560)
#define CLASS_1_0AE62590626D9F39_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15E36550)
#define CLASS_1_0AE62590626D9F39_SET_PRIVILEGEPOINTS_OFFSET UNITYSDK_OFFSET(0x15E36570)
#define CLASS_1_0AE62590626D9F39__CTOR_OFFSET UNITYSDK_OFFSET(0x15E364F0)

inline static constexpr unsigned int Class_1_0AE62590626D9F39_TypeDefinitionIndex = 75617;

class Class_1_0AE62590626D9F39 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::System::UInt32 _PrivilegePoints_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AE62590626D9F39__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AE62590626D9F39_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AE62590626D9F39_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_PrivilegePoints()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AE62590626D9F39_GET_PRIVILEGEPOINTS_OFFSET))(this);
	}

	::System::Void set_PrivilegePoints(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AE62590626D9F39_SET_PRIVILEGEPOINTS_OFFSET))(this, a1);
	}
};
