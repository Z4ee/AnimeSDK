#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_50C9B34764F51AB1;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xE4055F0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_SETPROGRESSSLIDERVALUE_OFFSET UNITYSDK_OFFSET(0xE405B60)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_SETSTATETEXT_OFFSET UNITYSDK_OFFSET(0xE405A90)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE4054C0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xE405530)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__DESIGNDATABUNDLELOADEND_OFFSET UNITYSDK_OFFSET(0xE406220)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__DESIGNDATABUNDLELOADPROGRESS_OFFSET UNITYSDK_OFFSET(0xE405C70)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__LOCALASSETVERIFYPROGRESS_OFFSET UNITYSDK_OFFSET(0xE4067A0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__LOCALASSETVERIFYSTART_OFFSET UNITYSDK_OFFSET(0xE406330)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__PROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0xE405DB0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xE405680)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xE4059E0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdatePageContext_TypeDefinitionIndex = 73100;

	class VersionUpdatePageContext : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void SetStateText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_SETSTATETEXT_OFFSET))(this, a1);
		}

		::System::Void SetProgressSliderValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_SETPROGRESSSLIDERVALUE_OFFSET))(this, a1);
		}

		::System::Void _DesignDataBundleLoadProgress(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__DESIGNDATABUNDLELOADPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _ProgressUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__PROGRESSUPDATE_OFFSET))(this, a1);
		}

		::System::Void _DesignDataBundleLoadEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__DESIGNDATABUNDLELOADEND_OFFSET))(this, a1);
		}

		::System::Void _LocalAssetVerifyStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__LOCALASSETVERIFYSTART_OFFSET))(this, a1);
		}

		::System::Void _LocalAssetVerifyProgress(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__LOCALASSETVERIFYPROGRESS_OFFSET))(this, a1);
		}

		::Class_2_50C9B34764F51AB1* get_View()
		{
			return ((::Class_2_50C9B34764F51AB1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_GET_VIEW_OFFSET))(this);
		}
	};
}
