#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_318;
namespace RPG::Client::Ui::Samples { class TabViewSampleTabViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_320;
template <typename T> class Class_1_BF01A723AB4005C0;

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_ADDTABCOMMAND_OFFSET UNITYSDK_OFFSET(0xE3CF8F0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_CURRENTTABTITLE_OFFSET UNITYSDK_OFFSET(0xE3CF820)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_REMOVETABCOMMAND_OFFSET UNITYSDK_OFFSET(0xE3CF9B0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0xE3CF750)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_TABS_OFFSET UNITYSDK_OFFSET(0xE3CF740)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_SET_CURRENTTABTITLE_OFFSET UNITYSDK_OFFSET(0xE3CF860)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_SET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0xE3CF790)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CF420)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL__GET_ADDTABCOMMAND_B__14_0_OFFSET UNITYSDK_OFFSET(0xE3CFB20)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL__GET_REMOVETABCOMMAND_B__17_0_OFFSET UNITYSDK_OFFSET(0xE3CFC70)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL__UPDATECURRENTTABTITLE_OFFSET UNITYSDK_OFFSET(0xE3CFA70)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleViewModel_TypeDefinitionIndex = 73364;

	class TabViewSampleViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::String* _CurrentTabTitle; // 0x18
		::Sofa::Core::ObservableList_1<::RPG::Client::Ui::Samples::TabViewSampleTabViewModel*>* _Tabs_k__BackingField; // 0x20
		::Class_1_BF01A723AB4005C0<::System::Int32>* _RemoveTabCommand; // 0x28
		::Sofa::Core::SimpleCommand* _AddTabCommand; // 0x30
		::System::Int32 _SelectedIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::Sofa::Core::ObservableList_1<::RPG::Client::Ui::Samples::TabViewSampleTabViewModel*>* get_Tabs()
		{
			return ((::Sofa::Core::ObservableList_1<::RPG::Client::Ui::Samples::TabViewSampleTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_TABS_OFFSET))(this);
		}

		::System::Int32 get_SelectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_SELECTEDINDEX_OFFSET))(this);
		}

		::System::Void set_SelectedIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_SET_SELECTEDINDEX_OFFSET))(this, a1);
		}

		::System::String* get_CurrentTabTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_CURRENTTABTITLE_OFFSET))(this);
		}

		::System::Void set_CurrentTabTitle(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_SET_CURRENTTABTITLE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* get_AddTabCommand()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_ADDTABCOMMAND_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_320<::System::Int32>* get_RemoveTabCommand()
		{
			return ((::Class_0_16E4307DCC419505_320<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL_GET_REMOVETABCOMMAND_OFFSET))(this);
		}

		::System::Void _UpdateCurrentTabTitle(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL__UPDATECURRENTTABTITLE_OFFSET))(this, a1);
		}

		::System::Void _get_AddTabCommand_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL__GET_ADDTABCOMMAND_B__14_0_OFFSET))(this);
		}

		::System::Void _get_RemoveTabCommand_b__17_0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEVIEWMODEL__GET_REMOVETABCOMMAND_B__17_0_OFFSET))(this, a1);
		}
	};
}
