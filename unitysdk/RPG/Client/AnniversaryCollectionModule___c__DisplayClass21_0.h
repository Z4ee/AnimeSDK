#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnniversaryCollectionGroupData; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB31D640)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__DISPLAYCLASS21_0__GETANNIVERSARYCOLLECTIONGROUPDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB31DF00)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionModule___c__DisplayClass21_0_TypeDefinitionIndex = 58380;

	class AnniversaryCollectionModule___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAnniversaryCollectionGroupData_b__0(::RPG::Client::AnniversaryCollectionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnniversaryCollectionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__DISPLAYCLASS21_0__GETANNIVERSARYCOLLECTIONGROUPDATA_B__0_OFFSET))(this, a1);
		}
	};
}
