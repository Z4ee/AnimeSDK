#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170BF2F0)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170BFAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkSpecialMissionRow_TypeDefinitionIndex = 10469;

	class ClockParkSpecialMissionRow : public ::System::Object
	{
	public:
		::System::String* SpecialMissionIconPath; // 0x10
		::System::String* SpecialMissionImgPath; // 0x18
		::System::UInt32 SpecialMissionGotoIDBefore; // 0x20
		::System::UInt32 SpecialMissionMapInfo; // 0x24
		::RPG::Client::TextID EventName; // 0x28
		::System::UInt32 SpecialMissionID; // 0x38
		::System::UInt32 EventNum; // 0x3C
		::System::UInt32 SpecialMissionUnlockItemID; // 0x40
		::System::UInt32 SpecialMissionGotoIDAfter; // 0x44
		::System::UInt32 EventScript; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkSpecialMissionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkSpecialMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
