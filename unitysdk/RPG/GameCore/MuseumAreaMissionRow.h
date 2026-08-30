#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMAREAMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE7B880)
#define RPG_GAMECORE_MUSEUMAREAMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7BF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaMissionRow_TypeDefinitionIndex = 14113;

	class MuseumAreaMissionRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DialogDesc; // 0x10
		::System::UInt32 AreaID; // 0x20
		::System::UInt32 CollectItemNum; // 0x24
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
