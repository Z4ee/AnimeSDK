#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define RPG_CLIENT_TOGGLEBUTTONGROUP_TOGGLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB323880)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButtonGroup_ToggleEvent_TypeDefinitionIndex = 66973;

	class ToggleButtonGroup_ToggleEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_TOGGLEEVENT__CTOR_OFFSET))(this);
		}
	};
}
