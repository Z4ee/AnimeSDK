#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D75FD90)
#define RPG_GAMECORE_HELIOBUSPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D760660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPhaseRow_TypeDefinitionIndex = 13739;

	class HeliobusPhaseRow : public ::System::Object
	{
	public:
		::System::String* PhaseBigIconPath; // 0x10
		::System::String* PhaseSmallIconPath; // 0x18
		::RPG::Client::TextID Heliobus_UpMissionDesc; // 0x20
		::RPG::Client::TextID Heliobus_ToDoListTitle_After; // 0x30
		::System::UInt32 UnlockMissionID; // 0x40
		::System::UInt32 PhaseFans; // 0x44
		::System::UInt32 HeliobusPhaseID; // 0x48
		::System::UInt32 ReceiveMissionID; // 0x4C
		::RPG::Client::TextID Heliobus_ToDoListTitle_Before; // 0x50
		::RPG::Client::TextID PhaseTextID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeliobusPhaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
