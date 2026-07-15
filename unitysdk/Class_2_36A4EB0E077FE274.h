#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_36A4EB0E077FE274_MeshLodState.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_D27BF54F25500E5F;
class Class_2_36A4EB0E077FE274_Class_1_172781B57C58AF96;
class Class_2_36A4EB0E077FE274_Class_1_F7B02896ED1CED39;
class Class_2_7851016F65A0A1D3;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class AssetsPathDict; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::CustomRP { class CapsuleOcclusion; }
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ObjectInstantiateRequest; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_36A4EB0E077FE274_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CB32A0)
#define CLASS_2_36A4EB0E077FE274_GETMODELART_OFFSET UNITYSDK_OFFSET(0x18B0AC20)
#define CLASS_2_36A4EB0E077FE274_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x18B0ABD0)
#define CLASS_2_36A4EB0E077FE274_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x18B0AB70)
#define CLASS_2_36A4EB0E077FE274_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x18B0AC70)
#define CLASS_2_36A4EB0E077FE274_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16CB46D0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_00B0C3696348F6A5_OFFSET UNITYSDK_OFFSET(0x16CB9CD0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_04104768F6747276_OFFSET UNITYSDK_OFFSET(0x16CB6890)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_06267C126D4B4C5C_OFFSET UNITYSDK_OFFSET(0x16CB6B40)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_08C689627757D0F9_OFFSET UNITYSDK_OFFSET(0x18B0B8D0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x16CB3660)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x16CB73B0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18B0AE50)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18B0A8C0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0x16CB4F10)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_17C2C73EDCBB5629_OFFSET UNITYSDK_OFFSET(0x16CB9140)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_1989ABF846B921E0_OFFSET UNITYSDK_OFFSET(0x16CB47A0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x16CB5650)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x18B0B0C0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x16CB6740)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_1F655EBEB7FDED48_OFFSET UNITYSDK_OFFSET(0x16CB5E50)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0x18B0BD10)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_31CF74C95A00A473_OFFSET UNITYSDK_OFFSET(0x16CB5340)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16CB8290)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_3EA2E124EC6BB35D_OFFSET UNITYSDK_OFFSET(0x16CB6C60)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16CB8390)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16CB9350)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x18B0B530)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_4A924CEE40144255_OFFSET UNITYSDK_OFFSET(0x16CB9190)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_4C7C0C356764D132_OFFSET UNITYSDK_OFFSET(0x16CB6560)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x16CB80F0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x18B0BD80)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_53DB07E6A775B398_OFFSET UNITYSDK_OFFSET(0x18B0A990)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_5538EA44CE08411A_OFFSET UNITYSDK_OFFSET(0x18B0B950)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x16CB5B20)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_69FE97E37001374E_OFFSET UNITYSDK_OFFSET(0x16CB9A20)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_6A10A8C0CF4C12F8_OFFSET UNITYSDK_OFFSET(0x16CB9BE0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_6EF931044531D2E5_OFFSET UNITYSDK_OFFSET(0x18B0AE70)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x18B0A7C0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_840AE46076A1E83D_OFFSET UNITYSDK_OFFSET(0x16CB9710)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x18B0AFB0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_8A539D69F21DC076_OFFSET UNITYSDK_OFFSET(0x16CB56C0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x16CB37E0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_8C59F7D3E1C9AD45_OFFSET UNITYSDK_OFFSET(0x16CB8FB0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_921D76FF0E2DE65A_OFFSET UNITYSDK_OFFSET(0x16CB8AA0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x16CB3AD0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x16CB55B0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x16CB4560)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_A42DF918B496327B_OFFSET UNITYSDK_OFFSET(0x18B0AEA0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x16CB8530)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x16CB7C00)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0x16CB6E80)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16CB50B0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_B3A8877A146D62E8_OFFSET UNITYSDK_OFFSET(0x18B0BAB0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_B79DA769B6339F91_OFFSET UNITYSDK_OFFSET(0x16CB6DA0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_B842A9DFEDAC123D_OFFSET UNITYSDK_OFFSET(0x16CB89F0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_BA80D19DAFE3B792_OFFSET UNITYSDK_OFFSET(0x16CB4A90)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x16CB5DA0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_BAEE5DE0AF1ED2B0_OFFSET UNITYSDK_OFFSET(0x16CB4600)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x16CB3920)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x16CB6440)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_C1DCC7F185AB7195_OFFSET UNITYSDK_OFFSET(0x18B0AF60)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_C4E952BFD2EEFB86_OFFSET UNITYSDK_OFFSET(0x16CB7150)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18B0AE80)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x16CB7D60)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_C945371A5F864F32_OFFSET UNITYSDK_OFFSET(0x18B0B170)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16CB6810)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x16CB3620)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16CB52F0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_CE5440016BE3E435_OFFSET UNITYSDK_OFFSET(0x18B0B7E0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_CF01D2E2F3ECA2EB_OFFSET UNITYSDK_OFFSET(0x18B0AE90)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x16CB7300)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_D5656AACE338BA84_OFFSET UNITYSDK_OFFSET(0x16CB8F00)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x18B0ADA0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x18B0C260)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_E34E48F8D8B4C6CD_OFFSET UNITYSDK_OFFSET(0x16CB79B0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x16CB8800)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18B0AE60)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x16CB93C0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x16CB4900)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_F773D945760BF918_OFFSET UNITYSDK_OFFSET(0x16CB6BF0)
#define CLASS_2_36A4EB0E077FE274_METHOD_2_FAC9E47494F5EA3E_OFFSET UNITYSDK_OFFSET(0x18B0AF50)
#define CLASS_2_36A4EB0E077FE274_TICK_OFFSET UNITYSDK_OFFSET(0x16CB3E60)
#define CLASS_2_36A4EB0E077FE274__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B0C7E0)
#define CLASS_2_36A4EB0E077FE274__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0C700)
#define CLASS_2_36A4EB0E077FE274__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x16CB4A30)

