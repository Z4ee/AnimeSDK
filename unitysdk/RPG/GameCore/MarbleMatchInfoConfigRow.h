#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2367A0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D237140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchInfoConfigRow_TypeDefinitionIndex = 11832;

	class MarbleMatchInfoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BanSealList; // 0x10
		::Il2CppArray<::System::UInt32>* BNpcIds; // 0x18
		::Il2CppArray<::System::UInt32>* ANpcIds; // 0x20
		::System::UInt32 Round; // 0x28
		::System::UInt32 CanGoMatchSubMission; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 CustomID; // 0x40
		::System::UInt32 Reward; // 0x44
		::System::UInt32 PerformanceID; // 0x48
		::System::UInt32 LevelID; // 0x4C
		::System::UInt32 FirstType; // 0x50
		::System::UInt32 PlayerID; // 0x54
		::System::UInt32 AIRank; // 0x58
		::System::UInt32 ID; // 0x5C
		::RPG::GameCore::MarblePhaseType PhaseID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMatchInfoConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchInfoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
