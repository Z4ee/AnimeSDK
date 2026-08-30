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

class Class_0_16E4307DCC419505_228;
class Class_0_16E4307DCC419505_229;
class Class_1_1A9CE2EFC01A6535;
class Class_1_2AEC7C4C0F203579_2;
class Class_1_2E1C713036FDC667;
class Class_1_3AAD2B26053F7D77_1;
class Class_1_43BD383C98B4C0C5_75;
class Class_1_43BD383C98B4C0C5_76;
class Class_1_47EE63CB5C4DC8FC_18;
class Class_1_5BE136E515AF9A61;
class Class_1_78C2963AC589BAA9;
class Class_1_7AB88D713F5121B3_33;
class Class_1_AC00AF6C29094205;
class Class_1_C9DFE5EE7107C629_13;
class Class_1_D7F3D169C3137F53;
class Class_1_E0231B607CD65186_5;
class Class_1_F3CA30716D4FAF92_9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E450C4D97FC83888_METHOD_2_00F69ACA1AF68B42_OFFSET UNITYSDK_OFFSET(0x1C4AC0B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_0D463C7AE5789355_OFFSET UNITYSDK_OFFSET(0x1C4AE5B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1168F3D37EEC6EC1_OFFSET UNITYSDK_OFFSET(0x1C4B41B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_10_OFFSET UNITYSDK_OFFSET(0x1C4B4820)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_11_OFFSET UNITYSDK_OFFSET(0x1C4AC370)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_12_OFFSET UNITYSDK_OFFSET(0x1C4B4930)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_13_OFFSET UNITYSDK_OFFSET(0x1C4B4A40)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_14_OFFSET UNITYSDK_OFFSET(0x1C4B4B50)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_15_OFFSET UNITYSDK_OFFSET(0x1C4B4C60)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_16_OFFSET UNITYSDK_OFFSET(0x1C4B4D70)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_17_OFFSET UNITYSDK_OFFSET(0x1C4B4DD0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x1C4B26E0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x1C4B2A00)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_3_OFFSET UNITYSDK_OFFSET(0x1C4B2C40)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_4_OFFSET UNITYSDK_OFFSET(0x1C4B2F90)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_5_OFFSET UNITYSDK_OFFSET(0x1C4B3850)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_6_OFFSET UNITYSDK_OFFSET(0x1C4B3AC0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_7_OFFSET UNITYSDK_OFFSET(0x1C4B4150)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_8_OFFSET UNITYSDK_OFFSET(0x1C4B43B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_9_OFFSET UNITYSDK_OFFSET(0x1C4B4710)
#define CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1C4B2490)
#define CLASS_2_E450C4D97FC83888_METHOD_2_19266178DA3903AC_OFFSET UNITYSDK_OFFSET(0x1C4B2820)
#define CLASS_2_E450C4D97FC83888_METHOD_2_4B55F1A1CBD9C5B6_OFFSET UNITYSDK_OFFSET(0x1C4ABBF0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_6951A9C8FDE03221_OFFSET UNITYSDK_OFFSET(0x1C4AE4B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_7A92D3A6EB64CFF3_OFFSET UNITYSDK_OFFSET(0x1C4B2A60)
#define CLASS_2_E450C4D97FC83888_METHOD_2_889EC2960E734785_OFFSET UNITYSDK_OFFSET(0x1C4B24F0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_9B7DF3FD973E0855_OFFSET UNITYSDK_OFFSET(0x1C4B1DF0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_9C8B3C0D987C84B0_OFFSET UNITYSDK_OFFSET(0x1C4B4410)
#define CLASS_2_E450C4D97FC83888_METHOD_2_A25E227C56B537C3_OFFSET UNITYSDK_OFFSET(0x1C4B2740)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_1_OFFSET UNITYSDK_OFFSET(0x1C4B2900)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_2_OFFSET UNITYSDK_OFFSET(0x1C4B2B40)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_3_OFFSET UNITYSDK_OFFSET(0x1C4B2E90)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_4_OFFSET UNITYSDK_OFFSET(0x1C4B3750)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_5_OFFSET UNITYSDK_OFFSET(0x1C4B39C0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_6_OFFSET UNITYSDK_OFFSET(0x1C4B4050)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_7_OFFSET UNITYSDK_OFFSET(0x1C4B42B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_8_OFFSET UNITYSDK_OFFSET(0x1C4B4610)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AD2B2AFEF3192F72_OFFSET UNITYSDK_OFFSET(0x1C4B25E0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_10_OFFSET UNITYSDK_OFFSET(0x1C4B4770)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_11_OFFSET UNITYSDK_OFFSET(0x1C4AC3D0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_12_OFFSET UNITYSDK_OFFSET(0x1C4B4880)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_13_OFFSET UNITYSDK_OFFSET(0x1C4B4990)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_14_OFFSET UNITYSDK_OFFSET(0x1C4B4AA0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_15_OFFSET UNITYSDK_OFFSET(0x1C4B4BB0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_16_OFFSET UNITYSDK_OFFSET(0x1C4B4CC0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_17_OFFSET UNITYSDK_OFFSET(0x1C4B1FE0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_1_OFFSET UNITYSDK_OFFSET(0x1C4B2630)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_2_OFFSET UNITYSDK_OFFSET(0x1C4B2950)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_3_OFFSET UNITYSDK_OFFSET(0x1C4B2B90)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_4_OFFSET UNITYSDK_OFFSET(0x1C4B2EE0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_5_OFFSET UNITYSDK_OFFSET(0x1C4B37A0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_6_OFFSET UNITYSDK_OFFSET(0x1C4B3A10)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_7_OFFSET UNITYSDK_OFFSET(0x1C4B40A0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_8_OFFSET UNITYSDK_OFFSET(0x1C4B4300)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_9_OFFSET UNITYSDK_OFFSET(0x1C4B4660)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1C4B23E0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_AEE580C227EA762C_OFFSET UNITYSDK_OFFSET(0x1C4B2CA0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_BB08102DA0D703C6_OFFSET UNITYSDK_OFFSET(0x1C4B38B0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_C0C101D40305EDB8_1_OFFSET UNITYSDK_OFFSET(0x1C4B3B20)
#define CLASS_2_E450C4D97FC83888_METHOD_2_C0C101D40305EDB8_OFFSET UNITYSDK_OFFSET(0x1C4AE6C0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_EBBE06B572A0A6C8_1_OFFSET UNITYSDK_OFFSET(0x1C4B2FF0)
#define CLASS_2_E450C4D97FC83888_METHOD_2_EBBE06B572A0A6C8_OFFSET UNITYSDK_OFFSET(0x1C4B1690)
#define CLASS_2_E450C4D97FC83888_METHOD_2_F0DB4450AE0B7FC7_OFFSET UNITYSDK_OFFSET(0x1C4B2090)
#define CLASS_2_E450C4D97FC83888__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B4E30)

inline static constexpr unsigned int Class_2_E450C4D97FC83888_TypeDefinitionIndex = 40778;

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

	::Class_1_47EE63CB5C4DC8FC_18* Method_2_AECF8BEC293ED42A_1()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_A25E227C56B537C3(::Class_0_16E4307DCC419505_229* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_229*))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_A25E227C56B537C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_19266178DA3903AC(::Class_0_16E4307DCC419505_229* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_229*))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_19266178DA3903AC_OFFSET))(this, a1);
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

	::Class_1_43BD383C98B4C0C5_75* Method_2_AECF8BEC293ED42A_4()
	{
		return ((::Class_1_43BD383C98B4C0C5_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_4_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_1808E1CF7A125519_4_OFFSET))(this);
	}

	::System::Void Method_2_EBBE06B572A0A6C8(::System::Boolean a1, ::Enum_3_63D176C405CC7947_1 a2, ::Enum_3_63D176C405CC7947_1 a3, ::Class_1_2AEC7C4C0F203579_2* a4, ::Class_0_16E4307DCC419505_228* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E450C4D97FC83888*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_99EBAB41CE8725CD a12, ::Struct_2_99EBAB41CE8725CD a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_13* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_D7F3D169C3137F53*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_13* a33, ::Class_1_F3CA30716D4FAF92_9* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Int32 a38)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63D176C405CC7947_1, ::Enum_3_63D176C405CC7947_1, ::Class_1_2AEC7C4C0F203579_2*, ::Class_0_16E4307DCC419505_228*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E450C4D97FC83888*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_99EBAB41CE8725CD, ::Struct_2_99EBAB41CE8725CD, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_13*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_D7F3D169C3137F53*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_13*, ::Class_1_F3CA30716D4FAF92_9*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_EBBE06B572A0A6C8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38);
	}

	::System::Void Method_2_EBBE06B572A0A6C8_1(::System::Boolean a1, ::Enum_3_63D176C405CC7947_1 a2, ::Enum_3_63D176C405CC7947_1 a3, ::Class_1_2AEC7C4C0F203579_2* a4, ::Class_0_16E4307DCC419505_228* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E450C4D97FC83888*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_99EBAB41CE8725CD a12, ::Struct_2_99EBAB41CE8725CD a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_13* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_D7F3D169C3137F53*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_13* a33, ::Class_1_F3CA30716D4FAF92_9* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Int32 a38)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63D176C405CC7947_1, ::Enum_3_63D176C405CC7947_1, ::Class_1_2AEC7C4C0F203579_2*, ::Class_0_16E4307DCC419505_228*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E450C4D97FC83888*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_99EBAB41CE8725CD, ::Struct_2_99EBAB41CE8725CD, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_13*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_D7F3D169C3137F53*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_13*, ::Class_1_F3CA30716D4FAF92_9*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_EBBE06B572A0A6C8_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38);
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

	::Class_1_43BD383C98B4C0C5_76* Method_2_AECF8BEC293ED42A_6()
	{
		return ((::Class_1_43BD383C98B4C0C5_76*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_6_OFFSET))(this);
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

	::Class_1_47EE63CB5C4DC8FC_18* Method_2_AECF8BEC293ED42A_10()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_10_OFFSET))(this);
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

	::Class_1_43BD383C98B4C0C5_75* Method_2_AECF8BEC293ED42A_13()
	{
		return ((::Class_1_43BD383C98B4C0C5_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_13_OFFSET))(this);
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

	::Class_1_43BD383C98B4C0C5_76* Method_2_AECF8BEC293ED42A_15()
	{
		return ((::Class_1_43BD383C98B4C0C5_76*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E450C4D97FC83888_METHOD_2_AECF8BEC293ED42A_15_OFFSET))(this);
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
