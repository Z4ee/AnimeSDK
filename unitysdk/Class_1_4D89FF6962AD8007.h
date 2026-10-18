#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_487;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define CLASS_1_4D89FF6962AD8007_GET_ISOVERRIDEPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x15E01C80)
#define CLASS_1_4D89FF6962AD8007_GET_ISSLOTLISTVISIBLE_OFFSET UNITYSDK_OFFSET(0x15E01C70)
#define CLASS_1_4D89FF6962AD8007_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x15E01C90)
#define CLASS_1_4D89FF6962AD8007_METHOD_1_AEE9E5C1AEE79EC9_OFFSET UNITYSDK_OFFSET(0x15E01CA0)
#define CLASS_1_4D89FF6962AD8007_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x15E01E60)
#define CLASS_1_4D89FF6962AD8007_METHOD_1_D5E3990EBC3676C7_OFFSET UNITYSDK_OFFSET(0x15E01D30)
#define CLASS_1_4D89FF6962AD8007__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15E01B50)
#define CLASS_1_4D89FF6962AD8007__CTOR_OFFSET UNITYSDK_OFFSET(0x15E01B40)

inline static constexpr unsigned int Class_1_4D89FF6962AD8007_TypeDefinitionIndex = 49717;

class Class_1_4D89FF6962AD8007 : public ::System::Object
{
public:
	// static const ::System::Int32 KLDOOKEFEMH = 0x9; // 0x0
	::R3::ReactiveProperty_1<::System::Boolean>* _IsOverridePanelVisible_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::Boolean>* _IsSlotListVisible_k__BackingField; // 0x18
	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_487*>* _Slots_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D89FF6962AD8007__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D89FF6962AD8007__CTOR_1_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsSlotListVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D89FF6962AD8007_GET_ISSLOTLISTVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsOverridePanelVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D89FF6962AD8007_GET_ISOVERRIDEPANELVISIBLE_OFFSET))(this);
	}

	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_487*>* get_Slots()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_487*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D89FF6962AD8007_GET_SLOTS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_487* Method_1_AEE9E5C1AEE79EC9(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D89FF6962AD8007_METHOD_1_AEE9E5C1AEE79EC9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D5E3990EBC3676C7(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4D89FF6962AD8007_METHOD_1_D5E3990EBC3676C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D89FF6962AD8007_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}
};
