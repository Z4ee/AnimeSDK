#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkUnlockCost; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1711C140)
#define RPG_GAMECORE_CLOCKPARKTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1711C850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTalentRow_TypeDefinitionIndex = 10461;

	class ClockParkTalentRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::System::String* TalentDesc; // 0x18
		::RPG::GameCore::ClockParkUnlockCost* TalentUnlockCost; // 0x20
		::System::UInt32 ActivityTalentID; // 0x28
		::System::UInt32 TalentBuffID; // 0x2C
		::RPG::Client::TextID TalentTitle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkTalentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
