#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_F71F7FB55BBEB1D9;
class Class_3_6AAFAACF7E52506E;

#define MOLEMOLE_UIVHSREWARDINFO_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x157C6EC0)
#define MOLEMOLE_UIVHSREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x157C6E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSRewardInfo_TypeDefinitionIndex = 87596;

	class UIVHSRewardInfo : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_3_6AAFAACF7E52506E* settleData; // 0x28
		::Class_1_F71F7FB55BBEB1D9* storeData; // 0x30

		::System::Void _ctor(::Class_3_6AAFAACF7E52506E* settleData, ::Class_1_F71F7FB55BBEB1D9* storeData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6AAFAACF7E52506E*, ::Class_1_F71F7FB55BBEB1D9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO__CTOR_OFFSET))(this, settleData, storeData);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO_ONPROCESS_OFFSET))(this);
		}
	};
}
