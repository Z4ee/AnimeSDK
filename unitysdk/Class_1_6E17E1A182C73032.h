#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_102;
class Class_1_A25EAA30D33F080F;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_6E17E1A182C73032_ADD_HANDLEHINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC01F6E0)
#define CLASS_1_6E17E1A182C73032_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC020CD0)
#define CLASS_1_6E17E1A182C73032_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xC01F540)
#define CLASS_1_6E17E1A182C73032_GET_CUSTOMERACTOR_OFFSET UNITYSDK_OFFSET(0xC01F520)
#define CLASS_1_6E17E1A182C73032_GET_HINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC01F6C0)
#define CLASS_1_6E17E1A182C73032_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xC01F560)
#define CLASS_1_6E17E1A182C73032_METHOD_1_40D6B1B2A424419D_OFFSET UNITYSDK_OFFSET(0xC01F7A0)
#define CLASS_1_6E17E1A182C73032_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0xC01FA00)
#define CLASS_1_6E17E1A182C73032_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xC01FFA0)
#define CLASS_1_6E17E1A182C73032_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC0212B0)
#define CLASS_1_6E17E1A182C73032_METHOD_1_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0xC021310)
#define CLASS_1_6E17E1A182C73032_REMOVE_HANDLEHINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC01F740)
#define CLASS_1_6E17E1A182C73032_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xC01F550)
#define CLASS_1_6E17E1A182C73032_SET_CUSTOMERACTOR_OFFSET UNITYSDK_OFFSET(0xC01F530)
#define CLASS_1_6E17E1A182C73032_SET_HINTCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC01F6D0)
#define CLASS_1_6E17E1A182C73032__CTOR_OFFSET UNITYSDK_OFFSET(0xC01F7E0)
#define CLASS_1_6E17E1A182C73032___CTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0xC021360)

inline static constexpr unsigned int Class_1_6E17E1A182C73032_TypeDefinitionIndex = 79574;

class Class_1_6E17E1A182C73032 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_A25EAA30D33F080F*>* _Constraints_k__BackingField; // 0x10
	::System::IDisposable* KGHNOJBDPIM; // 0x18
	::R3::ReactiveProperty_1<::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*>* EMMGFCKKBPK; // 0x20
	::System::Action* HandleHintCanSubmit; // 0x28
	::Class_0_16E4307DCC419505_102* _CustomerActor_k__BackingField; // 0x30
	::System::Boolean BKNBBJPLPHO; // 0x38
	::RPG::Client::TextID _HintCanSubmit_k__BackingField; // 0x40

	::System::Void _ctor(::R3::Observable_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::Observable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_102* get_CustomerActor()
	{
		return ((::Class_0_16E4307DCC419505_102*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_GET_CUSTOMERACTOR_OFFSET))(this);
	}

	::System::Void set_CustomerActor(::Class_0_16E4307DCC419505_102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_102*))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_SET_CUSTOMERACTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_A25EAA30D33F080F*>* get_Constraints()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_A25EAA30D33F080F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_GET_CONSTRAINTS_OFFSET))(this);
	}

	::System::Void set_Constraints(::System::Collections::Generic::IReadOnlyList_1<::Class_1_A25EAA30D33F080F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A25EAA30D33F080F*>*))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_SET_CONSTRAINTS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::RPG::Client::TextID get_HintCanSubmit()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_GET_HINTCANSUBMIT_OFFSET))(this);
	}

	::System::Void set_HintCanSubmit(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_SET_HINTCANSUBMIT_OFFSET))(this, a1);
	}

	::System::Void add_HandleHintCanSubmit(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_ADD_HANDLEHINTCANSUBMIT_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintCanSubmit(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_REMOVE_HANDLEHINTCANSUBMIT_OFFSET))(this, a1);
	}

	::R3::Observable_1<::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*>* Method_1_40D6B1B2A424419D()
	{
		return ((::R3::Observable_1<::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_METHOD_1_40D6B1B2A424419D_OFFSET))(this);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_METHOD_1_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void __ctor_b__23_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032___CTOR_B__23_1_OFFSET))(this, a1);
	}
};
