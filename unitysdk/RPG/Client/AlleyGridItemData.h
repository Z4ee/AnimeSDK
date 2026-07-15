#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridTypeEnum.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ALLEYGRIDITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECBA90)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyGridItemData_TypeDefinitionIndex = 59521;

	class AlleyGridItemData : public ::System::Object
	{
	public:
		::System::Boolean IsHideNew; // 0x10
		::System::UInt32 GridID; // 0x14
		::System::UInt32 RegionID; // 0x18
		::RPG::GameCore::GridTypeEnum GridType; // 0x1C
		::System::UInt32 PosX; // 0x20
		::System::UInt32 PosY; // 0x24
		::System::UInt32 RelatedEventID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYGRIDITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
