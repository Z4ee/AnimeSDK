#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client::Ui::Samples { class GridFightSettleTabViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_2F344C4E39EE9840_ADD_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0x1817E2D0)
#define CLASS_1_2F344C4E39EE9840_GET_ARCHIVETIMETEXT_OFFSET UNITYSDK_OFFSET(0x1817E100)
#define CLASS_1_2F344C4E39EE9840_GET_FAVOURTEXT_OFFSET UNITYSDK_OFFSET(0x1817E140)
#define CLASS_1_2F344C4E39EE9840_GET_ISFAVOUR_OFFSET UNITYSDK_OFFSET(0x1817E130)
#define CLASS_1_2F344C4E39EE9840_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1817E0F0)
#define CLASS_1_2F344C4E39EE9840_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0x1817E120)
#define CLASS_1_2F344C4E39EE9840_GET_TABS_OFFSET UNITYSDK_OFFSET(0x1817E0E0)
#define CLASS_1_2F344C4E39EE9840_GET_VERSIONTEXT_OFFSET UNITYSDK_OFFSET(0x1817E110)
#define CLASS_1_2F344C4E39EE9840_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0x1817E210)
#define CLASS_1_2F344C4E39EE9840_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x1817E150)
#define CLASS_1_2F344C4E39EE9840_REMOVE_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0x1817E330)
#define CLASS_1_2F344C4E39EE9840__CTOR_OFFSET UNITYSDK_OFFSET(0x1817DEB0)
#define CLASS_1_2F344C4E39EE9840__GET_ONEXITCOMMAND_B__27_0_OFFSET UNITYSDK_OFFSET(0x1817E4B0)
#define CLASS_1_2F344C4E39EE9840__GET_ONFAVOURCOMMAND_B__24_0_OFFSET UNITYSDK_OFFSET(0x1817E390)

inline static constexpr unsigned int Class_1_2F344C4E39EE9840_TypeDefinitionIndex = 73354;

class Class_1_2F344C4E39EE9840 : public ::System::Object
{
public:
	::System::String* _VersionText_k__BackingField; // 0x10
	::R3::Observable_1<::System::String*>* _FavourText_k__BackingField; // 0x18
	::Sofa::Core::SimpleCommand* GFFLPAOPOHA; // 0x20
	::R3::ReactiveProperty_1<::System::Int32>* _SelectedTabIndex_k__BackingField; // 0x28
	::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::GridFightSettleTabViewModel*>* _Tabs_k__BackingField; // 0x30
	::System::Action* ExitRequested; // 0x38
	::System::String* _ArchiveTimeText_k__BackingField; // 0x40
	::R3::ReactiveProperty_1<::System::Boolean>* _IsFavour_k__BackingField; // 0x48
	::Sofa::Core::SimpleCommand* FKPDLPNELCO; // 0x50
	::System::Boolean _IsFinished_k__BackingField; // 0x58

	::System::Void _ctor(::System::Boolean a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::GridFightSettleTabViewModel*>* get_Tabs()
	{
		return ((::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::GridFightSettleTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_GET_TABS_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_GET_ISFINISHED_OFFSET))(this);
	}

	::System::String* get_ArchiveTimeText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_GET_ARCHIVETIMETEXT_OFFSET))(this);
	}

	::System::String* get_VersionText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_GET_VERSIONTEXT_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_SelectedTabIndex()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_GET_SELECTEDTABINDEX_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsFavour()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_GET_ISFAVOUR_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* get_FavourText()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_GET_FAVOURTEXT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::System::Void add_ExitRequested(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_ADD_EXITREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_ExitRequested(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840_REMOVE_EXITREQUESTED_OFFSET))(this, a1);
	}

	::System::Void _get_OnFavourCommand_b__24_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840__GET_ONFAVOURCOMMAND_B__24_0_OFFSET))(this);
	}

	::System::Void _get_OnExitCommand_b__27_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F344C4E39EE9840__GET_ONEXITCOMMAND_B__27_0_OFFSET))(this);
	}
};
