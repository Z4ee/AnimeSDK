#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4C1AAFE95CDED36F_MeshLodState.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_D27BF54F25500E5F;
class Class_2_4C1AAFE95CDED36F_Class_1_383CFFE0A2300D35;
class Class_2_4C1AAFE95CDED36F_Class_1_F7B02896ED1CED39;
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

#define CLASS_2_4C1AAFE95CDED36F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B88540)
#define CLASS_2_4C1AAFE95CDED36F_GETMODELART_OFFSET UNITYSDK_OFFSET(0x18B91230)
#define CLASS_2_4C1AAFE95CDED36F_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x18B911E0)
#define CLASS_2_4C1AAFE95CDED36F_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x18B91180)
#define CLASS_2_4C1AAFE95CDED36F_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x18B906D0)
#define CLASS_2_4C1AAFE95CDED36F_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18B89E60)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_00B0C3696348F6A5_OFFSET UNITYSDK_OFFSET(0x18B90D00)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_04104768F6747276_OFFSET UNITYSDK_OFFSET(0x18B8C700)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_06267C126D4B4C5C_OFFSET UNITYSDK_OFFSET(0x18B8C910)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x18B88DD0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_08C689627757D0F9_OFFSET UNITYSDK_OFFSET(0x18B92100)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_0C6D78F7FB2736C2_OFFSET UNITYSDK_OFFSET(0x18B8F8C0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x18B8D7F0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18B91330)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18B898B0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0x18B8AC00)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_19D21DC63CFC45D5_OFFSET UNITYSDK_OFFSET(0x18B922F0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x18B91D40)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x18B8C5B0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1F655EBEB7FDED48_OFFSET UNITYSDK_OFFSET(0x18B8BCC0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_2A83FA3713ACC6E3_OFFSET UNITYSDK_OFFSET(0x18B88A90)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x18B8A540)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x18B8E6E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_3B5E81E976A08A3C_OFFSET UNITYSDK_OFFSET(0x18B8B230)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_3EA2E124EC6BB35D_OFFSET UNITYSDK_OFFSET(0x18B8D0C0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18B8E7E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18B8F9B0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x18B89A00)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x18B92570)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4C7C0C356764D132_OFFSET UNITYSDK_OFFSET(0x18B8C3D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x18B8E540)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_53DB07E6A775B398_OFFSET UNITYSDK_OFFSET(0x18B90FA0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_5538EA44CE08411A_OFFSET UNITYSDK_OFFSET(0x18B92180)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x18B8FE90)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_62A8F853B70537CB_OFFSET UNITYSDK_OFFSET(0x18B91430)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x18B8BA40)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_69FE97E37001374E_OFFSET UNITYSDK_OFFSET(0x18B90520)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_6A10A8C0CF4C12F8_OFFSET UNITYSDK_OFFSET(0x18B90800)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_6EF931044531D2E5_OFFSET UNITYSDK_OFFSET(0x18B91350)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x18B90EA0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_840AE46076A1E83D_OFFSET UNITYSDK_OFFSET(0x18B90210)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x18B8FA20)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_8A539D69F21DC076_OFFSET UNITYSDK_OFFSET(0x18B8B5E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x18B88AE0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_8C59F7D3E1C9AD45_OFFSET UNITYSDK_OFFSET(0x18B8F410)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_8CDC51540437DD98_OFFSET UNITYSDK_OFFSET(0x18B8B580)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_921D76FF0E2DE65A_OFFSET UNITYSDK_OFFSET(0x18B8EEF0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x18B8B4D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x18B89810)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_A42DF918B496327B_OFFSET UNITYSDK_OFFSET(0x18B91380)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x18B8E980)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x18B925E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x18B8E030)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0x18B8D2D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x18B8ADA0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B79DA769B6339F91_OFFSET UNITYSDK_OFFSET(0x18B8D200)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B842A9DFEDAC123D_OFFSET UNITYSDK_OFFSET(0x18B8EE40)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B9999439DB2F3546_OFFSET UNITYSDK_OFFSET(0x18B8CED0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x18B8A480)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x18B88C20)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x18B8C2B0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C1DCC7F185AB7195_OFFSET UNITYSDK_OFFSET(0x18B91CF0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C1F575FC3694C7C6_OFFSET UNITYSDK_OFFSET(0x18B8A6E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C4E952BFD2EEFB86_OFFSET UNITYSDK_OFFSET(0x18B8D590)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18B91360)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x18B8E1A0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C945371A5F864F32_OFFSET UNITYSDK_OFFSET(0x18B8F5A0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18B8C680)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18B88A50)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B8B1E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CDE48EC67EC8B816_OFFSET UNITYSDK_OFFSET(0x18B8AFF0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CE5440016BE3E435_OFFSET UNITYSDK_OFFSET(0x18B92010)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CF01D2E2F3ECA2EB_OFFSET UNITYSDK_OFFSET(0x18B91370)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D0D92EB944171707_OFFSET UNITYSDK_OFFSET(0x18B8B140)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x18B8CA30)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x18B8D740)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D5656AACE338BA84_OFFSET UNITYSDK_OFFSET(0x18B8F350)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x18B91280)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x18B89CA0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_E34E48F8D8B4C6CD_OFFSET UNITYSDK_OFFSET(0x18B8DDF0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_E69B231BFADF9D9E_OFFSET UNITYSDK_OFFSET(0x18B8A220)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x18B8EC50)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18B91340)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x18B8FB30)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FAB028732F84DE2E_OFFSET UNITYSDK_OFFSET(0x18B8F870)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FAC9E47494F5EA3E_OFFSET UNITYSDK_OFFSET(0x18B91CE0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0x18B8C9C0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x18B88900)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FF396CC145481CA0_OFFSET UNITYSDK_OFFSET(0x18B8A3B0)
#define CLASS_2_4C1AAFE95CDED36F_TICK_OFFSET UNITYSDK_OFFSET(0x18B89140)
#define CLASS_2_4C1AAFE95CDED36F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B92AD0)
#define CLASS_2_4C1AAFE95CDED36F__CTOR_OFFSET UNITYSDK_OFFSET(0x18B929C0)
#define CLASS_2_4C1AAFE95CDED36F__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x18B8A680)

