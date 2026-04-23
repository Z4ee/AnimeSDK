#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AIRLINEVARIABLESPEEDRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE9C50)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineVariableSpeedRange_TypeDefinitionIndex = 55141;

	class AirlineVariableSpeedRange : public ::System::Object
	{
	public:
		::System::Int32 startConnIndex; // 0x10
		::System::Int32 endConnIndex; // 0x14
		::System::Single speedMultiplier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEVARIABLESPEEDRANGE__CTOR_OFFSET))(this);
		}
	};
}
