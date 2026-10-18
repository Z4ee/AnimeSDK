#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PETMARBLEWAVEPETSPAWNNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEC630)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleWavePetSpawnNotify_TypeDefinitionIndex = 65832;

	class PetMarbleWavePetSpawnNotify : public ::System::Object
	{
	public:
		::System::UInt32 WaveIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEWAVEPETSPAWNNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
