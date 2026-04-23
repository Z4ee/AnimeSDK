#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xB362AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_TypeDefinitionIndex = 63515;

	class TrainPartyBuildItemDynamicBindValue : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE__CTOR_OFFSET))(this);
		}
	};
}
