#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MONOAUTOROTATE_START_OFFSET UNITYSDK_OFFSET(0xC93A430)
#define MONOAUTOROTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC93A490)
#define MONOAUTOROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC93A5B0)

inline static constexpr unsigned int MonoAutoRotate_TypeDefinitionIndex = 81780;

class MonoAutoRotate : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single RotateAngle; // 0x18
	::System::Single duration; // 0x1C
	::UnityEngine::Transform* _cachedTrans; // 0x20
	::System::Single _speed; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOAUTOROTATE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOAUTOROTATE_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOAUTOROTATE_UPDATE_OFFSET))(this);
	}
};