inline static constexpr unsigned int Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex = 57308;

class Class_2_4C1AAFE95CDED36F : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_KHJLCBEHBKP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex)->GetStaticField(0x2A270);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CKAKLNIOGMD()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex)->GetStaticField(0x2A278);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_AGDADAPFPBE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex)->GetStaticField(0x2A280);
	}
	static ::System::Int32* StaticGet_PCJKODHLJDH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex)->GetStaticField(0xC5E0);
	}
	// static const ::System::Single KIJHHAKOFJB; // 0x0
	// static const ::System::String* PDAIEIIIBNL; // 0x0
	// static const ::System::UInt64 FFIIOOMAHIE = 0xF; // 0x0
	// static const ::System::Single OMPECPKKMDO; // 0x0
	// static const ::System::Single MKLINEEIPJE; // 0x0
	// static const ::System::Single NOOHOHFMMGH; // 0x0
	// static const ::System::Int32 HGMKIECNDNG = 0x2; // 0x0
	// static const ::System::Single FDGEKFKFMKJ; // 0x0
	::RPG::Client::Promises::Promise* LPOMLIBIIFG; // 0x18
	::System::Collections::Generic::List_1<::Class_2_4C1AAFE95CDED36F_Class_1_F7B02896ED1CED39*>* KKIDEPMAOPC; // 0x20
	::System::Action_1<::UnityEngine::GameObject*>* ADIEANHBNCH; // 0x28
	::RPG::Client::Promises::Promise* PDDAMDMEKLL; // 0x30
	::UnityEngine::RuntimeAnimatorController* AJLHCGPNHDP; // 0x38
	::RPG::CustomRP::CapsuleOcclusion* OHPOJAJAABM; // 0x40
	::RPG::GameCore::LevelNPCPossessionInfo* IKEFNLNEDHG; // 0x48
	::System::Action_1<::System::Boolean>* DEOAJCAJNAG; // 0x50
	::System::Action* OOILHGPFKFI; // 0x58
	::UnityEngine::Transform* GKFGIBOKBNA; // 0x60
	::RPG::Client::Promises::Promise* DLABBOIOJHM; // 0x68
	::RPG::Client::Promises::Promise* OGCGOLDDMJF; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* AJGGGLMIAGP; // 0x78
	::System::Collections::Generic::HashSet_1<::System::String*>* OBEELKEPMIB; // 0x80
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NEMJAFALHIE; // 0x88
	::Class_1_D27BF54F25500E5F* CPLHJNGFBPI; // 0x90
	::RPG::Client::RootMotionHandler* ALKMPEBIMHH; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MCJPJBHPMLN; // 0xA0
	::RPG::Client::AttachPointMapping* JHKPNLBBHII; // 0xA8
	::System::Action* FBMAMCJJNGD; // 0xB0
	::Class_2_4C1AAFE95CDED36F_Class_1_383CFFE0A2300D35* AJNGECOMNCP; // 0xB8
	::RPG::Client::Promises::Promise* EDPKLGPGPHP; // 0xC0
	::UnityEngine::GameObject* FCGBJLKJIML; // 0xC8
	::System::Action* OHALDCMLCGD; // 0xD0
	::Il2CppArray<::Class_2_4C1AAFE95CDED36F_Class_1_383CFFE0A2300D35*>* DEAGOMKCHBA; // 0xD8
	::UnityEngine::GameObject* HMKIDOJEMOD; // 0xE0
	::UnityEngine::CapsuleCollider* PLDHIKGPHKG; // 0xE8
	::System::String* LKKIDIGPODD; // 0xF0
	::Class_2_7851016F65A0A1D3* NOGMEJIFLKG; // 0xF8
	::RPG::Client::CharacterShaderPropertyTransition* GMKNPOLBNDL; // 0x100
	::System::String* IKONEPBNKAK; // 0x108
	::RPG::Client::AssemNPC* EJJEEJENLDA; // 0x110
	::RPG::GameCore::LodTemplate* OFDBCCKEJNC; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* KOAMHEEBCEM; // 0x120
	::System::String* OMIGKGPDBEB; // 0x128
	::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* PCBOGEDJPDC; // 0x130
	::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x138
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HJDBFDAMKGA; // 0x140
	::UnityEngine::Transform* BCHMBHEMFAK; // 0x148
	::System::Action_1<::Class_2_4C1AAFE95CDED36F*>* LEEEFJLOCBA; // 0x150
	::System::Single NIEDCECMIJF; // 0x158
	::System::Single EELMOBKJOIG; // 0x15C
	::System::Single BFBCJKGHDBK; // 0x160
	::UnityEngine::Bounds KMNGINGCEAA; // 0x164
	::Class_2_4C1AAFE95CDED36F_MeshLodState DEBLDGGNAOK; // 0x17C
	::System::Single EHOIDNKOPEJ; // 0x180
	::System::Int32 HKCLOFPACEA; // 0x184
	::System::Int32 AALKEOFKNGD; // 0x188
	::System::Boolean PJOBJLOMAEO; // 0x18C
	::System::Boolean AKALCNGFMMN; // 0x18D
	::System::Boolean NFHCFAGJOOK; // 0x18E
	::System::Boolean AGLBOKHNPCH; // 0x18F
	::RPG::Client::EAssemblyNPC DKHKDBJPNJA; // 0x190
	::System::UInt32 NFHCLBBACEM; // 0x194
	::UnityEngine::Bounds FDCHJBMNDIG; // 0x198
	::System::Boolean IKJBOMPBNCO; // 0x1B0
	::System::Boolean GCBPHOGOBIK; // 0x1B1
	::System::Boolean LJLIEPHEBEM; // 0x1B2
	::System::Boolean NEPADOGCPCA; // 0x1B3
	::System::Boolean NPEMLPCDKGK; // 0x1B4
	::System::Boolean PICDHEHHIHD; // 0x1B5
	::System::Boolean MDEMEIIFKNA; // 0x1B6
	::UnityEngine::Vector3 LOLMFMLEEMF; // 0x1B8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69B231BFADF9D9E(::RPG::GameCore::ColliderConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_E69B231BFADF9D9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_2_FF396CC145481CA0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_FF396CC145481CA0_OFFSET))(this, a1);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_C1F575FC3694C7C6(::RPG::Client::AssemNPC* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a3, ::RPG::Client::EAssemblyNPC a4, ::System::String* a5, ::UnityEngine::Vector3 a6, ::System::UInt32 a7, ::System::Action_1<::Class_2_4C1AAFE95CDED36F*>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::RPG::Client::EAssemblyNPC, ::System::String*, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action_1<::Class_2_4C1AAFE95CDED36F*>*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_C1F575FC3694C7C6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_CDE48EC67EC8B816(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_CDE48EC67EC8B816_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0D92EB944171707(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_D0D92EB944171707_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3B5E81E976A08A3C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_3B5E81E976A08A3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CDC51540437DD98(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_8CDC51540437DD98_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_2DA8F7A684C1DC34_OFFSET))(this);
	}

	::System::Void Method_2_8A539D69F21DC076(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_8A539D69F21DC076_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_1F655EBEB7FDED48(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_1F655EBEB7FDED48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C7C0C356764D132(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_4C7C0C356764D132_OFFSET))(this, a1);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_06267C126D4B4C5C(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_06267C126D4B4C5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04104768F6747276(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_04104768F6747276_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_FDF9B21BA16000B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_FDF9B21BA16000B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EA2E124EC6BB35D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_3EA2E124EC6BB35D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_AF01F8739A3CF255(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_AF01F8739A3CF255_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4E952BFD2EEFB86(::UnityEngine::Material* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_C4E952BFD2EEFB86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E34E48F8D8B4C6CD(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_E34E48F8D8B4C6CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_B842A9DFEDAC123D(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_B842A9DFEDAC123D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_921D76FF0E2DE65A(::RPG::Client::AssetsPathDict* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetsPathDict*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_921D76FF0E2DE65A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Void Method_2_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_106289055FB804CE_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_2_FAB028732F84DE2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_FAB028732F84DE2E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_0C6D78F7FB2736C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_0C6D78F7FB2736C2_OFFSET))(this);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_8C59F7D3E1C9AD45(::Il2CppArray<::System::UInt64>* a1, ::UnityEngine::SkinnedMeshRenderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_8C59F7D3E1C9AD45_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_2_D5656AACE338BA84(::System::UInt64 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_D5656AACE338BA84_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_2A83FA3713ACC6E3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_2A83FA3713ACC6E3_OFFSET))(this);
	}

	::System::Void Method_2_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_2_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::Void Method_2_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_07BB45288DFF8852_OFFSET))(this);
	}

	::System::String* Method_2_1798FAFF45053267()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_1798FAFF45053267_OFFSET))(this);
	}

	::System::Boolean Method_2_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_B79DA769B6339F91()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_B79DA769B6339F91_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_840AE46076A1E83D()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_840AE46076A1E83D_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_69FE97E37001374E()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_69FE97E37001374E_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_6A10A8C0CF4C12F8()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_6A10A8C0CF4C12F8_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_00B0C3696348F6A5()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_00B0C3696348F6A5_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_53DB07E6A775B398(::System::String* a1, ::System::Action_1<::Class_1_004034A1FAAF468A*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_004034A1FAAF468A*>*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_53DB07E6A775B398_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EntityLoadState get_LoadState()
	{
		return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_GET_LOADSTATE_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelGO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_GETMODELGO_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelArt()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_GETMODELART_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* get_MockAnimator()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_GET_MOCKANIMATOR_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::EAssemblyNPC Method_2_6EF931044531D2E5()
	{
		return ((::RPG::Client::EAssemblyNPC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_6EF931044531D2E5_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::AttachPointMapping* Method_2_CF01D2E2F3ECA2EB()
	{
		return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_CF01D2E2F3ECA2EB_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_A42DF918B496327B(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_A42DF918B496327B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_62A8F853B70537CB(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_62A8F853B70537CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_55B8349E0B606444_OFFSET))(this);
	}

	::RPG::Client::RootMotionHandler* Method_2_FAC9E47494F5EA3E()
	{
		return ((::RPG::Client::RootMotionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_FAC9E47494F5EA3E_OFFSET))(this);
	}

	::System::Void Method_2_C1DCC7F185AB7195(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_C1DCC7F185AB7195_OFFSET))(this, a1);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_2_C945371A5F864F32(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_C945371A5F864F32_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_19D21DC63CFC45D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_19D21DC63CFC45D5_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_CE5440016BE3E435(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_CE5440016BE3E435_OFFSET))(this, a1);
	}

	::System::Void Method_2_08C689627757D0F9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_08C689627757D0F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_2_5538EA44CE08411A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_5538EA44CE08411A_OFFSET))(this);
	}

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_2_D0DF0505F244B465()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_D0DF0505F244B465_OFFSET))(this);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9999439DB2F3546()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_B9999439DB2F3546_OFFSET))(this);
	}
};
