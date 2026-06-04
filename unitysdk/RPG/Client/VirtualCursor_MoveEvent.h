#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_VIRTUALCURSOR_MOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCC24780)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_MoveEvent_TypeDefinitionIndex = 68385;

	class VirtualCursor_MoveEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_MOVEEVENT__CTOR_OFFSET))(this);
		}
	};
}
