#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PauseAnimatorReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/TimeScaleReason.h"
#include "unitysdk/System/Object.h"

class Class_1_B9D33AA6E3F531F5;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2619E79A8B632DAF_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D01D80)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_0255FAD08A37C417_OFFSET UNITYSDK_OFFSET(0x18D01860)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_33BCA92558D34731_OFFSET UNITYSDK_OFFSET(0x18D01240)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_60FBDD8DA27DB2D6_OFFSET UNITYSDK_OFFSET(0x18D01040)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_71399AAFD9B92466_OFFSET UNITYSDK_OFFSET(0x18D01800)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_7BB7A99AA9AE7777_OFFSET UNITYSDK_OFFSET(0x18D01630)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_A2DB4A46BB37F0F9_OFFSET UNITYSDK_OFFSET(0x18D01AB0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_A36D170675B48297_OFFSET UNITYSDK_OFFSET(0x18D01400)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_B3E457078AE5D47D_OFFSET UNITYSDK_OFFSET(0x18D01940)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x18D00F30)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_E9A7ABBC27926278_OFFSET UNITYSDK_OFFSET(0x18D01C30)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_EAD4CFFF580A0A28_OFFSET UNITYSDK_OFFSET(0x18D00FF0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x18D00F10)
#define CLASS_1_2619E79A8B632DAF_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D01E70)
#define CLASS_1_2619E79A8B632DAF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18D01F80)
#define CLASS_1_2619E79A8B632DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x18D01FC0)

inline static constexpr unsigned int Class_1_2619E79A8B632DAF_TypeDefinitionIndex = 39920;

class Class_1_2619E79A8B632DAF : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Action*>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Int32>* Field_1_1; // 0x18
	::RPG::PoolList_1<::System::Int32>* Field_1_2; // 0x20
	::RPG::PoolDictionary_2<::System::String*, ::System::Int32>* Field_1_3; // 0x28
	::Class_1_B9D33AA6E3F531F5* Field_1_4; // 0x30
	::RPG::Client::LittleGame::FiveDim::PauseAnimatorReason Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Boolean Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_D9BF9B27FAC3AAD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_D9BF9B27FAC3AAD2_OFFSET))(this);
	}

	::System::Void Method_1_EAD4CFFF580A0A28()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_EAD4CFFF580A0A28_OFFSET))(this);
	}

	::System::Int32 Method_1_60FBDD8DA27DB2D6(::RPG::Client::LittleGame::FiveDim::TimeScaleReason a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_60FBDD8DA27DB2D6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_33BCA92558D34731(::RPG::Client::LittleGame::FiveDim::TimeScaleReason a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_33BCA92558D34731_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A36D170675B48297(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_A36D170675B48297_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7BB7A99AA9AE7777(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_7BB7A99AA9AE7777_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_71399AAFD9B92466(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_71399AAFD9B92466_OFFSET))(this, a1);
	}

	::System::Void Method_1_0255FAD08A37C417(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_0255FAD08A37C417_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B3E457078AE5D47D(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_B3E457078AE5D47D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2DB4A46BB37F0F9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_A2DB4A46BB37F0F9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E9A7ABBC27926278(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_E9A7ABBC27926278_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_ONRECYCLE_OFFSET))(this);
	}
};
