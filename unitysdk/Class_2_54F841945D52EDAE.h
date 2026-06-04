#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_54F841945D52EDAE_MeshLodState.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_175B21A1A3924B03;
class Class_1_81A24C8B51484D59;
class Class_1_E05E7A6D9DE9138B;
class Class_2_54F841945D52EDAE_Class_1_651CA6A4B4E0070A;
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::CustomRP { class CapsuleOcclusion; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class EntityLodDetail; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_54F841945D52EDAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11905800)
#define CLASS_2_54F841945D52EDAE_GETMODELART_OFFSET UNITYSDK_OFFSET(0x11905270)
#define CLASS_2_54F841945D52EDAE_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x11905220)
#define CLASS_2_54F841945D52EDAE_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x11905210)
#define CLASS_2_54F841945D52EDAE_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x119052C0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_098E71CA53F64B12_OFFSET UNITYSDK_OFFSET(0x11902A30)
#define CLASS_2_54F841945D52EDAE_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x119090E0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11908810)
#define CLASS_2_54F841945D52EDAE_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x11904130)
#define CLASS_2_54F841945D52EDAE_METHOD_2_1989ABF846B921E0_OFFSET UNITYSDK_OFFSET(0x11908BC0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x119050A0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_1B9CC121BDC8766D_2_OFFSET UNITYSDK_OFFSET(0x119072A0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x11905030)
#define CLASS_2_54F841945D52EDAE_METHOD_2_1D686FE6394E75C4_OFFSET UNITYSDK_OFFSET(0x11905360)
#define CLASS_2_54F841945D52EDAE_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x119071D0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_2301F9A5766A7523_OFFSET UNITYSDK_OFFSET(0x11904620)
#define CLASS_2_54F841945D52EDAE_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x11905CF0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x11902680)
#define CLASS_2_54F841945D52EDAE_METHOD_2_27A27A861E1223F2_OFFSET UNITYSDK_OFFSET(0x11903070)
#define CLASS_2_54F841945D52EDAE_METHOD_2_2AFD57859AC794A0_OFFSET UNITYSDK_OFFSET(0x11908F40)
#define CLASS_2_54F841945D52EDAE_METHOD_2_35DA85C84ABA5D2C_OFFSET UNITYSDK_OFFSET(0x11906980)
#define CLASS_2_54F841945D52EDAE_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x11905510)
#define CLASS_2_54F841945D52EDAE_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x119082F0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x11902CE0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x11904A40)
#define CLASS_2_54F841945D52EDAE_METHOD_2_4C7C0C356764D132_OFFSET UNITYSDK_OFFSET(0x11906FF0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x11908B20)
#define CLASS_2_54F841945D52EDAE_METHOD_2_5BF4E63C75D62CCD_OFFSET UNITYSDK_OFFSET(0x11904750)
#define CLASS_2_54F841945D52EDAE_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x119066E0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_6CB56D369A3BDAC2_OFFSET UNITYSDK_OFFSET(0x11907CD0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_6D001287547E6CEE_OFFSET UNITYSDK_OFFSET(0x11902C50)
#define CLASS_2_54F841945D52EDAE_METHOD_2_6E159B3E2F986C48_OFFSET UNITYSDK_OFFSET(0x11903700)
#define CLASS_2_54F841945D52EDAE_METHOD_2_6F03FB9B9F4E8889_OFFSET UNITYSDK_OFFSET(0x11908A00)
#define CLASS_2_54F841945D52EDAE_METHOD_2_7842FB10066FED93_OFFSET UNITYSDK_OFFSET(0x11907F10)
#define CLASS_2_54F841945D52EDAE_METHOD_2_7F159AA90C3C0DFE_OFFSET UNITYSDK_OFFSET(0x11902F80)
#define CLASS_2_54F841945D52EDAE_METHOD_2_85B7718674940CD7_OFFSET UNITYSDK_OFFSET(0x11904080)
#define CLASS_2_54F841945D52EDAE_METHOD_2_85F9AAEEA394BE31_OFFSET UNITYSDK_OFFSET(0x11902950)
#define CLASS_2_54F841945D52EDAE_METHOD_2_8C4F5769C49BF3B7_OFFSET UNITYSDK_OFFSET(0x11905310)
#define CLASS_2_54F841945D52EDAE_METHOD_2_8D7FE2A7980365E0_OFFSET UNITYSDK_OFFSET(0x11908E40)
#define CLASS_2_54F841945D52EDAE_METHOD_2_8F362162AAF7DBF8_OFFSET UNITYSDK_OFFSET(0x119037C0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x11908780)
#define CLASS_2_54F841945D52EDAE_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x11905C50)
#define CLASS_2_54F841945D52EDAE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11908630)
#define CLASS_2_54F841945D52EDAE_METHOD_2_9E09F2D2DB4CB0E5_OFFSET UNITYSDK_OFFSET(0x11908070)
#define CLASS_2_54F841945D52EDAE_METHOD_2_9F5EE04B8BB43F76_OFFSET UNITYSDK_OFFSET(0x11903480)
#define CLASS_2_54F841945D52EDAE_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x11905BC0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x119052D0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x11907780)
#define CLASS_2_54F841945D52EDAE_METHOD_2_AD6482B9EFF49347_OFFSET UNITYSDK_OFFSET(0x119062F0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0x11907440)
#define CLASS_2_54F841945D52EDAE_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11908200)
#define CLASS_2_54F841945D52EDAE_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x11906ED0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_C1DCC7F185AB7195_OFFSET UNITYSDK_OFFSET(0x11904470)
#define CLASS_2_54F841945D52EDAE_METHOD_2_C67EC53CA798326A_OFFSET UNITYSDK_OFFSET(0x11905410)
#define CLASS_2_54F841945D52EDAE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11909100)
#define CLASS_2_54F841945D52EDAE_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x119088C0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11905F10)
#define CLASS_2_54F841945D52EDAE_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x119046D0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_CE5440016BE3E435_OFFSET UNITYSDK_OFFSET(0x119044C0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_CE962969F77540FC_OFFSET UNITYSDK_OFFSET(0x11902E60)
#define CLASS_2_54F841945D52EDAE_METHOD_2_CFB00179EC6A3756_OFFSET UNITYSDK_OFFSET(0x119045B0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0x119041E0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_D40D73BE274AD5E2_OFFSET UNITYSDK_OFFSET(0x11902EC0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_D489917160E9B884_OFFSET UNITYSDK_OFFSET(0x11904CD0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_DDBFE8E9D8449B5F_OFFSET UNITYSDK_OFFSET(0x119031A0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_DE7035732E1EE275_OFFSET UNITYSDK_OFFSET(0x11907320)
#define CLASS_2_54F841945D52EDAE_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x11904240)
#define CLASS_2_54F841945D52EDAE_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x119086F0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x119039C0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x119055D0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x11902720)
#define CLASS_2_54F841945D52EDAE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x119090F0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_F0238F9540F47818_OFFSET UNITYSDK_OFFSET(0x11907A60)
#define CLASS_2_54F841945D52EDAE_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x11905B40)
#define CLASS_2_54F841945D52EDAE_METHOD_2_F374D5B939A72B57_OFFSET UNITYSDK_OFFSET(0x11908910)
#define CLASS_2_54F841945D52EDAE_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x11902BF0)
#define CLASS_2_54F841945D52EDAE_METHOD_2_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x11908D10)
#define CLASS_2_54F841945D52EDAE_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x11903D30)
#define CLASS_2_54F841945D52EDAE_TICK_OFFSET UNITYSDK_OFFSET(0x11905F70)
#define CLASS_2_54F841945D52EDAE__CTOR_OFFSET UNITYSDK_OFFSET(0x11909110)
#define CLASS_2_54F841945D52EDAE__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x119053B0)
#define CLASS_2_54F841945D52EDAE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11909210)
#define CLASS_2_54F841945D52EDAE___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x119091B0)

