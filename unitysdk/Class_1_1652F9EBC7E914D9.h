#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2D63678DF524F022;
class Class_1_30C7E5C640F89710;
class Class_1_4C016A402AC989BA;
class Class_1_6241E1C44338E6DB;
class Class_1_7B5BC5F7531D3B01;
class Class_1_864411A9CBACB9B1;
class Class_1_E3044AFF91E5082A;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_1652F9EBC7E914D9_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1C578760)
#define CLASS_1_1652F9EBC7E914D9_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C5786C0)
#define CLASS_1_1652F9EBC7E914D9_GET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0x1C578740)
#define CLASS_1_1652F9EBC7E914D9_GET_OBSERVABLEISALLREQUIREDMET_OFFSET UNITYSDK_OFFSET(0x1C578410)
#define CLASS_1_1652F9EBC7E914D9_GET_OPTIONALCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C578700)
#define CLASS_1_1652F9EBC7E914D9_GET_REQUIREDCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C578720)
#define CLASS_1_1652F9EBC7E914D9_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1C5786E0)
#define CLASS_1_1652F9EBC7E914D9_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1C5786B0)
#define CLASS_1_1652F9EBC7E914D9_METHOD_1_00C7FCDD0B82BC95_OFFSET UNITYSDK_OFFSET(0x1C578820)
#define CLASS_1_1652F9EBC7E914D9_METHOD_1_9E21C153E3359129_1_OFFSET UNITYSDK_OFFSET(0x1C579400)
#define CLASS_1_1652F9EBC7E914D9_METHOD_1_9E21C153E3359129_OFFSET UNITYSDK_OFFSET(0x1C578620)
#define CLASS_1_1652F9EBC7E914D9_METHOD_1_A058D9862D4AF72B_OFFSET UNITYSDK_OFFSET(0x1C578FE0)
#define CLASS_1_1652F9EBC7E914D9_METHOD_1_B6E07CD385C1C182_OFFSET UNITYSDK_OFFSET(0x1C578430)
#define CLASS_1_1652F9EBC7E914D9_METHOD_1_E5205A4A9B66D61C_OFFSET UNITYSDK_OFFSET(0x1C579290)
#define CLASS_1_1652F9EBC7E914D9_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1C5787C0)
#define CLASS_1_1652F9EBC7E914D9_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C5786D0)
#define CLASS_1_1652F9EBC7E914D9_SET_INTEGRATION_OFFSET UNITYSDK_OFFSET(0x1C578750)
#define CLASS_1_1652F9EBC7E914D9_SET_OBSERVABLEISALLREQUIREDMET_OFFSET UNITYSDK_OFFSET(0x1C578420)
#define CLASS_1_1652F9EBC7E914D9_SET_OPTIONALCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C578710)
#define CLASS_1_1652F9EBC7E914D9_SET_REQUIREDCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C578730)
#define CLASS_1_1652F9EBC7E914D9_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1C5786F0)
#define CLASS_1_1652F9EBC7E914D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5794B0)

inline static constexpr unsigned int Class_1_1652F9EBC7E914D9_TypeDefinitionIndex = 41824;

class Class_1_1652F9EBC7E914D9 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>* _RequiredConstraints_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>* _OptionalConstraints_k__BackingField; // 0x18
	::Class_1_30C7E5C640F89710* _Traits_k__BackingField; // 0x20
	::Class_1_6241E1C44338E6DB* _Attributes_k__BackingField; // 0x28
	::Class_1_4C016A402AC989BA* _Validity_k__BackingField; // 0x30
	::R3::Observable_1<::System::Boolean>* _ObservableIsAllRequiredMet_k__BackingField; // 0x38
	::System::Action* OnMaybeChanged; // 0x40
	::Class_1_864411A9CBACB9B1* _Integration_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9__CTOR_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* get_ObservableIsAllRequiredMet()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_GET_OBSERVABLEISALLREQUIREDMET_OFFSET))(this);
	}

	::System::Void set_ObservableIsAllRequiredMet(::R3::Observable_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::Observable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_SET_OBSERVABLEISALLREQUIREDMET_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B6E07CD385C1C182()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_METHOD_1_B6E07CD385C1C182_OFFSET))(this);
	}

	::Class_1_4C016A402AC989BA* get_Validity()
	{
		return ((::Class_1_4C016A402AC989BA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_GET_VALIDITY_OFFSET))(this);
	}

	::Class_1_6241E1C44338E6DB* get_Attributes()
	{
		return ((::Class_1_6241E1C44338E6DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_GET_ATTRIBUTES_OFFSET))(this);
	}

	::System::Void set_Attributes(::Class_1_6241E1C44338E6DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6241E1C44338E6DB*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_SET_ATTRIBUTES_OFFSET))(this, a1);
	}

	::Class_1_30C7E5C640F89710* get_Traits()
	{
		return ((::Class_1_30C7E5C640F89710*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_GET_TRAITS_OFFSET))(this);
	}

	::System::Void set_Traits(::Class_1_30C7E5C640F89710* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30C7E5C640F89710*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_SET_TRAITS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>* get_OptionalConstraints()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_GET_OPTIONALCONSTRAINTS_OFFSET))(this);
	}

	::System::Void set_OptionalConstraints(::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_SET_OPTIONALCONSTRAINTS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>* get_RequiredConstraints()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_GET_REQUIREDCONSTRAINTS_OFFSET))(this);
	}

	::System::Void set_RequiredConstraints(::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_7B5BC5F7531D3B01*>*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_SET_REQUIREDCONSTRAINTS_OFFSET))(this, a1);
	}

	::Class_1_864411A9CBACB9B1* get_Integration()
	{
		return ((::Class_1_864411A9CBACB9B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_GET_INTEGRATION_OFFSET))(this);
	}

	::System::Void set_Integration(::Class_1_864411A9CBACB9B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_864411A9CBACB9B1*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_SET_INTEGRATION_OFFSET))(this, a1);
	}

	::System::Void add_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_00C7FCDD0B82BC95(::Class_1_2D63678DF524F022* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2D63678DF524F022*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_METHOD_1_00C7FCDD0B82BC95_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_E3044AFF91E5082A*>* Method_1_A058D9862D4AF72B()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_E3044AFF91E5082A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_METHOD_1_A058D9862D4AF72B_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_E3044AFF91E5082A*>* Method_1_9E21C153E3359129()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_E3044AFF91E5082A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_METHOD_1_9E21C153E3359129_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_E3044AFF91E5082A*>* Method_1_9E21C153E3359129_1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_E3044AFF91E5082A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_METHOD_1_9E21C153E3359129_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_E3044AFF91E5082A*>* Method_1_E5205A4A9B66D61C()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_E3044AFF91E5082A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9_METHOD_1_E5205A4A9B66D61C_OFFSET))(this);
	}
};
