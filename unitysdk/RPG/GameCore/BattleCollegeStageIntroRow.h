#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186F1630)
#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186F17F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeStageIntroRow_TypeDefinitionIndex = 12132;

	class BattleCollegeStageIntroRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Introduction; // 0x10
		::System::UInt32 StageIntroDescID; // 0x20
		::System::UInt32 Index; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleCollegeStageIntroRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleCollegeStageIntroRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
