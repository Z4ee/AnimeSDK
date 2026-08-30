#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESGACHACARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D341030)
#define RPG_GAMECORE_PLANETFESGACHACARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3411B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGachaCardRow_TypeDefinitionIndex = 12137;

	class PlanetFesGachaCardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::UInt32 GachaID; // 0x18
		::System::UInt32 CardThemeID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHACARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesGachaCardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesGachaCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHACARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
