#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F63A3640343861E8_GET_ID_OFFSET UNITYSDK_OFFSET(0x165004A0)
#define CLASS_1_F63A3640343861E8_GET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0x165004C0)
#define CLASS_1_F63A3640343861E8_SET_ID_OFFSET UNITYSDK_OFFSET(0x165004B0)
#define CLASS_1_F63A3640343861E8_SET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0x165004D0)
#define CLASS_1_F63A3640343861E8__CTOR_OFFSET UNITYSDK_OFFSET(0x165004E0)

inline static constexpr unsigned int Class_1_F63A3640343861E8_TypeDefinitionIndex = 59387;

class Class_1_F63A3640343861E8 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* _Waypoints_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F63A3640343861E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F63A3640343861E8_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F63A3640343861E8_SET_ID_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_Waypoints()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F63A3640343861E8_GET_WAYPOINTS_OFFSET))(this);
	}

	::System::Void set_Waypoints(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F63A3640343861E8_SET_WAYPOINTS_OFFSET))(this, a1);
	}
};
