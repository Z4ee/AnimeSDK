#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_2_A78FC80A78B3367C_2;

#define MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15279500)
#define MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x152794A0)
#define MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x15279460)
#define MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x152796C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseFansUpTopTips_TypeDefinitionIndex = 77701;

	class UILiveHouseFansUpTopTips : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_2_A78FC80A78B3367C_2* _context; // 0x28
		::System::Int32 headid; // 0x30

		::System::Void _ctor(::Class_2_A78FC80A78B3367C_2* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A78FC80A78B3367C_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEFANSUPTOPTIPS___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
