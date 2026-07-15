#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_1F84CFE380A91B33;
class Class_1_D33B7D6901AE39E9;
class Class_3_1A9D32B2B1D681B8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FFAEB1CB334EA88D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A474F90)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_0A17961F2C7839AC_OFFSET UNITYSDK_OFFSET(0x1A4782C0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_13FFCF2EFD2F8DAF_OFFSET UNITYSDK_OFFSET(0x1A47B6A0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_1CB401F6C47D34CB_OFFSET UNITYSDK_OFFSET(0x1A47BC30)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x1A4783E0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x1A47B610)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_3D529A84115EACB5_OFFSET UNITYSDK_OFFSET(0x1A476830)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_3E122ADFE9DE7D59_OFFSET UNITYSDK_OFFSET(0x1A477B50)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A476360)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x1A476520)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_499C93D7C9F81C2E_OFFSET UNITYSDK_OFFSET(0x1A4770D0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1A4763F0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_56A32EDFA2497578_OFFSET UNITYSDK_OFFSET(0x1A475DE0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_57281072DA160A9D_OFFSET UNITYSDK_OFFSET(0x1A47A7F0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_5B21A02F414816B2_OFFSET UNITYSDK_OFFSET(0x1A47B910)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_5E0551EEA5DE57C0_OFFSET UNITYSDK_OFFSET(0x1A47A9A0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x1A475C30)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_833A980C4D8DAF22_OFFSET UNITYSDK_OFFSET(0x1A476A80)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x1A477D60)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_85EF9D94568FE76B_OFFSET UNITYSDK_OFFSET(0x1A47BDA0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x1A478ED0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_8E452EE5BB8BD90A_OFFSET UNITYSDK_OFFSET(0x1A47B3E0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x1A47B4A0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x1A478CF0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_970465807C26F38F_OFFSET UNITYSDK_OFFSET(0x1A477600)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_9D6C85109864ED0C_OFFSET UNITYSDK_OFFSET(0x1A477570)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x1A4797D0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_D46B8ABFF6EDAE06_OFFSET UNITYSDK_OFFSET(0x1A4766C0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_EAD10B3E55E2C4C5_1_OFFSET UNITYSDK_OFFSET(0x1A4792E0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1A4755B0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_F5FAEACB5A98BCEC_OFFSET UNITYSDK_OFFSET(0x1A47AAC0)
#define CLASS_1_FFAEB1CB334EA88D_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x1A479FD0)
#define CLASS_1_FFAEB1CB334EA88D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A474DF0)

inline static constexpr unsigned int Class_1_FFAEB1CB334EA88D_TypeDefinitionIndex = 40137;

class Class_1_FFAEB1CB334EA88D : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0xA; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x31; // 0x0
	// static const ::System::UInt32 Field_1_2 = 0xC; // 0x0
	::Class_1_D33B7D6901AE39E9* Field_1_3; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_4; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>>* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>>*>* Field_1_7; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* Field_1_9; // 0x40
	::System::Boolean Field_1_10; // 0x48
	::System::Boolean Field_1_11; // 0x49
	::System::Boolean Field_1_12; // 0x4A
	::System::Boolean Field_1_13; // 0x4B
	::System::Nullable_1<::System::UInt32> Field_1_14; // 0x4C
	::System::UInt32 Field_1_15; // 0x54
	::System::UInt32 Field_1_16; // 0x58
	::System::UInt32 Field_1_17; // 0x5C

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_56A32EDFA2497578(::Class_1_1F84CFE380A91B33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F84CFE380A91B33*))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_56A32EDFA2497578_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Boolean Method_1_833A980C4D8DAF22()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_833A980C4D8DAF22_OFFSET))(this);
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

	::System::Void Method_1_499C93D7C9F81C2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_499C93D7C9F81C2E_OFFSET))(this);
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

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Boolean Method_1_5E0551EEA5DE57C0(::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_5E0551EEA5DE57C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57281072DA160A9D(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_57281072DA160A9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_0A17961F2C7839AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_0A17961F2C7839AC_OFFSET))(this);
	}

	::System::Void Method_1_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_2839AE123F8ECAA7_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag> Method_1_F5FAEACB5A98BCEC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_F5FAEACB5A98BCEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_EAD10B3E55E2C4C5_1_OFFSET))(this);
	}

	::System::Void Method_1_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_93190E731E31C79A_OFFSET))(this);
	}

	::System::Void Method_1_8E452EE5BB8BD90A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32& a2, ::RPG::GameCore::Match3::BombType& a3, ::RPG::GameCore::Match3::PieceTag& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32&, ::RPG::GameCore::Match3::BombType&, ::RPG::GameCore::Match3::PieceTag&))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_8E452EE5BB8BD90A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_8F059A365E90744C_OFFSET))(this);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_13FFCF2EFD2F8DAF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_13FFCF2EFD2F8DAF_OFFSET))(this);
	}

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_1_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_C4EFD31239F98A71_OFFSET))(this);
	}

	::System::Void Method_1_5B21A02F414816B2(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_5B21A02F414816B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1CB401F6C47D34CB(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>&))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_1CB401F6C47D34CB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_85EF9D94568FE76B(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>&))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_85EF9D94568FE76B_OFFSET))(this, a1, a2);
	}

	::Class_1_1F84CFE380A91B33* Method_1_9D6C85109864ED0C()
	{
		return ((::Class_1_1F84CFE380A91B33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D_METHOD_1_9D6C85109864ED0C_OFFSET))(this);
	}
};
