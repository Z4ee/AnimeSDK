#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StateValueEntry.h"

#define RPG_CLIENT_FLOATSTATEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x190DEE40)

namespace RPG::Client
{
	inline static constexpr unsigned int FloatStateValue_TypeDefinitionIndex = 70977;

	class FloatStateValue : public ::RPG::Client::StateValueEntry
	{
	public:
		::System::Single V; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOATSTATEVALUE__CTOR_OFFSET))(this);
		}
	};
}
