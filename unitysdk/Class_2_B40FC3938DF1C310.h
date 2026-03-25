#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B40FC3938DF1C310_MeshLodState.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_175B21A1A3924B03;
class Class_1_E05E7A6D9DE9138B;
class Class_1_E5086EDB86D7D733;
class Class_2_B40FC3938DF1C310_Class_1_328A62CA455D0237;
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

#define CLASS_2_B40FC3938DF1C310_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1149AB70)
#define CLASS_2_B40FC3938DF1C310_GETMODELART_OFFSET UNITYSDK_OFFSET(0x1149A620)
#define CLASS_2_B40FC3938DF1C310_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x1149A5E0)
#define CLASS_2_B40FC3938DF1C310_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x1149A5D0)
#define CLASS_2_B40FC3938DF1C310_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x1149A660)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1149E2A0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_19EAA00F9BCC1941_OFFSET UNITYSDK_OFFSET(0x1149CCA0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x1149A460)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_1B9CC121BDC8766D_2_OFFSET UNITYSDK_OFFSET(0x1149C550)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1149A3F0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_1D686FE6394E75C4_OFFSET UNITYSDK_OFFSET(0x1149A700)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x1149C410)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x1149CA10)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_24B97AF967D618C8_OFFSET UNITYSDK_OFFSET(0x11498660)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_299706C0AC20A890_OFFSET UNITYSDK_OFFSET(0x114985B0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_2EC8082DB082EBDC_OFFSET UNITYSDK_OFFSET(0x1149D100)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_31246CA5C1A13793_OFFSET UNITYSDK_OFFSET(0x1149E0F0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1149DA20)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_33DA83BD4EB7D888_OFFSET UNITYSDK_OFFSET(0x11499480)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0x11498310)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1149D560)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x1149DED0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_4C7C0C356764D132_OFFSET UNITYSDK_OFFSET(0x1149C230)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1149DD10)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x1149BA60)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_6317236681A1A9C0_OFFSET UNITYSDK_OFFSET(0x1149BD00)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x1149D3B0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x11499E50)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_6CB56D369A3BDAC2_OFFSET UNITYSDK_OFFSET(0x1149CEC0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_6F03FB9B9F4E8889_OFFSET UNITYSDK_OFFSET(0x1149DBF0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_85F9AAEEA394BE31_OFFSET UNITYSDK_OFFSET(0x11497EF0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_87877999976A7711_OFFSET UNITYSDK_OFFSET(0x11497C60)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1149A930)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_8C4F5769C49BF3B7_OFFSET UNITYSDK_OFFSET(0x1149A6B0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_907607F05D9A4A91_OFFSET UNITYSDK_OFFSET(0x114999B0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x11499640)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_95ED1BF7E4D46AF9_OFFSET UNITYSDK_OFFSET(0x1149DDB0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1149D870)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11498160)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_9C2A65574448D201_OFFSET UNITYSDK_OFFSET(0x1149D990)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_9DAFC83D6CC22B20_OFFSET UNITYSDK_OFFSET(0x11498CE0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_9E09F2D2DB4CB0E5_OFFSET UNITYSDK_OFFSET(0x1149D220)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_A1037CC76C606761_OFFSET UNITYSDK_OFFSET(0x114989E0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x1149AFA0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1149A670)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1149B030)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_AD6482B9EFF49347_OFFSET UNITYSDK_OFFSET(0x1149B670)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0x1149C6B0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_B581726D5E05B0EA_OFFSET UNITYSDK_OFFSET(0x11499A20)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_B6E9ED8229D6DEDE_OFFSET UNITYSDK_OFFSET(0x1149A0B0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x1149C110)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_C1DCC7F185AB7195_OFFSET UNITYSDK_OFFSET(0x11499870)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_C53E4338A57E6194_OFFSET UNITYSDK_OFFSET(0x11498220)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_C7323735AC66434E_OFFSET UNITYSDK_OFFSET(0x11499B50)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1149E2C0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1149DAB0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1149B290)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x11499AD0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_CBE6DF217B4E6476_OFFSET UNITYSDK_OFFSET(0x1149A7B0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x11498710)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_CE5440016BE3E435_OFFSET UNITYSDK_OFFSET(0x114998C0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_CE962969F77540FC_OFFSET UNITYSDK_OFFSET(0x11498490)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0x114995E0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_D40D73BE274AD5E2_OFFSET UNITYSDK_OFFSET(0x114984F0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_DE2473C3425C1AAC_OFFSET UNITYSDK_OFFSET(0x1149C5D0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1149D920)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x11498E40)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x1149A9D0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_E9A5CB8132825E13_OFFSET UNITYSDK_OFFSET(0x11498C60)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0x11499530)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_EB522918F22FFA3B_OFFSET UNITYSDK_OFFSET(0x1149E020)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1149E2B0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x1149AF20)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_F374D5B939A72B57_OFFSET UNITYSDK_OFFSET(0x1149DB00)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x114991C0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x11497CE0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_FD91F0343DA6FC30_OFFSET UNITYSDK_OFFSET(0x11497FD0)
#define CLASS_2_B40FC3938DF1C310_METHOD_2_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0x1149B0C0)
#define CLASS_2_B40FC3938DF1C310_TICK_OFFSET UNITYSDK_OFFSET(0x1149B2F0)
#define CLASS_2_B40FC3938DF1C310__CTOR_OFFSET UNITYSDK_OFFSET(0x1149E2D0)
#define CLASS_2_B40FC3938DF1C310__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1149A750)
#define CLASS_2_B40FC3938DF1C310___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1149E3C0)
#define CLASS_2_B40FC3938DF1C310___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1149E360)

