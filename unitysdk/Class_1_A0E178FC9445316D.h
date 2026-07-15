#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_A0E178FC9445316D_GET_ID_OFFSET UNITYSDK_OFFSET(0x1709B7F0)
#define CLASS_1_A0E178FC9445316D_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1709B800)
#define CLASS_1_A0E178FC9445316D_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1709B820)
#define CLASS_1_A0E178FC9445316D__CTOR_OFFSET UNITYSDK_OFFSET(0x1709B830)

inline static constexpr unsigned int Class_1_A0E178FC9445316D_TypeDefinitionIndex = 69987;

class Class_1_A0E178FC9445316D : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_GET_ID_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_SET_POSITION_OFFSET))(this, a1);
	}
};
