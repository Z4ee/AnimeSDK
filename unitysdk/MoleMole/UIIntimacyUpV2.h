#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_10.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIINTIMACYUPV2_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x189AEE90)
#define MOLEMOLE_UIINTIMACYUPV2_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x189AEFD0)
#define MOLEMOLE_UIINTIMACYUPV2_SHOWUI_OFFSET UNITYSDK_OFFSET(0x189AF020)
#define MOLEMOLE_UIINTIMACYUPV2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189AEF80)
#define MOLEMOLE_UIINTIMACYUPV2__CTOR_OFFSET UNITYSDK_OFFSET(0x189AEEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIIntimacyUpV2_TypeDefinitionIndex = 88392;

	class UIIntimacyUpV2 : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type modTrustType; // 0x28
		::System::Nullable_1<::System::Int32> curTrustLevel; // 0x2C
		::System::Int32 partnerID; // 0x34

		::System::Void _ctor(::System::Int32 partnerID, ::System::Nullable_1<::System::Int32> curTrustLevel, ::Enum_3_DB663931210BBC27_10 partnerModTrustType, ::System::Boolean isUpGrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::Enum_3_DB663931210BBC27_10, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTIMACYUPV2__CTOR_OFFSET))(this, partnerID, curTrustLevel, partnerModTrustType, isUpGrade);
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
