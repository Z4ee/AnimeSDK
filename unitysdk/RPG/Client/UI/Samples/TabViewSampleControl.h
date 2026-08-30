#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/TabViewSampleControl_SampleMode.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_5F1B5D6380BD40EB;
namespace RPG::Client { class TabView; }
namespace RPG::Client::Ui::Samples { class TabViewSampleViewModel; }
namespace Sofa::Runtime { class TabHeaderImageControl; }
namespace System { class IDisposable; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1DDC0020)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1DDC00D0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSDATADRIVEN_OFFSET UNITYSDK_OFFSET(0x1DDC0730)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSIMPERATIVE_OFFSET UNITYSDK_OFFSET(0x1DDC0690)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSSTATIC_OFFSET UNITYSDK_OFFSET(0x1DDC0470)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0B40)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONACTIVETABCHANGED_OFFSET UNITYSDK_OFFSET(0x1DDC0AF0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONACTIVETABPRECHANGING_OFFSET UNITYSDK_OFFSET(0x1DDC0AA0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1DDC01C0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DDC07C0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1DDC0120)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleControl_TypeDefinitionIndex = 73357;

	class TabViewSampleControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x38
		::Sofa::Runtime::TabHeaderImageControl* _HeaderPrefab; // 0x40
		::RPG::Client::Ui::Samples::TabViewSampleControl_SampleMode _Mode; // 0x48
		::System::IDisposable* _ItemsSourceSubscription; // 0x50

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

		::System::Void _OnActiveTabPreChanging(::Class_1_5F1B5D6380BD40EB* a1, ::Class_1_5F1B5D6380BD40EB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONACTIVETABPRECHANGING_OFFSET))(this, a1, a2);
		}

		::System::Void _OnActiveTabChanged(::Class_1_5F1B5D6380BD40EB* a1, ::Class_1_5F1B5D6380BD40EB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONACTIVETABCHANGED_OFFSET))(this, a1, a2);
		}
	};
}