inline static constexpr unsigned int Class_2_B40FC3938DF1C310_TypeDefinitionIndex = 46188;

class Class_2_B40FC3938DF1C310 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::Int32 Field_2_2 = 0x2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::Single Field_2_13; // 0x0
	// static const ::System::Single Field_2_14; // 0x0
	// static const ::System::String* Field_2_40; // 0x0
	::RPG::Client::MockAnimator* Field_2_31; // 0x18
	::Class_1_E05E7A6D9DE9138B* Field_2_22; // 0x20
	::System::Exception* Field_2_41; // 0x28
	::RPG::Client::Promises::Promise* Field_2_23; // 0x30
	::UnityEngine::GameObject* Field_2_29; // 0x38
	::UnityEngine::CapsuleCollider* Field_2_32; // 0x40
	::RPG::Client::Promises::Promise* Field_2_25; // 0x48
	::RPG::GameCore::LodTemplate* Field_2_11; // 0x50
	::System::String* Field_2_28; // 0x58
	::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* Field_2_15; // 0x60
	::RPG::GameCore::AdventureCharacterConfig* Field_2_16; // 0x68
	::System::Collections::Generic::List_1<::Class_2_B40FC3938DF1C310_Class_1_328A62CA455D0237*>* Field_2_8; // 0x70
	::UnityEngine::Transform* Field_2_30; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_37; // 0x80
	::RPG::Client::AttachPointMapping* Field_2_33; // 0x88
	::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* Field_2_17; // 0x90
	::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise*>* Field_2_42; // 0x98
	::System::Action_1<::System::Boolean>* Field_2_10; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_9; // 0xA8
	::RPG::CustomRP::CapsuleOcclusion* Field_2_34; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_175B21A1A3924B03*>* Field_2_1; // 0xB8
	::UnityEngine::Transform* Field_2_27; // 0xC0
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_19; // 0xC8
	::Class_1_E5086EDB86D7D733* Field_2_0; // 0xD0
	::System::String* Field_2_20; // 0xD8
	::RPG::Client::Promises::Promise* Field_2_24; // 0xE0
	::RPG::Client::Promises::Promise* Field_2_26; // 0xE8
	::System::Int32 Field_2_6; // 0xF0
	::System::Single Field_2_4; // 0xF4
	::RPG::GameCore::EntityLoadState Field_2_21; // 0xF8
	::Class_2_B40FC3938DF1C310_MeshLodState Field_2_7; // 0xFC
	::UnityEngine::Bounds Field_2_39; // 0x100
	::System::Int32 Field_2_5; // 0x118
	::System::Nullable_1<::System::Boolean> Field_2_43; // 0x11C
	::UnityEngine::Vector3 Field_2_18; // 0x120
	::System::Single Field_2_35; // 0x12C
	::System::Single Field_2_36; // 0x130
	::UnityEngine::Bounds Field_2_38; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87877999976A7711()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_87877999976A7711_OFFSET))(this);
	}

	::System::Void Method_2_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Void Method_2_85F9AAEEA394BE31(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_85F9AAEEA394BE31_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD91F0343DA6FC30(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_FD91F0343DA6FC30_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C53E4338A57E6194(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_C53E4338A57E6194_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE962969F77540FC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_CE962969F77540FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D40D73BE274AD5E2(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_D40D73BE274AD5E2_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_175B21A1A3924B03* Method_2_24B97AF967D618C8(::System::String* a1)
	{
		return ((::Class_1_175B21A1A3924B03*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_24B97AF967D618C8_OFFSET))(this, a1);
	}

	::Class_1_175B21A1A3924B03* Method_2_299706C0AC20A890(::System::String* a1)
	{
		return ((::Class_1_175B21A1A3924B03*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_299706C0AC20A890_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_A1037CC76C606761()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_A1037CC76C606761_OFFSET))(this);
	}

	::System::Void Method_2_9DAFC83D6CC22B20(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_9DAFC83D6CC22B20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33DA83BD4EB7D888(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Mesh* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_33DA83BD4EB7D888_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_EA7C9571288E1295()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_EA7C9571288E1295_OFFSET))(this);
	}

	::System::Void Method_2_C1DCC7F185AB7195(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_C1DCC7F185AB7195_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Int32 Method_2_CE5440016BE3E435(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_CE5440016BE3E435_OFFSET))(this, a1);
	}

	::System::Void Method_2_907607F05D9A4A91(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_907607F05D9A4A91_OFFSET))(this, a1);
	}

	::System::Void Method_2_B581726D5E05B0EA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_B581726D5E05B0EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7323735AC66434E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_C7323735AC66434E_OFFSET))(this, a1);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_2_B6E9ED8229D6DEDE(::RPG::GameCore::EntityLodDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_B6E9ED8229D6DEDE_OFFSET))(this, a1);
	}

	::System::Void Method_2_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_64F3965CE4C4DB47_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_1B9CC121BDC8766D_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityLoadState get_LoadState()
	{
		return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_GET_LOADSTATE_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelGO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_GETMODELGO_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelArt()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_GETMODELART_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* get_MockAnimator()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_GET_MOCKANIMATOR_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_2_8C4F5769C49BF3B7(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_8C4F5769C49BF3B7_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* Method_2_1D686FE6394E75C4()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_1D686FE6394E75C4_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_CBE6DF217B4E6476(::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* a1, ::RPG::GameCore::AdventureCharacterConfig* a2, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* a3, ::UnityEngine::Vector3 a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::GameCore::AdventureCharacterConfig*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_CBE6DF217B4E6476_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD6482B9EFF49347(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_AD6482B9EFF49347_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_2_6317236681A1A9C0(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_6317236681A1A9C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C7C0C356764D132(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_4C7C0C356764D132_OFFSET))(this, a1);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_1B9CC121BDC8766D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_E8F71BC8471C5469_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_DE2473C3425C1AAC()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_DE2473C3425C1AAC_OFFSET))(this);
	}

	::System::Void Method_2_AF01F8739A3CF255(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_AF01F8739A3CF255_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_19EAA00F9BCC1941()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_19EAA00F9BCC1941_OFFSET))(this);
	}

	::System::Void Method_2_6CB56D369A3BDAC2(::UnityEngine::RuntimeAnimatorController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_6CB56D369A3BDAC2_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_2EC8082DB082EBDC()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_2EC8082DB082EBDC_OFFSET))(this);
	}

	::System::Void Method_2_9E09F2D2DB4CB0E5(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_9E09F2D2DB4CB0E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_FF05AC0AB0D75A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_FF05AC0AB0D75A04_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::RPG::GameCore::FreeStyleComponent* Method_2_F374D5B939A72B57()
	{
		return ((::RPG::GameCore::FreeStyleComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_F374D5B939A72B57_OFFSET))(this);
	}

	::System::Void Method_2_6F03FB9B9F4E8889(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_6F03FB9B9F4E8889_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_95ED1BF7E4D46AF9(::RPG::GameCore::ColliderConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_95ED1BF7E4D46AF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_47680E2642F37A1B_OFFSET))(this);
	}

	::System::Void Method_2_9C2A65574448D201()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_9C2A65574448D201_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_E9A5CB8132825E13()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_E9A5CB8132825E13_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_EB522918F22FFA3B(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_EB522918F22FFA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_2_31246CA5C1A13793(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_31246CA5C1A13793_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B40FC3938DF1C310___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
