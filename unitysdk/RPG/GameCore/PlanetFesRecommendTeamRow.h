#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_1;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C0AA80)
#define RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0ACD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesRecommendTeamRow_TypeDefinitionIndex = 11595;

	class PlanetFesRecommendTeamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_3745C69C00F04B7D_1*>* Business; // 0x10
		::Il2CppArray<::Class_1_3745C69C00F04B7D_1*>* Game; // 0x18
		::Il2CppArray<::Class_1_3745C69C00F04B7D_1*>* Exhibition; // 0x20
		::System::UInt32 FesLevel; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesRecommendTeamRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesRecommendTeamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
