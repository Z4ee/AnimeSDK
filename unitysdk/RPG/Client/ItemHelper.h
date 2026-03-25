#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }

#define RPG_CLIENT_ITEMHELPER_GETITEM_OFFSET UNITYSDK_OFFSET(0x99698F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemHelper_TypeDefinitionIndex = 53380;

	class ItemHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::ItemData* GetItem(::System::UInt32 configID)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMHELPER_GETITEM_OFFSET))(configID);
		}
	};
}
