#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define RPG_CLIENT_CUBEMAPGENERATORBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E08A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CubemapGeneratorBehavior_TypeDefinitionIndex = 65469;

	class CubemapGeneratorBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUBEMAPGENERATORBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
