#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_MULTIPATHAVATARGETNEWAVATARPATHNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD8DB070)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarGetNewAvatarPathNotifyData_TypeDefinitionIndex = 66342;

	class MultiPathAvatarGetNewAvatarPathNotifyData : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayData* EidolonDisplayItem; // 0x10
		::Enum_3_DFCB42601400F441 MultiPathAvatarType; // 0x18
		::System::Boolean IsEarlyUnlocked; // 0x1C
		::System::Boolean IsNew; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARGETNEWAVATARPATHNOTIFYDATA__CTOR_OFFSET))(this);
		}
	};
}
