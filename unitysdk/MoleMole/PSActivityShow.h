#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_PSACTIVITYSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11DE4540)
#define MOLEMOLE_PSACTIVITYSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11DE4550)
#define MOLEMOLE_PSACTIVITYSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x11DE46A0)

namespace MoleMole
{
	inline static constexpr unsigned int PSActivityShow_TypeDefinitionIndex = 71113;

	class PSActivityShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PSACTIVITYSHOW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PSACTIVITYSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PSACTIVITYSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
