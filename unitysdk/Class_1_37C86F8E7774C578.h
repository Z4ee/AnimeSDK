#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_117;
class Class_0_16E4307DCC419505_123;
class Class_0_16E4307DCC419505_397;
class Class_1_D05699509194BF9B;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_37C86F8E7774C578_ADD_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x164CA130)
#define CLASS_1_37C86F8E7774C578_ADD_ONISEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x164C9B60)
#define CLASS_1_37C86F8E7774C578_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x164C98B0)
#define CLASS_1_37C86F8E7774C578_GET_ISATTRIBUTERECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164C98D0)
#define CLASS_1_37C86F8E7774C578_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x164C96C0)
#define CLASS_1_37C86F8E7774C578_GET_MUTABLEISASSISTANTRECOMMENDING_OFFSET UNITYSDK_OFFSET(0x164C9860)
#define CLASS_1_37C86F8E7774C578_GET_MUTABLEISCONSTRAINTRECOMMENDING_OFFSET UNITYSDK_OFFSET(0x164C9810)
#define CLASS_1_37C86F8E7774C578_GET_REACTIVEISTRAITRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164C9910)
#define CLASS_1_37C86F8E7774C578_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0x164C98F0)
#define CLASS_1_37C86F8E7774C578_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x164C96D0)
#define CLASS_1_37C86F8E7774C578_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x164C99A0)
#define CLASS_1_37C86F8E7774C578_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x164C97C0)
#define CLASS_1_37C86F8E7774C578_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x164C9960)
#define CLASS_1_37C86F8E7774C578_METHOD_1_4944A8256F09EC34_OFFSET UNITYSDK_OFFSET(0x164C9760)
#define CLASS_1_37C86F8E7774C578_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x164C9A10)
#define CLASS_1_37C86F8E7774C578_METHOD_1_868884E516798EE7_OFFSET UNITYSDK_OFFSET(0x164C9CD0)
#define CLASS_1_37C86F8E7774C578_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x164CA070)
#define CLASS_1_37C86F8E7774C578_METHOD_1_ED5AFB1274EF827E_OFFSET UNITYSDK_OFFSET(0x164C9C70)
#define CLASS_1_37C86F8E7774C578_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x164C9C30)
#define CLASS_1_37C86F8E7774C578_METHOD_1_FB5550CC734284FC_1_OFFSET UNITYSDK_OFFSET(0x164C9870)
#define CLASS_1_37C86F8E7774C578_METHOD_1_FB5550CC734284FC_2_OFFSET UNITYSDK_OFFSET(0x164C9920)
#define CLASS_1_37C86F8E7774C578_METHOD_1_FB5550CC734284FC_OFFSET UNITYSDK_OFFSET(0x164C9820)
#define CLASS_1_37C86F8E7774C578_REMOVE_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x164CA190)
#define CLASS_1_37C86F8E7774C578_REMOVE_ONISEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x164C9BC0)
#define CLASS_1_37C86F8E7774C578_RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITSOURCEVIEWMODEL_GET_ISDRAGGED_OFFSET UNITYSDK_OFFSET(0x164C9C20)
#define CLASS_1_37C86F8E7774C578_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x164C98C0)
#define CLASS_1_37C86F8E7774C578_SET_ISATTRIBUTERECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164C98E0)
#define CLASS_1_37C86F8E7774C578_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0x164C9900)
#define CLASS_1_37C86F8E7774C578__CTOR_OFFSET UNITYSDK_OFFSET(0x164CA1F0)
#define CLASS_1_37C86F8E7774C578__GET_CLICKCOMMAND_B__57_0_OFFSET UNITYSDK_OFFSET(0x164CA2A0)

inline static constexpr unsigned int Class_1_37C86F8E7774C578_TypeDefinitionIndex = 79473;

class Class_1_37C86F8E7774C578 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::Boolean>* _MutableIsAssistantRecommending_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_123* _Trait_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_117* _Attribute_k__BackingField; // 0x20
	::R3::ReactiveProperty_1<::System::Boolean>* _RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditSourceViewModel_IsDragged_k__BackingField; // 0x28
	::Class_1_D05699509194BF9B* _Model_k__BackingField; // 0x30
	::R3::Observable_1<::System::Boolean>* BAGDGKPJABJ; // 0x38
	::R3::ReactiveProperty_1<::System::Boolean>* _ReactiveIsTraitRecommended_k__BackingField; // 0x40
	::R3::ReactiveProperty_1<::System::Boolean>* _MutableIsConstraintRecommending_k__BackingField; // 0x48
	::Class_0_16E4307DCC419505_397* EAGJDPFNCPF; // 0x50
	::System::Action* OnClicked; // 0x58
	::System::Action* OnIsEditingChanged; // 0x60
	::System::Boolean JONOLDFCHOG; // 0x68
	::System::Boolean _IsAttributeRecommended_k__BackingField; // 0x69

	::System::Void _ctor(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578__CTOR_OFFSET))(this, a1);
	}

	::Class_1_D05699509194BF9B* get_Model()
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_GET_MODEL_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::String* Method_1_4944A8256F09EC34()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_4944A8256F09EC34_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_MutableIsConstraintRecommending()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_GET_MUTABLEISCONSTRAINTRECOMMENDING_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_FB5550CC734284FC_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_MutableIsAssistantRecommending()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_GET_MUTABLEISASSISTANTRECOMMENDING_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_1()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_FB5550CC734284FC_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_117* get_Attribute()
	{
		return ((::Class_0_16E4307DCC419505_117*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_GET_ATTRIBUTE_OFFSET))(this);
	}

	::System::Void set_Attribute(::Class_0_16E4307DCC419505_117* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_117*))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_SET_ATTRIBUTE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAttributeRecommended()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_GET_ISATTRIBUTERECOMMENDED_OFFSET))(this);
	}

	::System::Void set_IsAttributeRecommended(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_SET_ISATTRIBUTERECOMMENDED_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_123* get_Trait()
	{
		return ((::Class_0_16E4307DCC419505_123*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_GET_TRAIT_OFFSET))(this);
	}

	::System::Void set_Trait(::Class_0_16E4307DCC419505_123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_123*))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_SET_TRAIT_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_ReactiveIsTraitRecommended()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_GET_REACTIVEISTRAITRECOMMENDED_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_2()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_FB5550CC734284FC_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void add_OnIsEditingChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_ADD_ONISEDITINGCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnIsEditingChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_REMOVE_ONISEDITINGCHANGED_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditSourceViewModel_get_IsDragged()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITSOURCEVIEWMODEL_GET_ISDRAGGED_OFFSET))(this);
	}

	::Class_1_D05699509194BF9B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_BDFB1B98046CDD46> Method_1_ED5AFB1274EF827E()
	{
		return ((::System::Nullable_1<::Struct_2_BDFB1B98046CDD46>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_ED5AFB1274EF827E_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_868884E516798EE7()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_868884E516798EE7_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void add_OnClicked(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_ADD_ONCLICKED_OFFSET))(this, a1);
	}

	::System::Void remove_OnClicked(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578_REMOVE_ONCLICKED_OFFSET))(this, a1);
	}

	::System::Void _get_ClickCommand_b__57_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37C86F8E7774C578__GET_CLICKCOMMAND_B__57_0_OFFSET))(this);
	}
};
