#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateValueEntry.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_COLORSTATEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A277A10)

namespace RPG::Client
{
	inline static constexpr unsigned int ColorStateValue_TypeDefinitionIndex = 70978;

	class ColorStateValue : public ::RPG::Client::StateValueEntry
	{
	public:
		::UnityEngine::Color V; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLORSTATEVALUE__CTOR_OFFSET))(this);
		}
	};
}
