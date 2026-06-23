#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_46.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/System/Nullable_1.h"

class Class_3_AE02BC8285203464_29;
namespace System { class Action; }

#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_GET_CURTRUSTLEVEL_OFFSET UNITYSDK_OFFSET(0x169C9950)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_GET_MODTRUSTTYPE_OFFSET UNITYSDK_OFFSET(0x169C9990)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x169C9970)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_GET_PARTNERID_OFFSET UNITYSDK_OFFSET(0x169C9930)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_PARTNERMODTRUSTTYPETOTYPE_OFFSET UNITYSDK_OFFSET(0x169C9AA0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_SET_CURTRUSTLEVEL_OFFSET UNITYSDK_OFFSET(0x169C9960)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_SET_MODTRUSTTYPE_OFFSET UNITYSDK_OFFSET(0x169C99A0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x169C9980)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_SET_PARTNERID_OFFSET UNITYSDK_OFFSET(0x169C9940)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x169C9A30)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169C99B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralIntimacyUpPopWindowController_Context_TypeDefinitionIndex = 52860;

	class UIGeneralIntimacyUpPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* _onClose_k__BackingField; // 0x28
		::Class_3_AE02BC8285203464_29* lastInfo; // 0x30
		::System::Int32 _partnerID_k__BackingField; // 0x38
		::System::Nullable_1<::System::Int32> _curTrustLevel_k__BackingField; // 0x3C
		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type _modTrustType_k__BackingField; // 0x44

		::System::Void _ctor(::System::Int32 partnerID, ::System::Nullable_1<::System::Int32> curTrustLevel, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type modTrustType, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, partnerID, curTrustLevel, modTrustType, onClose);
		}

		::System::Void _ctor_1(::Class_3_AE02BC8285203464_29* lastInfo, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_29*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, lastInfo, onClose);
		}

		::System::Int32 get_partnerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_GET_PARTNERID_OFFSET))(this);
		}

		::System::Void set_partnerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_SET_PARTNERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_curTrustLevel()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_GET_CURTRUSTLEVEL_OFFSET))(this);
		}

		::System::Void set_curTrustLevel(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_SET_CURTRUSTLEVEL_OFFSET))(this, value);
		}

		::System::Action* get_onClose()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_onClose(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_SET_ONCLOSE_OFFSET))(this, value);
		}

		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type get_modTrustType()
		{
			return ((::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_GET_MODTRUSTTYPE_OFFSET))(this);
		}

		::System::Void set_modTrustType(::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_SET_MODTRUSTTYPE_OFFSET))(this, value);
		}

		static ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type PartnerModTrustTypeToType(::Enum_3_DB663931210BBC27_46 partnerModTrustType)
		{
			return ((::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type(*)(::Enum_3_DB663931210BBC27_46))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_CONTEXT_PARTNERMODTRUSTTYPETOTYPE_OFFSET))(partnerModTrustType);
		}
	};
}
