#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_357673ADDEE88E8E.h"

class Class_1_455008579EB95638_13;
class Class_1_91EDF801EFB7E1C2;
namespace Proto { class ItemList; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B41331FB705B6530_ADD_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xA546730)
#define CLASS_2_B41331FB705B6530_ADD_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xA5464A0)
#define CLASS_2_B41331FB705B6530_ADD_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xA546250)
#define CLASS_2_B41331FB705B6530_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xA546140)
#define CLASS_2_B41331FB705B6530_METHOD_2_3EF33FD8BF224359_1_OFFSET UNITYSDK_OFFSET(0xA5465A0)
#define CLASS_2_B41331FB705B6530_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0xA546310)
#define CLASS_2_B41331FB705B6530_REMOVE_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0xA546790)
#define CLASS_2_B41331FB705B6530_REMOVE_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0xA546520)
#define CLASS_2_B41331FB705B6530_REMOVE_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0xA5462B0)
#define CLASS_2_B41331FB705B6530__CTOR_OFFSET UNITYSDK_OFFSET(0xA546130)
#define CLASS_2_B41331FB705B6530__REQUESTGETDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0xA5467F0)

inline static constexpr unsigned int Class_2_B41331FB705B6530_TypeDefinitionIndex = 56621;

class Class_2_B41331FB705B6530 : public ::Class_1_357673ADDEE88E8E
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x2666; // 0x0
	// static const ::System::UInt16 Field_2_3 = 0x2663; // 0x0
	// static const ::System::UInt16 Field_2_5 = 0x2660; // 0x0
	::System::Action_2<::System::Int32, ::Proto::ItemList*>* OnClaimRewardFinished; // 0x20
	::System::Action_1<::System::Int32>* OnDrawFinished; // 0x28
	::System::Action* OnGetDataFinished; // 0x30
	::Class_1_91EDF801EFB7E1C2* Field_2_0; // 0x38

	::System::Void _ctor(::Class_1_91EDF801EFB7E1C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91EDF801EFB7E1C2*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void add_OnGetDataFinished(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_ADD_ONGETDATAFINISHED_OFFSET))(this, value);
	}

	::System::Void remove_OnGetDataFinished(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_REMOVE_ONGETDATAFINISHED_OFFSET))(this, value);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void add_OnDrawFinished(::System::Action_1<::System::Int32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_ADD_ONDRAWFINISHED_OFFSET))(this, value);
	}

	::System::Void remove_OnDrawFinished(::System::Action_1<::System::Int32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_REMOVE_ONDRAWFINISHED_OFFSET))(this, value);
	}

	::System::Void Method_2_3EF33FD8BF224359_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_METHOD_2_3EF33FD8BF224359_1_OFFSET))(this, a1);
	}

	::System::Void add_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_ADD_ONCLAIMREWARDFINISHED_OFFSET))(this, value);
	}

	::System::Void remove_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530_REMOVE_ONCLAIMREWARDFINISHED_OFFSET))(this, value);
	}

	::System::Void _RequestGetData_b__3_0(::Class_1_455008579EB95638_13* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_13*))((::PBYTE)hIl2Cpp + CLASS_2_B41331FB705B6530__REQUESTGETDATA_B__3_0_OFFSET))(this, rsp);
	}
};
