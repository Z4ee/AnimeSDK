#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterDataComponent; }

#define CLASS_1_6C30C65EACF8D014_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x19A7E310)
#define CLASS_1_6C30C65EACF8D014_GET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x19A7E390)
#define CLASS_1_6C30C65EACF8D014_GET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x19A7E360)
#define CLASS_1_6C30C65EACF8D014_GET_TARGETDATA_OFFSET UNITYSDK_OFFSET(0x19A7E2F0)
#define CLASS_1_6C30C65EACF8D014_GET_TARGETWPOS_OFFSET UNITYSDK_OFFSET(0x19A7E330)
#define CLASS_1_6C30C65EACF8D014_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x19A7E320)
#define CLASS_1_6C30C65EACF8D014_SET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x19A7E3B0)
#define CLASS_1_6C30C65EACF8D014_SET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x19A7E380)
#define CLASS_1_6C30C65EACF8D014_SET_TARGETDATA_OFFSET UNITYSDK_OFFSET(0x19A7E300)
#define CLASS_1_6C30C65EACF8D014_SET_TARGETWPOS_OFFSET UNITYSDK_OFFSET(0x19A7E350)
#define CLASS_1_6C30C65EACF8D014__CTOR_OFFSET UNITYSDK_OFFSET(0x19A7E3C0)

inline static constexpr unsigned int Class_1_6C30C65EACF8D014_TypeDefinitionIndex = 57139;

class Class_1_6C30C65EACF8D014 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterDataComponent* _targetData_k__BackingField; // 0x10
	::UnityEngine::Vector3 _rayStartPoint_k__BackingField; // 0x18
	::RPG::MVector3 _targetWPos_k__BackingField; // 0x24
	::System::Single _distance_k__BackingField; // 0x30
	::UnityEngine::Vector3 _rayEndPoint_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AdventureCharacterDataComponent* get_targetData()
	{
		return ((::RPG::GameCore::AdventureCharacterDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_GET_TARGETDATA_OFFSET))(this);
	}

	::System::Void set_targetData(::RPG::GameCore::AdventureCharacterDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_SET_TARGETDATA_OFFSET))(this, a1);
	}

	::System::Single get_distance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_GET_DISTANCE_OFFSET))(this);
	}

	::System::Void set_distance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_SET_DISTANCE_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_targetWPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_GET_TARGETWPOS_OFFSET))(this);
	}

	::System::Void set_targetWPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_SET_TARGETWPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_rayStartPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_GET_RAYSTARTPOINT_OFFSET))(this);
	}

	::System::Void set_rayStartPoint(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_SET_RAYSTARTPOINT_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_rayEndPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_GET_RAYENDPOINT_OFFSET))(this);
	}

	::System::Void set_rayEndPoint(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6C30C65EACF8D014_SET_RAYENDPOINT_OFFSET))(this, a1);
	}
};
