#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_867B6CE75953535A;
class Class_1_E71C5FFECE694C17;
class Class_3_1A9D32B2B1D681B8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FFAEB1CB334EA88D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x169CE0E0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_182BA737D561CA10_OFFSET UNITYSDK_OFFSET(0x169D1240)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_2CBE0B79DD36047E_1_OFFSET UNITYSDK_OFFSET(0x169D0CF0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x169CE6C0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x169CED20)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_3D529A84115EACB5_OFFSET UNITYSDK_OFFSET(0x169CF920)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_3E122ADFE9DE7D59_OFFSET UNITYSDK_OFFSET(0x169D0AE0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_3E386A7E4E1354C6_OFFSET UNITYSDK_OFFSET(0x169D4690)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x169D45E0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x169CF450)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x169D1F70)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_4D9CA535A2BBD790_OFFSET UNITYSDK_OFFSET(0x169CFB70)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x169CF4F0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_56A32EDFA2497578_OFFSET UNITYSDK_OFFSET(0x169CEEE0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_5E0551EEA5DE57C0_OFFSET UNITYSDK_OFFSET(0x169D3AD0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0x169D1A30)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x169D2450)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_734E46B8B517D866_OFFSET UNITYSDK_OFFSET(0x169D4D50)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_85EF9D94568FE76B_OFFSET UNITYSDK_OFFSET(0x169D4EC0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_8DD6AABC2C553FEF_OFFSET UNITYSDK_OFFSET(0x169D3BF0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x169D0180)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_8E452EE5BB8BD90A_OFFSET UNITYSDK_OFFSET(0x169D4350)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_970465807C26F38F_OFFSET UNITYSDK_OFFSET(0x169D05C0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x169D0530)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_ACE4204EBB1CE487_OFFSET UNITYSDK_OFFSET(0x169CF620)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_BED152986A0E9CF4_OFFSET UNITYSDK_OFFSET(0x169D3910)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x169D1370)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_D46B8ABFF6EDAE06_OFFSET UNITYSDK_OFFSET(0x169CF7B0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_D483587B0A32A0A9_OFFSET UNITYSDK_OFFSET(0x169D4A20)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_D8F3C6B2E2C5586E_OFFSET UNITYSDK_OFFSET(0x169D4410)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_D9E34E162363C06E_OFFSET UNITYSDK_OFFSET(0x169D2DE0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x169D1C20)
#define CLASS_1_FFAEB1CB334EA88D__CTOR_OFFSET UNITYSDK_OFFSET(0x169CDF00)

inline static constexpr unsigned int Class_1_FFAEB1CB334EA88D_TypeDefinitionIndex = 32771;

class Class_1_FFAEB1CB334EA88D : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_15 = 0xA; // 0x0
	// static const ::System::UInt32 Field_1_16 = 0x31; // 0x0
	// static const ::System::UInt32 Field_1_17 = 0xC; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x18
	::Class_1_867B6CE75953535A* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* Field_1_2; // 0x30
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>>*>* Field_1_6; // 0x40
	::System::UInt32 Field_1_12; // 0x48
	::System::Nullable_1<::System::UInt32> Field_1_14; // 0x4C
	::System::UInt32 Field_1_11; // 0x54
	::System::Boolean Field_1_8; // 0x58
	::System::Boolean Field_1_7; // 0x59
	::System::Boolean Field_1_9; // 0x5A
	::System::Boolean Field_1_10; // 0x5B
	::System::UInt32 Field_1_13; // 0x5C

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_56A32EDFA2497578(::Class_1_E71C5FFECE694C17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E71C5FFECE694C17*))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_56A32EDFA2497578_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Boolean Method_1_4D9CA535A2BBD790()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_4D9CA535A2BBD790_OFFSET))(this);
	}

	::System::Boolean Method_1_3D529A84115EACB5(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_3D529A84115EACB5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_970465807C26F38F(::System::Boolean a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_970465807C26F38F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_3E122ADFE9DE7D59(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_3E122ADFE9DE7D59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Method_1_D46B8ABFF6EDAE06(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_D46B8ABFF6EDAE06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_ACE4204EBB1CE487()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_ACE4204EBB1CE487_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_2CBE0B79DD36047E_1_OFFSET))(this);
	}

	::System::Boolean Method_1_5E0551EEA5DE57C0(::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_5E0551EEA5DE57C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BED152986A0E9CF4(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_BED152986A0E9CF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_182BA737D561CA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_182BA737D561CA10_OFFSET))(this);
	}

	::System::Void Method_1_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_C4EFD31239F98A71_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag> Method_1_8DD6AABC2C553FEF(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_8DD6AABC2C553FEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_71912DBB0D113575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_71912DBB0D113575_OFFSET))(this);
	}

	::System::Void Method_1_8E452EE5BB8BD90A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32& a2, ::RPG::GameCore::Match3::BombType& a3, ::RPG::GameCore::Match3::PieceTag& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32&, ::RPG::GameCore::Match3::BombType&, ::RPG::GameCore::Match3::PieceTag&))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_8E452EE5BB8BD90A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D8F3C6B2E2C5586E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_D8F3C6B2E2C5586E_OFFSET))(this);
	}

	::System::Boolean Method_1_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_3E386A7E4E1354C6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_3E386A7E4E1354C6_OFFSET))(this);
	}

	::System::Void Method_1_D9E34E162363C06E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_D9E34E162363C06E_OFFSET))(this);
	}

	::System::Void Method_1_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Void Method_1_D483587B0A32A0A9(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_D483587B0A32A0A9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_734E46B8B517D866(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>&))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_734E46B8B517D866_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_85EF9D94568FE76B(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>&))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_85EF9D94568FE76B_OFFSET))(this, a1, a2);
	}

	::Class_1_E71C5FFECE694C17* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_E71C5FFECE694C17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_995B4AEB9D9468D5_OFFSET))(this);
	}
};
