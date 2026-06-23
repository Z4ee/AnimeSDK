#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class MeshCollider; }

#define BUDDYINPUTHANDLER_DISPATCHUIPOINTSIGNAL_OFFSET UNITYSDK_OFFSET(0x1014FDC0)
#define BUDDYINPUTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1014FE00)

inline static constexpr unsigned int BuddyInputHandler_TypeDefinitionIndex = 69551;

class BuddyInputHandler : public ::System::Object
{
public:
	::UnityEngine::MeshCollider* tvCollider; // 0x10
	::UnityEngine::Vector2 mousePisition; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYINPUTHANDLER__CTOR_OFFSET))(this);
	}

	::System::Void DispatchUIPointSignal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUDDYINPUTHANDLER_DISPATCHUIPOINTSIGNAL_OFFSET))(this);
	}
};
