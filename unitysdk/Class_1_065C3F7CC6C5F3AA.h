#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterDataComponent; }

#define CLASS_1_065C3F7CC6C5F3AA_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x113C4610)
#define CLASS_1_065C3F7CC6C5F3AA_GET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x113C4690)
#define CLASS_1_065C3F7CC6C5F3AA_GET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x113C4660)
#define CLASS_1_065C3F7CC6C5F3AA_GET_TARGETDATA_OFFSET UNITYSDK_OFFSET(0x113C45F0)
#define CLASS_1_065C3F7CC6C5F3AA_GET_TARGETWPOS_OFFSET UNITYSDK_OFFSET(0x113C4630)
#define CLASS_1_065C3F7CC6C5F3AA_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x113C4620)
#define CLASS_1_065C3F7CC6C5F3AA_SET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x113C46B0)
#define CLASS_1_065C3F7CC6C5F3AA_SET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x113C4680)
#define CLASS_1_065C3F7CC6C5F3AA_SET_TARGETDATA_OFFSET UNITYSDK_OFFSET(0x113C4600)
#define CLASS_1_065C3F7CC6C5F3AA_SET_TARGETWPOS_OFFSET UNITYSDK_OFFSET(0x113C4650)
#define CLASS_1_065C3F7CC6C5F3AA__CTOR_OFFSET UNITYSDK_OFFSET(0x113C46C0)

inline static constexpr unsigned int Class_1_065C3F7CC6C5F3AA_TypeDefinitionIndex = 45845;

class Class_1_065C3F7CC6C5F3AA : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterDataComponent* _targetData_k__BackingField; // 0x10
	::System::Single _distance_k__BackingField; // 0x18
	::UnityEngine::Vector3 _rayStartPoint_k__BackingField; // 0x1C
	::UnityEngine::Vector3 _rayEndPoint_k__BackingField; // 0x28
	::RPG::MVector3 _targetWPos_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AdventureCharacterDataComponent* get_targetData()
	{
		return ((::RPG::GameCore::AdventureCharacterDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_GET_TARGETDATA_OFFSET))(this);
	}

	::System::Void set_targetData(::RPG::GameCore::AdventureCharacterDataComponent* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_SET_TARGETDATA_OFFSET))(this, value);
	}

	::System::Single get_distance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_GET_DISTANCE_OFFSET))(this);
	}

	::System::Void set_distance(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_SET_DISTANCE_OFFSET))(this, value);
	}

	::RPG::MVector3 get_targetWPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_GET_TARGETWPOS_OFFSET))(this);
	}

	::System::Void set_targetWPos(::RPG::MVector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_SET_TARGETWPOS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_rayStartPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_GET_RAYSTARTPOINT_OFFSET))(this);
	}

	::System::Void set_rayStartPoint(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_SET_RAYSTARTPOINT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_rayEndPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_GET_RAYENDPOINT_OFFSET))(this);
	}

	::System::Void set_rayEndPoint(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_065C3F7CC6C5F3AA_SET_RAYENDPOINT_OFFSET))(this, value);
	}
};
