#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/Enum_3_63D176C405CC7947_1.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleSimulatePhase.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_99EBAB41CE8725CD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_227;
class Class_0_16E4307DCC419505_228;
class Class_1_07436FDB24BAF683_1;
class Class_1_1A9CE2EFC01A6535;
class Class_1_2E1C713036FDC667;
class Class_1_32ED9F60AC82E5A0;
class Class_1_3AAD2B26053F7D77_1;
class Class_1_43BD383C98B4C0C5_74;
class Class_1_43BD383C98B4C0C5_75;
class Class_1_47EE63CB5C4DC8FC_17;
class Class_1_5BE136E515AF9A61;
class Class_1_78C2963AC589BAA9;
class Class_1_7AB88D713F5121B3_33;
class Class_1_AC00AF6C29094205;
class Class_1_C9DFE5EE7107C629_11;
class Class_1_E0231B607CD65186_5;
class Class_1_F3CA30716D4FAF92_9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E450C4D97FC83888_METHOD_2_00F69ACA1AF68B42_OFFSET UNITYSDK_OFFSET(0x1A8F51A0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_0D463C7AE5789355_OFFSET UNITYSDK_OFFSET(0x1A8F76C0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1168F3D37EEC6EC1_OFFSET UNITYSDK_OFFSET(0x1A8FD2C0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_10_OFFSET UNITYSDK_OFFSET(0x1A8FD930)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_11_OFFSET UNITYSDK_OFFSET(0x1A8F5470)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_12_OFFSET UNITYSDK_OFFSET(0x1A8FDA40)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_13_OFFSET UNITYSDK_OFFSET(0x1A8FDB50)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_14_OFFSET UNITYSDK_OFFSET(0x1A8FDC60)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_15_OFFSET UNITYSDK_OFFSET(0x1A8FDD70)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_16_OFFSET UNITYSDK_OFFSET(0x1A8FDE80)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_17_OFFSET UNITYSDK_OFFSET(0x1A8FDEE0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x1A8FB7F0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x1A8FBB10)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_3_OFFSET UNITYSDK_OFFSET(0x1A8FBD50)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_4_OFFSET UNITYSDK_OFFSET(0x1A8FC0A0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_5_OFFSET UNITYSDK_OFFSET(0x1A8FC960)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_6_OFFSET UNITYSDK_OFFSET(0x1A8FCBD0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_7_OFFSET UNITYSDK_OFFSET(0x1A8FD260)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_8_OFFSET UNITYSDK_OFFSET(0x1A8FD4C0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_9_OFFSET UNITYSDK_OFFSET(0x1A8FD820)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A8FB5A0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_19266178DA3903AC_OFFSET UNITYSDK_OFFSET(0x1A8FB930)
#define CLASS_2_E450C4D97FC83888_METHOD_2_4B55F1A1CBD9C5B6_OFFSET UNITYSDK_OFFSET(0x1A8F4CE0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_6951A9C8FDE03221_OFFSET UNITYSDK_OFFSET(0x1A8F75C0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_7A92D3A6EB64CFF3_OFFSET UNITYSDK_OFFSET(0x1A8FBB70)
#define CLASS_2_E450C4D97FC83888_METHOD_2_889EC2960E734785_OFFSET UNITYSDK_OFFSET(0x1A8FB600)
#define CLASS_2_E450C4D97FC83888_METHOD_2_9B7DF3FD973E0855_OFFSET UNITYSDK_OFFSET(0x1A8FAF00)
#define CLASS_2_E450C4D97FC83888_METHOD_2_9C8B3C0D987C84B0_OFFSET UNITYSDK_OFFSET(0x1A8FD520)
#define CLASS_2_E450C4D97FC83888_METHOD_2_A25E227C56B537C3_OFFSET UNITYSDK_OFFSET(0x1A8FB850)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_1_OFFSET UNITYSDK_OFFSET(0x1A8FBA10)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_2_OFFSET UNITYSDK_OFFSET(0x1A8FBC50)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_3_OFFSET UNITYSDK_OFFSET(0x1A8FBFA0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_4_OFFSET UNITYSDK_OFFSET(0x1A8FC860)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_5_OFFSET UNITYSDK_OFFSET(0x1A8FCAD0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_6_OFFSET UNITYSDK_OFFSET(0x1A8FD160)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_7_OFFSET UNITYSDK_OFFSET(0x1A8FD3C0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_8_OFFSET UNITYSDK_OFFSET(0x1A8FD720)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_OFFSET UNITYSDK_OFFSET(0x1A8FB6F0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_10_OFFSET UNITYSDK_OFFSET(0x1A8FD880)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_11_OFFSET UNITYSDK_OFFSET(0x1A8F54D0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_12_OFFSET UNITYSDK_OFFSET(0x1A8FD990)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_13_OFFSET UNITYSDK_OFFSET(0x1A8FDAA0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_14_OFFSET UNITYSDK_OFFSET(0x1A8FDBB0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_15_OFFSET UNITYSDK_OFFSET(0x1A8FDCC0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_16_OFFSET UNITYSDK_OFFSET(0x1A8FDDD0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_17_OFFSET UNITYSDK_OFFSET(0x1A8FB0F0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_1_OFFSET UNITYSDK_OFFSET(0x1A8FB740)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_2_OFFSET UNITYSDK_OFFSET(0x1A8FBA60)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_3_OFFSET UNITYSDK_OFFSET(0x1A8FBCA0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_4_OFFSET UNITYSDK_OFFSET(0x1A8FBFF0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_5_OFFSET UNITYSDK_OFFSET(0x1A8FC8B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_6_OFFSET UNITYSDK_OFFSET(0x1A8FCB20)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_7_OFFSET UNITYSDK_OFFSET(0x1A8FD1B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_8_OFFSET UNITYSDK_OFFSET(0x1A8FD410)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_9_OFFSET UNITYSDK_OFFSET(0x1A8FD770)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1A8FB4F0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AEE580C227EA762C_OFFSET UNITYSDK_OFFSET(0x1A8FBDB0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_BB08102DA0D703C6_OFFSET UNITYSDK_OFFSET(0x1A8FC9C0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_C0C101D40305EDB8_1_OFFSET UNITYSDK_OFFSET(0x1A8FCC30)
#define CLASS_2_E450C4D97FC83888_METHOD_2_C0C101D40305EDB8_OFFSET UNITYSDK_OFFSET(0x1A8F77D0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_EBBE06B572A0A6C8_1_OFFSET UNITYSDK_OFFSET(0x1A8FC100)
#define CLASS_2_E450C4D97FC83888_METHOD_2_EBBE06B572A0A6C8_OFFSET UNITYSDK_OFFSET(0x1A8FA7A0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_F0DB4450AE0B7FC7_OFFSET UNITYSDK_OFFSET(0x1A8FB1A0)
#define CLASS_2_E450C4D97FC83888__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FDF40)

inline static constexpr unsigned int Class_2_E450C4D97FC83888_TypeDefinitionIndex = 39903;

class Class_2_E450C4D97FC83888 : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888__CTOR_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_5* Method_2_AECF8BEC293ED42A()
	{
		return ((::Class_1_E0231B607CD65186_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F0DB4450AE0B7FC7(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* a1, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>*, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>*))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_F0DB4450AE0B7FC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_889EC2960E734785(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* a1, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>*, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>*))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_889EC2960E734785_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD2B2AFEF3192F72()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_OFFSET))(this);
	}

	::Class_1_47EE63CB5C4DC8FC_17* Method_2_AECF8BEC293ED42A_1()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_A25E227C56B537C3(::Class_0_16E4307DCC419505_228* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_228*))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_A25E227C56B537C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_19266178DA3903AC(::Class_0_16E4307DCC419505_228* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_228*))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_19266178DA3903AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_1_OFFSET))(this);
	}

	::Class_1_7AB88D713F5121B3_33* Method_2_AECF8BEC293ED42A_2()
	{
		return ((::Class_1_7AB88D713F5121B3_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Void Method_2_00F69ACA1AF68B42(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_00F69ACA1AF68B42_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A92D3A6EB64CFF3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_7A92D3A6EB64CFF3_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_2_OFFSET))(this);
	}

	::Class_1_1A9CE2EFC01A6535* Method_2_AECF8BEC293ED42A_3()
	{
		return ((::Class_1_1A9CE2EFC01A6535*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_3_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_3_OFFSET))(this);
	}

	::System::Void Method_2_9B7DF3FD973E0855(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_9B7DF3FD973E0855_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_AEE580C227EA762C(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AEE580C227EA762C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_3_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_74* Method_2_AECF8BEC293ED42A_4()
	{
		return ((::Class_1_43BD383C98B4C0C5_74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_4_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_4_OFFSET))(this);
	}

	::System::Void Method_2_EBBE06B572A0A6C8(::System::Boolean a1, ::Enum_3_63D176C405CC7947_1 a2, ::Enum_3_63D176C405CC7947_1 a3, ::Class_1_07436FDB24BAF683_1* a4, ::Class_0_16E4307DCC419505_227* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E450C4D97FC83888*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_99EBAB41CE8725CD a12, ::Struct_2_99EBAB41CE8725CD a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_11* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_11* a33, ::Class_1_F3CA30716D4FAF92_9* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Int32 a38)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63D176C405CC7947_1, ::Enum_3_63D176C405CC7947_1, ::Class_1_07436FDB24BAF683_1*, ::Class_0_16E4307DCC419505_227*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E450C4D97FC83888*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_99EBAB41CE8725CD, ::Struct_2_99EBAB41CE8725CD, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_11*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_11*, ::Class_1_F3CA30716D4FAF92_9*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_EBBE06B572A0A6C8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38);
	}

	::System::Void Method_2_EBBE06B572A0A6C8_1(::System::Boolean a1, ::Enum_3_63D176C405CC7947_1 a2, ::Enum_3_63D176C405CC7947_1 a3, ::Class_1_07436FDB24BAF683_1* a4, ::Class_0_16E4307DCC419505_227* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E450C4D97FC83888*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_99EBAB41CE8725CD a12, ::Struct_2_99EBAB41CE8725CD a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_11* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_11* a33, ::Class_1_F3CA30716D4FAF92_9* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Int32 a38)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63D176C405CC7947_1, ::Enum_3_63D176C405CC7947_1, ::Class_1_07436FDB24BAF683_1*, ::Class_0_16E4307DCC419505_227*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E450C4D97FC83888*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_99EBAB41CE8725CD, ::Struct_2_99EBAB41CE8725CD, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_11*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_11*, ::Class_1_F3CA30716D4FAF92_9*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_EBBE06B572A0A6C8_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_4_OFFSET))(this);
	}

	::Class_1_78C2963AC589BAA9* Method_2_AECF8BEC293ED42A_5()
	{
		return ((::Class_1_78C2963AC589BAA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_5_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_5_OFFSET))(this);
	}

	::System::Void Method_2_0D463C7AE5789355(::RPG::GameCore::MarbleItemType a1, ::RPG::GameCore::MarbleShapeType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType, ::RPG::GameCore::MarbleShapeType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_0D463C7AE5789355_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BB08102DA0D703C6(::RPG::GameCore::MarbleItemType a1, ::RPG::GameCore::MarbleShapeType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType, ::RPG::GameCore::MarbleShapeType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_BB08102DA0D703C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_5_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_75* Method_2_AECF8BEC293ED42A_6()
	{
		return ((::Class_1_43BD383C98B4C0C5_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_6_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_6_OFFSET))(this);
	}

	::System::Void Method_2_C0C101D40305EDB8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::RPG::MVector2 a17, ::RPG::MVector2 a18, ::System::Single a19, ::System::Single a20, ::System::UInt32 a21, ::System::UInt32 a22, ::System::Single a23, ::System::UInt32 a24, ::System::Int32 a25, ::System::Single a26, ::System::Boolean a27, ::System::Boolean a28)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_C0C101D40305EDB8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28);
	}

	::System::Void Method_2_C0C101D40305EDB8_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::RPG::MVector2 a17, ::RPG::MVector2 a18, ::System::Single a19, ::System::Single a20, ::System::UInt32 a21, ::System::UInt32 a22, ::System::Single a23, ::System::UInt32 a24, ::System::Int32 a25, ::System::Single a26, ::System::Boolean a27, ::System::Boolean a28)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_C0C101D40305EDB8_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_6_OFFSET))(this);
	}

	::Class_1_3AAD2B26053F7D77_1* Method_2_AECF8BEC293ED42A_7()
	{
		return ((::Class_1_3AAD2B26053F7D77_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_7_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_7_OFFSET))(this);
	}

	::System::Void Method_2_6951A9C8FDE03221(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_6951A9C8FDE03221_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1168F3D37EEC6EC1(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1168F3D37EEC6EC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_7_OFFSET))(this);
	}

	::Class_1_2E1C713036FDC667* Method_2_AECF8BEC293ED42A_8()
	{
		return ((::Class_1_2E1C713036FDC667*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_8_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_8_OFFSET))(this);
	}

	::System::Void Method_2_4B55F1A1CBD9C5B6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_4B55F1A1CBD9C5B6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_9C8B3C0D987C84B0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_9C8B3C0D987C84B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_8_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_5* Method_2_AECF8BEC293ED42A_9()
	{
		return ((::Class_1_E0231B607CD65186_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_9_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_9_OFFSET))(this);
	}

	::Class_1_47EE63CB5C4DC8FC_17* Method_2_AECF8BEC293ED42A_10()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_10_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_10()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_10_OFFSET))(this);
	}

	::Class_1_7AB88D713F5121B3_33* Method_2_AECF8BEC293ED42A_11()
	{
		return ((::Class_1_7AB88D713F5121B3_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_11_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_11_OFFSET))(this);
	}

	::Class_1_1A9CE2EFC01A6535* Method_2_AECF8BEC293ED42A_12()
	{
		return ((::Class_1_1A9CE2EFC01A6535*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_12_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_12()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_12_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_74* Method_2_AECF8BEC293ED42A_13()
	{
		return ((::Class_1_43BD383C98B4C0C5_74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_13_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_13_OFFSET))(this);
	}

	::Class_1_78C2963AC589BAA9* Method_2_AECF8BEC293ED42A_14()
	{
		return ((::Class_1_78C2963AC589BAA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_14_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_14_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_75* Method_2_AECF8BEC293ED42A_15()
	{
		return ((::Class_1_43BD383C98B4C0C5_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_15_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_15()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_15_OFFSET))(this);
	}

	::Class_1_3AAD2B26053F7D77_1* Method_2_AECF8BEC293ED42A_16()
	{
		return ((::Class_1_3AAD2B26053F7D77_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_16_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_16_OFFSET))(this);
	}

	::Class_1_2E1C713036FDC667* Method_2_AECF8BEC293ED42A_17()
	{
		return ((::Class_1_2E1C713036FDC667*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_17_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_17()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_17_OFFSET))(this);
	}
};
