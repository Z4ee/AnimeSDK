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
class Class_1_AD0551E73B7C7DAE;
class Class_2_2661F5CE5402F421;
class Class_2_566E5C710244EEC1;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
class Class_3_565AF2729F18922B;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAutoRotateStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelMoveStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayer_1; }
namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0EA123A84C0AEB48_METHOD_1_0A3CBD7F79B288E6_OFFSET UNITYSDK_OFFSET(0x14ADD5C0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_0B6CDDDEA121515B_OFFSET UNITYSDK_OFFSET(0x14ADDD90)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_0C65D29C3029253B_OFFSET UNITYSDK_OFFSET(0x14AE77C0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_0F66B6C3C4A46E1C_OFFSET UNITYSDK_OFFSET(0x14ADD3F0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_1C5DF7828FC20316_OFFSET UNITYSDK_OFFSET(0x14ADB2B0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_24E2356695AF8908_OFFSET UNITYSDK_OFFSET(0x14AE1F90)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_28B97B2F5A68077A_OFFSET UNITYSDK_OFFSET(0x14AE8060)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_2C4CA79B306A10BC_1_OFFSET UNITYSDK_OFFSET(0x14AE0700)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_2C4CA79B306A10BC_OFFSET UNITYSDK_OFFSET(0x14AE04F0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x14AE8A80)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_3D92C10D07D979BC_OFFSET UNITYSDK_OFFSET(0x14AE3910)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_3F994728FE4FE152_OFFSET UNITYSDK_OFFSET(0x14AE1AC0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_5548A7A09A0C600C_OFFSET UNITYSDK_OFFSET(0x14AE6190)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_5583457303B61230_OFFSET UNITYSDK_OFFSET(0x14ADC8D0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_5B415CEE7D6709D9_OFFSET UNITYSDK_OFFSET(0x14ADE190)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_5D6318C6D37F3318_OFFSET UNITYSDK_OFFSET(0x14AE18B0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_5E5D234EA01CE6B2_OFFSET UNITYSDK_OFFSET(0x14ADD920)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_5E999B74CE1B0F5C_OFFSET UNITYSDK_OFFSET(0x14AE89C0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_5FE4A7EFC9C11C59_OFFSET UNITYSDK_OFFSET(0x14AE9DE0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_6054AE212C7FA633_OFFSET UNITYSDK_OFFSET(0x14ADA9E0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_627D67C0054186C7_1_OFFSET UNITYSDK_OFFSET(0x14ADD780)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_627D67C0054186C7_OFFSET UNITYSDK_OFFSET(0x14ADD250)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_64234880CE869987_OFFSET UNITYSDK_OFFSET(0x14AE15A0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_6782CA91E154E1C2_OFFSET UNITYSDK_OFFSET(0x14AE9A00)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_68F4C7AD8B57681F_OFFSET UNITYSDK_OFFSET(0x14AE5E10)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_6A01BE48CAE79AE4_OFFSET UNITYSDK_OFFSET(0x14ADFB90)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_6A6E5F5C1A25A98D_OFFSET UNITYSDK_OFFSET(0x14AE1B70)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_6A8F37D861D3117E_OFFSET UNITYSDK_OFFSET(0x14AE8890)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_6C29EC6C4FB286CA_OFFSET UNITYSDK_OFFSET(0x14AE38A0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_8038D165897326E3_OFFSET UNITYSDK_OFFSET(0x14ADDA60)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_804A559216BD71FA_OFFSET UNITYSDK_OFFSET(0x14AE1290)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_83AACB2E26DDFA44_OFFSET UNITYSDK_OFFSET(0x14AE29D0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_864260163C73F3D0_OFFSET UNITYSDK_OFFSET(0x14ADFAC0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_87ED9F7CDA254CA9_OFFSET UNITYSDK_OFFSET(0x14ADAD90)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_87F6F97B62BFF6BE_OFFSET UNITYSDK_OFFSET(0x14AE8300)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_88E6494389A0E18D_OFFSET UNITYSDK_OFFSET(0x14ADC7F0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_8AC836847415CEFC_OFFSET UNITYSDK_OFFSET(0x14AE3400)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_8CE272B32F0A27C1_OFFSET UNITYSDK_OFFSET(0x14AE83E0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_8D5A30D3C3C72786_OFFSET UNITYSDK_OFFSET(0x14AE60C0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_93D4E4DEF7053F03_OFFSET UNITYSDK_OFFSET(0x14AE1780)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_97AC5E0734B0603A_OFFSET UNITYSDK_OFFSET(0x14AE8F20)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_97B021937D76D9B4_OFFSET UNITYSDK_OFFSET(0x14AE0590)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_98B0040301F27166_1_OFFSET UNITYSDK_OFFSET(0x14ADF4D0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_98B0040301F27166_OFFSET UNITYSDK_OFFSET(0x14ADEEE0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_9962C6F632B84617_OFFSET UNITYSDK_OFFSET(0x14AE5EB0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_9A905A114E858EC9_1_OFFSET UNITYSDK_OFFSET(0x14ADD8A0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_9A905A114E858EC9_OFFSET UNITYSDK_OFFSET(0x14ADD370)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_9AF368F6060121D5_OFFSET UNITYSDK_OFFSET(0x14ADFE80)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_9B7D13E3C4919CB5_OFFSET UNITYSDK_OFFSET(0x14AE5240)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_9F0D659FD0B7AA7E_OFFSET UNITYSDK_OFFSET(0x14ADB060)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_A0CD5E82FD180A5C_OFFSET UNITYSDK_OFFSET(0x14AE2580)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_A58DCA21BF633921_OFFSET UNITYSDK_OFFSET(0x14AE0D00)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_A703BEBEEBA84608_OFFSET UNITYSDK_OFFSET(0x14ADB150)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_AC84316AEA324388_OFFSET UNITYSDK_OFFSET(0x14ADAAA0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_B830822EDE114C2F_OFFSET UNITYSDK_OFFSET(0x14ADE360)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_BDC56F70171A9647_OFFSET UNITYSDK_OFFSET(0x14AE7C20)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x14ADD1A0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_C4517A8F398274D4_OFFSET UNITYSDK_OFFSET(0x14ADCCB0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_C5776EFF203FADE1_OFFSET UNITYSDK_OFFSET(0x14AE07A0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x14AE9600)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_C8DD268AE869983B_OFFSET UNITYSDK_OFFSET(0x14AE97C0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x14ADEDA0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_DA30A0B05EC94CB6_OFFSET UNITYSDK_OFFSET(0x14AD9C00)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_DA801CAD44D09137_OFFSET UNITYSDK_OFFSET(0x14AE85B0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0x14ADECA0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14AE97B0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x14AE8540)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_F350F657FD42665A_OFFSET UNITYSDK_OFFSET(0x14ADCAE0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_F49CA67A0144A29F_OFFSET UNITYSDK_OFFSET(0x14AE1DD0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_F6336E1E7EBBF4AF_OFFSET UNITYSDK_OFFSET(0x14AE26D0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_F810E24CF2454F51_OFFSET UNITYSDK_OFFSET(0x14AE2EA0)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_F8642248A0CA9974_OFFSET UNITYSDK_OFFSET(0x14ADDF50)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_FAE6B3A709422A24_OFFSET UNITYSDK_OFFSET(0x14AE3160)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_FB3174CC6D7A299B_OFFSET UNITYSDK_OFFSET(0x14AE7570)
#define CLASS_1_0EA123A84C0AEB48_METHOD_1_FE9E00EE1B704CA6_OFFSET UNITYSDK_OFFSET(0x14AE4140)
#define CLASS_1_0EA123A84C0AEB48__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AE9F50)
#define CLASS_1_0EA123A84C0AEB48__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD99A0)

inline static constexpr unsigned int Class_1_0EA123A84C0AEB48_TypeDefinitionIndex = 72796;

class Class_1_0EA123A84C0AEB48 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EA123A84C0AEB48_TypeDefinitionIndex)->GetStaticField(0x603E0);
	}
	static ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EA123A84C0AEB48_TypeDefinitionIndex)->GetStaticField(0x603E8);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::Transform*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_1_6; // 0x30
	::Class_1_2CDF619C23140440* Field_1_7; // 0x38
	::Class_3_001D9EA49F6215B6* Field_1_8; // 0x40
	::Class_2_566E5C710244EEC1* Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x50
	::System::Boolean Field_1_11; // 0x51

	::System::Void _ctor(::Class_3_001D9EA49F6215B6* a1, ::Class_1_2CDF619C23140440* a2, ::Class_2_566E5C710244EEC1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_001D9EA49F6215B6*, ::Class_1_2CDF619C23140440*, ::Class_2_566E5C710244EEC1*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DA30A0B05EC94CB6(::Class_1_AD0551E73B7C7DAE* a1, ::UnityEngine::GameObject* a2, ::Class_2_56DCA1B58073717B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AD0551E73B7C7DAE*, ::UnityEngine::GameObject*, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_DA30A0B05EC94CB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1C5DF7828FC20316(::Class_1_AD0551E73B7C7DAE* a1, ::Class_2_56DCA1B58073717B* a2, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AD0551E73B7C7DAE*, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_1C5DF7828FC20316_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A703BEBEEBA84608(::Class_1_AD0551E73B7C7DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AD0551E73B7C7DAE*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_A703BEBEEBA84608_OFFSET))(this, a1);
	}

	::Class_2_2661F5CE5402F421* Method_1_87ED9F7CDA254CA9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::Class_2_56DCA1B58073717B* a3)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_87ED9F7CDA254CA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5583457303B61230(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_5583457303B61230_OFFSET))(this, a1);
	}

	::Class_2_56DCA1B58073717B* Method_1_AC84316AEA324388(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_2661F5CE5402F421*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4)
	{
		return ((::Class_2_56DCA1B58073717B*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_2661F5CE5402F421*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_AC84316AEA324388_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_56DCA1B58073717B* Method_1_6054AE212C7FA633(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_2661F5CE5402F421*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4)
	{
		return ((::Class_2_56DCA1B58073717B*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_2661F5CE5402F421*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_6054AE212C7FA633_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C4517A8F398274D4(::Class_2_56DCA1B58073717B* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_2661F5CE5402F421*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_2661F5CE5402F421*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_C4517A8F398274D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_627D67C0054186C7(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_627D67C0054186C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A905A114E858EC9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_9A905A114E858EC9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_627D67C0054186C7_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_627D67C0054186C7_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A905A114E858EC9_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_9A905A114E858EC9_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E5D234EA01CE6B2(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_5E5D234EA01CE6B2_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Method_1_8038D165897326E3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_8038D165897326E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0A3CBD7F79B288E6(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_0A3CBD7F79B288E6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>* Method_1_0B6CDDDEA121515B(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_0B6CDDDEA121515B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F8642248A0CA9974(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_F8642248A0CA9974_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0F66B6C3C4A46E1C(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_0F66B6C3C4A46E1C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5B415CEE7D6709D9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_5B415CEE7D6709D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B830822EDE114C2F(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_B830822EDE114C2F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Single Method_1_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_EDACF3D84F32DDEF_OFFSET))(this);
	}

	::System::Single Method_1_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_D3CDDBF95A81E584_OFFSET))(this);
	}

	::System::Single Method_1_98B0040301F27166(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_98B0040301F27166_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_98B0040301F27166_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_98B0040301F27166_1_OFFSET))(this, a1, a2);
	}

	::Class_2_2661F5CE5402F421* Method_1_88E6494389A0E18D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::Class_2_56DCA1B58073717B* a3)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_88E6494389A0E18D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6A01BE48CAE79AE4(::Class_2_2661F5CE5402F421* a1, ::Class_2_56DCA1B58073717B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_6A01BE48CAE79AE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F350F657FD42665A(::Class_2_2661F5CE5402F421* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_F350F657FD42665A_OFFSET))(this, a1);
	}

	::Class_2_2661F5CE5402F421* Method_1_2C4CA79B306A10BC(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_56DCA1B58073717B* a2)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_2C4CA79B306A10BC_OFFSET))(this, a1, a2);
	}

	::Class_2_2661F5CE5402F421* Method_1_2C4CA79B306A10BC_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_56DCA1B58073717B* a2)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_2C4CA79B306A10BC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C5776EFF203FADE1(::Class_2_2661F5CE5402F421* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_C5776EFF203FADE1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9AF368F6060121D5(::Class_2_2661F5CE5402F421* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_9AF368F6060121D5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_804A559216BD71FA(::Class_2_2661F5CE5402F421* a1, ::Class_2_2661F5CE5402F421* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_804A559216BD71FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_64234880CE869987(::Class_2_2661F5CE5402F421* a1, ::Class_2_2661F5CE5402F421* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_64234880CE869987_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F0D659FD0B7AA7E(::Class_2_2661F5CE5402F421* a1, ::Class_2_2661F5CE5402F421* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_9F0D659FD0B7AA7E_OFFSET))(this, a1, a2);
	}

	::Class_2_2661F5CE5402F421* Method_1_97B021937D76D9B4(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a3, ::Class_2_56DCA1B58073717B* a4)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_97B021937D76D9B4_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_2661F5CE5402F421* Method_1_93D4E4DEF7053F03(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::Class_2_56DCA1B58073717B* a2)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_93D4E4DEF7053F03_OFFSET))(this, a1, a2);
	}

	::Class_2_2661F5CE5402F421* Method_1_864260163C73F3D0(::Class_1_AD0551E73B7C7DAE* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2, ::System::Boolean a3, ::Class_2_56DCA1B58073717B* a4)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::Class_1_AD0551E73B7C7DAE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_864260163C73F3D0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5D6318C6D37F3318(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_5D6318C6D37F3318_OFFSET))(this, a1);
	}

	::Class_2_2661F5CE5402F421* Method_1_3F994728FE4FE152(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_3_565AF2729F18922B* a2, ::System::Int32 a3)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_3_565AF2729F18922B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_3F994728FE4FE152_OFFSET))(this, a1, a2, a3);
	}

	::System::Nullable_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord> Method_1_6A6E5F5C1A25A98D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Nullable_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_6A6E5F5C1A25A98D_OFFSET))(this, a1);
	}

	::Class_2_2661F5CE5402F421* Method_1_F49CA67A0144A29F(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a2, ::System::Int32 a3, ::Class_2_56DCA1B58073717B* a4)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::System::Int32, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_F49CA67A0144A29F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_24E2356695AF8908(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_1_68C7EAEDA46C0580_PlayerMoveState a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_1_68C7EAEDA46C0580_PlayerMoveState, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_24E2356695AF8908_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A0CD5E82FD180A5C(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_A0CD5E82FD180A5C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F6336E1E7EBBF4AF(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_2661F5CE5402F421* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_2661F5CE5402F421*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_F6336E1E7EBBF4AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_83AACB2E26DDFA44(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_56DCA1B58073717B* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Collections::Generic::ISet_1<::System::String*>* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_56DCA1B58073717B*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_83AACB2E26DDFA44_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_F810E24CF2454F51(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_56DCA1B58073717B* a2, ::System::Boolean a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4, ::System::Boolean a5, ::System::Collections::Generic::ISet_1<::System::String*>* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_56DCA1B58073717B*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_F810E24CF2454F51_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_8AC836847415CEFC(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_56DCA1B58073717B* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3, ::System::Collections::Generic::ISet_1<::System::String*>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_8AC836847415CEFC_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_2661F5CE5402F421* Method_1_3D92C10D07D979BC(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a2, ::System::Collections::Generic::ISet_1<::System::String*>* a3, ::Class_2_56DCA1B58073717B* a4)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::System::Collections::Generic::ISet_1<::System::String*>*, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_3D92C10D07D979BC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_FAE6B3A709422A24(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::Class_2_56DCA1B58073717B* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3, ::System::Boolean a4, ::System::Collections::Generic::ISet_1<::System::String*>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean, ::System::Collections::Generic::ISet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_FAE6B3A709422A24_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_FE9E00EE1B704CA6(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*& a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*&, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_FE9E00EE1B704CA6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_9B7D13E3C4919CB5(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*& a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_9B7D13E3C4919CB5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_1_9962C6F632B84617(::Class_2_2661F5CE5402F421* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_9962C6F632B84617_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68F4C7AD8B57681F(::Class_2_2661F5CE5402F421* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_68F4C7AD8B57681F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8D5A30D3C3C72786(::Class_2_2661F5CE5402F421* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_8D5A30D3C3C72786_OFFSET))(this, a1, a2);
	}

	::Class_2_2661F5CE5402F421* Method_1_5548A7A09A0C600C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::Vector3 a9, ::System::Boolean a10)
	{
		return ((::Class_2_2661F5CE5402F421*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_5548A7A09A0C600C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_FB3174CC6D7A299B(::Class_2_2661F5CE5402F421* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_FB3174CC6D7A299B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0C65D29C3029253B(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_0C65D29C3029253B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BDC56F70171A9647(::Class_1_63D18ECF87218619_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_63D18ECF87218619_1*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_BDC56F70171A9647_OFFSET))(this, a1);
	}

	::System::Void Method_1_28B97B2F5A68077A(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_28B97B2F5A68077A_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Method_1_87F6F97B62BFF6BE(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_87F6F97B62BFF6BE_OFFSET))(this, a1);
	}

	::System::Single Method_1_8CE272B32F0A27C1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_8CE272B32F0A27C1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_DA801CAD44D09137(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_DA801CAD44D09137_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Method_1_6A8F37D861D3117E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_6A8F37D861D3117E_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* Method_1_5E999B74CE1B0F5C(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_5E999B74CE1B0F5C_OFFSET))(this, a1);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_1_97AC5E0734B0603A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_97AC5E0734B0603A_OFFSET))(this);
	}

	::System::Void Method_1_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C8DD268AE869983B(::Class_2_56DCA1B58073717B* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_C8DD268AE869983B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6782CA91E154E1C2(::Class_2_56DCA1B58073717B* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::System::Boolean a3, ::Il2CppArray<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_6782CA91E154E1C2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5FE4A7EFC9C11C59(::Class_2_56DCA1B58073717B* a1, ::System::Collections::Generic::HashSet_1<::Class_2_2661F5CE5402F421*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::Collections::Generic::HashSet_1<::Class_2_2661F5CE5402F421*>*&))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_5FE4A7EFC9C11C59_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_6C29EC6C4FB286CA(::Class_2_2661F5CE5402F421* a1)
	{
		return ((::System::String*(*)(::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_6C29EC6C4FB286CA_OFFSET))(a1);
	}

	::System::Void Method_1_A58DCA21BF633921(::Class_2_2661F5CE5402F421* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_2661F5CE5402F421*>* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_2661F5CE5402F421*>* a3, ::System::Boolean a4, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a5, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a6, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2661F5CE5402F421*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_2661F5CE5402F421*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_2661F5CE5402F421*>*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_0EA123A84C0AEB48_METHOD_1_A58DCA21BF633921_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
