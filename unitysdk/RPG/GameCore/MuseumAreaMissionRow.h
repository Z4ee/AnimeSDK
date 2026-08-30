#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMAREAMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2E1F50)
#define RPG_GAMECORE_MUSEUMAREAMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E2640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaMissionRow_TypeDefinitionIndex = 14113;

	class MuseumAreaMissionRow : public ::System::Object
	{
	public:
		::System::UInt32 AreaID; // 0x10
		::System::UInt32 CollectItemNum; // 0x14
		::RPG::Client::TextID DialogDesc; // 0x18
		::System::UInt32 MissionID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumAreaMissionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumAreaMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
