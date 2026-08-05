#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0100F523D1975E90.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x129D80C0)
#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x129D8110)
#define MOLEMOLE_POPMONSTERCARDDELIVERSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x129D80D0)

namespace MoleMole
{
	inline static constexpr unsigned int PopMonsterCardDeliverShow_TypeDefinitionIndex = 85899;

	class PopMonsterCardDeliverShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Enum_3_0100F523D1975E90 _showType; // 0x28

		::System::Void _ctor(::Enum_3_205B03D40B9BD873 showPage, ::Enum_3_0100F523D1975E90 showType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_205B03D40B9BD873, ::Enum_3_0100F523D1975E90))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW__CTOR_OFFSET))(this, showPage, showType);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POPMONSTERCARDDELIVERSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
