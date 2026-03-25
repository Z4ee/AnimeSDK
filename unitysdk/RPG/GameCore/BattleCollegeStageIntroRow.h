#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FCDCA0)
#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCDE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeStageIntroRow_TypeDefinitionIndex = 11719;

	class BattleCollegeStageIntroRow : public ::System::Object
	{
	public:
		::System::UInt32 Index; // 0x10
		::System::UInt32 StageIntroDescID; // 0x14
		::RPG::Client::TextID Introduction; // 0x18

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
