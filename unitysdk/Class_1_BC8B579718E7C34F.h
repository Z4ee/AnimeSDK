#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68C7EAEDA46C0580_PlayerMoveState.h"
#include "unitysdk/Class_1_BC8B579718E7C34F_Struct_2_413C98E7F0821DC8.h"
#include "unitysdk/Class_1_BC8B579718E7C34F_Struct_2_A33DC0B627E76100.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_63D18ECF87218619_1;
class Class_1_AF85D707C83D7C65;
class Class_2_1A8148841049062A;
class Class_2_31D39E0B0ADFB12E;
class Class_2_B8E38BF47138A2E5;
class Class_3_79A4F66B82C02A5E;
class Class_3_912CC478F2B21832;
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAutoRotateStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelMoveStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayer_1; }
namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BC8B579718E7C34F_GET_ISROOM2DBRICKPOSITIONFROZEN_OFFSET UNITYSDK_OFFSET(0x157E7510)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_07E2FCA369DB3777_OFFSET UNITYSDK_OFFSET(0x157EFE10)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x157F8F30)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_0A81C702A12F4B5F_OFFSET UNITYSDK_OFFSET(0x157F1740)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_0C65D29C3029253B_OFFSET UNITYSDK_OFFSET(0x157F6F60)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_0D22A3D9A4E6E0F0_OFFSET UNITYSDK_OFFSET(0x157F7EB0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0x157F9410)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_0E8FD277F344B6A3_OFFSET UNITYSDK_OFFSET(0x157EED20)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_0F8615B009348205_OFFSET UNITYSDK_OFFSET(0x157F2830)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_0FA339C47E5FB85A_OFFSET UNITYSDK_OFFSET(0x157F0360)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_1161B0E93F7E44AD_OFFSET UNITYSDK_OFFSET(0x157EB850)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_13230F274612BEE7_OFFSET UNITYSDK_OFFSET(0x157E8D30)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_1A2D74AC95C4AFA7_OFFSET UNITYSDK_OFFSET(0x157FADE0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_1ED96054E68B43D8_OFFSET UNITYSDK_OFFSET(0x157E9030)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_253C87DD767F8176_OFFSET UNITYSDK_OFFSET(0x157FAF00)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_2AB429693F749433_OFFSET UNITYSDK_OFFSET(0x157F2240)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_2C4CA79B306A10BC_1_OFFSET UNITYSDK_OFFSET(0x157EEE70)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_2C4CA79B306A10BC_OFFSET UNITYSDK_OFFSET(0x157EEC80)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_2D4080469E04AB49_OFFSET UNITYSDK_OFFSET(0x157EC240)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_308256B080E11A25_OFFSET UNITYSDK_OFFSET(0x157F8310)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_30D64079E0B7D0C5_OFFSET UNITYSDK_OFFSET(0x157FA6B0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_3265B427FAD2DFA4_OFFSET UNITYSDK_OFFSET(0x157F6CE0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_345670C395EAE93C_OFFSET UNITYSDK_OFFSET(0x157EFE70)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_34D62C3A30DB2CCC_OFFSET UNITYSDK_OFFSET(0x157F50B0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_390A3BF91EA63349_OFFSET UNITYSDK_OFFSET(0x157F54A0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_3CE1C86495294AD0_OFFSET UNITYSDK_OFFSET(0x157FBE40)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_3F5AC78AAC9E76D1_OFFSET UNITYSDK_OFFSET(0x157EF520)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_40E67CBB89CCD844_OFFSET UNITYSDK_OFFSET(0x157EBE40)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_41759F017C64D9BA_OFFSET UNITYSDK_OFFSET(0x157F0660)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x157FAB50)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_457E83E18154D4E2_OFFSET UNITYSDK_OFFSET(0x157F5660)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x157F8AC0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_51913D92E7F0D95F_OFFSET UNITYSDK_OFFSET(0x157E87F0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_5583457303B61230_OFFSET UNITYSDK_OFFSET(0x157EAD40)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_5A85A045B5C25969_OFFSET UNITYSDK_OFFSET(0x157FC180)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_5BF933E10BDAEED5_OFFSET UNITYSDK_OFFSET(0x157F7940)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_5D6318C6D37F3318_OFFSET UNITYSDK_OFFSET(0x157F07B0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_627D67C0054186C7_1_OFFSET UNITYSDK_OFFSET(0x157EBCA0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_627D67C0054186C7_OFFSET UNITYSDK_OFFSET(0x157EB6B0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_63D05C92B1AEAD00_OFFSET UNITYSDK_OFFSET(0x157F8670)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_64DE0FE58F1F8FA1_OFFSET UNITYSDK_OFFSET(0x157E94F0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_68F4C7AD8B57681F_OFFSET UNITYSDK_OFFSET(0x157F5010)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_6A01BE48CAE79AE4_OFFSET UNITYSDK_OFFSET(0x157EE200)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_6A8F37D861D3117E_OFFSET UNITYSDK_OFFSET(0x157F81E0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_6C29EC6C4FB286CA_OFFSET UNITYSDK_OFFSET(0x157F27C0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_76060C53AC0F1320_OFFSET UNITYSDK_OFFSET(0x157F14D0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_7AFF75FA3F5298F9_1_OFFSET UNITYSDK_OFFSET(0x157EDA90)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_7AFF75FA3F5298F9_OFFSET UNITYSDK_OFFSET(0x157ED430)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_7CC4F997DC67CE58_OFFSET UNITYSDK_OFFSET(0x157EF9B0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_7F8737C0F4880F3A_OFFSET UNITYSDK_OFFSET(0x157F0060)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_7FB39A825F98A4CE_OFFSET UNITYSDK_OFFSET(0x157FB800)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_81A00FB59F21F39A_OFFSET UNITYSDK_OFFSET(0x157EBEF0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_838FFECB7252F908_OFFSET UNITYSDK_OFFSET(0x157FB370)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_85CEC01297BC77B7_OFFSET UNITYSDK_OFFSET(0x157F43E0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_87F6F97B62BFF6BE_OFFSET UNITYSDK_OFFSET(0x157F7C00)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_88E6494389A0E18D_OFFSET UNITYSDK_OFFSET(0x157EAC60)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_8CE272B32F0A27C1_OFFSET UNITYSDK_OFFSET(0x157F7CE0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_8D5A30D3C3C72786_OFFSET UNITYSDK_OFFSET(0x157F52E0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x157F9D10)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_984686AB37D81664_OFFSET UNITYSDK_OFFSET(0x157F09C0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_99BFFB95CB370717_OFFSET UNITYSDK_OFFSET(0x157F9D80)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_9A905A114E858EC9_1_OFFSET UNITYSDK_OFFSET(0x157EBDC0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_9A905A114E858EC9_OFFSET UNITYSDK_OFFSET(0x157EB7D0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_9B78EADB6CBA8DA3_OFFSET UNITYSDK_OFFSET(0x157EAF40)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_A0CD5E82FD180A5C_OFFSET UNITYSDK_OFFSET(0x157F1340)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_A21CCBFEF665AE17_OFFSET UNITYSDK_OFFSET(0x157EE0F0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_A54AFA66C2AE094E_OFFSET UNITYSDK_OFFSET(0x157EC6D0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_A57E8037DA363460_OFFSET UNITYSDK_OFFSET(0x157F0D40)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_A682E540F239EE22_OFFSET UNITYSDK_OFFSET(0x157FA100)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_A703BEBEEBA84608_OFFSET UNITYSDK_OFFSET(0x157E93A0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_A905D8F306FC49FA_OFFSET UNITYSDK_OFFSET(0x157F53B0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_AE7ED66E308FBE31_OFFSET UNITYSDK_OFFSET(0x157F83F0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_B2C0A1472249C2C9_OFFSET UNITYSDK_OFFSET(0x157FBFD0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_B648361BDE5D7BEF_OFFSET UNITYSDK_OFFSET(0x157EE510)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_C1A1C0D853298445_OFFSET UNITYSDK_OFFSET(0x157F30E0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_C1CF4BC7AC887E28_OFFSET UNITYSDK_OFFSET(0x157EBA80)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_C3B2744B7BE9741B_OFFSET UNITYSDK_OFFSET(0x157F1F00)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x157EB600)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_C40AFA4544A00707_OFFSET UNITYSDK_OFFSET(0x157E9280)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_C4517A8F398274D4_OFFSET UNITYSDK_OFFSET(0x157EB110)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_C79229E2A8E704DC_OFFSET UNITYSDK_OFFSET(0x157FB990)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_CAAF4F77CA410C4E_OFFSET UNITYSDK_OFFSET(0x157F0FB0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_CB14CB246A68B57D_OFFSET UNITYSDK_OFFSET(0x157EC460)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_CF80C7DDFEF57212_OFFSET UNITYSDK_OFFSET(0x157EC900)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x157ED2F0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_D9F5295DDC8EAB8A_OFFSET UNITYSDK_OFFSET(0x157F87F0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_DA30A0B05EC94CB6_OFFSET UNITYSDK_OFFSET(0x157E78F0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_DA42C4445A7680B5_OFFSET UNITYSDK_OFFSET(0x157F7490)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_DD5E92A843CB1E51_OFFSET UNITYSDK_OFFSET(0x157F4470)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_DED36E1E92B63140_OFFSET UNITYSDK_OFFSET(0x157FA0A0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_E9FAA83D7480ADB8_OFFSET UNITYSDK_OFFSET(0x157E89A0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x157F8FD0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_EB11725F2157AE47_OFFSET UNITYSDK_OFFSET(0x157FA5A0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0x157ED1F0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_EDED60956BA01FF8_OFFSET UNITYSDK_OFFSET(0x157FABB0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x157F9D00)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x157F7E40)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_F79468725180408A_OFFSET UNITYSDK_OFFSET(0x157F0AF0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_F7A87090A3E5967E_OFFSET UNITYSDK_OFFSET(0x157F57B0)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_F810E24CF2454F51_OFFSET UNITYSDK_OFFSET(0x157F1C40)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x157F9B10)
#define CLASS_1_BC8B579718E7C34F_METHOD_1_FB634204A436EAF2_OFFSET UNITYSDK_OFFSET(0x157EEF10)
#define CLASS_1_BC8B579718E7C34F_SET_ISROOM2DBRICKPOSITIONFROZEN_OFFSET UNITYSDK_OFFSET(0x157E7520)
#define CLASS_1_BC8B579718E7C34F__CCTOR_OFFSET UNITYSDK_OFFSET(0x157FC300)
#define CLASS_1_BC8B579718E7C34F__CTOR_OFFSET UNITYSDK_OFFSET(0x157E7530)

inline static constexpr unsigned int Class_1_BC8B579718E7C34F_TypeDefinitionIndex = 76243;

class Class_1_BC8B579718E7C34F : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_ABCDOHFCAAL()
	{
		return (::RPG::Client::RPGProfilerMarkerWithIntData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC8B579718E7C34F_TypeDefinitionIndex)->GetStaticField(0x496D0);
	}
	static ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>** StaticGet_IBBANLMKOKA()
	{
		return (::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC8B579718E7C34F_TypeDefinitionIndex)->GetStaticField(0x496D8);
	}
	static ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>** StaticGet_JEFABMFHDJI()
	{
		return (::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC8B579718E7C34F_TypeDefinitionIndex)->GetStaticField(0x496E0);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::Transform*>* NGCEDPAKDIF; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* JDHAKIMLHLF; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_2_1A8148841049062A*, ::Class_1_BC8B579718E7C34F_Struct_2_A33DC0B627E76100>* IIOHBHBHMPG; // 0x20
	::Class_2_31D39E0B0ADFB12E* JAJOGJKHAJP; // 0x28
	::System::Collections::Generic::List_1<::Class_1_BC8B579718E7C34F_Struct_2_413C98E7F0821DC8>* OKOJMMBNPNL; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::GameObject*>* LLNHGBNNLIJ; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* KEAALNDDKMH; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single>* IGBPDHIOGMM; // 0x48
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x50
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* BECOMJDJBDF; // 0x60
	::UnityEngine::Vector3 NJOMGIEKIMD; // 0x68
	::System::Int32 GODCHBLBDID; // 0x74
	::UnityEngine::Vector3 BCDGNDIBDPD; // 0x78
	::System::Boolean JLJJCHKMMEP; // 0x84
	::System::Boolean _IsRoom2DBrickPositionFrozen_k__BackingField; // 0x85
	::System::Boolean GHMOFEDKDGH; // 0x86
	::System::Boolean GHEPBNIHNKJ; // 0x87
	::System::Boolean HBLMFCAPOLO; // 0x88
	::System::Boolean JAHICJOIIFJ; // 0x89

	::System::Void _ctor(::Class_3_912CC478F2B21832* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_31D39E0B0ADFB12E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_912CC478F2B21832*, ::Class_1_2CDF619C23140440*, ::Class_2_31D39E0B0ADFB12E*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F__CCTOR_OFFSET))();
	}

	::System::Boolean get_IsRoom2DBrickPositionFrozen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_GET_ISROOM2DBRICKPOSITIONFROZEN_OFFSET))(this);
	}

	::System::Void set_IsRoom2DBrickPositionFrozen(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_SET_ISROOM2DBRICKPOSITIONFROZEN_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA30A0B05EC94CB6(::Class_1_AF85D707C83D7C65* a1, ::UnityEngine::GameObject* a2, ::Class_2_B8E38BF47138A2E5* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::UnityEngine::GameObject*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_DA30A0B05EC94CB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_64DE0FE58F1F8FA1(::Class_1_AF85D707C83D7C65* a1, ::Class_2_B8E38BF47138A2E5* a2, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_64DE0FE58F1F8FA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A703BEBEEBA84608(::Class_1_AF85D707C83D7C65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_A703BEBEEBA84608_OFFSET))(this, a1);
	}

	::Class_2_1A8148841049062A* Method_1_13230F274612BEE7(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::Class_2_B8E38BF47138A2E5* a3)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_13230F274612BEE7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5583457303B61230(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_5583457303B61230_OFFSET))(this, a1);
	}

	::Class_2_B8E38BF47138A2E5* Method_1_E9FAA83D7480ADB8(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView*, ::Class_2_B8E38BF47138A2E5*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_E9FAA83D7480ADB8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_B8E38BF47138A2E5* Method_1_51913D92E7F0D95F(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::Class_2_B8E38BF47138A2E5*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_51913D92E7F0D95F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C4517A8F398274D4(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_C4517A8F398274D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_627D67C0054186C7(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_627D67C0054186C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A905A114E858EC9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_9A905A114E858EC9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_627D67C0054186C7_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_627D67C0054186C7_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A905A114E858EC9_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_9A905A114E858EC9_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40E67CBB89CCD844(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_40E67CBB89CCD844_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Method_1_81A00FB59F21F39A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_81A00FB59F21F39A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C1CF4BC7AC887E28(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_C1CF4BC7AC887E28_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>* Method_1_2D4080469E04AB49(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_2D4080469E04AB49_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CB14CB246A68B57D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_CB14CB246A68B57D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1161B0E93F7E44AD(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_1161B0E93F7E44AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A54AFA66C2AE094E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_A54AFA66C2AE094E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CF80C7DDFEF57212(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_CF80C7DDFEF57212_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Single Method_1_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_EDACF3D84F32DDEF_OFFSET))(this);
	}

	::System::Single Method_1_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_D3CDDBF95A81E584_OFFSET))(this);
	}

	::System::Single Method_1_7AFF75FA3F5298F9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_7AFF75FA3F5298F9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_7AFF75FA3F5298F9_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_7AFF75FA3F5298F9_1_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_88E6494389A0E18D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::Class_2_B8E38BF47138A2E5* a3)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_88E6494389A0E18D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6A01BE48CAE79AE4(::Class_2_1A8148841049062A* a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_6A01BE48CAE79AE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9B78EADB6CBA8DA3(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_9B78EADB6CBA8DA3_OFFSET))(this, a1);
	}

	::Class_2_1A8148841049062A* Method_1_2C4CA79B306A10BC(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_2C4CA79B306A10BC_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_2C4CA79B306A10BC_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_2C4CA79B306A10BC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FB634204A436EAF2(::Class_2_1A8148841049062A* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_FB634204A436EAF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B648361BDE5D7BEF(::Class_2_1A8148841049062A* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_B648361BDE5D7BEF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7CC4F997DC67CE58(::Class_2_1A8148841049062A* a1, ::Class_2_1A8148841049062A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_7CC4F997DC67CE58_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0FA339C47E5FB85A(::Class_2_1A8148841049062A* a1, ::Class_2_1A8148841049062A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_0FA339C47E5FB85A_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_07E2FCA369DB3777(::Class_2_1A8148841049062A* a1, ::Class_2_1A8148841049062A* a2)
	{
		return ((::System::Void(*)(::Class_2_1A8148841049062A*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_07E2FCA369DB3777_OFFSET))(a1, a2);
	}

	::System::Void Method_1_7F8737C0F4880F3A(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_7F8737C0F4880F3A_OFFSET))(this, a1);
	}

	::System::Void Method_1_345670C395EAE93C(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_345670C395EAE93C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C40AFA4544A00707(::Class_2_1A8148841049062A* a1, ::Class_2_1A8148841049062A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_C40AFA4544A00707_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_0E8FD277F344B6A3(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a3, ::Class_2_B8E38BF47138A2E5* a4)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_0E8FD277F344B6A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_1A8148841049062A* Method_1_41759F017C64D9BA(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_41759F017C64D9BA_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_A21CCBFEF665AE17(::Class_1_AF85D707C83D7C65* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2, ::System::Boolean a3, ::Class_2_B8E38BF47138A2E5* a4)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_A21CCBFEF665AE17_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5D6318C6D37F3318(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_5D6318C6D37F3318_OFFSET))(this, a1);
	}

	::Class_2_1A8148841049062A* Method_1_984686AB37D81664(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_3_79A4F66B82C02A5E* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>* a7)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_3_79A4F66B82C02A5E*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_984686AB37D81664_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Nullable_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord> Method_1_F79468725180408A(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>* a5)
	{
		return ((::System::Nullable_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_F79468725180408A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_1A8148841049062A* Method_1_A57E8037DA363460(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a2, ::System::Int32 a3, ::Class_2_B8E38BF47138A2E5* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>* a8)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::System::Int32, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_A57E8037DA363460_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_CAAF4F77CA410C4E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_1_68C7EAEDA46C0580_PlayerMoveState a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_1_68C7EAEDA46C0580_PlayerMoveState, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_CAAF4F77CA410C4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A0CD5E82FD180A5C(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_A0CD5E82FD180A5C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_76060C53AC0F1320(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_1A8148841049062A* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_76060C53AC0F1320_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0A81C702A12F4B5F(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Collections::Generic::ISet_1<::System::String*>* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_0A81C702A12F4B5F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_F810E24CF2454F51(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Boolean a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4, ::System::Boolean a5, ::System::Collections::Generic::ISet_1<::System::String*>* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_F810E24CF2454F51_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_2AB429693F749433(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3, ::System::Collections::Generic::ISet_1<::System::String*>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_2AB429693F749433_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_1A8148841049062A* Method_1_0F8615B009348205(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a2, ::System::Collections::Generic::ISet_1<::System::String*>* a3, ::Class_2_B8E38BF47138A2E5* a4)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::System::Collections::Generic::ISet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_0F8615B009348205_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C3B2744B7BE9741B(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3, ::System::Boolean a4, ::System::Collections::Generic::ISet_1<::System::String*>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_C3B2744B7BE9741B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_C1A1C0D853298445(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*& a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>* a9, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a10, ::System::Boolean a11)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*&, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>*, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_C1A1C0D853298445_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Boolean Method_1_DD5E92A843CB1E51(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*& a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*&, ::System::Int32, ::System::Int32, ::System::Func_2<::Class_2_1A8148841049062A*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_DD5E92A843CB1E51_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Single Method_1_34D62C3A30DB2CCC(::Class_2_1A8148841049062A* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_1A8148841049062A*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_34D62C3A30DB2CCC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68F4C7AD8B57681F(::Class_2_1A8148841049062A* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A8148841049062A*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_68F4C7AD8B57681F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8D5A30D3C3C72786(::Class_2_1A8148841049062A* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A8148841049062A*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_8D5A30D3C3C72786_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_85CEC01297BC77B7(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::Class_2_1A8148841049062A* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_85CEC01297BC77B7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_390A3BF91EA63349(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_390A3BF91EA63349_OFFSET))(this, a1);
	}

	::System::Void Method_1_457E83E18154D4E2(::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_457E83E18154D4E2_OFFSET))(this, a1);
	}

	::Class_2_1A8148841049062A* Method_1_F7A87090A3E5967E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::Vector3 a9, ::System::Boolean a10)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_F7A87090A3E5967E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_3265B427FAD2DFA4(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_3265B427FAD2DFA4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0C65D29C3029253B(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_0C65D29C3029253B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DA42C4445A7680B5(::Class_1_63D18ECF87218619_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_63D18ECF87218619_1*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_DA42C4445A7680B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BF933E10BDAEED5(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_5BF933E10BDAEED5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Method_1_87F6F97B62BFF6BE(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_87F6F97B62BFF6BE_OFFSET))(this, a1);
	}

	::System::Single Method_1_8CE272B32F0A27C1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_8CE272B32F0A27C1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_0D22A3D9A4E6E0F0(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_0D22A3D9A4E6E0F0_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Method_1_6A8F37D861D3117E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_6A8F37D861D3117E_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* Method_1_308256B080E11A25(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_308256B080E11A25_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AE7ED66E308FBE31(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::UnityEngine::GameObject*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_AE7ED66E308FBE31_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_63D05C92B1AEAD00(::Class_2_B8E38BF47138A2E5* a1, ::UnityEngine::GameObject*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_63D05C92B1AEAD00_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D9F5295DDC8EAB8A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_D9F5295DDC8EAB8A_OFFSET))(this);
	}

	::System::Void Method_1_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_1ED96054E68B43D8(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_1ED96054E68B43D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Void Method_1_0E3D8071A5930FA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_0E3D8071A5930FA8_OFFSET))(this);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_99BFFB95CB370717(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_99BFFB95CB370717_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A682E540F239EE22(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_A682E540F239EE22_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EB11725F2157AE47(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_EB11725F2157AE47_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_EDED60956BA01FF8(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_EDED60956BA01FF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1A2D74AC95C4AFA7(::Class_2_1A8148841049062A* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_1A2D74AC95C4AFA7_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_DED36E1E92B63140(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Boolean(*)(::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_DED36E1E92B63140_OFFSET))(a1);
	}

	::System::Void Method_1_30D64079E0B7D0C5(::Class_1_BC8B579718E7C34F_Struct_2_413C98E7F0821DC8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BC8B579718E7C34F_Struct_2_413C98E7F0821DC8))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_30D64079E0B7D0C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_253C87DD767F8176(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_253C87DD767F8176_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_838FFECB7252F908(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::System::Boolean a3, ::Il2CppArray<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_838FFECB7252F908_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7FB39A825F98A4CE(::Class_2_B8E38BF47138A2E5* a1, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Collections::Generic::HashSet_1<::Class_2_1A8148841049062A*>*&))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_7FB39A825F98A4CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C79229E2A8E704DC(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_C79229E2A8E704DC_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_6C29EC6C4FB286CA(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::String*(*)(::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_6C29EC6C4FB286CA_OFFSET))(a1);
	}

	::System::Void Method_1_3F5AC78AAC9E76D1(::Class_2_1A8148841049062A* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>* a3, ::System::Boolean a4, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a5, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a6, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_3F5AC78AAC9E76D1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_A905D8F306FC49FA(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_A905D8F306FC49FA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A85A045B5C25969(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_5A85A045B5C25969_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0A1472249C2C9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_B2C0A1472249C2C9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3CE1C86495294AD0(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::Class_2_1A8148841049062A* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_BC8B579718E7C34F_METHOD_1_3CE1C86495294AD0_OFFSET))(this, a1, a2, a3);
	}
};
