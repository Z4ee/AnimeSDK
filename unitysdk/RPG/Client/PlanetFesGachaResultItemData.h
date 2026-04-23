#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5516F5B2865E1357_4;
class Class_1_D17272E82AE804C2_669;

#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xACBF440)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xACBF8F0)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET UNITYSDK_OFFSET(0xACBF4E0)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xACBF980)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultItemData_TypeDefinitionIndex = 61356;

	class PlanetFesGachaResultItemData : public ::System::Object
	{
	public:
		::System::UInt32 ItemNum; // 0x10
		::System::UInt32 ItemID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create(::Class_1_D17272E82AE804C2_669* item)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_D17272E82AE804C2_669*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET))(item);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create_1(::Class_1_5516F5B2865E1357_4* item)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_5516F5B2865E1357_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET))(item);
		}

		::System::Void Merge(::RPG::Client::PlanetFesGachaResultItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET))(this, data);
		}
	};
}
