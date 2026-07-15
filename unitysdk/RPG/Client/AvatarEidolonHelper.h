#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }

#define RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONITEMID_OFFSET UNITYSDK_OFFSET(0x18123EA0)
#define RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONUNLOCKITEMDATA_OFFSET UNITYSDK_OFFSET(0x18123CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEidolonHelper_TypeDefinitionIndex = 59875;

	class AvatarEidolonHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::ItemData* GetEidolonUnlockItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONUNLOCKITEMDATA_OFFSET))(a1);
		}

		static ::System::UInt32 GetEidolonItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREIDOLONHELPER_GETEIDOLONITEMID_OFFSET))(a1);
		}
	};
}
