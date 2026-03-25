#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_280047DF9F661B14;
class Class_1_2E75418D06E8797E;
namespace System { class Action; }

#define RPG_CLIENT_PREDOWNLOADASSET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FF51D0)
#define RPG_CLIENT_PREDOWNLOADASSET_ENTER_OFFSET UNITYSDK_OFFSET(0x9FF52C0)
#define RPG_CLIENT_PREDOWNLOADASSET_LEAVE_OFFSET UNITYSDK_OFFSET(0x9FF59D0)
#define RPG_CLIENT_PREDOWNLOADASSET_ONCHANGETOMOBILENETWORK_OFFSET UNITYSDK_OFFSET(0x9FF5680)
#define RPG_CLIENT_PREDOWNLOADASSET_OVERRIDENOTCONFIRMWIFIACTION_OFFSET UNITYSDK_OFFSET(0x9FF5270)
#define RPG_CLIENT_PREDOWNLOADASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF6620)
#define RPG_CLIENT_PREDOWNLOADASSET__GETDOWNLOADDESCTEXT_OFFSET UNITYSDK_OFFSET(0x9FF6450)
#define RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXRETRYOKBTNHANDLE_OFFSET UNITYSDK_OFFSET(0x9FF6270)
#define RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXWIFICONFIRM_OFFSET UNITYSDK_OFFSET(0x9FF58F0)
#define RPG_CLIENT_PREDOWNLOADASSET__ONBUNDLEDOWNLOADREQUESTRETRYHANDLE_OFFSET UNITYSDK_OFFSET(0x9FF61A0)
#define RPG_CLIENT_PREDOWNLOADASSET__ONVERSIONUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x9FF6500)
#define RPG_CLIENT_PREDOWNLOADASSET__SOLVEDOWNLOADLIVE_OFFSET UNITYSDK_OFFSET(0x9FF5CD0)
#define RPG_CLIENT_PREDOWNLOADASSET__STARTUPDATE_OFFSET UNITYSDK_OFFSET(0x9FF5560)

namespace RPG::Client
{
	inline static constexpr unsigned int PreDownloadAsset_TypeDefinitionIndex = 49581;

	class PreDownloadAsset : public ::System::Object
	{
	public:
		::Class_1_2E75418D06E8797E* _KeepLive; // 0x10
		::System::Action* _OnNotConfirmWifi; // 0x18
		::Class_1_280047DF9F661B14* _Board; // 0x20
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

		::System::Void OverrideNotConfirmWifiAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_OVERRIDENOTCONFIRMWIFIACTION_OFFSET))(this, action);
		}

		::System::Void Enter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_ENTER_OFFSET))(this);
		}

		::System::Void OnChangeToMobileNetwork(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_ONCHANGETOMOBILENETWORK_OFFSET))(this, arg);
		}

		::System::Void _MessageBoxWifiConfirm(::System::Boolean isConfirmed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXWIFICONFIRM_OFFSET))(this, isConfirmed);
		}

		::System::Void Leave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_LEAVE_OFFSET))(this);
		}

		::System::Void _SolveDownloadLive(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__SOLVEDOWNLOADLIVE_OFFSET))(this, arg);
		}

		::System::Void _OnBundleDownloadRequestRetryHandle(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__ONBUNDLEDOWNLOADREQUESTRETRYHANDLE_OFFSET))(this, userParam);
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
