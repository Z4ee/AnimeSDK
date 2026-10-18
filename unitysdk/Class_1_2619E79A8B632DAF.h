#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PauseAnimatorReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/TimeScaleReason.h"
#include "unitysdk/System/Object.h"

class Class_1_5C1B37413D7CD0F5;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2619E79A8B632DAF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA049A0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_33BCA92558D34731_OFFSET UNITYSDK_OFFSET(0x1CA03E80)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_597174F7F7959C8E_OFFSET UNITYSDK_OFFSET(0x1CA044A0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_60FBDD8DA27DB2D6_OFFSET UNITYSDK_OFFSET(0x1CA03C80)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_65E8AAB7E04FA4BB_OFFSET UNITYSDK_OFFSET(0x1CA045B0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_71399AAFD9B92466_OFFSET UNITYSDK_OFFSET(0x1CA04440)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_7BB7A99AA9AE7777_OFFSET UNITYSDK_OFFSET(0x1CA04270)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_A2DB4A46BB37F0F9_OFFSET UNITYSDK_OFFSET(0x1CA046D0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_A36D170675B48297_OFFSET UNITYSDK_OFFSET(0x1CA04040)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x1CA03B70)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_E9A7ABBC27926278_OFFSET UNITYSDK_OFFSET(0x1CA04850)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_EAD4CFFF580A0A28_OFFSET UNITYSDK_OFFSET(0x1CA03C30)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1CA03B50)
#define CLASS_1_2619E79A8B632DAF_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA04A90)
#define CLASS_1_2619E79A8B632DAF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA04BD0)
#define CLASS_1_2619E79A8B632DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA04C10)

inline static constexpr unsigned int Class_1_2619E79A8B632DAF_TypeDefinitionIndex = 43326;

class Class_1_2619E79A8B632DAF : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::System::Int32>* FNKKEKIPLMB; // 0x10
	::Class_1_5C1B37413D7CD0F5* HPMOHHCLMBD; // 0x18
	::RPG::PoolList_1<::System::Int32>* LHPHLHGFCFL; // 0x20
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Int32>* FLNHDGHDJKB; // 0x28
	::RPG::PoolList_1<::System::Action*>* LGBKLLCJIKH; // 0x30
	::System::Boolean JHHAJDKPLJH; // 0x38
	::RPG::Client::LittleGame::FiveDim::PauseAnimatorReason OLKBNGKDJPN; // 0x3C
	::System::Single FNMCLOFFLMJ; // 0x40

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

	::System::Void Method_1_597174F7F7959C8E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_597174F7F7959C8E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_65E8AAB7E04FA4BB(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_65E8AAB7E04FA4BB_OFFSET))(this, a1);
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
