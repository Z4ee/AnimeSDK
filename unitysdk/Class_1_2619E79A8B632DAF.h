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

#define CLASS_1_2619E79A8B632DAF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4BFCA0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_33BCA92558D34731_OFFSET UNITYSDK_OFFSET(0x1C4BF1D0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_597174F7F7959C8E_OFFSET UNITYSDK_OFFSET(0x1C4BF7A0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_5D292875BC06E130_OFFSET UNITYSDK_OFFSET(0x1C4BF5A0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_60FBDD8DA27DB2D6_OFFSET UNITYSDK_OFFSET(0x1C4BEFD0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_65E8AAB7E04FA4BB_OFFSET UNITYSDK_OFFSET(0x1C4BF8B0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_71399AAFD9B92466_OFFSET UNITYSDK_OFFSET(0x1C4BF740)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_A2DB4A46BB37F0F9_OFFSET UNITYSDK_OFFSET(0x1C4BF9D0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x1C4BEEC0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_E9A7ABBC27926278_OFFSET UNITYSDK_OFFSET(0x1C4BFB50)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_EAD4CFFF580A0A28_OFFSET UNITYSDK_OFFSET(0x1C4BEF80)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_FA88912DE3125B0E_OFFSET UNITYSDK_OFFSET(0x1C4BF390)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1C4BEEA0)
#define CLASS_1_2619E79A8B632DAF_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C4BFD90)
#define CLASS_1_2619E79A8B632DAF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C4BFEA0)
#define CLASS_1_2619E79A8B632DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BFEE0)

inline static constexpr unsigned int Class_1_2619E79A8B632DAF_TypeDefinitionIndex = 41685;

class Class_1_2619E79A8B632DAF : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Int32>* FLNHDGHDJKB; // 0x10
	::RPG::PoolList_1<::System::Int32>* LHPHLHGFCFL; // 0x18
	::RPG::PoolList_1<::System::Action*>* LGBKLLCJIKH; // 0x20
	::Class_1_B9D33AA6E3F531F5* HPMOHHCLMBD; // 0x28
	::RPG::PoolDictionary_2<::System::String*, ::System::Int32>* FNKKEKIPLMB; // 0x30
	::RPG::Client::LittleGame::FiveDim::PauseAnimatorReason OLKBNGKDJPN; // 0x38
	::System::Single FNMCLOFFLMJ; // 0x3C
	::System::Boolean JHHAJDKPLJH; // 0x40

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

	::System::Int32 Method_1_FA88912DE3125B0E(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_FA88912DE3125B0E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5D292875BC06E130(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_5D292875BC06E130_OFFSET))(this, a1, a2);
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
