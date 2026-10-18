#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpaceZooMaskType.h"
#include "unitysdk/RPG/GameCore/SpaceZooSpicalEventState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPACEZOOSPECIALEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAF9E70)
#define RPG_GAMECORE_SPACEZOOSPECIALEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFA0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSpecialEventRow_TypeDefinitionIndex = 12371;

	class SpaceZooSpecialEventRow : public ::System::Object
	{
	public:
		::System::UInt32 SpecialCatID; // 0x10
		::RPG::GameCore::SpaceZooSpicalEventState EventState; // 0x14
		::RPG::GameCore::SpaceZooMaskType ProgenitorIsMask; // 0x18
		::RPG::GameCore::SpaceZooMaskType SpecialCatIsMask; // 0x1C
		::RPG::Client::TextID HintTip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooSpecialEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooSpecialEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
