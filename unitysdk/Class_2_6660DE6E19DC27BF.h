#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/Enum_3_63D176C405CC7947_1.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleSimulatePhase.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_8F970B645F94CD5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_197;
class Class_0_16E4307DCC419505_198;
class Class_1_1A9CE2EFC01A6535;
class Class_1_2E1C713036FDC667;
class Class_1_3AAD2B26053F7D77_1;
class Class_1_43BD383C98B4C0C5_64;
class Class_1_43BD383C98B4C0C5_65;
class Class_1_47EE63CB5C4DC8FC_16;
class Class_1_5BE136E515AF9A61;
class Class_1_78C2963AC589BAA9;
class Class_1_7AB88D713F5121B3_31;
class Class_1_9103957C32159125;
class Class_1_9236C508CFB77444;
class Class_1_C9DFE5EE7107C629_10;
class Class_1_C9DFE5EE7107C629_11;
class Class_1_E0231B607CD65186_5;
class Class_1_F3CA30716D4FAF92_12;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6660DE6E19DC27BF_METHOD_2_0D592A47F732356F_1_OFFSET UNITYSDK_OFFSET(0x17FB9020)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_0D592A47F732356F_OFFSET UNITYSDK_OFFSET(0x17FB82A0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_10_OFFSET UNITYSDK_OFFSET(0x17FBBB70)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_11_OFFSET UNITYSDK_OFFSET(0x17FBBC90)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_12_OFFSET UNITYSDK_OFFSET(0x17FBBDB0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_13_OFFSET UNITYSDK_OFFSET(0x17FBBED0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_14_OFFSET UNITYSDK_OFFSET(0x17FBBFF0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_15_OFFSET UNITYSDK_OFFSET(0x17FBC110)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_16_OFFSET UNITYSDK_OFFSET(0x17FBC230)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_17_OFFSET UNITYSDK_OFFSET(0x17FBC350)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x17FB7470)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x17FB77A0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_3_OFFSET UNITYSDK_OFFSET(0x17FB7AB0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_4_OFFSET UNITYSDK_OFFSET(0x17FB8230)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_5_OFFSET UNITYSDK_OFFSET(0x17FB9880)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_6_OFFSET UNITYSDK_OFFSET(0x17FB9DB0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_7_OFFSET UNITYSDK_OFFSET(0x17FBAEE0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_8_OFFSET UNITYSDK_OFFSET(0x17FBB250)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_9_OFFSET UNITYSDK_OFFSET(0x17FBBA50)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17FB6FE0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_20899C518EFA70BB_OFFSET UNITYSDK_OFFSET(0x17FB7F50)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_2F642D90BA3AFE4A_OFFSET UNITYSDK_OFFSET(0x17FB98F0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_31C5ADBF3153625F_1_OFFSET UNITYSDK_OFFSET(0x17FBA8B0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_31C5ADBF3153625F_OFFSET UNITYSDK_OFFSET(0x17FB9E20)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_4DFE6F1F8CBBCCE0_OFFSET UNITYSDK_OFFSET(0x17FB74E0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_4F64E5D5806A4FF6_OFFSET UNITYSDK_OFFSET(0x17FBAF50)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_52C9A8B24421A88E_OFFSET UNITYSDK_OFFSET(0x17FB7290)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_61574F564DA7439C_OFFSET UNITYSDK_OFFSET(0x17FB9BA0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_688156A3AA3A04AC_OFFSET UNITYSDK_OFFSET(0x17FBB050)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_7C841D50D4E94BDE_OFFSET UNITYSDK_OFFSET(0x17FBB750)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_895844D68388F9E4_OFFSET UNITYSDK_OFFSET(0x17FB7050)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_9767BD0199406458_OFFSET UNITYSDK_OFFSET(0x17FBB2C0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_9FCD5909A387BF2C_OFFSET UNITYSDK_OFFSET(0x17FB7B20)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_A0E0C70351D4C517_OFFSET UNITYSDK_OFFSET(0x17FB7810)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_A5EB90B566630A03_OFFSET UNITYSDK_OFFSET(0x17FB75C0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_10_OFFSET UNITYSDK_OFFSET(0x17FBBAC0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_11_OFFSET UNITYSDK_OFFSET(0x17FBBBE0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_12_OFFSET UNITYSDK_OFFSET(0x17FBBD00)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_13_OFFSET UNITYSDK_OFFSET(0x17FBBE20)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_14_OFFSET UNITYSDK_OFFSET(0x17FBBF40)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_15_OFFSET UNITYSDK_OFFSET(0x17FBC060)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_16_OFFSET UNITYSDK_OFFSET(0x17FBC180)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_17_OFFSET UNITYSDK_OFFSET(0x17FBC2A0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_1_OFFSET UNITYSDK_OFFSET(0x17FB73C0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_2_OFFSET UNITYSDK_OFFSET(0x17FB76F0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_3_OFFSET UNITYSDK_OFFSET(0x17FB7A00)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_4_OFFSET UNITYSDK_OFFSET(0x17FB8180)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_5_OFFSET UNITYSDK_OFFSET(0x17FB97D0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_6_OFFSET UNITYSDK_OFFSET(0x17FB9D00)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_7_OFFSET UNITYSDK_OFFSET(0x17FBAE30)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_8_OFFSET UNITYSDK_OFFSET(0x17FBB1A0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_9_OFFSET UNITYSDK_OFFSET(0x17FBB9A0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x17FB6F30)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_1_OFFSET UNITYSDK_OFFSET(0x17FB76A0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_2_OFFSET UNITYSDK_OFFSET(0x17FB79B0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_3_OFFSET UNITYSDK_OFFSET(0x17FB8130)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_4_OFFSET UNITYSDK_OFFSET(0x17FB9780)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_5_OFFSET UNITYSDK_OFFSET(0x17FB9CB0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_6_OFFSET UNITYSDK_OFFSET(0x17FBADE0)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_7_OFFSET UNITYSDK_OFFSET(0x17FBB150)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_8_OFFSET UNITYSDK_OFFSET(0x17FBB950)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x17FB7370)
#define CLASS_2_6660DE6E19DC27BF_METHOD_2_F93CE73FFCAA7B74_OFFSET UNITYSDK_OFFSET(0x17FB78E0)
#define CLASS_2_6660DE6E19DC27BF__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBC3C0)

inline static constexpr unsigned int Class_2_6660DE6E19DC27BF_TypeDefinitionIndex = 38331;

class Class_2_6660DE6E19DC27BF : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF__CTOR_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_5* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_E0231B607CD65186_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_895844D68388F9E4(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* a1, ::System::Collections::Generic::List_1<::Class_1_9103957C32159125*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>*, ::System::Collections::Generic::List_1<::Class_1_9103957C32159125*>*))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_895844D68388F9E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52C9A8B24421A88E(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* a1, ::System::Collections::Generic::List_1<::Class_1_9103957C32159125*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>*, ::System::Collections::Generic::List_1<::Class_1_9103957C32159125*>*))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_52C9A8B24421A88E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_OFFSET))(this);
	}

	::Class_1_47EE63CB5C4DC8FC_16* Method_2_B64C60973842FE45_1()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_4DFE6F1F8CBBCCE0(::Class_0_16E4307DCC419505_198* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_4DFE6F1F8CBBCCE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5EB90B566630A03(::Class_0_16E4307DCC419505_198* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_A5EB90B566630A03_OFFSET))(this, a1);
	}

	::System::Void Method_2_D20F759FC2EC43FB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_1_OFFSET))(this);
	}

	::Class_1_7AB88D713F5121B3_31* Method_2_B64C60973842FE45_2()
	{
		return ((::Class_1_7AB88D713F5121B3_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Void Method_2_A0E0C70351D4C517(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_A0E0C70351D4C517_OFFSET))(this, a1);
	}

	::System::Void Method_2_F93CE73FFCAA7B74(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_F93CE73FFCAA7B74_OFFSET))(this, a1);
	}

	::System::Void Method_2_D20F759FC2EC43FB_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_2_OFFSET))(this);
	}

	::Class_1_1A9CE2EFC01A6535* Method_2_B64C60973842FE45_3()
	{
		return ((::Class_1_1A9CE2EFC01A6535*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_3_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_3_OFFSET))(this);
	}

	::System::Void Method_2_9FCD5909A387BF2C(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_9FCD5909A387BF2C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_20899C518EFA70BB(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_20899C518EFA70BB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D20F759FC2EC43FB_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_3_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_64* Method_2_B64C60973842FE45_4()
	{
		return ((::Class_1_43BD383C98B4C0C5_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_4_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_4_OFFSET))(this);
	}

	::System::Void Method_2_0D592A47F732356F(::System::Boolean a1, ::Enum_3_63D176C405CC7947_1 a2, ::Enum_3_63D176C405CC7947_1 a3, ::Class_1_C9DFE5EE7107C629_11* a4, ::Class_0_16E4307DCC419505_197* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6660DE6E19DC27BF*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_8F970B645F94CD5B a12, ::Struct_2_8F970B645F94CD5B a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_10* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_9236C508CFB77444*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_10* a33, ::Class_1_F3CA30716D4FAF92_12* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Int32 a38)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63D176C405CC7947_1, ::Enum_3_63D176C405CC7947_1, ::Class_1_C9DFE5EE7107C629_11*, ::Class_0_16E4307DCC419505_197*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6660DE6E19DC27BF*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_8F970B645F94CD5B, ::Struct_2_8F970B645F94CD5B, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_10*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_9236C508CFB77444*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_10*, ::Class_1_F3CA30716D4FAF92_12*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_0D592A47F732356F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38);
	}

	::System::Void Method_2_0D592A47F732356F_1(::System::Boolean a1, ::Enum_3_63D176C405CC7947_1 a2, ::Enum_3_63D176C405CC7947_1 a3, ::Class_1_C9DFE5EE7107C629_11* a4, ::Class_0_16E4307DCC419505_197* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6660DE6E19DC27BF*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_8F970B645F94CD5B a12, ::Struct_2_8F970B645F94CD5B a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_10* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_9236C508CFB77444*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_10* a33, ::Class_1_F3CA30716D4FAF92_12* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Int32 a38)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63D176C405CC7947_1, ::Enum_3_63D176C405CC7947_1, ::Class_1_C9DFE5EE7107C629_11*, ::Class_0_16E4307DCC419505_197*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6660DE6E19DC27BF*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_8F970B645F94CD5B, ::Struct_2_8F970B645F94CD5B, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_10*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_9236C508CFB77444*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_10*, ::Class_1_F3CA30716D4FAF92_12*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_0D592A47F732356F_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38);
	}

	::System::Void Method_2_D20F759FC2EC43FB_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_4_OFFSET))(this);
	}

	::Class_1_78C2963AC589BAA9* Method_2_B64C60973842FE45_5()
	{
		return ((::Class_1_78C2963AC589BAA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_5_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_5_OFFSET))(this);
	}

	::System::Void Method_2_2F642D90BA3AFE4A(::RPG::GameCore::MarbleItemType a1, ::RPG::GameCore::MarbleShapeType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType, ::RPG::GameCore::MarbleShapeType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_2F642D90BA3AFE4A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_61574F564DA7439C(::RPG::GameCore::MarbleItemType a1, ::RPG::GameCore::MarbleShapeType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType, ::RPG::GameCore::MarbleShapeType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_61574F564DA7439C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D20F759FC2EC43FB_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_5_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_65* Method_2_B64C60973842FE45_6()
	{
		return ((::Class_1_43BD383C98B4C0C5_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_6_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_6_OFFSET))(this);
	}

	::System::Void Method_2_31C5ADBF3153625F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::RPG::MVector2 a17, ::RPG::MVector2 a18, ::System::Single a19, ::System::Single a20, ::System::UInt32 a21, ::System::UInt32 a22, ::System::Single a23, ::System::UInt32 a24, ::System::Int32 a25, ::System::Single a26, ::System::Boolean a27, ::System::Boolean a28)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_31C5ADBF3153625F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28);
	}

	::System::Void Method_2_31C5ADBF3153625F_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::RPG::MVector2 a17, ::RPG::MVector2 a18, ::System::Single a19, ::System::Single a20, ::System::UInt32 a21, ::System::UInt32 a22, ::System::Single a23, ::System::UInt32 a24, ::System::Int32 a25, ::System::Single a26, ::System::Boolean a27, ::System::Boolean a28)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_31C5ADBF3153625F_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28);
	}

	::System::Void Method_2_D20F759FC2EC43FB_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_6_OFFSET))(this);
	}

	::Class_1_3AAD2B26053F7D77_1* Method_2_B64C60973842FE45_7()
	{
		return ((::Class_1_3AAD2B26053F7D77_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_7_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_7_OFFSET))(this);
	}

	::System::Void Method_2_4F64E5D5806A4FF6(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_4F64E5D5806A4FF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_688156A3AA3A04AC(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_688156A3AA3A04AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D20F759FC2EC43FB_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_7_OFFSET))(this);
	}

	::Class_1_2E1C713036FDC667* Method_2_B64C60973842FE45_8()
	{
		return ((::Class_1_2E1C713036FDC667*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_8_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_8_OFFSET))(this);
	}

	::System::Void Method_2_9767BD0199406458(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_9767BD0199406458_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_7C841D50D4E94BDE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_7C841D50D4E94BDE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D20F759FC2EC43FB_8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_D20F759FC2EC43FB_8_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_5* Method_2_B64C60973842FE45_9()
	{
		return ((::Class_1_E0231B607CD65186_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_9_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_9_OFFSET))(this);
	}

	::Class_1_47EE63CB5C4DC8FC_16* Method_2_B64C60973842FE45_10()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_10_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_10()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_10_OFFSET))(this);
	}

	::Class_1_7AB88D713F5121B3_31* Method_2_B64C60973842FE45_11()
	{
		return ((::Class_1_7AB88D713F5121B3_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_11_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_11_OFFSET))(this);
	}

	::Class_1_1A9CE2EFC01A6535* Method_2_B64C60973842FE45_12()
	{
		return ((::Class_1_1A9CE2EFC01A6535*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_12_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_12()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_12_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_64* Method_2_B64C60973842FE45_13()
	{
		return ((::Class_1_43BD383C98B4C0C5_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_13_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_13_OFFSET))(this);
	}

	::Class_1_78C2963AC589BAA9* Method_2_B64C60973842FE45_14()
	{
		return ((::Class_1_78C2963AC589BAA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_14_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_14_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_65* Method_2_B64C60973842FE45_15()
	{
		return ((::Class_1_43BD383C98B4C0C5_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_15_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_15()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_15_OFFSET))(this);
	}

	::Class_1_3AAD2B26053F7D77_1* Method_2_B64C60973842FE45_16()
	{
		return ((::Class_1_3AAD2B26053F7D77_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_16_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_16_OFFSET))(this);
	}

	::Class_1_2E1C713036FDC667* Method_2_B64C60973842FE45_17()
	{
		return ((::Class_1_2E1C713036FDC667*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_B64C60973842FE45_17_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_17()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6660DE6E19DC27BF_METHOD_2_1808E1CF7A125519_17_OFFSET))(this);
	}
};
