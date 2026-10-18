#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_4.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788_GET_CHIPID_OFFSET UNITYSDK_OFFSET(0xB28BBD0)
#define CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xB28BBF0)
#define CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788_SET_CHIPID_OFFSET UNITYSDK_OFFSET(0xB28BBE0)
#define CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xB28BC10)
#define CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788__CTOR_OFFSET UNITYSDK_OFFSET(0xB28BC20)

inline static constexpr unsigned int Class_1_E2972620852557B7_Class_3_9446BF3BADFA1788_TypeDefinitionIndex = 79531;

class Class_1_E2972620852557B7_Class_3_9446BF3BADFA1788 : public ::Class_2_534AF681CC2BD5FD_4<::System::Boolean>
{
public:
	::System::UInt32 _ChipID_k__BackingField; // 0x20
	::System::Nullable_1<::UnityEngine::Vector2Int> _TargetPosition_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ChipID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788_GET_CHIPID_OFFSET))(this);
	}

	::System::Void set_ChipID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788_SET_CHIPID_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector2Int> get_TargetPosition()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788_GET_TARGETPOSITION_OFFSET))(this);
	}

	::System::Void set_TargetPosition(::System::Nullable_1<::UnityEngine::Vector2Int> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>))((::PBYTE)hIl2Cpp + CLASS_1_E2972620852557B7_CLASS_3_9446BF3BADFA1788_SET_TARGETPOSITION_OFFSET))(this, a1);
	}
};
