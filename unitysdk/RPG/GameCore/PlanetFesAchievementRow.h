#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESACHIEVEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4D10F0)
#define RPG_GAMECORE_PLANETFESACHIEVEMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D1200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAchievementRow_TypeDefinitionIndex = 11753;

	class PlanetFesAchievementRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESACHIEVEMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAchievementRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAchievementRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESACHIEVEMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
