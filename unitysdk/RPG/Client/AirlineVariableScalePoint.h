#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AIRLINEVARIABLESCALEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x908CE40)

namespace RPG::Client
{
	inline static constexpr unsigned int AirlineVariableScalePoint_TypeDefinitionIndex = 48394;

	class AirlineVariableScalePoint : public ::System::Object
	{
	public:
		::System::Int32 connIndex; // 0x10
		::System::Single scaleMultiplier; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEVARIABLESCALEPOINT__CTOR_OFFSET))(this);
		}
	};
}
