#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_280047DF9F661B14;
class Class_1_2E75418D06E8797E;
namespace System { class Action; }

#define RPG_CLIENT_PREDOWNLOADASSET_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD71600)
#define RPG_CLIENT_PREDOWNLOADASSET_ENTER_OFFSET UNITYSDK_OFFSET(0xAD716F0)
#define RPG_CLIENT_PREDOWNLOADASSET_LEAVE_OFFSET UNITYSDK_OFFSET(0xAD71E00)
#define RPG_CLIENT_PREDOWNLOADASSET_ONCHANGETOMOBILENETWORK_OFFSET UNITYSDK_OFFSET(0xAD71AB0)
#define RPG_CLIENT_PREDOWNLOADASSET_OVERRIDENOTCONFIRMWIFIACTION_OFFSET UNITYSDK_OFFSET(0xAD716A0)
#define RPG_CLIENT_PREDOWNLOADASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xAD72A60)
#define RPG_CLIENT_PREDOWNLOADASSET__GETDOWNLOADDESCTEXT_OFFSET UNITYSDK_OFFSET(0xAD72880)
#define RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXRETRYOKBTNHANDLE_OFFSET UNITYSDK_OFFSET(0xAD726A0)
#define RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXWIFICONFIRM_OFFSET UNITYSDK_OFFSET(0xAD71D20)
#define RPG_CLIENT_PREDOWNLOADASSET__ONBUNDLEDOWNLOADREQUESTRETRYHANDLE_OFFSET UNITYSDK_OFFSET(0xAD725D0)
#define RPG_CLIENT_PREDOWNLOADASSET__ONVERSIONUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0xAD72940)
#define RPG_CLIENT_PREDOWNLOADASSET__SOLVEDOWNLOADLIVE_OFFSET UNITYSDK_OFFSET(0xAD72100)
#define RPG_CLIENT_PREDOWNLOADASSET__STARTUPDATE_OFFSET UNITYSDK_OFFSET(0xAD71990)

namespace RPG::Client
{
	inline static constexpr unsigned int PreDownloadAsset_TypeDefinitionIndex = 56403;

	class PreDownloadAsset : public ::System::Object
	{
	public:
		::Class_1_2E75418D06E8797E* _KeepLive; // 0x10
		::Class_1_280047DF9F661B14* _Board; // 0x18
		::System::Action* _OnNotConfirmWifi; // 0x20
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
