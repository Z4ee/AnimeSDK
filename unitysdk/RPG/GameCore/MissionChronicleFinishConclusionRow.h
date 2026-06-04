#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONCHRONICLEFINISHCONCLUSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19943860)
#define RPG_GAMECORE_MISSIONCHRONICLEFINISHCONCLUSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199439C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChronicleFinishConclusionRow_TypeDefinitionIndex = 13453;

	class MissionChronicleFinishConclusionRow : public ::System::Object
	{
	public:
		::System::UInt32 MissionID; // 0x10
		::RPG::Client::TextID MissionConclusion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHRONICLEFINISHCONCLUSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionChronicleFinishConclusionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionChronicleFinishConclusionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHRONICLEFINISHCONCLUSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
