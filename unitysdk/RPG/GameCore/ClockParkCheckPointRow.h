#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCheckPointType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKCHECKPOINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C25A160)
#define RPG_GAMECORE_CLOCKPARKCHECKPOINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C25A950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCheckPointRow_TypeDefinitionIndex = 10776;

	class ClockParkCheckPointRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* CheckWinTextList; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* CheckFailTextList; // 0x18
		::RPG::GameCore::ClockParkCheckPointType CheckPointType; // 0x20
		::System::UInt32 CheckParam1; // 0x24
		::System::UInt32 CheckParam3; // 0x28
		::System::UInt32 CheckPointID; // 0x2C
		::System::UInt32 CheckParam2; // 0x30
		::RPG::Client::TextID CheckPoint; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkCheckPointRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkCheckPointRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHECKPOINTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
