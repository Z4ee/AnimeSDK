#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F152DBF108B0858.h"
#include "unitysdk/Enum_3_DFCB42601400F441_2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_E23E4CB2769CC93F;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0x17D8FD00)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x17D8FD20)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_EXTRAREPORTTYPES_OFFSET UNITYSDK_OFFSET(0x17D8FD60)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x17D8FCC0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x17D8FC80)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_ISREALPLAYER_OFFSET UNITYSDK_OFFSET(0x17D8FCE0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x17D8FCA0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_OVERRIDEREPORTBTNACTION_OFFSET UNITYSDK_OFFSET(0x17D8FD40)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPCIRCLEPARAMS_OFFSET UNITYSDK_OFFSET(0x17D8FDF0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPREPORTPARAMS_OFFSET UNITYSDK_OFFSET(0x17D8FE50)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0x17D8FD10)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x17D8FD30)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_EXTRAREPORTTYPES_OFFSET UNITYSDK_OFFSET(0x17D8FD70)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x17D8FCD0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x17D8FC90)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_ISREALPLAYER_OFFSET UNITYSDK_OFFSET(0x17D8FCF0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0x17D8FCB0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_OVERRIDEREPORTBTNACTION_OFFSET UNITYSDK_OFFSET(0x17D8FD50)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8FD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendDetailContext_TypeDefinitionIndex = 75130;

	class UIFriendDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D02DABCF41CDA271* _CircleMemberData_k__BackingField; // 0x28
		::UnityEngine::Events::UnityAction* _overrideReportBtnAction_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* _extraReportTypes_k__BackingField; // 0x38
		::Class_1_57F7F2BF8C55D6B6* _Info_k__BackingField; // 0x40
		::Class_2_E23E4CB2769CC93F* _CircleData_k__BackingField; // 0x48
		::System::Boolean _isRealPlayer_k__BackingField; // 0x50
		::System::Int32 _ModuleID_k__BackingField; // 0x54
		::Enum_3_5F152DBF108B0858 _Identity_k__BackingField; // 0x58

		::System::Void _ctor(::Class_1_57F7F2BF8C55D6B6* playerInfo, ::System::Int32 ModuleID, ::Enum_3_5F152DBF108B0858 identityID, ::System::Boolean isRealPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*, ::System::Int32, ::Enum_3_5F152DBF108B0858, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT__CTOR_OFFSET))(this, playerInfo, ModuleID, identityID, isRealPlayer);
		}

		::Class_1_57F7F2BF8C55D6B6* get_Info()
		{
			return ((::Class_1_57F7F2BF8C55D6B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_INFO_OFFSET))(this);
		}

		::System::Void set_Info(::Class_1_57F7F2BF8C55D6B6* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_INFO_OFFSET))(this, value);
		}

		::System::Int32 get_ModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_MODULEID_OFFSET))(this);
		}

		::System::Void set_ModuleID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_MODULEID_OFFSET))(this, value);
		}

		::Enum_3_5F152DBF108B0858 get_Identity()
		{
			return ((::Enum_3_5F152DBF108B0858(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_IDENTITY_OFFSET))(this);
		}

		::System::Void set_Identity(::Enum_3_5F152DBF108B0858 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5F152DBF108B0858))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_IDENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_isRealPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_ISREALPLAYER_OFFSET))(this);
		}

		::System::Void set_isRealPlayer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_ISREALPLAYER_OFFSET))(this, value);
		}

		::Class_2_E23E4CB2769CC93F* get_CircleData()
		{
			return ((::Class_2_E23E4CB2769CC93F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEDATA_OFFSET))(this);
		}

		::System::Void set_CircleData(::Class_2_E23E4CB2769CC93F* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E23E4CB2769CC93F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEDATA_OFFSET))(this, value);
		}

		::Class_2_D02DABCF41CDA271* get_CircleMemberData()
		{
			return ((::Class_2_D02DABCF41CDA271*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEMEMBERDATA_OFFSET))(this);
		}

		::System::Void set_CircleMemberData(::Class_2_D02DABCF41CDA271* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D02DABCF41CDA271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEMEMBERDATA_OFFSET))(this, value);
		}

		::UnityEngine::Events::UnityAction* get_overrideReportBtnAction()
		{
			return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_OVERRIDEREPORTBTNACTION_OFFSET))(this);
		}

		::System::Void set_overrideReportBtnAction(::UnityEngine::Events::UnityAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_OVERRIDEREPORTBTNACTION_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* get_extraReportTypes()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_EXTRAREPORTTYPES_OFFSET))(this);
		}

		::System::Void set_extraReportTypes(::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_EXTRAREPORTTYPES_OFFSET))(this, value);
		}

		::System::Void SetupCircleParams(::Class_2_E23E4CB2769CC93F* circleDataExt, ::Class_2_D02DABCF41CDA271* memberData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E23E4CB2769CC93F*, ::Class_2_D02DABCF41CDA271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPCIRCLEPARAMS_OFFSET))(this, circleDataExt, memberData);
		}

		::System::Void SetupReportParams(::UnityEngine::Events::UnityAction* overrideReportBtnAction, ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* extraReportTypes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPREPORTPARAMS_OFFSET))(this, overrideReportBtnAction, extraReportTypes);
		}
	};
}
