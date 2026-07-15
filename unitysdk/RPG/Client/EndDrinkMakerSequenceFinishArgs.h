#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ENDDRINKMAKERSEQUENCEFINISHARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18D8BF40)

namespace RPG::Client
{
	inline static constexpr unsigned int EndDrinkMakerSequenceFinishArgs_TypeDefinitionIndex = 60848;

	class EndDrinkMakerSequenceFinishArgs : public ::System::Object
	{
	public:
		::System::UInt32 Tips; // 0x10
		::System::UInt32 GuestId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENDDRINKMAKERSEQUENCEFINISHARGS__CTOR_OFFSET))(this);
		}
	};
}
