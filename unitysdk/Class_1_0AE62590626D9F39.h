#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0AE62590626D9F39_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15B27680)
#define CLASS_1_0AE62590626D9F39_GET_PRIVILEGEPOINTS_OFFSET UNITYSDK_OFFSET(0x15B276A0)
#define CLASS_1_0AE62590626D9F39_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15B27690)
#define CLASS_1_0AE62590626D9F39_SET_PRIVILEGEPOINTS_OFFSET UNITYSDK_OFFSET(0x15B276B0)
#define CLASS_1_0AE62590626D9F39__CTOR_OFFSET UNITYSDK_OFFSET(0x15B27630)

inline static constexpr unsigned int Class_1_0AE62590626D9F39_TypeDefinitionIndex = 75318;

class Class_1_0AE62590626D9F39 : public ::System::Object
{
public:
	::System::UInt32 _PrivilegePoints_k__BackingField; // 0x10
	::System::UInt32 _Level_k__BackingField; // 0x14

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
