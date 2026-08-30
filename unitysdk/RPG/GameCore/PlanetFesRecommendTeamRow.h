#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A19C0)
#define RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A1BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesRecommendTeamRow_TypeDefinitionIndex = 12183;

	class PlanetFesRecommendTeamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_3745C69C00F04B7D*>* Game; // 0x10
		::Il2CppArray<::Class_1_3745C69C00F04B7D*>* Exhibition; // 0x18
		::Il2CppArray<::Class_1_3745C69C00F04B7D*>* Business; // 0x20
		::System::UInt32 FesLevel; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesRecommendTeamRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesRecommendTeamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESRECOMMENDTEAMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
