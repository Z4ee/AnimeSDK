#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C389F30)
#define RPG_GAMECORE_CHENLINGSOLDIERLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38A1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierLevelRow_TypeDefinitionIndex = 10666;

	class ChenLingSoldierLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnitIDList; // 0x10
		::System::UInt32 Level; // 0x18
		::System::UInt32 SoldierID; // 0x1C
		::System::UInt32 FormationType; // 0x20
		::System::UInt32 EffectID; // 0x24
		::RPG::GameCore::FixPoint BattleScoreFix; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingSoldierLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingSoldierLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
