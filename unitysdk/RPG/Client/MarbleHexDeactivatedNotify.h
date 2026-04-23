#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MARBLEHEXDEACTIVATEDNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xA813A70)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleHexDeactivatedNotify_TypeDefinitionIndex = 60588;

	class MarbleHexDeactivatedNotify : public ::System::Object
	{
	public:
		::System::Boolean IsEnemy; // 0x10
		::System::UInt32 HexID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXDEACTIVATEDNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
