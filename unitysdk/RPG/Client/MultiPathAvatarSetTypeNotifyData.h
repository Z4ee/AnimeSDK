#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MULTIPATHAVATARSETTYPENOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE9330)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarSetTypeNotifyData_TypeDefinitionIndex = 61068;

	class MultiPathAvatarSetTypeNotifyData : public ::System::Object
	{
	public:
		::Enum_3_DFCB42601400F441 NewPathAvatarType; // 0x10
		::Enum_3_DFCB42601400F441 OldPathAvatarType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARSETTYPENOTIFYDATA__CTOR_OFFSET))(this);
		}
	};
}
