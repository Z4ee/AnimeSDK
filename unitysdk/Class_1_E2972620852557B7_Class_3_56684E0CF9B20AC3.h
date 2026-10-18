#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_4.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3_GET_CHIPID_OFFSET UNITYSDK_OFFSET(0xB28BB60)
#define CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xB28BB80)
#define CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3_SET_CHIPID_OFFSET UNITYSDK_OFFSET(0xB28BB70)
#define CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xB28BB90)
#define CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3__CTOR_OFFSET UNITYSDK_OFFSET(0xB28BBA0)

inline static constexpr unsigned int Class_1_E2972620852557B7_Class_3_56684E0CF9B20AC3_TypeDefinitionIndex = 79533;

class Class_1_E2972620852557B7_Class_3_56684E0CF9B20AC3 : public ::Class_2_534AF681CC2BD5FD_4<::System::Boolean>
{
public:
	::UnityEngine::Vector2Int _TargetPosition_k__BackingField; // 0x20
	::System::UInt32 _ChipID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ChipID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3_GET_CHIPID_OFFSET))(this);
	}

	::System::Void set_ChipID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3_SET_CHIPID_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int get_TargetPosition()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3_GET_TARGETPOSITION_OFFSET))(this);
	}

	::System::Void set_TargetPosition(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_56684E0CF9B20AC3_SET_TARGETPOSITION_OFFSET))(this, a1);
	}
};
