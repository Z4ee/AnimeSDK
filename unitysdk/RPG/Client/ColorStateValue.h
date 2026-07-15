#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateValueEntry.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CLIENT_COLORSTATEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18004380)

namespace RPG::Client
{
	inline static constexpr unsigned int ColorStateValue_TypeDefinitionIndex = 67810;

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
