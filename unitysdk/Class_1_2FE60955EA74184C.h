#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

#define CLASS_1_2FE60955EA74184C_GET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x8B88790)
#define CLASS_1_2FE60955EA74184C_SET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x8B887A0)
#define CLASS_1_2FE60955EA74184C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B887B0)

inline static constexpr unsigned int Class_1_2FE60955EA74184C_TypeDefinitionIndex = 56318;

class Class_1_2FE60955EA74184C : public ::System::Object
{
public:
	::UnityEngine::EventSystems::MoveDirection _MoveDirection_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FE60955EA74184C__CTOR_OFFSET))(this);
	}

	::UnityEngine::EventSystems::MoveDirection get_MoveDirection()
	{
		return ((::UnityEngine::EventSystems::MoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FE60955EA74184C_GET_MOVEDIRECTION_OFFSET))(this);
	}

	::System::Void set_MoveDirection(::UnityEngine::EventSystems::MoveDirection value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_2FE60955EA74184C_SET_MOVEDIRECTION_OFFSET))(this, value);
	}
};
