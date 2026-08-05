#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AgeGateInfoType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AgeGateStage.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_AgeGateTicketType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ABORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1DD40390)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET UNITYSDK_OFFSET(0x1DD3D6C0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1DD3FA00)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CLOSEAGEGATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1DD3E760)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1DD3F1D0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_EXTRACTLOGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1DD3F400)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETAGEGATEREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD3EC20)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETAGEGATESTATE_OFFSET UNITYSDK_OFFSET(0x1DD40020)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETHIGHLIGHTEDTIMETEXT_OFFSET UNITYSDK_OFFSET(0x1DD3FE60)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_AGEGATEREGION_OFFSET UNITYSDK_OFFSET(0x1DD3D620)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_AGEGATETICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1DD3D640)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x1DD3D5E0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_TICKETID_OFFSET UNITYSDK_OFFSET(0x1DD3D600)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_INITCOMMONFIELDS_OFFSET UNITYSDK_OFFSET(0x1DD3E0B0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ISAGEGATEBLOCKINGERROR_OFFSET UNITYSDK_OFFSET(0x1DD3FA60)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ONAGEGATEPROCESSFAILED_OFFSET UNITYSDK_OFFSET(0x1DD3F380)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_RESETLOGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1DD3F9F0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_AGEGATEREGION_OFFSET UNITYSDK_OFFSET(0x1DD3D630)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_AGEGATETICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1DD3D650)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x1DD3D5F0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_TICKETID_OFFSET UNITYSDK_OFFSET(0x1DD3D610)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEAPPEALCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1DD3ECE0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATEBIRTHDAYDIALOG_OFFSET UNITYSDK_OFFSET(0x1DD3E7B0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATEBLOCKINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1DD3FA70)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1DD3E340)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_STARTAGEGATEPROCESS_OFFSET UNITYSDK_OFFSET(0x1DD3D6D0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_STARTAGEGATEWEBVERIFICATION_OFFSET UNITYSDK_OFFSET(0x1DD3EC30)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_TRYADDCOMMONFIELDSTOCBODY_OFFSET UNITYSDK_OFFSET(0x1DD3EA30)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_UPDATEAGEGATEUSERDATA_OFFSET UNITYSDK_OFFSET(0x1DD401D0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_UPDATELOGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1DD3F5B0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD40510)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3D660)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__STARTAGEGATEWEBVERIFICATION_B__34_0_OFFSET UNITYSDK_OFFSET(0x1DD405A0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 20374;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::AgeGateManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0xA310);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::String* TICKET_ID; // 0x0
		// static const ::System::String* AGE_GATE_TYPE_REPORT_FIELD; // 0x0
		::System::Action_1<::System::Int32>* ageGateCallback; // 0x10
		::System::String* _AgeGateRegion_k__BackingField; // 0x18
		::System::String* _Payload_k__BackingField; // 0x20
		::System::String* _TicketId_k__BackingField; // 0x28
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateTicketType _AgeGateTicketType_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__CCTOR_OFFSET))();
		}

		::System::String* get_Payload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_PAYLOAD_OFFSET))(this);
		}

		::System::Void set_Payload(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_PAYLOAD_OFFSET))(this, value);
		}

		::System::String* get_TicketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_TICKETID_OFFSET))(this);
		}

		::System::Void set_TicketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_TICKETID_OFFSET))(this, value);
		}

		::System::String* get_AgeGateRegion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_AGEGATEREGION_OFFSET))(this);
		}

		::System::Void set_AgeGateRegion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_AGEGATEREGION_OFFSET))(this, value);
		}

		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateTicketType get_AgeGateTicketType()
		{
			return ((::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateTicketType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GET_AGEGATETICKETTYPE_OFFSET))(this);
		}

		::System::Void set_AgeGateTicketType(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateTicketType value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateTicketType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SET_AGEGATETICKETTYPE_OFFSET))(this, value);
		}

		static ::System::Boolean CheckRegionCanAutoRegister(::System::Int32 retcode)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET))(retcode);
		}

		::System::Void StartAgeGateProcess(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateStage stage, ::MiHoYo::SDK::JSONNode* dataObj, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateStage, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_STARTAGEGATEPROCESS_OFFSET))(this, stage, dataObj, callback);
		}

		::System::Void CloseAgeGateDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CLOSEAGEGATEDIALOG_OFFSET))(this);
		}

		::System::Int32 ExtractLogStrategy(::MiHoYo::SDK::JSONNode* dataObj)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_EXTRACTLOGSTRATEGY_OFFSET))(this, dataObj);
		}

		::System::Void UpdateLogStrategy(::System::Int32 strategy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_UPDATELOGSTRATEGY_OFFSET))(this, strategy);
		}

		::System::Void ResetLogStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_RESETLOGSTRATEGY_OFFSET))(this);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CLEARCACHE_OFFSET))(this);
		}

		::System::Boolean IsAgeGateBlockingError(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode retcode)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ISAGEGATEBLOCKINGERROR_OFFSET))(this, retcode);
		}

		::System::Void ShowAgeGateBlockingDialog(::System::Action* onConfirmCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATEBLOCKINGDIALOG_OFFSET))(this, onConfirmCallback);
		}

		::System::Void ShowAgeGateConfirmDialog(::System::Int64 timestamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATECONFIRMDIALOG_OFFSET))(this, timestamp);
		}

		::System::Void ShowAgeGateBirthdayDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEGATEBIRTHDAYDIALOG_OFFSET))(this);
		}

		::System::Void ShowAgeAppealConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_SHOWAGEAPPEALCONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void StartAgeGateWebVerification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_STARTAGEGATEWEBVERIFICATION_OFFSET))(this);
		}

		::System::Void onAgeGateProcessFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ONAGEGATEPROCESSFAILED_OFFSET))(this);
		}

		::System::Void GetAgeGateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETAGEGATESTATE_OFFSET))(this);
		}

		::System::Void UpdateAgeGateUserData(::System::String* data, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType dataType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_AgeGateInfoType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_UPDATEAGEGATEUSERDATA_OFFSET))(this, data, dataType);
		}

		::System::Void ContinueAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET))(this);
		}

		::System::Void AbortAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_ABORTAGEGATE_OFFSET))(this);
		}

		::System::String* GetHighlightedTimeText(::System::Int64 timestamp)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETHIGHLIGHTEDTIMETEXT_OFFSET))(this, timestamp);
		}

		::System::Void TryAddCommonFieldsToCbody(::MiHoYo::SDK::JSONObject* cbody)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_TRYADDCOMMONFIELDSTOCBODY_OFFSET))(this, cbody);
		}

		::MiHoYo::SDK::ReportType GetAgeGateReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_GETAGEGATEREPORTTYPE_OFFSET))(this);
		}

		::System::Void InitCommonFields(::MiHoYo::SDK::JSONNode* jsonData)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER_INITCOMMONFIELDS_OFFSET))(this, jsonData);
		}

		::System::Void _StartAgeGateWebVerification_b__34_0(::System::Int32 retcode, ::System::String* type, ::MiHoYo::SDK::JSONNode* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER__STARTAGEGATEWEBVERIFICATION_B__34_0_OFFSET))(this, retcode, type, result);
		}
	};
}
