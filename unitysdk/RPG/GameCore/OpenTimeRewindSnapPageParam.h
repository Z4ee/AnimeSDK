#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityTimeRewindComponent; }

#define RPG_GAMECORE_OPENTIMEREWINDSNAPPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB6FE860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTimeRewindSnapPageParam_TypeDefinitionIndex = 49207;

	class OpenTimeRewindSnapPageParam : public ::System::Object
	{
	public:
		::RPG::GameCore::EntityTimeRewindComponent* TimeRewindComponent; // 0x10
		::System::Single StartRatio; // 0x18
		::System::Single EndRatio; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDSNAPPAGEPARAM__CTOR_OFFSET))(this);
		}
	};
}
