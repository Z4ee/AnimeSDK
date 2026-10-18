#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PETMARBLEWAVEUPDATENOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE30A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleWaveUpdateNotify_TypeDefinitionIndex = 65831;

	class PetMarbleWaveUpdateNotify : public ::System::Object
	{
	public:
		::System::UInt32 WaveCount; // 0x10
		::System::UInt32 WaveIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLEWAVEUPDATENOTIFY__CTOR_OFFSET))(this);
		}
	};
}
