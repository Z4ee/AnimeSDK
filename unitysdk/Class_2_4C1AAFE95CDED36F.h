#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4C1AAFE95CDED36F_MeshLodState.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_5DF5F62C68EF718F;
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

#define CLASS_2_4C1AAFE95CDED36F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1645B4A0)
#define CLASS_2_4C1AAFE95CDED36F_GETMODELART_OFFSET UNITYSDK_OFFSET(0x16464230)
#define CLASS_2_4C1AAFE95CDED36F_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x164641F0)
#define CLASS_2_4C1AAFE95CDED36F_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x16464190)
#define CLASS_2_4C1AAFE95CDED36F_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x164636D0)
#define CLASS_2_4C1AAFE95CDED36F_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1645CD50)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_00B0C3696348F6A5_OFFSET UNITYSDK_OFFSET(0x16463D10)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_06267C126D4B4C5C_OFFSET UNITYSDK_OFFSET(0x1645F7B0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_07BB45288DFF8852_1_OFFSET UNITYSDK_OFFSET(0x1645BD40)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x16462870)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_08C689627757D0F9_OFFSET UNITYSDK_OFFSET(0x16465100)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x164606F0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16464320)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1645C740)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0x1645DB30)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_19D21DC63CFC45D5_OFFSET UNITYSDK_OFFSET(0x164652F0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x16464D40)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x1645F4A0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_1F655EBEB7FDED48_OFFSET UNITYSDK_OFFSET(0x1645EBB0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_2A83FA3713ACC6E3_OFFSET UNITYSDK_OFFSET(0x1645BA00)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x1645D430)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_31CF74C95A00A473_OFFSET UNITYSDK_OFFSET(0x1645E150)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16461610)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_3EA2E124EC6BB35D_OFFSET UNITYSDK_OFFSET(0x1645FF80)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16461710)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_44E333B89070AEB1_OFFSET UNITYSDK_OFFSET(0x164601A0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1645C8A0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x16465570)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4C7C0C356764D132_OFFSET UNITYSDK_OFFSET(0x1645F2C0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4DC82A9142FBF27F_OFFSET UNITYSDK_OFFSET(0x16461E20)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x16461470)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_53DB07E6A775B398_OFFSET UNITYSDK_OFFSET(0x16463FB0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_5538EA44CE08411A_OFFSET UNITYSDK_OFFSET(0x16465180)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x16462E70)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_62A8F853B70537CB_OFFSET UNITYSDK_OFFSET(0x16464420)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x1645E930)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_69FE97E37001374E_OFFSET UNITYSDK_OFFSET(0x16463520)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_6A10A8C0CF4C12F8_OFFSET UNITYSDK_OFFSET(0x16463800)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_6EF931044531D2E5_OFFSET UNITYSDK_OFFSET(0x16464340)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x16463EB0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_840AE46076A1E83D_OFFSET UNITYSDK_OFFSET(0x16463200)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_8A539D69F21DC076_OFFSET UNITYSDK_OFFSET(0x1645E4D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x1645BA50)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_8C59F7D3E1C9AD45_OFFSET UNITYSDK_OFFSET(0x16462380)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x164627E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x1645E3C0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x1645C6A0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_9E5B0F103392BFCD_OFFSET UNITYSDK_OFFSET(0x16461D70)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_A42DF918B496327B_OFFSET UNITYSDK_OFFSET(0x16464370)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x164618B0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x164655E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x16460F70)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x164629A0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x1645CB50)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1645DCD0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x164628E0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B6A361CE5F0F7EC1_OFFSET UNITYSDK_OFFSET(0x1645E470)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B79DA769B6339F91_OFFSET UNITYSDK_OFFSET(0x164600D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_B9999439DB2F3546_OFFSET UNITYSDK_OFFSET(0x1645FD80)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x1645D370)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x1645BBA0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x1645F1A0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C1DCC7F185AB7195_OFFSET UNITYSDK_OFFSET(0x16464CF0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C1F575FC3694C7C6_OFFSET UNITYSDK_OFFSET(0x1645D5D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C4E952BFD2EEFB86_OFFSET UNITYSDK_OFFSET(0x16460480)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16464350)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x164610D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_C945371A5F864F32_OFFSET UNITYSDK_OFFSET(0x16462510)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1645F570)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1645B9C0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1645E100)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CD2C14924A8D6B44_OFFSET UNITYSDK_OFFSET(0x1645F5F0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CDE48EC67EC8B816_OFFSET UNITYSDK_OFFSET(0x1645DF10)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CE5440016BE3E435_OFFSET UNITYSDK_OFFSET(0x16465010)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_CF01D2E2F3ECA2EB_OFFSET UNITYSDK_OFFSET(0x16464360)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D0D92EB944171707_OFFSET UNITYSDK_OFFSET(0x1645E060)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x1645F8D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x16460640)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D5656AACE338BA84_OFFSET UNITYSDK_OFFSET(0x164622D0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x16464270)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_E34E48F8D8B4C6CD_OFFSET UNITYSDK_OFFSET(0x16460D30)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_E69B231BFADF9D9E_OFFSET UNITYSDK_OFFSET(0x1645D110)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x16461B80)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16464330)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x16462B10)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FAC9E47494F5EA3E_OFFSET UNITYSDK_OFFSET(0x16464CE0)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0x1645F860)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x1645B870)
#define CLASS_2_4C1AAFE95CDED36F_METHOD_2_FF396CC145481CA0_OFFSET UNITYSDK_OFFSET(0x1645D2A0)
#define CLASS_2_4C1AAFE95CDED36F_TICK_OFFSET UNITYSDK_OFFSET(0x1645C0B0)
#define CLASS_2_4C1AAFE95CDED36F__CCTOR_OFFSET UNITYSDK_OFFSET(0x16465AE0)
#define CLASS_2_4C1AAFE95CDED36F__CTOR_OFFSET UNITYSDK_OFFSET(0x164659D0)
#define CLASS_2_4C1AAFE95CDED36F__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1645D570)

