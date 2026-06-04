#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/Struct_2_5C4F194DEECB2289.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_230;
class Class_1_066AB55B5826B0C9;
class Class_1_319BFE2697D9E105;
class Class_2_4706D3AD6019CD01;
class Class_3_1A9D32B2B1D681B8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_7C297F0B808B5FA9_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C03AD0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_0A9AF721BA46155D_OFFSET UNITYSDK_OFFSET(0x18C0B310)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_0DC7E0D98384839D_OFFSET UNITYSDK_OFFSET(0x18C07140)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_16B5D7A6B56E76F3_OFFSET UNITYSDK_OFFSET(0x18C0AD30)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_2EA3BB7C989DFB55_OFFSET UNITYSDK_OFFSET(0x18C0B140)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x18C0B0D0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_3A9538ECB539CDD3_1_OFFSET UNITYSDK_OFFSET(0x18C07FD0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_3A9538ECB539CDD3_OFFSET UNITYSDK_OFFSET(0x18C06B40)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_482AD8DBB9DF85FD_OFFSET UNITYSDK_OFFSET(0x18C03BB0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_4CF4A1062C6C3183_OFFSET UNITYSDK_OFFSET(0x18C0AAF0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_6319F5A4521BE9B4_OFFSET UNITYSDK_OFFSET(0x18C07780)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_6E2DA185BC0F86A1_OFFSET UNITYSDK_OFFSET(0x18C05310)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_72DBA899FC840E4E_OFFSET UNITYSDK_OFFSET(0x18C0B280)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_773D32810FEF348E_OFFSET UNITYSDK_OFFSET(0x18C05E70)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_8E861A3984AE533A_OFFSET UNITYSDK_OFFSET(0x18C054B0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_9034332A75A17DFB_OFFSET UNITYSDK_OFFSET(0x18C03C50)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_9EE145BE7FF75394_OFFSET UNITYSDK_OFFSET(0x18C07BC0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_A4B03CB4A77A005A_OFFSET UNITYSDK_OFFSET(0x18C05380)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x18C0AA50)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_F50A56900DCBB0FE_OFFSET UNITYSDK_OFFSET(0x18C050A0)
#define CLASS_1_7C297F0B808B5FA9__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0B3C0)

inline static constexpr unsigned int Class_1_7C297F0B808B5FA9_TypeDefinitionIndex = 39669;

class Class_1_7C297F0B808B5FA9 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::Class_0_16E4307DCC419505_230* Field_1_1; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* Field_1_4; // 0x28
	::System::Collections::Generic::Queue_1<::Struct_2_5C4F194DEECB2289>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_319BFE2697D9E105*>* Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_482AD8DBB9DF85FD(::Class_3_1A9D32B2B1D681B8* a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2, ::System::Collections::Generic::List_1<::Class_1_319BFE2697D9E105*>* a3, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* a4, ::Class_0_16E4307DCC419505_230* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A9D32B2B1D681B8*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*, ::System::Collections::Generic::List_1<::Class_1_319BFE2697D9E105*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>*, ::Class_0_16E4307DCC419505_230*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_482AD8DBB9DF85FD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_9034332A75A17DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_9034332A75A17DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_8E861A3984AE533A(::System::Boolean& a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_8E861A3984AE533A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_773D32810FEF348E(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_773D32810FEF348E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3A9538ECB539CDD3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_3A9538ECB539CDD3_OFFSET))(this);
	}

	::System::Boolean Method_1_0DC7E0D98384839D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_0DC7E0D98384839D_OFFSET))(this);
	}

	::System::Boolean Method_1_6319F5A4521BE9B4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_6319F5A4521BE9B4_OFFSET))(this);
	}

	::System::Boolean Method_1_9EE145BE7FF75394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_9EE145BE7FF75394_OFFSET))(this);
	}

	::System::Boolean Method_1_3A9538ECB539CDD3_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_3A9538ECB539CDD3_1_OFFSET))(this);
	}

	::System::Void Method_1_16B5D7A6B56E76F3(::Class_1_066AB55B5826B0C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_16B5D7A6B56E76F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4CF4A1062C6C3183(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_4CF4A1062C6C3183_OFFSET))(this, a1);
	}

	::Class_1_066AB55B5826B0C9* Method_1_F50A56900DCBB0FE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Class_1_066AB55B5826B0C9*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_F50A56900DCBB0FE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_066AB55B5826B0C9* Method_1_6E2DA185BC0F86A1(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
	{
		return ((::Class_1_066AB55B5826B0C9*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_6E2DA185BC0F86A1_OFFSET))(this, a1, a2);
	}

	::Class_1_319BFE2697D9E105* Method_1_A4B03CB4A77A005A(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::Class_1_319BFE2697D9E105*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_A4B03CB4A77A005A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_066AB55B5826B0C9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_39C75ED00C6629F7(::Class_1_066AB55B5826B0C9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_39C75ED00C6629F7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2EA3BB7C989DFB55(::Class_2_4706D3AD6019CD01* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4706D3AD6019CD01*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_2EA3BB7C989DFB55_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_72DBA899FC840E4E(::RPG::GameCore::Match3::BombType a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BombType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_72DBA899FC840E4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_0A9AF721BA46155D(::Class_2_4706D3AD6019CD01* a1, ::Class_2_4706D3AD6019CD01* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Class_2_4706D3AD6019CD01*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_0A9AF721BA46155D_OFFSET))(this, a1, a2);
	}
};
