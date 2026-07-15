#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTSENDERUIDATA_GETNAMESTR_OFFSET UNITYSDK_OFFSET(0x19D25B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_GIFTSENDERUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D25BC0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int GiftSenderUiData_TypeDefinitionIndex = 71818;

	class GiftSenderUiData : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::Int32 Rank; // 0x28

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
