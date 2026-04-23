#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_4A84A80561F9EEAB_GET_ID_OFFSET UNITYSDK_OFFSET(0x12ABD030)
#define CLASS_1_4A84A80561F9EEAB_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x12ABD050)
#define CLASS_1_4A84A80561F9EEAB_SET_ID_OFFSET UNITYSDK_OFFSET(0x12ABD040)
#define CLASS_1_4A84A80561F9EEAB_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x12ABD070)
#define CLASS_1_4A84A80561F9EEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABD080)

inline static constexpr unsigned int Class_1_4A84A80561F9EEAB_TypeDefinitionIndex = 57330;

class Class_1_4A84A80561F9EEAB : public ::System::Object
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4A84A80561F9EEAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A84A80561F9EEAB_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A84A80561F9EEAB_SET_ID_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A84A80561F9EEAB_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4A84A80561F9EEAB_SET_POSITION_OFFSET))(this, value);
	}
};
