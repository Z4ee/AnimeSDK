#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_275454CE65A12492;
class Class_1_2E75418D06E8797E;
namespace System { class Action; }

#define RPG_CLIENT_PREDOWNLOADASSET_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4B3050)
#define RPG_CLIENT_PREDOWNLOADASSET_ENTER_OFFSET UNITYSDK_OFFSET(0xC4B3140)
#define RPG_CLIENT_PREDOWNLOADASSET_LEAVE_OFFSET UNITYSDK_OFFSET(0xC4B3820)
#define RPG_CLIENT_PREDOWNLOADASSET_ONCHANGETOMOBILENETWORK_OFFSET UNITYSDK_OFFSET(0xC4B3530)
#define RPG_CLIENT_PREDOWNLOADASSET_OVERRIDENOTCONFIRMWIFIACTION_OFFSET UNITYSDK_OFFSET(0xC4B30F0)
#define RPG_CLIENT_PREDOWNLOADASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B4450)
#define RPG_CLIENT_PREDOWNLOADASSET__GETDOWNLOADDESCTEXT_OFFSET UNITYSDK_OFFSET(0xC4B4270)
#define RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXRETRYOKBTNHANDLE_OFFSET UNITYSDK_OFFSET(0xC4B4090)
#define RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXWIFICONFIRM_OFFSET UNITYSDK_OFFSET(0xC4B3730)
#define RPG_CLIENT_PREDOWNLOADASSET__ONBUNDLEDOWNLOADREQUESTRETRYHANDLE_OFFSET UNITYSDK_OFFSET(0xC4B3FA0)
#define RPG_CLIENT_PREDOWNLOADASSET__ONVERSIONUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0xC4B4330)
#define RPG_CLIENT_PREDOWNLOADASSET__SOLVEDOWNLOADLIVE_OFFSET UNITYSDK_OFFSET(0xC4B3B50)
#define RPG_CLIENT_PREDOWNLOADASSET__STARTUPDATE_OFFSET UNITYSDK_OFFSET(0xC4B3400)

namespace RPG::Client
{
	inline static constexpr unsigned int PreDownloadAsset_TypeDefinitionIndex = 57165;

	class PreDownloadAsset : public ::System::Object
	{
	public:
		::Class_1_2E75418D06E8797E* _KeepLive; // 0x10
		::System::Action* _OnNotConfirmWifi; // 0x18
		::Class_1_275454CE65A12492* _Board; // 0x20
		::System::Boolean _IsLeft; // 0x28
		::System::Boolean isShowWifiDialog; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_DISPOSE_OFFSET))(this);
		}

		::System::Void OverrideNotConfirmWifiAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_OVERRIDENOTCONFIRMWIFIACTION_OFFSET))(this, a1);
		}

		::System::Void Enter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_ENTER_OFFSET))(this);
		}

		::System::Void OnChangeToMobileNetwork(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_ONCHANGETOMOBILENETWORK_OFFSET))(this, a1);
		}

		::System::Void _MessageBoxWifiConfirm(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXWIFICONFIRM_OFFSET))(this, a1);
		}

		::System::Void Leave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_LEAVE_OFFSET))(this);
		}

		::System::Void _SolveDownloadLive(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__SOLVEDOWNLOADLIVE_OFFSET))(this, a1);
		}

		::System::Void _OnBundleDownloadRequestRetryHandle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__ONBUNDLEDOWNLOADREQUESTRETRYHANDLE_OFFSET))(this, a1);
		}

		::System::Void _MessageBoxRetryOkBtnHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXRETRYOKBTNHANDLE_OFFSET))(this);
		}

		::System::Void _StartUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__STARTUPDATE_OFFSET))(this);
		}

		::System::Void _OnVersionUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__ONVERSIONUPDATECOMPLETE_OFFSET))(this);
		}

		static ::RPG::Client::TextID _GetDownloadDescText()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__GETDOWNLOADDESCTEXT_OFFSET))();
		}
	};
}
