#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5EB756264B1E13D9_3;
class Class_1_FA4F4A67B1C04320_636;

#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9F9AB90)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F9B040)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET UNITYSDK_OFFSET(0x9F9AC30)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9B0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultItemData_TypeDefinitionIndex = 54193;

	class PlanetFesGachaResultItemData : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create(::Class_1_FA4F4A67B1C04320_636* item)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_FA4F4A67B1C04320_636*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET))(item);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create_1(::Class_1_5EB756264B1E13D9_3* item)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_5EB756264B1E13D9_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET))(item);
		}

		::System::Void Merge(::RPG::Client::PlanetFesGachaResultItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET))(this, data);
		}
	};
}
