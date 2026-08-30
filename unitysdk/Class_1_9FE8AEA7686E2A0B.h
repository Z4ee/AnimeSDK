#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_1_AAA19EA40697FDA1;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace Sofa::Core { class SimpleCommand; }
template <typename T> class Class_0_16E4307DCC419505_320;
template <typename T> class Class_1_BF01A723AB4005C0;

#define CLASS_1_9FE8AEA7686E2A0B_GET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x199872A0)
#define CLASS_1_9FE8AEA7686E2A0B_GET_TABS_OFFSET UNITYSDK_OFFSET(0x199872B0)
#define CLASS_1_9FE8AEA7686E2A0B_METHOD_1_8B5BF39581014B56_OFFSET UNITYSDK_OFFSET(0x19987380)
#define CLASS_1_9FE8AEA7686E2A0B_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x199872C0)
#define CLASS_1_9FE8AEA7686E2A0B__CTOR_OFFSET UNITYSDK_OFFSET(0x19987160)
#define CLASS_1_9FE8AEA7686E2A0B__GET_ADDTABCOMMAND_B__9_0_OFFSET UNITYSDK_OFFSET(0x19987440)
#define CLASS_1_9FE8AEA7686E2A0B__GET_REMOVETABCOMMAND_B__12_0_OFFSET UNITYSDK_OFFSET(0x19987530)

inline static constexpr unsigned int Class_1_9FE8AEA7686E2A0B_TypeDefinitionIndex = 73361;

class Class_1_9FE8AEA7686E2A0B : public ::System::Object
{
public:
	::Class_1_BF01A723AB4005C0<::System::Int32>* NGIPIHLGKAG; // 0x10
	::R3::ReactiveProperty_1<::System::Int32>* _SelectedIndex_k__BackingField; // 0x18
	::Sofa::Core::SimpleCommand* BAGBHEDOJLG; // 0x20
	::ObservableCollections::ObservableList_1<::Class_1_AAA19EA40697FDA1*>* _Tabs_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FE8AEA7686E2A0B__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_SelectedIndex()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FE8AEA7686E2A0B_GET_SELECTEDINDEX_OFFSET))(this);
	}

	::ObservableCollections::ObservableList_1<::Class_1_AAA19EA40697FDA1*>* get_Tabs()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_1_AAA19EA40697FDA1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FE8AEA7686E2A0B_GET_TABS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FE8AEA7686E2A0B_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_320<::System::Int32>* Method_1_8B5BF39581014B56()
	{
		return ((::Class_0_16E4307DCC419505_320<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FE8AEA7686E2A0B_METHOD_1_8B5BF39581014B56_OFFSET))(this);
	}

	::System::Void _get_AddTabCommand_b__9_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FE8AEA7686E2A0B__GET_ADDTABCOMMAND_B__9_0_OFFSET))(this);
	}

	::System::Void _get_RemoveTabCommand_b__12_0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9FE8AEA7686E2A0B__GET_REMOVETABCOMMAND_B__12_0_OFFSET))(this, a1);
	}
};