inline static constexpr unsigned int Class_2_54F841945D52EDAE_TypeDefinitionIndex = 53563;

class Class_2_54F841945D52EDAE : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::Int32 Field_2_0 = 0x2; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::UnityEngine::Transform* Field_2_6; // 0x18
	::System::Exception* Field_2_7; // 0x20
	::System::Action_1<::System::Boolean>* Field_2_8; // 0x28
	::RPG::GameCore::LodTemplate* Field_2_9; // 0x30
	::RPG::Client::Promises::Promise* Field_2_10; // 0x38
	::RPG::GameCore::AdventureCharacterConfig* Field_2_11; // 0x40
	::System::String* Field_2_12; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_13; // 0x50
	::RPG::Client::AttachPointMapping* Field_2_14; // 0x58
	::UnityEngine::CapsuleCollider* Field_2_15; // 0x60
	::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise*>* Field_2_16; // 0x68
	::RPG::Client::Promises::Promise* Field_2_17; // 0x70
	::RPG::Client::MockAnimator* Field_2_18; // 0x78
	::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* Field_2_19; // 0x80
	::RPG::CustomRP::CapsuleOcclusion* Field_2_20; // 0x88
	::RPG::Client::Promises::Promise* Field_2_21; // 0x90
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_22; // 0x98
	::System::String* Field_2_23; // 0xA0
	::Class_1_81A24C8B51484D59* Field_2_24; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_175B21A1A3924B03*>* Field_2_25; // 0xB0
	::System::Collections::Generic::List_1<::Class_2_54F841945D52EDAE_Class_1_651CA6A4B4E0070A*>* Field_2_26; // 0xB8
	::Class_1_E05E7A6D9DE9138B* Field_2_27; // 0xC0
	::UnityEngine::GameObject* Field_2_28; // 0xC8
	::UnityEngine::Transform* Field_2_29; // 0xD0
	::RPG::Client::Promises::Promise* Field_2_30; // 0xD8
	::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* Field_2_31; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_32; // 0xE8
	::System::Nullable_1<::System::Boolean> Field_2_33; // 0xF0
	::RPG::GameCore::EntityLoadState Field_2_34; // 0xF4
	::UnityEngine::Vector3 Field_2_35; // 0xF8
	::UnityEngine::Bounds Field_2_36; // 0x104
	::System::Single Field_2_37; // 0x11C
	::System::Int32 Field_2_38; // 0x120
	::Class_2_54F841945D52EDAE_MeshLodState Field_2_39; // 0x124
	::UnityEngine::Bounds Field_2_40; // 0x128
	::System::Single Field_2_41; // 0x140
	::System::Int32 Field_2_42; // 0x144
	::System::Single Field_2_43; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_2_85F9AAEEA394BE31(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_85F9AAEEA394BE31_OFFSET))(this, a1);
	}

	::System::Void Method_2_098E71CA53F64B12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_098E71CA53F64B12_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_2_6D001287547E6CEE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_6D001287547E6CEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE962969F77540FC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_CE962969F77540FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D40D73BE274AD5E2(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_D40D73BE274AD5E2_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_175B21A1A3924B03* Method_2_27A27A861E1223F2(::System::String* a1)
	{
		return ((::Class_1_175B21A1A3924B03*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_27A27A861E1223F2_OFFSET))(this, a1);
	}

	::Class_1_175B21A1A3924B03* Method_2_7F159AA90C3C0DFE(::System::String* a1)
	{
		return ((::Class_1_175B21A1A3924B03*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_7F159AA90C3C0DFE_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDBFE8E9D8449B5F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_DDBFE8E9D8449B5F_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_9F5EE04B8BB43F76()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_9F5EE04B8BB43F76_OFFSET))(this);
	}

	::System::Void Method_2_8F362162AAF7DBF8(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_8F362162AAF7DBF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_85B7718674940CD7(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Mesh* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_85B7718674940CD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_2_C1DCC7F185AB7195(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_C1DCC7F185AB7195_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Int32 Method_2_CE5440016BE3E435(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_CE5440016BE3E435_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFB00179EC6A3756(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_CFB00179EC6A3756_OFFSET))(this, a1);
	}

	::System::Void Method_2_2301F9A5766A7523(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_2301F9A5766A7523_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BF4E63C75D62CCD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_5BF4E63C75D62CCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_D489917160E9B884(::RPG::GameCore::EntityLodDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_D489917160E9B884_OFFSET))(this, a1);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_1B9CC121BDC8766D_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityLoadState get_LoadState()
	{
		return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_GET_LOADSTATE_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelGO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_GETMODELGO_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelArt()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_GETMODELART_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* get_MockAnimator()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_GET_MOCKANIMATOR_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_2_8C4F5769C49BF3B7(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_8C4F5769C49BF3B7_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* Method_2_1D686FE6394E75C4()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_1D686FE6394E75C4_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_C67EC53CA798326A(::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* a1, ::RPG::GameCore::AdventureCharacterConfig* a2, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* a3, ::UnityEngine::Vector3 a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::GameCore::AdventureCharacterConfig*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_C67EC53CA798326A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD6482B9EFF49347(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_AD6482B9EFF49347_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_2_35DA85C84ABA5D2C(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_35DA85C84ABA5D2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C7C0C356764D132(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_4C7C0C356764D132_OFFSET))(this, a1);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_1B9CC121BDC8766D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_DE7035732E1EE275()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_DE7035732E1EE275_OFFSET))(this);
	}

	::System::Void Method_2_AF01F8739A3CF255(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_AF01F8739A3CF255_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_F0238F9540F47818()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_F0238F9540F47818_OFFSET))(this);
	}

	::System::Void Method_2_6CB56D369A3BDAC2(::UnityEngine::RuntimeAnimatorController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_6CB56D369A3BDAC2_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_7842FB10066FED93()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_7842FB10066FED93_OFFSET))(this);
	}

	::System::Void Method_2_9E09F2D2DB4CB0E5(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_9E09F2D2DB4CB0E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::RPG::GameCore::FreeStyleComponent* Method_2_F374D5B939A72B57()
	{
		return ((::RPG::GameCore::FreeStyleComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_F374D5B939A72B57_OFFSET))(this);
	}

	::System::Void Method_2_6F03FB9B9F4E8889(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_6F03FB9B9F4E8889_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_1989ABF846B921E0(::RPG::GameCore::ColliderConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderConfig*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_1989ABF846B921E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F74441856239DF08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_F74441856239DF08_OFFSET))(this);
	}

	::System::Void Method_2_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_93190E731E31C79A_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_6E159B3E2F986C48()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_6E159B3E2F986C48_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_8D7FE2A7980365E0(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_8D7FE2A7980365E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AFD57859AC794A0(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_2AFD57859AC794A0_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_54F841945D52EDAE___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
