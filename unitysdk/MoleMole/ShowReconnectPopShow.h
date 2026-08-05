#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_SHOWRECONNECTPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13860550)
#define MOLEMOLE_SHOWRECONNECTPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13860590)
#define MOLEMOLE_SHOWRECONNECTPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13860560)

namespace MoleMole
{
	inline static constexpr unsigned int ShowReconnectPopShow_TypeDefinitionIndex = 77714;

	class ShowReconnectPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Boolean isAFK; // 0x28
		::System::Boolean cancelGiveup; // 0x29

		::System::Void _ctor(::System::Boolean isAFK, ::System::Boolean cancelGiveup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOWRECONNECTPOPSHOW__CTOR_OFFSET))(this, isAFK, cancelGiveup);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOWRECONNECTPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOWRECONNECTPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
