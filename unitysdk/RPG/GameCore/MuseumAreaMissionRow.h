#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMAREAMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1745F490)
#define RPG_GAMECORE_MUSEUMAREAMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1745FB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaMissionRow_TypeDefinitionIndex = 13016;

	class MuseumAreaMissionRow : public ::System::Object
	{
	public:
		::System::UInt32 MissionID; // 0x10
		::RPG::Client::TextID DialogDesc; // 0x18
		::System::UInt32 CollectItemNum; // 0x28
		::System::UInt32 AreaID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumAreaMissionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumAreaMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
