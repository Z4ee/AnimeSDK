#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0x173037A0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x173037C0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_EXTRAREPORTTYPES_OFFSET UNITYSDK_OFFSET(0x17303800)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x17303760)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x17303720)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_ISREALPLAYER_OFFSET UNITYSDK_OFFSET(0x17303780)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x17303740)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_OVERRIDEREPORTBTNACTION_OFFSET UNITYSDK_OFFSET(0x173037E0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPCIRCLEPARAMS_OFFSET UNITYSDK_OFFSET(0x17303890)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPREPORTPARAMS_OFFSET UNITYSDK_OFFSET(0x173038F0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0x173037B0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x173037D0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_EXTRAREPORTTYPES_OFFSET UNITYSDK_OFFSET(0x17303810)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x17303770)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x17303730)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_ISREALPLAYER_OFFSET UNITYSDK_OFFSET(0x17303790)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0x17303750)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_OVERRIDEREPORTBTNACTION_OFFSET UNITYSDK_OFFSET(0x173037F0)
#define MOLEMOLE_UIFRIENDDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17303820)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendDetailContext_TypeDefinitionIndex = 64540;

	class UIFriendDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* _extraReportTypes_k__BackingField; // 0x28
		::Class_2_D02DABCF41CDA271* _CircleMemberData_k__BackingField; // 0x30
		::Class_2_DF2C726EEEEC912D* _CircleData_k__BackingField; // 0x38
		::Class_1_57F7F2BF8C55D6B6* _Info_k__BackingField; // 0x40
		::UnityEngine::Events::UnityAction* _overrideReportBtnAction_k__BackingField; // 0x48
		::Enum_3_F3B35B60B7BAFCAF_1 _Identity_k__BackingField; // 0x50
		::System::Boolean _isRealPlayer_k__BackingField; // 0x54
		::System::Int32 _ModuleID_k__BackingField; // 0x58

		::System::Void _ctor(::Class_1_57F7F2BF8C55D6B6* playerInfo, ::System::Int32 ModuleID, ::Enum_3_F3B35B60B7BAFCAF_1 identityID, ::System::Boolean isRealPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*, ::System::Int32, ::Enum_3_F3B35B60B7BAFCAF_1, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT__CTOR_OFFSET))(this, playerInfo, ModuleID, identityID, isRealPlayer);
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

		::Enum_3_F3B35B60B7BAFCAF_1 get_Identity()
		{
			return ((::Enum_3_F3B35B60B7BAFCAF_1(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_IDENTITY_OFFSET))(this);
		}

		::System::Void set_Identity(::Enum_3_F3B35B60B7BAFCAF_1 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F3B35B60B7BAFCAF_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_IDENTITY_OFFSET))(this, value);
		}

		::System::Boolean get_isRealPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_ISREALPLAYER_OFFSET))(this);
		}

		::System::Void set_isRealPlayer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_ISREALPLAYER_OFFSET))(this, value);
		}

		::Class_2_DF2C726EEEEC912D* get_CircleData()
		{
			return ((::Class_2_DF2C726EEEEC912D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_CIRCLEDATA_OFFSET))(this);
		}

		::System::Void set_CircleData(::Class_2_DF2C726EEEEC912D* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF2C726EEEEC912D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_CIRCLEDATA_OFFSET))(this, value);
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

		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* get_extraReportTypes()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_GET_EXTRAREPORTTYPES_OFFSET))(this);
		}

		::System::Void set_extraReportTypes(::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SET_EXTRAREPORTTYPES_OFFSET))(this, value);
		}

		::System::Void SetupCircleParams(::Class_2_DF2C726EEEEC912D* circleDataExt, ::Class_2_D02DABCF41CDA271* memberData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF2C726EEEEC912D*, ::Class_2_D02DABCF41CDA271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPCIRCLEPARAMS_OFFSET))(this, circleDataExt, memberData);
		}

		::System::Void SetupReportParams(::UnityEngine::Events::UnityAction* overrideReportBtnAction, ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* extraReportTypes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT_SETUPREPORTPARAMS_OFFSET))(this, overrideReportBtnAction, extraReportTypes);
		}
	};
}
