#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PriorityQueue_1.h"

namespace UnityEngine { class GameObject; }

#define CLASS_2_79B84369A48F20A2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x157D9C50)

inline static constexpr unsigned int Class_2_79B84369A48F20A2_1_TypeDefinitionIndex = 59171;

class Class_2_79B84369A48F20A2_1 : public ::RPG::GameCore::PriorityQueue_1<::UnityEngine::GameObject*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79B84369A48F20A2_1__CTOR_OFFSET))(this);
	}
};
