#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class Class_2_EE5CA22072C05B40;
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x18294A10)
#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x182949B0)
#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x18294990)
#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x18294C80)
#define MOLEMOLE_UIINTERKNOTSHOWTOPTIPS___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x18294D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotShowTopTips_TypeDefinitionIndex = 50087;

	class UIInterKnotShowTopTips : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::Class_2_EE5CA22072C05B40* _context; // 0x30
		::System::String* message; // 0x38
		::System::Int32 headid; // 0x40

		::System::Void _ctor(::Class_2_EE5CA22072C05B40* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_EE5CA22072C05B40*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS__CTOR_OFFSET))(this, context);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS___BASE_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTSHOWTOPTIPS___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
