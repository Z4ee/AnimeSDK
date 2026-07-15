#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapPregressShowType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHESTANDRAIDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F8810)

namespace RPG::Client
{
	inline static constexpr unsigned int ChestAndRaidInfo_TypeDefinitionIndex = 63420;

	class ChestAndRaidInfo : public ::System::Object
	{
	public:
		::System::UInt32 ExistNum; // 0x10
		::System::UInt32 OpenedNum; // 0x14
		::RPG::GameCore::MapPregressShowType ShowType; // 0x18
		::System::UInt32 ExistNumCurWorldLevel; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::MapPregressShowType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MapPregressShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
