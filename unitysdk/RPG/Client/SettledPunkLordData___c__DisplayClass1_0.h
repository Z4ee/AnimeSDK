#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C222160220C38EC4;

#define RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B96B0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__SYNCSETTLEDRECORDINFO_B__0_OFFSET UNITYSDK_OFFSET(0xC8B9B60)

namespace RPG::Client
{
	inline static constexpr unsigned int SettledPunkLordData___c__DisplayClass1_0_TypeDefinitionIndex = 62398;

	class SettledPunkLordData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 selfUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncSettledRecordInfo_b__0(::Class_1_C222160220C38EC4* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_C222160220C38EC4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__SYNCSETTLEDRECORDINFO_B__0_OFFSET))(this, a1);
		}
	};
}
