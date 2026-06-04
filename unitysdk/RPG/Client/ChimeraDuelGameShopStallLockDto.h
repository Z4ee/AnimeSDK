#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLLOCKDTO__CTOR_OFFSET UNITYSDK_OFFSET(0xB68D210)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameShopStallLockDto_TypeDefinitionIndex = 59272;

	class ChimeraDuelGameShopStallLockDto : public ::System::Object
	{
	public:
		::System::UInt32 UniqueID; // 0x10
		::System::Boolean IsLocked; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLLOCKDTO__CTOR_OFFSET))(this);
		}
	};
}
