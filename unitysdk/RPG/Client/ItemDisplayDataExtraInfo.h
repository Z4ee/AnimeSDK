#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ITEMDISPLAYDATAEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x194EF860)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemDisplayDataExtraInfo_TypeDefinitionIndex = 65775;

	class ItemDisplayDataExtraInfo : public ::System::Object
	{
	public:
		::System::Boolean IsFromMultipleDrop; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATAEXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}
