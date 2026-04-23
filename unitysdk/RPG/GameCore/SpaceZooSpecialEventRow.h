#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpaceZooMaskType.h"
#include "unitysdk/RPG/GameCore/SpaceZooSpicalEventState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPACEZOOSPECIALEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E7D2C0)
#define RPG_GAMECORE_SPACEZOOSPECIALEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E7D520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSpecialEventRow_TypeDefinitionIndex = 11697;

	class SpaceZooSpecialEventRow : public ::System::Object
	{
	public:
		::RPG::GameCore::SpaceZooSpicalEventState EventState; // 0x10
		::RPG::GameCore::SpaceZooMaskType SpecialCatIsMask; // 0x14
		::System::UInt32 SpecialCatID; // 0x18
		::RPG::GameCore::SpaceZooMaskType ProgenitorIsMask; // 0x1C
		::RPG::Client::TextID HintTip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpaceZooSpecialEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooSpecialEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSPECIALEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
