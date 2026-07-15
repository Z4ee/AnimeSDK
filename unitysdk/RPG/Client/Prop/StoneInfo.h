#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_STONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1610E4C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StoneInfo_TypeDefinitionIndex = 74563;

	class StoneInfo : public ::System::Object
	{
	public:
		::System::UInt32 PropID; // 0x10
		::System::UInt32 AttachedBasePointPropID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STONEINFO__CTOR_OFFSET))(this);
		}
	};
}
