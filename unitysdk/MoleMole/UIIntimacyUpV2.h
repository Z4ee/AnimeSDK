#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_1.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIINTIMACYUPV2_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x14828C90)
#define MOLEMOLE_UIINTIMACYUPV2_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14828DD0)
#define MOLEMOLE_UIINTIMACYUPV2_SHOWUI_OFFSET UNITYSDK_OFFSET(0x14828E20)
#define MOLEMOLE_UIINTIMACYUPV2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14828D80)
#define MOLEMOLE_UIINTIMACYUPV2__CTOR_OFFSET UNITYSDK_OFFSET(0x14828CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIIntimacyUpV2_TypeDefinitionIndex = 75380;

	class UIIntimacyUpV2 : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type modTrustType; // 0x28
		::System::Int32 partnerID; // 0x2C
		::System::Nullable_1<::System::Int32> curTrustLevel; // 0x30

		::System::Void _ctor(::System::Int32 partnerID, ::System::Nullable_1<::System::Int32> curTrustLevel, ::Enum_3_DB663931210BBC27_1 partnerModTrustType, ::System::Boolean isUpGrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::Enum_3_DB663931210BBC27_1, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2__CTOR_OFFSET))(this, partnerID, curTrustLevel, partnerModTrustType, isUpGrade);
		}

		::System::Void _ctor_1(::System::Int32 partnerID, ::System::Nullable_1<::System::Int32> curTrustLevel, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type modTrustType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2__CTOR_1_OFFSET))(this, partnerID, curTrustLevel, modTrustType);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2_ONPROCESS_OFFSET))(this);
		}

		::System::Void ShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2_SHOWUI_OFFSET))(this);
		}
	};
}
