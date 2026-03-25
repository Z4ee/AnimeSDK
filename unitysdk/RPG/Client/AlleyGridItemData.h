#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridTypeEnum.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ALLEYGRIDITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x909C720)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyGridItemData_TypeDefinitionIndex = 50584;

	class AlleyGridItemData : public ::System::Object
	{
	public:
		::System::UInt32 RelatedEventID; // 0x10
		::System::UInt32 GridID; // 0x14
		::System::UInt32 PosY; // 0x18
		::System::UInt32 RegionID; // 0x1C
		::System::UInt32 PosX; // 0x20
		::System::Boolean IsHideNew; // 0x24
		::RPG::GameCore::GridTypeEnum GridType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGRIDITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
