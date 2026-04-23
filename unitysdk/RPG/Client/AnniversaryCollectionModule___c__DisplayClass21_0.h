#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnniversaryCollectionGroupData; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2D180)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__DISPLAYCLASS21_0__GETANNIVERSARYCOLLECTIONGROUPDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9D2DA60)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionModule___c__DisplayClass21_0_TypeDefinitionIndex = 57568;

	class AnniversaryCollectionModule___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAnniversaryCollectionGroupData_b__0(::RPG::Client::AnniversaryCollectionGroupData* g)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnniversaryCollectionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__DISPLAYCLASS21_0__GETANNIVERSARYCOLLECTIONGROUPDATA_B__0_OFFSET))(this, g);
		}
	};
}
