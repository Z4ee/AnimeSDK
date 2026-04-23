#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189F5690)
#define RPG_GAMECORE_HELIOBUSPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189F5F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPhaseRow_TypeDefinitionIndex = 13010;

	class HeliobusPhaseRow : public ::System::Object
	{
	public:
		::System::String* PhaseSmallIconPath; // 0x10
		::System::String* PhaseBigIconPath; // 0x18
		::RPG::Client::TextID PhaseTextID; // 0x20
		::System::UInt32 PhaseFans; // 0x30
		::System::UInt32 ReceiveMissionID; // 0x34
		::RPG::Client::TextID Heliobus_UpMissionDesc; // 0x38
		::RPG::Client::TextID Heliobus_ToDoListTitle_Before; // 0x48
		::RPG::Client::TextID Heliobus_ToDoListTitle_After; // 0x58
		::System::UInt32 HeliobusPhaseID; // 0x68
		::System::UInt32 UnlockMissionID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusPhaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
