#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_F71F7FB55BBEB1D9;
class Class_3_4A628DAD59F70BCB_6;

#define MOLEMOLE_UIVHSREWARDINFO_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x10EF8D00)
#define MOLEMOLE_UIVHSREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF8CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSRewardInfo_TypeDefinitionIndex = 84747;

	class UIVHSRewardInfo : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_3_4A628DAD59F70BCB_6* settleData; // 0x28
		::Class_1_F71F7FB55BBEB1D9* storeData; // 0x30

		::System::Void _ctor(::Class_3_4A628DAD59F70BCB_6* settleData, ::Class_1_F71F7FB55BBEB1D9* storeData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_4A628DAD59F70BCB_6*, ::Class_1_F71F7FB55BBEB1D9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO__CTOR_OFFSET))(this, settleData, storeData);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO_ONPROCESS_OFFSET))(this);
		}
	};
}
