#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5516F5B2865E1357_4;
class Class_1_D17272E82AE804C2_705;

#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC413DD0)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC4142A0)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET UNITYSDK_OFFSET(0xC413E70)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC414330)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultItemData_TypeDefinitionIndex = 62280;

	class PlanetFesGachaResultItemData : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create(::Class_1_D17272E82AE804C2_705* a1)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_D17272E82AE804C2_705*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create_1(::Class_1_5516F5B2865E1357_4* a1)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_5516F5B2865E1357_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void Merge(::RPG::Client::PlanetFesGachaResultItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET))(this, a1);
		}
	};
}