inline static constexpr unsigned int Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex = 57144;

class Class_2_4C1AAFE95CDED36F : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_AGDADAPFPBE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex)->GetStaticField(0x607D0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CKAKLNIOGMD()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex)->GetStaticField(0x607D8);
	}
	static ::System::String** StaticGet_KHJLCBEHBKP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex)->GetStaticField(0x607E0);
	}
	static ::System::Int32* StaticGet_PCJKODHLJDH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C1AAFE95CDED36F_TypeDefinitionIndex)->GetStaticField(0x149D0);
	}
	// static const ::System::Single KIJHHAKOFJB; // 0x0
	// static const ::System::String* PDAIEIIIBNL; // 0x0
	// static const ::System::UInt64 FFIIOOMAHIE = 0xF; // 0x0
	// static const ::System::Single OMPECPKKMDO; // 0x0
	// static const ::System::Single MKLINEEIPJE; // 0x0
	// static const ::System::Single NOOHOHFMMGH; // 0x0
	// static const ::System::Int32 HGMKIECNDNG = 0x2; // 0x0
	// static const ::System::Single FDGEKFKFMKJ; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NEMJAFALHIE; // 0x18
	::RPG::Client::AttachPointMapping* JHKPNLBBHII; // 0x20
	::RPG::GameCore::LodTemplate* OFDBCCKEJNC; // 0x28
	::System::String* OMIGKGPDBEB; // 0x30
	::UnityEngine::Transform* BCHMBHEMFAK; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MCJPJBHPMLN; // 0x40
	::System::Action_1<::System::Boolean>* DEOAJCAJNAG; // 0x48
	::RPG::Client::Promises::Promise* LPOMLIBIIFG; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* AJGGGLMIAGP; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HJDBFDAMKGA; // 0x60
	::UnityEngine::RuntimeAnimatorController* AJLHCGPNHDP; // 0x68
	::UnityEngine::GameObject* HMKIDOJEMOD; // 0x70
	::RPG::Client::Promises::Promise* OGCGOLDDMJF; // 0x78
	::Il2CppArray<::Class_2_4C1AAFE95CDED36F_Class_1_383CFFE0A2300D35*>* DEAGOMKCHBA; // 0x80
	::System::Action* FBMAMCJJNGD; // 0x88
	::System::Action_1<::UnityEngine::GameObject*>* ADIEANHBNCH; // 0x90
	::RPG::Client::Promises::Promise* PDDAMDMEKLL; // 0x98
	::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* PCBOGEDJPDC; // 0xA0
	::RPG::Client::MockAnimator* CBPLANOPAPP; // 0xA8
	::RPG::CustomRP::CapsuleOcclusion* OHPOJAJAABM; // 0xB0
	::System::String* LKKIDIGPODD; // 0xB8
	::System::String* IKONEPBNKAK; // 0xC0
	::Class_1_5DF5F62C68EF718F* CPLHJNGFBPI; // 0xC8
	::Class_2_7851016F65A0A1D3* NOGMEJIFLKG; // 0xD0
	::RPG::GameCore::LevelNPCPossessionInfo* IKEFNLNEDHG; // 0xD8
	::System::Action* OHALDCMLCGD; // 0xE0
	::RPG::Client::RootMotionHandler* ALKMPEBIMHH; // 0xE8
	::System::Action* OOILHGPFKFI; // 0xF0
	::System::Action_1<::Class_2_4C1AAFE95CDED36F*>* LEEEFJLOCBA; // 0xF8
	::RPG::Client::CharacterShaderPropertyTransition* GMKNPOLBNDL; // 0x100
	::UnityEngine::CapsuleCollider* PLDHIKGPHKG; // 0x108
	::Class_2_4C1AAFE95CDED36F_Class_1_383CFFE0A2300D35* AJNGECOMNCP; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* KOAMHEEBCEM; // 0x118
	::UnityEngine::GameObject* FCGBJLKJIML; // 0x120
	::RPG::Client::Promises::Promise* EDPKLGPGPHP; // 0x128
	::UnityEngine::Transform* GKFGIBOKBNA; // 0x130
	::System::Collections::Generic::List_1<::Class_2_4C1AAFE95CDED36F_Class_1_F7B02896ED1CED39*>* KKIDEPMAOPC; // 0x138
	::System::Collections::Generic::HashSet_1<::System::String*>* OBEELKEPMIB; // 0x140
	::RPG::Client::AssemNPC* EJJEEJENLDA; // 0x148
	::RPG::Client::Promises::Promise* DLABBOIOJHM; // 0x150
	::Class_2_4C1AAFE95CDED36F_MeshLodState DEBLDGGNAOK; // 0x158
	::System::Boolean MDEMEIIFKNA; // 0x15C
	::System::Boolean PICDHEHHIHD; // 0x15D
	::System::Boolean AGLBOKHNPCH; // 0x15E
	::System::Single BFBCJKGHDBK; // 0x160
	::System::Boolean LJLIEPHEBEM; // 0x164
	::System::Boolean PJOBJLOMAEO; // 0x165
	::System::Boolean NPEMLPCDKGK; // 0x166
	::System::Boolean NFHCFAGJOOK; // 0x167
	::System::Int32 AALKEOFKNGD; // 0x168
	::System::Single NIEDCECMIJF; // 0x16C
	::System::Single EELMOBKJOIG; // 0x170
	::UnityEngine::Vector3 LOLMFMLEEMF; // 0x174
	::UnityEngine::Bounds KMNGINGCEAA; // 0x180
	::System::UInt32 NFHCLBBACEM; // 0x198
	::RPG::Client::EAssemblyNPC DKHKDBJPNJA; // 0x19C
	::System::Int32 HKCLOFPACEA; // 0x1A0
	::System::Single EHOIDNKOPEJ; // 0x1A4
	::System::Boolean NEPADOGCPCA; // 0x1A8
	::System::Boolean AKALCNGFMMN; // 0x1A9
	::System::Boolean IKJBOMPBNCO; // 0x1AA
	::System::Boolean GCBPHOGOBIK; // 0x1AB
	::UnityEngine::Bounds FDCHJBMNDIG; // 0x1AC

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

	::System::Void Method_2_31CF74C95A00A473(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_31CF74C95A00A473_OFFSET))(this, a1);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6A361CE5F0F7EC1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_B6A361CE5F0F7EC1_OFFSET))(this, a1);
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

	::System::Void Method_2_CD2C14924A8D6B44(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_CD2C14924A8D6B44_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_2_44E333B89070AEB1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_44E333B89070AEB1_OFFSET))(this, a1);
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

	::System::Void Method_2_9E5B0F103392BFCD(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_9E5B0F103392BFCD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4DC82A9142FBF27F(::RPG::Client::AssetsPathDict* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetsPathDict*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_4DC82A9142FBF27F_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_07BB45288DFF8852_OFFSET))(this);
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

	::System::Void Method_2_07BB45288DFF8852_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_07BB45288DFF8852_1_OFFSET))(this);
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

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F_METHOD_2_AA7E3074254D484A_OFFSET))(this);
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
