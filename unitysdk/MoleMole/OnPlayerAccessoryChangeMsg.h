#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_ONPLAYERACCESSORYCHANGEMSG_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17928330)
#define MOLEMOLE_ONPLAYERACCESSORYCHANGEMSG__CTOR_OFFSET UNITYSDK_OFFSET(0x179282F0)

namespace MoleMole
{
	inline static constexpr unsigned int OnPlayerAccessoryChangeMsg_TypeDefinitionIndex = 75761;

	class OnPlayerAccessoryChangeMsg : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor(::Enum_3_205B03D40B9BD873 showPage)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_ONPLAYERACCESSORYCHANGEMSG__CTOR_OFFSET))(this, showPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ONPLAYERACCESSORYCHANGEMSG_ONPROCESS_OFFSET))(this);
		}
	};
}
