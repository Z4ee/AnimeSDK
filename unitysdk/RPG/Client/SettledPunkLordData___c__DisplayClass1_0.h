#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CD9875F83BA64B10;

#define RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB164960)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__SYNCSETTLEDRECORDINFO_B__0_OFFSET UNITYSDK_OFFSET(0xB164E80)

namespace RPG::Client
{
	inline static constexpr unsigned int SettledPunkLordData___c__DisplayClass1_0_TypeDefinitionIndex = 61465;

	class SettledPunkLordData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 selfUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncSettledRecordInfo_b__0(::Class_1_CD9875F83BA64B10* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CD9875F83BA64B10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA___C__DISPLAYCLASS1_0__SYNCSETTLEDRECORDINFO_B__0_OFFSET))(this, x);
		}
	};
}
