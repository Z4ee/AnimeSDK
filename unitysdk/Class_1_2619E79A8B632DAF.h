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

#define CLASS_1_2619E79A8B632DAF_CLEAR_OFFSET UNITYSDK_OFFSET(0x180AEC90)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_28CC28F80C8F19A8_OFFSET UNITYSDK_OFFSET(0x180AE810)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_3129BDB20712C068_OFFSET UNITYSDK_OFFSET(0x180AEB70)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_33BCA92558D34731_OFFSET UNITYSDK_OFFSET(0x180AE220)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x180AEA90)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x180ADFC0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_60FBDD8DA27DB2D6_OFFSET UNITYSDK_OFFSET(0x180AE010)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_7BB7A99AA9AE7777_OFFSET UNITYSDK_OFFSET(0x180AE630)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x180ADF20)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_A36D170675B48297_OFFSET UNITYSDK_OFFSET(0x180AE3F0)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_A944652A7DCB62BD_OFFSET UNITYSDK_OFFSET(0x180AE870)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_B3E457078AE5D47D_OFFSET UNITYSDK_OFFSET(0x180AE920)
#define CLASS_1_2619E79A8B632DAF_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x180ADF00)
#define CLASS_1_2619E79A8B632DAF_ONALLOC_OFFSET UNITYSDK_OFFSET(0x180AED70)
#define CLASS_1_2619E79A8B632DAF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x180AEE70)
#define CLASS_1_2619E79A8B632DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x180AEEB0)

inline static constexpr unsigned int Class_1_2619E79A8B632DAF_TypeDefinitionIndex = 39151;

class Class_1_2619E79A8B632DAF : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x10
	::RPG::PoolList_1<::System::Action*>* Field_1_3; // 0x18
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::TimeScaleReason, ::System::Int32>* Field_1_0; // 0x20
	::RPG::PoolList_1<::System::Int32>* Field_1_5; // 0x28
	::Class_1_B9D33AA6E3F531F5* Field_1_2; // 0x30
	::System::Boolean Field_1_4; // 0x38
	::System::Single Field_1_6; // 0x3C
	::RPG::Client::LittleGame::FiveDim::PauseAnimatorReason Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_455E250D679F9642_OFFSET))(this);
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

	::System::Single Method_1_28CC28F80C8F19A8(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_28CC28F80C8F19A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A944652A7DCB62BD(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_A944652A7DCB62BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B3E457078AE5D47D(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_B3E457078AE5D47D_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3129BDB20712C068(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2619E79A8B632DAF_METHOD_1_3129BDB20712C068_OFFSET))(this, a1);
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
