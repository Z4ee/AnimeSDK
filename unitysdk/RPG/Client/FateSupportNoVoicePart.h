#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA3616A0)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xA3615F0)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xA361780)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_INIT_OFFSET UNITYSDK_OFFSET(0xA360C20)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_ISENGLISHAUDIOLANGASSETEXIST_OFFSET UNITYSDK_OFFSET(0xA361C90)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA360DC0)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_SHOULDSHOWNOVOICECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xA361880)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_SHOWNOVOICECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0xA361B10)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART__CTOR_OFFSET UNITYSDK_OFFSET(0xA361410)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART__ISFIRSTSUBMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0xA361A50)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportNoVoicePart_TypeDefinitionIndex = 59027;

	class FateSupportNoVoicePart : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::DynamicValue* get__TargetMissionIDs()
		{
			return ((::RPG::GameCore::DynamicValue*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETMISSIONIDS_OFFSET))();
		}

		static ::System::Nullable_1<::System::UInt32> get__TargetMainMissionID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETMAINMISSIONID_OFFSET))();
		}

		static ::System::Nullable_1<::System::UInt32> get__TargetSubMissionID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETSUBMISSIONID_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_ONLOGINFINISH_OFFSET))(this);
		}

		static ::System::Boolean ShouldShowNoVoiceConfirmDialog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_SHOULDSHOWNOVOICECONFIRMDIALOG_OFFSET))();
		}

		static ::System::Void ShowNoVoiceConfirmDialog(::System::Action_1<::System::Boolean>* dispatch, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_SHOWNOVOICECONFIRMDIALOG_OFFSET))(dispatch, onClose);
		}

		static ::System::Boolean IsEnglishAudioLangAssetExist()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_ISENGLISHAUDIOLANGASSETEXIST_OFFSET))();
		}

		static ::System::Boolean _IsFirstSubMissionInProgress()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART__ISFIRSTSUBMISSIONINPROGRESS_OFFSET))();
		}
	};
}
