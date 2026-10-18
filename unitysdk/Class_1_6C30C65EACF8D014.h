#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterDataComponent; }

#define CLASS_1_6C30C65EACF8D014_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xB934170)
#define CLASS_1_6C30C65EACF8D014_GET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0xB9341F0)
#define CLASS_1_6C30C65EACF8D014_GET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0xB9341C0)
#define CLASS_1_6C30C65EACF8D014_GET_TARGETDATA_OFFSET UNITYSDK_OFFSET(0xB934150)
#define CLASS_1_6C30C65EACF8D014_GET_TARGETWPOS_OFFSET UNITYSDK_OFFSET(0xB934190)
#define CLASS_1_6C30C65EACF8D014_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xB934180)
#define CLASS_1_6C30C65EACF8D014_SET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0xB934210)
#define CLASS_1_6C30C65EACF8D014_SET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0xB9341E0)
#define CLASS_1_6C30C65EACF8D014_SET_TARGETDATA_OFFSET UNITYSDK_OFFSET(0xB934160)
#define CLASS_1_6C30C65EACF8D014_SET_TARGETWPOS_OFFSET UNITYSDK_OFFSET(0xB9341B0)
#define CLASS_1_6C30C65EACF8D014__CTOR_OFFSET UNITYSDK_OFFSET(0xB934220)

inline static constexpr unsigned int Class_1_6C30C65EACF8D014_TypeDefinitionIndex = 56972;

class Class_1_6C30C65EACF8D014 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterDataComponent* _targetData_k__BackingField; // 0x10
	::System::Single _distance_k__BackingField; // 0x18
	::RPG::MVector3 _targetWPos_k__BackingField; // 0x1C
	::UnityEngine::Vector3 _rayStartPoint_k__BackingField; // 0x28
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
