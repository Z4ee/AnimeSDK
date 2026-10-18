#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleSimulatePhase.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_99EBAB41CE8725CD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_229;
class Class_0_16E4307DCC419505_230;
class Class_1_2E1C713036FDC667;
class Class_1_32ED9F60AC82E5A0_2;
class Class_1_32ED9F60AC82E5A0_3;
class Class_1_3AAD2B26053F7D77_1;
class Class_1_43BD383C98B4C0C5_66;
class Class_1_43BD383C98B4C0C5_67;
class Class_1_47EE63CB5C4DC8FC_11;
class Class_1_5BE136E515AF9A61;
class Class_1_78C2963AC589BAA9;
class Class_1_7AB88D713F5121B3_30;
class Class_1_AC00AF6C29094205;
class Class_1_B0DE39839E6C6513;
class Class_1_C9DFE5EE7107C629_8;
class Class_1_E0231B607CD65186_4;
class Class_1_F3CA30716D4FAF92_10;
namespace RPG::GameCore { class MarbleCoopBossBornPosition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_00F69ACA1AF68B42_OFFSET UNITYSDK_OFFSET(0x1CA1C3C0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_0D463C7AE5789355_OFFSET UNITYSDK_OFFSET(0x1CA23CB0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1168F3D37EEC6EC1_OFFSET UNITYSDK_OFFSET(0x1CA27B80)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_10_OFFSET UNITYSDK_OFFSET(0x1CA27E90)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_11_OFFSET UNITYSDK_OFFSET(0x1CA1C680)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_12_OFFSET UNITYSDK_OFFSET(0x1CA27FA0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_13_OFFSET UNITYSDK_OFFSET(0x1CA280B0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_14_OFFSET UNITYSDK_OFFSET(0x1CA281C0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_15_OFFSET UNITYSDK_OFFSET(0x1CA28220)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_16_OFFSET UNITYSDK_OFFSET(0x1CA28330)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_17_OFFSET UNITYSDK_OFFSET(0x1CA28390)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x1CA25E10)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x1CA266F0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_3_OFFSET UNITYSDK_OFFSET(0x1CA26940)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_4_OFFSET UNITYSDK_OFFSET(0x1CA26CA0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_5_OFFSET UNITYSDK_OFFSET(0x1CA26EE0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_6_OFFSET UNITYSDK_OFFSET(0x1CA27150)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_7_OFFSET UNITYSDK_OFFSET(0x1CA27800)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_8_OFFSET UNITYSDK_OFFSET(0x1CA27B20)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_9_OFFSET UNITYSDK_OFFSET(0x1CA27D80)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1CA25A90)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_19266178DA3903AC_OFFSET UNITYSDK_OFFSET(0x1CA27940)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_4B55F1A1CBD9C5B6_OFFSET UNITYSDK_OFFSET(0x1CA1BF10)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_55BC3343D9DB96C3_OFFSET UNITYSDK_OFFSET(0x1CA25460)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_6951A9C8FDE03221_OFFSET UNITYSDK_OFFSET(0x1CA23BB0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_6C8D285D9CEDA07E_1_OFFSET UNITYSDK_OFFSET(0x1CA271B0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_6C8D285D9CEDA07E_OFFSET UNITYSDK_OFFSET(0x1CA23DC0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_7A92D3A6EB64CFF3_OFFSET UNITYSDK_OFFSET(0x1CA26D00)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_889EC2960E734785_OFFSET UNITYSDK_OFFSET(0x1CA26750)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_9C8B3C0D987C84B0_OFFSET UNITYSDK_OFFSET(0x1CA269A0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_A25E227C56B537C3_OFFSET UNITYSDK_OFFSET(0x1CA27860)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_1_OFFSET UNITYSDK_OFFSET(0x1CA265F0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_2_OFFSET UNITYSDK_OFFSET(0x1CA26840)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_3_OFFSET UNITYSDK_OFFSET(0x1CA26BA0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_4_OFFSET UNITYSDK_OFFSET(0x1CA26DE0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_5_OFFSET UNITYSDK_OFFSET(0x1CA27050)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_6_OFFSET UNITYSDK_OFFSET(0x1CA27700)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_7_OFFSET UNITYSDK_OFFSET(0x1CA27A20)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_8_OFFSET UNITYSDK_OFFSET(0x1CA27C80)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_OFFSET UNITYSDK_OFFSET(0x1CA25D10)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_10_OFFSET UNITYSDK_OFFSET(0x1CA27DE0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_11_OFFSET UNITYSDK_OFFSET(0x1CA1C6E0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_12_OFFSET UNITYSDK_OFFSET(0x1CA27EF0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_13_OFFSET UNITYSDK_OFFSET(0x1CA28000)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_14_OFFSET UNITYSDK_OFFSET(0x1CA28110)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_15_OFFSET UNITYSDK_OFFSET(0x1CA22480)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_16_OFFSET UNITYSDK_OFFSET(0x1CA28280)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_17_OFFSET UNITYSDK_OFFSET(0x1CA24870)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_1_OFFSET UNITYSDK_OFFSET(0x1CA25D60)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_2_OFFSET UNITYSDK_OFFSET(0x1CA26640)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_3_OFFSET UNITYSDK_OFFSET(0x1CA26890)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_4_OFFSET UNITYSDK_OFFSET(0x1CA26BF0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_5_OFFSET UNITYSDK_OFFSET(0x1CA26E30)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_6_OFFSET UNITYSDK_OFFSET(0x1CA270A0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_7_OFFSET UNITYSDK_OFFSET(0x1CA27750)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_8_OFFSET UNITYSDK_OFFSET(0x1CA27A70)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_9_OFFSET UNITYSDK_OFFSET(0x1CA27CD0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1CA259E0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_BB08102DA0D703C6_OFFSET UNITYSDK_OFFSET(0x1CA26F40)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_C8981B3EE2D84021_1_OFFSET UNITYSDK_OFFSET(0x1CA25E70)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_C8981B3EE2D84021_OFFSET UNITYSDK_OFFSET(0x1CA21500)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_DB14F629F46A8775_OFFSET UNITYSDK_OFFSET(0x1CA25AF0)
#define CLASS_2_6D25D6E36F5AF8D2_METHOD_2_F0DB4450AE0B7FC7_OFFSET UNITYSDK_OFFSET(0x1CA25680)
#define CLASS_2_6D25D6E36F5AF8D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA283F0)

inline static constexpr unsigned int Class_2_6D25D6E36F5AF8D2_TypeDefinitionIndex = 42596;

class Class_2_6D25D6E36F5AF8D2 : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2__CTOR_OFFSET))(this);
	}

	::Class_1_B0DE39839E6C6513* Method_2_AECF8BEC293ED42A()
	{
		return ((::Class_1_B0DE39839E6C6513*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_55BC3343D9DB96C3(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::System::UInt32>* a5, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_55BC3343D9DB96C3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_DB14F629F46A8775(::System::Single a1, ::System::Single a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::System::UInt32>* a5, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_DB14F629F46A8775_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_AD2B2AFEF3192F72()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_67* Method_2_AECF8BEC293ED42A_1()
	{
		return ((::Class_1_43BD383C98B4C0C5_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_C8981B3EE2D84021(::System::Boolean a1, ::Enum_3_63BCB6C405BA8A1D_2 a2, ::Enum_3_63BCB6C405BA8A1D_2 a3, ::Class_1_32ED9F60AC82E5A0_2* a4, ::Class_0_16E4307DCC419505_229* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6D25D6E36F5AF8D2*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_99EBAB41CE8725CD a12, ::Struct_2_99EBAB41CE8725CD a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_8* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0_3*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_8* a33, ::Class_1_F3CA30716D4FAF92_10* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Boolean a38, ::System::Int32 a39)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63BCB6C405BA8A1D_2, ::Enum_3_63BCB6C405BA8A1D_2, ::Class_1_32ED9F60AC82E5A0_2*, ::Class_0_16E4307DCC419505_229*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6D25D6E36F5AF8D2*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_99EBAB41CE8725CD, ::Struct_2_99EBAB41CE8725CD, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_8*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0_3*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_8*, ::Class_1_F3CA30716D4FAF92_10*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_C8981B3EE2D84021_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39);
	}

	::System::Void Method_2_C8981B3EE2D84021_1(::System::Boolean a1, ::Enum_3_63BCB6C405BA8A1D_2 a2, ::Enum_3_63BCB6C405BA8A1D_2 a3, ::Class_1_32ED9F60AC82E5A0_2* a4, ::Class_0_16E4307DCC419505_229* a5, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6D25D6E36F5AF8D2*>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::Struct_2_99EBAB41CE8725CD a12, ::Struct_2_99EBAB41CE8725CD a13, ::System::Boolean a14, ::System::Boolean a15, ::System::UInt32 a16, ::System::Boolean a17, ::System::Boolean a18, ::System::UInt32 a19, ::System::UInt32 a20, ::System::Boolean a21, ::Il2CppArray<::System::UInt32>* a22, ::Il2CppArray<::System::UInt32>* a23, ::Class_1_C9DFE5EE7107C629_8* a24, ::RPG::Client::LittleGame::MarbleSimulatePhase a25, ::System::Single a26, ::System::Int32 a27, ::System::Single a28, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0_3*>* a29, ::System::Collections::Generic::List_1<::System::UInt32>* a30, ::System::Boolean a31, ::System::UInt32 a32, ::Class_1_C9DFE5EE7107C629_8* a33, ::Class_1_F3CA30716D4FAF92_10* a34, ::System::UInt32 a35, ::System::Boolean a36, ::System::Int32 a37, ::System::Boolean a38, ::System::Int32 a39)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_63BCB6C405BA8A1D_2, ::Enum_3_63BCB6C405BA8A1D_2, ::Class_1_32ED9F60AC82E5A0_2*, ::Class_0_16E4307DCC419505_229*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_6D25D6E36F5AF8D2*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Struct_2_99EBAB41CE8725CD, ::Struct_2_99EBAB41CE8725CD, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Class_1_C9DFE5EE7107C629_8*, ::RPG::Client::LittleGame::MarbleSimulatePhase, ::System::Single, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0_3*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::UInt32, ::Class_1_C9DFE5EE7107C629_8*, ::Class_1_F3CA30716D4FAF92_10*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_C8981B3EE2D84021_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_1_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_4* Method_2_AECF8BEC293ED42A_2()
	{
		return ((::Class_1_E0231B607CD65186_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Void Method_2_F0DB4450AE0B7FC7(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* a1, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>*, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>*))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_F0DB4450AE0B7FC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_889EC2960E734785(::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* a1, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>*, ::System::Collections::Generic::List_1<::Class_1_AC00AF6C29094205*>*))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_889EC2960E734785_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_2_OFFSET))(this);
	}

	::Class_1_2E1C713036FDC667* Method_2_AECF8BEC293ED42A_3()
	{
		return ((::Class_1_2E1C713036FDC667*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_3_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_3_OFFSET))(this);
	}

	::System::Void Method_2_4B55F1A1CBD9C5B6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_4B55F1A1CBD9C5B6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_9C8B3C0D987C84B0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_9C8B3C0D987C84B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_3_OFFSET))(this);
	}

	::Class_1_7AB88D713F5121B3_30* Method_2_AECF8BEC293ED42A_4()
	{
		return ((::Class_1_7AB88D713F5121B3_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_4_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_4_OFFSET))(this);
	}

	::System::Void Method_2_00F69ACA1AF68B42(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_00F69ACA1AF68B42_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A92D3A6EB64CFF3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_7A92D3A6EB64CFF3_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_4_OFFSET))(this);
	}

	::Class_1_78C2963AC589BAA9* Method_2_AECF8BEC293ED42A_5()
	{
		return ((::Class_1_78C2963AC589BAA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_5_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_5_OFFSET))(this);
	}

	::System::Void Method_2_0D463C7AE5789355(::RPG::GameCore::MarbleItemType a1, ::RPG::GameCore::MarbleShapeType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType, ::RPG::GameCore::MarbleShapeType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_0D463C7AE5789355_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BB08102DA0D703C6(::RPG::GameCore::MarbleItemType a1, ::RPG::GameCore::MarbleShapeType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleItemType, ::RPG::GameCore::MarbleShapeType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_BB08102DA0D703C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_5_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_66* Method_2_AECF8BEC293ED42A_6()
	{
		return ((::Class_1_43BD383C98B4C0C5_66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_6_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_6_OFFSET))(this);
	}

	::System::Void Method_2_6C8D285D9CEDA07E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::RPG::MVector2 a17, ::RPG::MVector2 a18, ::System::Single a19, ::System::Single a20, ::System::UInt32 a21, ::System::UInt32 a22, ::System::Single a23, ::System::UInt32 a24, ::System::Int32 a25, ::System::Single a26, ::System::Boolean a27, ::System::Boolean a28, ::System::Boolean a29)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_6C8D285D9CEDA07E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
	}

	::System::Void Method_2_6C8D285D9CEDA07E_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::RPG::MVector2 a17, ::RPG::MVector2 a18, ::System::Single a19, ::System::Single a20, ::System::UInt32 a21, ::System::UInt32 a22, ::System::Single a23, ::System::UInt32 a24, ::System::Int32 a25, ::System::Single a26, ::System::Boolean a27, ::System::Boolean a28, ::System::Boolean a29)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_6C8D285D9CEDA07E_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_6_OFFSET))(this);
	}

	::Class_1_47EE63CB5C4DC8FC_11* Method_2_AECF8BEC293ED42A_7()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_7_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_7_OFFSET))(this);
	}

	::System::Void Method_2_A25E227C56B537C3(::Class_0_16E4307DCC419505_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_230*))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_A25E227C56B537C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_19266178DA3903AC(::Class_0_16E4307DCC419505_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_230*))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_19266178DA3903AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_7_OFFSET))(this);
	}

	::Class_1_3AAD2B26053F7D77_1* Method_2_AECF8BEC293ED42A_8()
	{
		return ((::Class_1_3AAD2B26053F7D77_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_8_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_8_OFFSET))(this);
	}

	::System::Void Method_2_6951A9C8FDE03221(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_6951A9C8FDE03221_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1168F3D37EEC6EC1(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1168F3D37EEC6EC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AD2B2AFEF3192F72_8_OFFSET))(this);
	}

	::Class_1_E0231B607CD65186_4* Method_2_AECF8BEC293ED42A_9()
	{
		return ((::Class_1_E0231B607CD65186_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_9_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_9_OFFSET))(this);
	}

	::Class_1_47EE63CB5C4DC8FC_11* Method_2_AECF8BEC293ED42A_10()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_10_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_10()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_10_OFFSET))(this);
	}

	::Class_1_7AB88D713F5121B3_30* Method_2_AECF8BEC293ED42A_11()
	{
		return ((::Class_1_7AB88D713F5121B3_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_11_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_11_OFFSET))(this);
	}

	::Class_1_B0DE39839E6C6513* Method_2_AECF8BEC293ED42A_12()
	{
		return ((::Class_1_B0DE39839E6C6513*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_12_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_12()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_12_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_67* Method_2_AECF8BEC293ED42A_13()
	{
		return ((::Class_1_43BD383C98B4C0C5_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_13_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_13_OFFSET))(this);
	}

	::Class_1_78C2963AC589BAA9* Method_2_AECF8BEC293ED42A_14()
	{
		return ((::Class_1_78C2963AC589BAA9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_14_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_14_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_66* Method_2_AECF8BEC293ED42A_15()
	{
		return ((::Class_1_43BD383C98B4C0C5_66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_15_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_15()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_15_OFFSET))(this);
	}

	::Class_1_3AAD2B26053F7D77_1* Method_2_AECF8BEC293ED42A_16()
	{
		return ((::Class_1_3AAD2B26053F7D77_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_16_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_16_OFFSET))(this);
	}

	::Class_1_2E1C713036FDC667* Method_2_AECF8BEC293ED42A_17()
	{
		return ((::Class_1_2E1C713036FDC667*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_AECF8BEC293ED42A_17_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_17()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D25D6E36F5AF8D2_METHOD_2_1808E1CF7A125519_17_OFFSET))(this);
	}
};
