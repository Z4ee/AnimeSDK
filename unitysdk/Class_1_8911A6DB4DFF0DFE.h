#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

#define CLASS_1_8911A6DB4DFF0DFE_GET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x176546E0)
#define CLASS_1_8911A6DB4DFF0DFE_SET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x176546F0)
#define CLASS_1_8911A6DB4DFF0DFE__CTOR_OFFSET UNITYSDK_OFFSET(0x17654700)

inline static constexpr unsigned int Class_1_8911A6DB4DFF0DFE_TypeDefinitionIndex = 65881;

class Class_1_8911A6DB4DFF0DFE : public ::System::Object
{
public:
	::UnityEngine::EventSystems::MoveDirection _MoveDirection_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8911A6DB4DFF0DFE__CTOR_OFFSET))(this);
	}

	::UnityEngine::EventSystems::MoveDirection get_MoveDirection()
	{
		return ((::UnityEngine::EventSystems::MoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8911A6DB4DFF0DFE_GET_MOVEDIRECTION_OFFSET))(this);
	}

	::System::Void set_MoveDirection(::UnityEngine::EventSystems::MoveDirection a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_8911A6DB4DFF0DFE_SET_MOVEDIRECTION_OFFSET))(this, a1);
	}
};
