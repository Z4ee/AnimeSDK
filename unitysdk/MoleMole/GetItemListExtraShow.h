#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_413212C3F231D1B9.h"
#include "unitysdk/MoleMole/GetItemListShow.h"

class Class_1_61B3BCD70D19C820;

#define MOLEMOLE_GETITEMLISTEXTRASHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x19DC0C90)
#define MOLEMOLE_GETITEMLISTEXTRASHOW_SHOWNATIVEREWARDPOP_OFFSET UNITYSDK_OFFSET(0x19DC0D10)
#define MOLEMOLE_GETITEMLISTEXTRASHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC0C80)
#define MOLEMOLE_GETITEMLISTEXTRASHOW___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x19DC10E0)

namespace MoleMole
{
	inline static constexpr unsigned int GetItemListExtraShow_TypeDefinitionIndex = 51317;

	class GetItemListExtraShow : public ::MoleMole::GetItemListShow
	{
	public:
		::System::UInt32 extraData; // 0x78
		::Enum_3_413212C3F231D1B9 reason; // 0x7C

		::System::Void _ctor(::Class_1_61B3BCD70D19C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61B3BCD70D19C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTEXTRASHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTEXTRASHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void ShowNativeRewardPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTEXTRASHOW_SHOWNATIVEREWARDPOP_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTEXTRASHOW___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
