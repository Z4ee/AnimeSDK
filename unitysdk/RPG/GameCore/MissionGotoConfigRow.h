#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONGOTOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B2DF50)
#define RPG_GAMECORE_MISSIONGOTOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2E500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionGotoConfigRow_TypeDefinitionIndex = 13417;

	class MissionGotoConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 GotoID; // 0x10
		::RPG::Client::TextID Desc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MissionGotoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionGotoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONGOTOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
