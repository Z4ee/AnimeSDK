#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_MULTIPATHAVATARGETNEWAVATARPATHNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE9EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarGetNewAvatarPathNotifyData_TypeDefinitionIndex = 61063;

	class MultiPathAvatarGetNewAvatarPathNotifyData : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayData* EidolonDisplayItem; // 0x10
		::System::Boolean IsEarlyUnlocked; // 0x18
		::System::Boolean IsNew; // 0x19
		::Enum_3_DFCB42601400F441 MultiPathAvatarType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARGETNEWAVATARPATHNOTIFYDATA__CTOR_OFFSET))(this);
		}
	};
}
