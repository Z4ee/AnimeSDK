#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/Struct_2_5C4F194DEECB2289.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_257;
class Class_1_066AB55B5826B0C9;
class Class_1_B822DA0F8FF82394;
class Class_2_4706D3AD6019CD01;
class Class_3_1A9D32B2B1D681B8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_7C297F0B808B5FA9_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3B2D40)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_0A9AF721BA46155D_OFFSET UNITYSDK_OFFSET(0x1C3BAB10)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_16B5D7A6B56E76F3_OFFSET UNITYSDK_OFFSET(0x1C3BA540)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_2EA3BB7C989DFB55_OFFSET UNITYSDK_OFFSET(0x1C3BA940)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x1C3BA8D0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_3A9538ECB539CDD3_OFFSET UNITYSDK_OFFSET(0x1C3B7510)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_482AD8DBB9DF85FD_OFFSET UNITYSDK_OFFSET(0x1C3B2E10)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_4CF4A1062C6C3183_OFFSET UNITYSDK_OFFSET(0x1C3BA300)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_4D3844E1FDA67A3F_OFFSET UNITYSDK_OFFSET(0x1C3B7100)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_6319F5A4521BE9B4_OFFSET UNITYSDK_OFFSET(0x1C3B6CC0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_6E2DA185BC0F86A1_OFFSET UNITYSDK_OFFSET(0x1C3B4590)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_72DBA899FC840E4E_OFFSET UNITYSDK_OFFSET(0x1C3BAA80)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_749AC5A05BCC6AC8_OFFSET UNITYSDK_OFFSET(0x1C3B6660)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_773D32810FEF348E_OFFSET UNITYSDK_OFFSET(0x1C3B51B0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_8E861A3984AE533A_OFFSET UNITYSDK_OFFSET(0x1C3B4730)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_9034332A75A17DFB_OFFSET UNITYSDK_OFFSET(0x1C3B2EB0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_A4B03CB4A77A005A_OFFSET UNITYSDK_OFFSET(0x1C3B4600)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_BF272444CBE086CA_OFFSET UNITYSDK_OFFSET(0x1C3B5FE0)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x1C3BA260)
#define CLASS_1_7C297F0B808B5FA9_METHOD_1_F50A56900DCBB0FE_OFFSET UNITYSDK_OFFSET(0x1C3B42C0)
#define CLASS_1_7C297F0B808B5FA9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3BABC0)

inline static constexpr unsigned int Class_1_7C297F0B808B5FA9_TypeDefinitionIndex = 41416;

class Class_1_7C297F0B808B5FA9 : public ::System::Object
{
public:
	// static const ::System::Single GNIMLHBALEP; // 0x0
	::Class_0_16E4307DCC419505_257* CPIKJMEMAIE; // 0x10
	::Class_3_1A9D32B2B1D681B8* PDENFEFCAGN; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B822DA0F8FF82394*>* MENOBJEFELB; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* HIJPJBGAADF; // 0x28
	::System::Collections::Generic::Queue_1<::Struct_2_5C4F194DEECB2289>* MIFOMLHKECG; // 0x30
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* KLEIMNLINEE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_482AD8DBB9DF85FD(::Class_3_1A9D32B2B1D681B8* a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2, ::System::Collections::Generic::List_1<::Class_1_B822DA0F8FF82394*>* a3, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* a4, ::Class_0_16E4307DCC419505_257* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A9D32B2B1D681B8*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*, ::System::Collections::Generic::List_1<::Class_1_B822DA0F8FF82394*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>*, ::Class_0_16E4307DCC419505_257*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_482AD8DBB9DF85FD_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Boolean Method_1_BF272444CBE086CA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_BF272444CBE086CA_OFFSET))(this);
	}

	::System::Boolean Method_1_749AC5A05BCC6AC8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_749AC5A05BCC6AC8_OFFSET))(this);
	}

	::System::Boolean Method_1_6319F5A4521BE9B4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_6319F5A4521BE9B4_OFFSET))(this);
	}

	::System::Boolean Method_1_4D3844E1FDA67A3F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_4D3844E1FDA67A3F_OFFSET))(this);
	}

	::System::Boolean Method_1_3A9538ECB539CDD3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_3A9538ECB539CDD3_OFFSET))(this);
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

	::Class_1_B822DA0F8FF82394* Method_1_A4B03CB4A77A005A(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::Class_1_B822DA0F8FF82394*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_7C297F0B808B5FA9_METHOD_1_A4B03CB4A77A005A_OFFSET))(this, a1);
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
