#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTTALENTUPDATENOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BE950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalentUpdateNotify_TypeDefinitionIndex = 65324;

	class GridFightTalentUpdateNotify : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTalentType TalentType; // 0x10
		::System::UInt32 UnlockID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTUPDATENOTIFY__CTOR_OFFSET))(this);
		}
	};
}
