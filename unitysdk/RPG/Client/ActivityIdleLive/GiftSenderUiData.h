#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTSENDERUIDATA_GETNAMESTR_OFFSET UNITYSDK_OFFSET(0x1B90AEE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTSENDERUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B90AF60)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int GiftSenderUiData_TypeDefinitionIndex = 75124;

	class GiftSenderUiData : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::Int32 Rank; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTSENDERUIDATA__CTOR_OFFSET))(this);
		}

		::System::String* GetNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_GIFTSENDERUIDATA_GETNAMESTR_OFFSET))(this);
		}
	};
}