inline static constexpr unsigned int Class_2_36A4EB0E077FE274_TypeDefinitionIndex = 54587;

class Class_2_36A4EB0E077FE274 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_36A4EB0E077FE274_TypeDefinitionIndex)->GetStaticField(0x40B0);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_36A4EB0E077FE274_TypeDefinitionIndex)->GetStaticField(0x40B8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_36A4EB0E077FE274_TypeDefinitionIndex)->GetStaticField(0x40C0);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_36A4EB0E077FE274_TypeDefinitionIndex)->GetStaticField(0x2A00);
	}
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::UInt64 Field_2_6 = 0xF; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	// static const ::System::Single Field_2_8; // 0x0
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::Int32 Field_2_10 = 0x2; // 0x0
	// static const ::System::Single Field_2_11; // 0x0
	::Il2CppArray<::Class_2_36A4EB0E077FE274_Class_1_172781B57C58AF96*>* Field_2_12; // 0x18
	::RPG::Client::Promises::Promise* Field_2_13; // 0x20
	::RPG::Client::RootMotionHandler* Field_2_14; // 0x28
	::UnityEngine::Transform* Field_2_15; // 0x30
	::RPG::CustomRP::CapsuleOcclusion* Field_2_16; // 0x38
	::RPG::GameCore::LodTemplate* Field_2_17; // 0x40
	::Class_2_7851016F65A0A1D3* Field_2_18; // 0x48
	::Class_1_D27BF54F25500E5F* Field_2_19; // 0x50
	::System::Action_1<::System::Boolean>* Field_2_20; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* Field_2_21; // 0x60
	::RPG::Client::Promises::Promise* Field_2_22; // 0x68
	::System::Collections::Generic::List_1<::Class_2_36A4EB0E077FE274_Class_1_F7B02896ED1CED39*>* Field_2_23; // 0x70
	::RPG::Client::CharacterShaderPropertyTransition* Field_2_24; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_25; // 0x80
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_26; // 0x88
	::UnityEngine::Transform* Field_2_27; // 0x90
	::RPG::Client::Promises::Promise* Field_2_28; // 0x98
	::UnityEngine::GameObject* Field_2_29; // 0xA0
	::System::String* Field_2_30; // 0xA8
	::System::String* Field_2_31; // 0xB0
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* Field_2_32; // 0xB8
	::Class_2_36A4EB0E077FE274_Class_1_172781B57C58AF96* Field_2_33; // 0xC0
	::RPG::GameCore::LevelNPCPossessionInfo* Field_2_34; // 0xC8
	::UnityEngine::RuntimeAnimatorController* Field_2_35; // 0xD0
	::System::Action* Field_2_36; // 0xD8
	::System::Action* Field_2_37; // 0xE0
	::UnityEngine::CapsuleCollider* Field_2_38; // 0xE8
	::RPG::Client::AttachPointMapping* Field_2_39; // 0xF0
	::System::Action* Field_2_40; // 0xF8
	::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* Field_2_41; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_42; // 0x108
	::RPG::Client::AssemNPC* Field_2_43; // 0x110
	::System::String* Field_2_44; // 0x118
	::System::Action_1<::Class_2_36A4EB0E077FE274*>* Field_2_45; // 0x120
	::RPG::Client::Promises::Promise* Field_2_46; // 0x128
	::RPG::Client::Promises::Promise* Field_2_47; // 0x130
	::UnityEngine::GameObject* Field_2_48; // 0x138
	::RPG::Client::MockAnimator* Field_2_49; // 0x140
	::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* Field_2_50; // 0x148
	::System::Action_1<::UnityEngine::GameObject*>* Field_2_51; // 0x150
	::RPG::Client::EAssemblyNPC Field_2_52; // 0x158
	::System::Int32 Field_2_53; // 0x15C
	::Class_2_36A4EB0E077FE274_MeshLodState Field_2_54; // 0x160
	::System::Boolean Field_2_55; // 0x164
	::System::Boolean Field_2_56; // 0x165
	::System::Boolean Field_2_57; // 0x166
	::System::Boolean Field_2_58; // 0x167
	::System::UInt32 Field_2_59; // 0x168
	::System::Single Field_2_60; // 0x16C
	::System::Single Field_2_61; // 0x170
	::System::Single Field_2_62; // 0x174
	::System::Boolean Field_2_63; // 0x178
	::System::Boolean Field_2_64; // 0x179
	::System::Int32 Field_2_65; // 0x17C
	::UnityEngine::Bounds Field_2_66; // 0x180
	::UnityEngine::Vector3 Field_2_67; // 0x198
	::UnityEngine::Bounds Field_2_68; // 0x1A4
	::System::Single Field_2_69; // 0x1BC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1989ABF846B921E0(::RPG::GameCore::ColliderConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderConfig*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_1989ABF846B921E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F74441856239DF08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_F74441856239DF08_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_BA80D19DAFE3B792(::RPG::Client::AssemNPC* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a3, ::RPG::Client::EAssemblyNPC a4, ::System::String* a5, ::UnityEngine::Vector3 a6, ::System::UInt32 a7, ::System::Action_1<::Class_2_36A4EB0E077FE274*>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::RPG::Client::EAssemblyNPC, ::System::String*, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action_1<::Class_2_36A4EB0E077FE274*>*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_BA80D19DAFE3B792_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_31CF74C95A00A473(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_31CF74C95A00A473_OFFSET))(this, a1);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A539D69F21DC076(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_8A539D69F21DC076_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_1F655EBEB7FDED48(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_1F655EBEB7FDED48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C7C0C356764D132(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_4C7C0C356764D132_OFFSET))(this, a1);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_06267C126D4B4C5C(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_06267C126D4B4C5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04104768F6747276(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_04104768F6747276_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F773D945760BF918(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_F773D945760BF918_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EA2E124EC6BB35D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_3EA2E124EC6BB35D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_AF01F8739A3CF255(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_AF01F8739A3CF255_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4E952BFD2EEFB86(::UnityEngine::Material* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_C4E952BFD2EEFB86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E34E48F8D8B4C6CD(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_E34E48F8D8B4C6CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_B842A9DFEDAC123D(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_B842A9DFEDAC123D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_921D76FF0E2DE65A(::RPG::Client::AssetsPathDict* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetsPathDict*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_921D76FF0E2DE65A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Void Method_2_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_106289055FB804CE_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_BAEE5DE0AF1ED2B0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_BAEE5DE0AF1ED2B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_17C2C73EDCBB5629()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_17C2C73EDCBB5629_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4A924CEE40144255()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_4A924CEE40144255_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_8C59F7D3E1C9AD45(::Il2CppArray<::System::UInt64>* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_8C59F7D3E1C9AD45_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_2_D5656AACE338BA84(::System::UInt64 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_D5656AACE338BA84_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_2_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_2_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::Void Method_2_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::String* Method_2_1798FAFF45053267()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_1798FAFF45053267_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_B79DA769B6339F91()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_B79DA769B6339F91_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_840AE46076A1E83D()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_840AE46076A1E83D_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_69FE97E37001374E()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_69FE97E37001374E_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_6A10A8C0CF4C12F8()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_6A10A8C0CF4C12F8_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_00B0C3696348F6A5()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_00B0C3696348F6A5_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_53DB07E6A775B398(::System::String* a1, ::System::Action_1<::Class_1_004034A1FAAF468A*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_004034A1FAAF468A*>*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_53DB07E6A775B398_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EntityLoadState get_LoadState()
	{
		return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_GET_LOADSTATE_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelGO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_GETMODELGO_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelArt()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_GETMODELART_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* get_MockAnimator()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_GET_MOCKANIMATOR_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::EAssemblyNPC Method_2_6EF931044531D2E5()
	{
		return ((::RPG::Client::EAssemblyNPC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_6EF931044531D2E5_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::AttachPointMapping* Method_2_CF01D2E2F3ECA2EB()
	{
		return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_CF01D2E2F3ECA2EB_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_A42DF918B496327B(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_A42DF918B496327B_OFFSET))(a1, a2);
	}

	::RPG::Client::RootMotionHandler* Method_2_FAC9E47494F5EA3E()
	{
		return ((::RPG::Client::RootMotionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_FAC9E47494F5EA3E_OFFSET))(this);
	}

	::System::Void Method_2_C1DCC7F185AB7195(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_C1DCC7F185AB7195_OFFSET))(this, a1);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_2_C945371A5F864F32(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_C945371A5F864F32_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_B3A8877A146D62E8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_B3A8877A146D62E8_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_CE5440016BE3E435(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_CE5440016BE3E435_OFFSET))(this, a1);
	}

	::System::Void Method_2_08C689627757D0F9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_08C689627757D0F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_23C3681AC9E5D438_OFFSET))(this);
	}

	::System::Void Method_2_5538EA44CE08411A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_5538EA44CE08411A_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}
};
