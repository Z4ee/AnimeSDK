#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_50C9B34764F51AB1;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xA76F820)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_SETPROGRESSSLIDERVALUE_OFFSET UNITYSDK_OFFSET(0xA76FCC0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_SETSTATETEXT_OFFSET UNITYSDK_OFFSET(0xA76FB80)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA76F6B0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA76F720)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__DESIGNDATABUNDLELOADEND_OFFSET UNITYSDK_OFFSET(0xA7702E0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__DESIGNDATABUNDLELOADPROGRESS_OFFSET UNITYSDK_OFFSET(0xA76FDF0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__LOCALASSETVERIFYPROGRESS_OFFSET UNITYSDK_OFFSET(0xA7707A0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__LOCALASSETVERIFYSTART_OFFSET UNITYSDK_OFFSET(0xA770410)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__PROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0xA76FF50)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA76F880)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA76FAD0)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA770B30)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA770B90)
#define RPG_CLIENT_VERSIONUPDATEPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA770BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdatePageContext_TypeDefinitionIndex = 60003;

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

		::System::Void SetStateText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_SETSTATETEXT_OFFSET))(this, value);
		}

		::System::Void SetProgressSliderValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_SETPROGRESSSLIDERVALUE_OFFSET))(this, value);
		}

		::System::Void _DesignDataBundleLoadProgress(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__DESIGNDATABUNDLELOADPROGRESS_OFFSET))(this, arg);
		}

		::System::Void _ProgressUpdate(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__PROGRESSUPDATE_OFFSET))(this, arg);
		}

		::System::Void _DesignDataBundleLoadEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__DESIGNDATABUNDLELOADEND_OFFSET))(this, arg);
		}

		::System::Void _LocalAssetVerifyStart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__LOCALASSETVERIFYSTART_OFFSET))(this, arg);
		}

		::System::Void _LocalAssetVerifyProgress(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT__LOCALASSETVERIFYPROGRESS_OFFSET))(this, arg);
		}

		::Class_2_50C9B34764F51AB1* get_View()
		{
			return ((::Class_2_50C9B34764F51AB1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT_GET_VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}
	};
}
