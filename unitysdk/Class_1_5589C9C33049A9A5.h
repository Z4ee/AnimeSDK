#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68C7EAEDA46C0580_PlayerMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
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
class Class_3_D6E9A038FA23103A;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAutoRotateStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelMoveStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayer_1; }
namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5589C9C33049A9A5_METHOD_1_0079E6D5CE7CAC64_OFFSET UNITYSDK_OFFSET(0x139E67B0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_06F7ACE9FB1C8082_OFFSET UNITYSDK_OFFSET(0x139E5E40)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_0829051566F73E5F_OFFSET UNITYSDK_OFFSET(0x139ECA40)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_0C65D29C3029253B_OFFSET UNITYSDK_OFFSET(0x139EAA60)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_0DD4E0EFA987B972_OFFSET UNITYSDK_OFFSET(0x139E7440)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_0E8FD277F344B6A3_OFFSET UNITYSDK_OFFSET(0x139E4490)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_1161B0E93F7E44AD_OFFSET UNITYSDK_OFFSET(0x139E1010)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_13230F274612BEE7_OFFSET UNITYSDK_OFFSET(0x139DE740)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_1C5DF7828FC20316_OFFSET UNITYSDK_OFFSET(0x139DECC0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_297BB7EF3B17CF4A_OFFSET UNITYSDK_OFFSET(0x139E4680)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_2C4CA79B306A10BC_1_OFFSET UNITYSDK_OFFSET(0x139E45E0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_2C4CA79B306A10BC_OFFSET UNITYSDK_OFFSET(0x139E43F0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_2D4080469E04AB49_OFFSET UNITYSDK_OFFSET(0x139E1A00)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_308256B080E11A25_OFFSET UNITYSDK_OFFSET(0x139EBC30)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_3265B427FAD2DFA4_OFFSET UNITYSDK_OFFSET(0x139EA7E0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_34D62C3A30DB2CCC_OFFSET UNITYSDK_OFFSET(0x139E90D0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_40E67CBB89CCD844_OFFSET UNITYSDK_OFFSET(0x139E1600)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_41759F017C64D9BA_OFFSET UNITYSDK_OFFSET(0x139E5760)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_5583457303B61230_OFFSET UNITYSDK_OFFSET(0x139E0500)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_59CED54B012B9E98_OFFSET UNITYSDK_OFFSET(0x139DE360)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_5BF933E10BDAEED5_OFFSET UNITYSDK_OFFSET(0x139EB320)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_5D6318C6D37F3318_OFFSET UNITYSDK_OFFSET(0x139E58B0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_627D67C0054186C7_1_OFFSET UNITYSDK_OFFSET(0x139E1460)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_627D67C0054186C7_OFFSET UNITYSDK_OFFSET(0x139E0E70)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_64234880CE869987_OFFSET UNITYSDK_OFFSET(0x139E5580)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_68F4C7AD8B57681F_OFFSET UNITYSDK_OFFSET(0x139E9030)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_6A01BE48CAE79AE4_OFFSET UNITYSDK_OFFSET(0x139E39C0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_6A8F37D861D3117E_OFFSET UNITYSDK_OFFSET(0x139EBB00)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_75BF251FCFD511C3_OFFSET UNITYSDK_OFFSET(0x139E93D0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_75F20E3AAA4A1CEF_OFFSET UNITYSDK_OFFSET(0x139E6C70)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_76060C53AC0F1320_OFFSET UNITYSDK_OFFSET(0x139E6540)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_781B28964D24BF78_OFFSET UNITYSDK_OFFSET(0x139E4CA0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_7AFF75FA3F5298F9_1_OFFSET UNITYSDK_OFFSET(0x139E3250)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_7AFF75FA3F5298F9_OFFSET UNITYSDK_OFFSET(0x139E2BF0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_804A559216BD71FA_OFFSET UNITYSDK_OFFSET(0x139E5250)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_81A00FB59F21F39A_OFFSET UNITYSDK_OFFSET(0x139E16B0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_828B3C0B74DFB8A6_OFFSET UNITYSDK_OFFSET(0x139E3CD0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_87F6F97B62BFF6BE_OFFSET UNITYSDK_OFFSET(0x139EB5E0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_88E6494389A0E18D_OFFSET UNITYSDK_OFFSET(0x139E0420)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_8C4201C4170903FB_OFFSET UNITYSDK_OFFSET(0x139E5B90)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_8CE272B32F0A27C1_OFFSET UNITYSDK_OFFSET(0x139EB6C0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_8D5A30D3C3C72786_OFFSET UNITYSDK_OFFSET(0x139E9300)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_918BDEB5630729B9_OFFSET UNITYSDK_OFFSET(0x139EB890)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_9A905A114E858EC9_1_OFFSET UNITYSDK_OFFSET(0x139E1580)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_9A905A114E858EC9_OFFSET UNITYSDK_OFFSET(0x139E0F90)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_A0CD5E82FD180A5C_OFFSET UNITYSDK_OFFSET(0x139E63F0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_A21CCBFEF665AE17_OFFSET UNITYSDK_OFFSET(0x139E38B0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_A54AFA66C2AE094E_OFFSET UNITYSDK_OFFSET(0x139E1E90)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_A703BEBEEBA84608_OFFSET UNITYSDK_OFFSET(0x139DEB60)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_AC84316AEA324388_OFFSET UNITYSDK_OFFSET(0x139DE450)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x139EBD10)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_BD8D0BA528053C29_OFFSET UNITYSDK_OFFSET(0x139E7120)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_C1CF4BC7AC887E28_OFFSET UNITYSDK_OFFSET(0x139E1240)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x139E0DC0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_C40AFA4544A00707_OFFSET UNITYSDK_OFFSET(0x139DEA40)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_C4517A8F398274D4_OFFSET UNITYSDK_OFFSET(0x139E08E0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_C8457D15982B7480_OFFSET UNITYSDK_OFFSET(0x139EAEC0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_CAAF4F77CA410C4E_OFFSET UNITYSDK_OFFSET(0x139E6060)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_CB14CB246A68B57D_OFFSET UNITYSDK_OFFSET(0x139E1C20)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_CBC4BAA742E57AED_OFFSET UNITYSDK_OFFSET(0x139E5AC0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_CF80C7DDFEF57212_OFFSET UNITYSDK_OFFSET(0x139E20C0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x139E2AB0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_DA30A0B05EC94CB6_OFFSET UNITYSDK_OFFSET(0x139DD560)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_DD75D6BA34547DEF_OFFSET UNITYSDK_OFFSET(0x139E6F00)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x139EC150)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0x139E29B0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x139ECA30)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x139EB820)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_F1A21F6053A7E0EC_OFFSET UNITYSDK_OFFSET(0x139E84C0)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_F350F657FD42665A_OFFSET UNITYSDK_OFFSET(0x139E0710)
#define CLASS_1_5589C9C33049A9A5_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x139EC850)
#define CLASS_1_5589C9C33049A9A5__CCTOR_OFFSET UNITYSDK_OFFSET(0x139ECCC0)
#define CLASS_1_5589C9C33049A9A5__CTOR_OFFSET UNITYSDK_OFFSET(0x139DD2E0)

inline static constexpr unsigned int Class_1_5589C9C33049A9A5_TypeDefinitionIndex = 71274;

class Class_1_5589C9C33049A9A5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5589C9C33049A9A5_TypeDefinitionIndex)->GetStaticField(0x66E50);
	}
	static ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5589C9C33049A9A5_TypeDefinitionIndex)->GetStaticField(0x66E58);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::Transform*>* Field_1_4; // 0x20
	::Class_3_D6E9A038FA23103A* Field_1_5; // 0x28
	::Class_2_31D39E0B0ADFB12E* Field_1_6; // 0x30
	::Class_1_2CDF619C23140440* Field_1_7; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single>* Field_1_8; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x50
	::System::Boolean Field_1_11; // 0x51

	::System::Void _ctor(::Class_3_D6E9A038FA23103A* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_31D39E0B0ADFB12E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6E9A038FA23103A*, ::Class_1_2CDF619C23140440*, ::Class_2_31D39E0B0ADFB12E*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DA30A0B05EC94CB6(::Class_1_AF85D707C83D7C65* a1, ::UnityEngine::GameObject* a2, ::Class_2_B8E38BF47138A2E5* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::UnityEngine::GameObject*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_DA30A0B05EC94CB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1C5DF7828FC20316(::Class_1_AF85D707C83D7C65* a1, ::Class_2_B8E38BF47138A2E5* a2, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_1C5DF7828FC20316_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A703BEBEEBA84608(::Class_1_AF85D707C83D7C65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_A703BEBEEBA84608_OFFSET))(this, a1);
	}

	::Class_2_1A8148841049062A* Method_1_13230F274612BEE7(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::Class_2_B8E38BF47138A2E5* a3)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_13230F274612BEE7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5583457303B61230(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_5583457303B61230_OFFSET))(this, a1);
	}

	::Class_2_B8E38BF47138A2E5* Method_1_AC84316AEA324388(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4)
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_AC84316AEA324388_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_B8E38BF47138A2E5* Method_1_59CED54B012B9E98(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4)
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_59CED54B012B9E98_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C4517A8F398274D4(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_C4517A8F398274D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_627D67C0054186C7(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_627D67C0054186C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A905A114E858EC9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_9A905A114E858EC9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_627D67C0054186C7_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_627D67C0054186C7_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A905A114E858EC9_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_9A905A114E858EC9_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40E67CBB89CCD844(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_40E67CBB89CCD844_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Method_1_81A00FB59F21F39A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_81A00FB59F21F39A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C1CF4BC7AC887E28(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_C1CF4BC7AC887E28_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>* Method_1_2D4080469E04AB49(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_2D4080469E04AB49_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CB14CB246A68B57D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_CB14CB246A68B57D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1161B0E93F7E44AD(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_1161B0E93F7E44AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A54AFA66C2AE094E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_A54AFA66C2AE094E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CF80C7DDFEF57212(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_CF80C7DDFEF57212_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Single Method_1_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_EDACF3D84F32DDEF_OFFSET))(this);
	}

	::System::Single Method_1_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_D3CDDBF95A81E584_OFFSET))(this);
	}

	::System::Single Method_1_7AFF75FA3F5298F9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_7AFF75FA3F5298F9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_7AFF75FA3F5298F9_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_7AFF75FA3F5298F9_1_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_88E6494389A0E18D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::Class_2_B8E38BF47138A2E5* a3)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_88E6494389A0E18D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6A01BE48CAE79AE4(::Class_2_1A8148841049062A* a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_6A01BE48CAE79AE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F350F657FD42665A(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_F350F657FD42665A_OFFSET))(this, a1);
	}

	::Class_2_1A8148841049062A* Method_1_2C4CA79B306A10BC(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_2C4CA79B306A10BC_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_2C4CA79B306A10BC_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_2C4CA79B306A10BC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_297BB7EF3B17CF4A(::Class_2_1A8148841049062A* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_297BB7EF3B17CF4A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_828B3C0B74DFB8A6(::Class_2_1A8148841049062A* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_828B3C0B74DFB8A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_804A559216BD71FA(::Class_2_1A8148841049062A* a1, ::Class_2_1A8148841049062A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_804A559216BD71FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_64234880CE869987(::Class_2_1A8148841049062A* a1, ::Class_2_1A8148841049062A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_64234880CE869987_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C40AFA4544A00707(::Class_2_1A8148841049062A* a1, ::Class_2_1A8148841049062A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_C40AFA4544A00707_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_0E8FD277F344B6A3(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a3, ::Class_2_B8E38BF47138A2E5* a4)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_0E8FD277F344B6A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_1A8148841049062A* Method_1_41759F017C64D9BA(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_41759F017C64D9BA_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_A21CCBFEF665AE17(::Class_1_AF85D707C83D7C65* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2, ::System::Boolean a3, ::Class_2_B8E38BF47138A2E5* a4)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_A21CCBFEF665AE17_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5D6318C6D37F3318(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_5D6318C6D37F3318_OFFSET))(this, a1);
	}

	::Class_2_1A8148841049062A* Method_1_CBC4BAA742E57AED(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_3_79A4F66B82C02A5E* a2, ::System::Int32 a3)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_3_79A4F66B82C02A5E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_CBC4BAA742E57AED_OFFSET))(this, a1, a2, a3);
	}

	::System::Nullable_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord> Method_1_8C4201C4170903FB(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Nullable_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_8C4201C4170903FB_OFFSET))(this, a1);
	}

	::Class_2_1A8148841049062A* Method_1_06F7ACE9FB1C8082(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a2, ::System::Int32 a3, ::Class_2_B8E38BF47138A2E5* a4)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::System::Int32, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_06F7ACE9FB1C8082_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CAAF4F77CA410C4E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_1_68C7EAEDA46C0580_PlayerMoveState a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_1_68C7EAEDA46C0580_PlayerMoveState, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_CAAF4F77CA410C4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A0CD5E82FD180A5C(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_A0CD5E82FD180A5C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_76060C53AC0F1320(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_1A8148841049062A* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_76060C53AC0F1320_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0079E6D5CE7CAC64(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_0079E6D5CE7CAC64_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_75F20E3AAA4A1CEF(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Boolean a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_75F20E3AAA4A1CEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_BD8D0BA528053C29(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_BD8D0BA528053C29_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_DD75D6BA34547DEF(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_DD75D6BA34547DEF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_0DD4E0EFA987B972(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*& a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*&, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_0DD4E0EFA987B972_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_F1A21F6053A7E0EC(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*& a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_F1A21F6053A7E0EC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_1_34D62C3A30DB2CCC(::Class_2_1A8148841049062A* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_1A8148841049062A*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_34D62C3A30DB2CCC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68F4C7AD8B57681F(::Class_2_1A8148841049062A* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A8148841049062A*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_68F4C7AD8B57681F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8D5A30D3C3C72786(::Class_2_1A8148841049062A* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A8148841049062A*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_8D5A30D3C3C72786_OFFSET))(this, a1, a2);
	}

	::Class_2_1A8148841049062A* Method_1_75BF251FCFD511C3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::Vector3 a9, ::System::Boolean a10)
	{
		return ((::Class_2_1A8148841049062A*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_75BF251FCFD511C3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_3265B427FAD2DFA4(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_3265B427FAD2DFA4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0C65D29C3029253B(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_0C65D29C3029253B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C8457D15982B7480(::Class_1_63D18ECF87218619_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_63D18ECF87218619_1*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_C8457D15982B7480_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BF933E10BDAEED5(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_5BF933E10BDAEED5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Method_1_87F6F97B62BFF6BE(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_87F6F97B62BFF6BE_OFFSET))(this, a1);
	}

	::System::Single Method_1_8CE272B32F0A27C1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_8CE272B32F0A27C1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_918BDEB5630729B9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_918BDEB5630729B9_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Method_1_6A8F37D861D3117E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_6A8F37D861D3117E_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* Method_1_308256B080E11A25(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_308256B080E11A25_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_0829051566F73E5F(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_0829051566F73E5F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_781B28964D24BF78(::Class_2_1A8148841049062A* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>* a3, ::System::Boolean a4, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a5, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a6, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A8148841049062A*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_1A8148841049062A*>*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_5589C9C33049A9A5_METHOD_1_781B28964D24BF78_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
