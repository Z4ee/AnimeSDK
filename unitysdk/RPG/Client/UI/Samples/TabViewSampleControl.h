#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/TabViewSampleControl_SampleMode.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class TabView; }
namespace RPG::Client::Ui::Samples { class TabViewSampleViewModel; }
namespace Sofa::Runtime { class TabHeaderImageControl; }
namespace System { class IDisposable; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE405D10)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE405DC0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSDATADRIVEN_OFFSET UNITYSDK_OFFSET(0xE406260)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSIMPERATIVE_OFFSET UNITYSDK_OFFSET(0xE4061C0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSSTATIC_OFFSET UNITYSDK_OFFSET(0xE405FA0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE406430)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE405EB0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE4062F0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE405E10)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleControl_TypeDefinitionIndex = 73461;

	class TabViewSampleControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x40
		::Sofa::Runtime::TabHeaderImageControl* _HeaderPrefab; // 0x48
		::RPG::Client::Ui::Samples::TabViewSampleControl_SampleMode _Mode; // 0x50
		::System::IDisposable* _ItemsSourceSubscription; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Ui::Samples::TabViewSampleViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::Ui::Samples::TabViewSampleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::Ui::Samples::TabViewSampleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Ui::Samples::TabViewSampleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _BuildTabsStatic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSSTATIC_OFFSET))(this);
		}

		::System::Void _BuildTabsImperative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSIMPERATIVE_OFFSET))(this);
		}

		::System::Void _BuildTabsDataDriven()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSDATADRIVEN_OFFSET))(this);
		}
	};
}
