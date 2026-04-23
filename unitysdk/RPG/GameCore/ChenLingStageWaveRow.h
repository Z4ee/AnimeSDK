#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingStageWaveType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGSTAGEWAVEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187EEE00)
#define RPG_GAMECORE_CHENLINGSTAGEWAVEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187EEFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingStageWaveRow_TypeDefinitionIndex = 10601;

	class ChenLingStageWaveRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnemyList; // 0x10
		::RPG::GameCore::ChenLingStageWaveType Type; // 0x18
		::System::UInt32 StageID; // 0x1C
		::System::UInt32 Wave; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSTAGEWAVEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingStageWaveRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingStageWaveRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSTAGEWAVEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
