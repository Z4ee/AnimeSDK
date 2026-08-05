#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13AD02C0)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13AD0310)
#define MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD02D0)

namespace MoleMole
{
	inline static constexpr unsigned int SeasonPreUnlockAfterLeavePopShow_TypeDefinitionIndex = 40633;

	class SeasonPreUnlockAfterLeavePopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _seasonID; // 0x28

		::System::Void _ctor(::System::Int32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW__CTOR_OFFSET))(this, seasonID);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SEASONPREUNLOCKAFTERLEAVEPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
