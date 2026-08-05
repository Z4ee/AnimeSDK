#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_TUNNELPARTDISPLAYMESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18923490)

namespace MoleMole
{
	inline static constexpr unsigned int TunnelPartDisplayMessageBase_TypeDefinitionIndex = 67788;

	class TunnelPartDisplayMessageBase : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor(::Enum_3_205B03D40B9BD873 matchPage)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_TUNNELPARTDISPLAYMESSAGEBASE__CTOR_OFFSET))(this, matchPage);
		}
	};
}
