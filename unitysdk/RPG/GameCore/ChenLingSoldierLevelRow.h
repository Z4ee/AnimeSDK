#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGSOLDIERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E01AB50)
#define RPG_GAMECORE_CHENLINGSOLDIERLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E01ADD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierLevelRow_TypeDefinitionIndex = 11041;

	class ChenLingSoldierLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnitIDList; // 0x10
		::RPG::GameCore::FixPoint BattleScoreFix; // 0x18
		::System::UInt32 SoldierID; // 0x20
		::System::UInt32 Level; // 0x24
		::System::UInt32 EffectID; // 0x28
		::System::UInt32 FormationType; // 0x2C

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
