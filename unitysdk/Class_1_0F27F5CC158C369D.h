#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_1.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_267_Class_1_39154B8B2AA98D66;
class Class_1_79F4C97127452753;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_ED7120C9B64DC28F;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimAnimatorStateListenerConfig; }
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimDragonDogPropSpawnerParam; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimEventReceiverConfig; }
namespace RPG::GameCore { class FiveDimFloatingSpiritPropSpawnerParam; }
namespace RPG::GameCore { class FiveDimGravityWalkBoardConfig; }
namespace RPG::GameCore { class FiveDimLevelSettings; }
namespace RPG::GameCore { class FiveDimPipePortalConfig; }
namespace RPG::GameCore { class FiveDimPropMoveComponentConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace RPG::GameCore { class FiveDimSplineMoveComponentConfig; }
namespace RPG::GameCore { class FiveDimSurfaceConfig; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterListConfig; }
namespace RPG::GameCore { class FiveDimViewBakedInfo; }
namespace RPG::GameCore { class FiveDimWaterReflectionConfig; }
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }
namespace RPG::GameCore { class LittleGameViewComponentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_0F27F5CC158C369D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158FED50)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_008A0590AAB0B653_OFFSET UNITYSDK_OFFSET(0x15909560)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_0340F8A8DB05CD1D_OFFSET UNITYSDK_OFFSET(0x1590D940)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_055DA51AE3FF04FB_OFFSET UNITYSDK_OFFSET(0x1590D060)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_0B3189D09D2D49F4_OFFSET UNITYSDK_OFFSET(0x15907B50)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_0B8274DEC695E537_OFFSET UNITYSDK_OFFSET(0x1590B660)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_0C23A3FFFD064D2C_OFFSET UNITYSDK_OFFSET(0x15904CD0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_0D0E7304CEE5E84E_OFFSET UNITYSDK_OFFSET(0x159051B0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_134605C93FF15550_OFFSET UNITYSDK_OFFSET(0x15908A70)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_1438F2303E561F30_OFFSET UNITYSDK_OFFSET(0x15900CC0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_153C244FE00D1BE2_OFFSET UNITYSDK_OFFSET(0x15909F40)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_176ED34A930540FA_OFFSET UNITYSDK_OFFSET(0x1590A350)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_20FE0E6DD350E856_OFFSET UNITYSDK_OFFSET(0x15907780)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_21659461FD57CB43_OFFSET UNITYSDK_OFFSET(0x15908CE0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_240A8C86F7EDF5CA_OFFSET UNITYSDK_OFFSET(0x15905D00)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_253E5BB2EA9C5A7B_OFFSET UNITYSDK_OFFSET(0x159043A0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_29782F49A707E0FB_OFFSET UNITYSDK_OFFSET(0x1590C2E0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_2B45E9C89EF5334C_OFFSET UNITYSDK_OFFSET(0x1590B550)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_2CED6CA81636F052_OFFSET UNITYSDK_OFFSET(0x1590DA40)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_2E73AD27BD72FC83_OFFSET UNITYSDK_OFFSET(0x159030C0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_343EEC6C6C1954B5_OFFSET UNITYSDK_OFFSET(0x158FFEF0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_3597ABD1EB385705_OFFSET UNITYSDK_OFFSET(0x15902740)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_3686AB153110A03D_OFFSET UNITYSDK_OFFSET(0x15907BC0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_36ECD76892FB3779_OFFSET UNITYSDK_OFFSET(0x1590ED50)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_37980CAE6BD29586_OFFSET UNITYSDK_OFFSET(0x1590EF50)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_3CEFD021A3BAEC32_OFFSET UNITYSDK_OFFSET(0x1590EC20)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_46144A9D47196045_OFFSET UNITYSDK_OFFSET(0x158FEFE0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_4A12C5E841078B4C_OFFSET UNITYSDK_OFFSET(0x1590B780)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_4B814D1989BAC19E_OFFSET UNITYSDK_OFFSET(0x15900270)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_4C2D113F35FB89F0_OFFSET UNITYSDK_OFFSET(0x1590F020)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_4C848A5FE39C7D46_OFFSET UNITYSDK_OFFSET(0x15902A30)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_50502483BC1629CF_OFFSET UNITYSDK_OFFSET(0x15903830)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_53194FDF2DF39FBF_OFFSET UNITYSDK_OFFSET(0x15909A70)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_545F8ED4678B1A23_OFFSET UNITYSDK_OFFSET(0x158FFE70)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_571362FC81B1611D_OFFSET UNITYSDK_OFFSET(0x15909400)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_5E9A58C50D4A3F03_OFFSET UNITYSDK_OFFSET(0x159010E0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_5FC16F9D8B26CCF6_OFFSET UNITYSDK_OFFSET(0x15902B40)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_633215D849B5096F_OFFSET UNITYSDK_OFFSET(0x15909820)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_653F3493F422AF61_OFFSET UNITYSDK_OFFSET(0x1590C6B0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_6934E22AC51505C1_OFFSET UNITYSDK_OFFSET(0x1590CEA0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x15902E50)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_712385012EBE2753_OFFSET UNITYSDK_OFFSET(0x159032C0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_73D9821501F13DF6_OFFSET UNITYSDK_OFFSET(0x158FEDE0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_74439A9FABAFE511_OFFSET UNITYSDK_OFFSET(0x158FEED0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_75FB812174708D73_OFFSET UNITYSDK_OFFSET(0x15905DB0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_767D5B282FF788EB_OFFSET UNITYSDK_OFFSET(0x15909660)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_79AA90D22A410D54_OFFSET UNITYSDK_OFFSET(0x1590C600)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_7E6E7ECC452C08A4_OFFSET UNITYSDK_OFFSET(0x1590E8B0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_8460968AFD5251C8_OFFSET UNITYSDK_OFFSET(0x1590EB00)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_859C841A874B7467_OFFSET UNITYSDK_OFFSET(0x1590EDB0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_88054DE8B32FB230_OFFSET UNITYSDK_OFFSET(0x159033F0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_89586BD2A98D13C0_OFFSET UNITYSDK_OFFSET(0x1590ADD0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_92DA7880E9C9F1B5_OFFSET UNITYSDK_OFFSET(0x15909920)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_9377BBBA3C664D82_OFFSET UNITYSDK_OFFSET(0x1590C980)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_9498D1ED8BDA5159_OFFSET UNITYSDK_OFFSET(0x1590B5D0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_962226EB9E485F5F_OFFSET UNITYSDK_OFFSET(0x1590C9E0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_96EF6BD2BEDD8A19_1_OFFSET UNITYSDK_OFFSET(0x15905980)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_96EF6BD2BEDD8A19_OFFSET UNITYSDK_OFFSET(0x159055E0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_A0223071CB47F295_OFFSET UNITYSDK_OFFSET(0x15900150)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_A2520A15D751E428_OFFSET UNITYSDK_OFFSET(0x1590DED0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_A2916DC9045AB12E_OFFSET UNITYSDK_OFFSET(0x1590D1E0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_ABFD3F1DF9E9C72D_OFFSET UNITYSDK_OFFSET(0x15902FB0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_B01F5292A1B6EB04_OFFSET UNITYSDK_OFFSET(0x158FEF70)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_B0668ACF1ADCAD14_OFFSET UNITYSDK_OFFSET(0x1590D780)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_B09C2E83BABDC60F_OFFSET UNITYSDK_OFFSET(0x15902CB0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_B0F48CB55E668E29_OFFSET UNITYSDK_OFFSET(0x1590CD20)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_B8027BAFC045E466_OFFSET UNITYSDK_OFFSET(0x15904750)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_B94B952E2B4ACDC7_OFFSET UNITYSDK_OFFSET(0x1590F100)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_BAC56FBA41174F6D_OFFSET UNITYSDK_OFFSET(0x1590C500)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_BEF6D66512E44F16_OFFSET UNITYSDK_OFFSET(0x15903570)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_C4AC82C65ADF42CC_OFFSET UNITYSDK_OFFSET(0x159091E0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_C59C2B17E0763354_OFFSET UNITYSDK_OFFSET(0x15907960)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_C69D256CFB765B0F_OFFSET UNITYSDK_OFFSET(0x158FFD40)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x1590CDE0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_D2FDD4B15C12B657_OFFSET UNITYSDK_OFFSET(0x15907A90)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_D8E56263469F03EF_OFFSET UNITYSDK_OFFSET(0x1590A870)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_D91B0CA91B44646D_OFFSET UNITYSDK_OFFSET(0x1590E480)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_E5AE94B6925427DE_OFFSET UNITYSDK_OFFSET(0x15903F50)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_E69FC072783CE58E_OFFSET UNITYSDK_OFFSET(0x15902DF0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_E6D2799CEA9108E4_OFFSET UNITYSDK_OFFSET(0x159079D0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_EB1E47495B92553F_OFFSET UNITYSDK_OFFSET(0x15900A50)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_EE2C350C94EB8844_OFFSET UNITYSDK_OFFSET(0x159090C0)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_F1D2FBB16E1AD9F8_OFFSET UNITYSDK_OFFSET(0x15900D80)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_F36C6B3E1710F7BE_OFFSET UNITYSDK_OFFSET(0x1590E540)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_F3BC15D602300767_OFFSET UNITYSDK_OFFSET(0x15900B30)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_F43CE95E822C21B1_OFFSET UNITYSDK_OFFSET(0x15901370)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_F9FE9E58EC5D236E_OFFSET UNITYSDK_OFFSET(0x158FF380)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_FA53007A29B435C0_OFFSET UNITYSDK_OFFSET(0x1590E830)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_FB7D0FDB5C59421B_OFFSET UNITYSDK_OFFSET(0x15908750)
#define CLASS_1_0F27F5CC158C369D_METHOD_1_FBE7159A243CA486_OFFSET UNITYSDK_OFFSET(0x159086B0)
#define CLASS_1_0F27F5CC158C369D__CTOR_OFFSET UNITYSDK_OFFSET(0x158FEAF0)

inline static constexpr unsigned int Class_1_0F27F5CC158C369D_TypeDefinitionIndex = 76410;

class Class_1_0F27F5CC158C369D : public ::System::Object
{
public:
	// static const ::System::String* IMBHLNMGJEO; // 0x0
	// static const ::System::String* GOCGMPABEIB; // 0x0
	// static const ::System::String* ACOHIKOPMOE; // 0x0
	// static const ::System::String* FMMJFLMAPKO; // 0x0
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* MCIKCILKNON; // 0x10
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* BOPPBBDNCND; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimViewBakedInfo*>* JGKNJKKKNDO; // 0x20
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x28
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x30
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* OIDNKJOBODE; // 0x38

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_73D9821501F13DF6(::RPG::GameCore::LittleGameLevelConfig* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::LittleGameLevelVarBindingMap*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_73D9821501F13DF6_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_545F8ED4678B1A23(::RPG::GameCore::LittleGameEntityConfig* a1, ::Struct_2_FEFADCB82FEB841E a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Struct_2_FEFADCB82FEB841E))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_545F8ED4678B1A23_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_4B814D1989BAC19E(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::Class_2_ED7120C9B64DC28F* a3, ::Struct_2_B6A3FA7992F9F37E_1 a4)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEntityPreset*, ::Class_2_ED7120C9B64DC28F*, ::Struct_2_B6A3FA7992F9F37E_1))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_4B814D1989BAC19E_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_F1D2FBB16E1AD9F8(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_F1D2FBB16E1AD9F8_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_3597ABD1EB385705(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2, ::RPG::GameCore::FiveDimPropSpawnerParam* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*, ::RPG::GameCore::FiveDimPropSpawnerParam*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_3597ABD1EB385705_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_5E9A58C50D4A3F03(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::Class_0_16E4307DCC419505_267_Class_1_39154B8B2AA98D66* a3)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEntityPreset*, ::Class_0_16E4307DCC419505_267_Class_1_39154B8B2AA98D66*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_5E9A58C50D4A3F03_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4C848A5FE39C7D46(::RPG::GameCore::LittleGameLevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_4C848A5FE39C7D46_OFFSET))(this, a1);
	}

	::System::Void Method_1_1438F2303E561F30(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_1438F2303E561F30_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_79F4C97127452753* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79F4C97127452753*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C69D256CFB765B0F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_C69D256CFB765B0F_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_343EEC6C6C1954B5(::RPG::GameCore::LittleGameEntityConfig* a1, ::Struct_2_FEFADCB82FEB841E a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Struct_2_FEFADCB82FEB841E))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_343EEC6C6C1954B5_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_ABFD3F1DF9E9C72D(::RPG::GameCore::LittleGameEntityConfig* a1, ::Struct_2_FEFADCB82FEB841E a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Struct_2_FEFADCB82FEB841E))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_ABFD3F1DF9E9C72D_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_F3BC15D602300767(::RPG::GameCore::LittleGameEntityPreset* a1, ::System::String* a2, ::Struct_2_FEFADCB82FEB841E a3)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityPreset*, ::System::String*, ::Struct_2_FEFADCB82FEB841E))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_F3BC15D602300767_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_75FB812174708D73(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::LittleGameComponentConfig*>* a2, ::Struct_2_FEFADCB82FEB841E a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Collections::Generic::IList_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::Struct_2_FEFADCB82FEB841E))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_75FB812174708D73_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_2E73AD27BD72FC83(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_2E73AD27BD72FC83_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_88054DE8B32FB230(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_88054DE8B32FB230_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_B8027BAFC045E466(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_B8027BAFC045E466_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_0C23A3FFFD064D2C(::RPG::GameCore::LittleGameEntityConfig* a1, ::Struct_2_FEFADCB82FEB841E a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Struct_2_FEFADCB82FEB841E))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_0C23A3FFFD064D2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C59C2B17E0763354(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameViewComponentConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameViewComponentConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_C59C2B17E0763354_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_008A0590AAB0B653(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_008A0590AAB0B653_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_20FE0E6DD350E856(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSurfaceConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_20FE0E6DD350E856_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C4AC82C65ADF42CC(::Class_2_B9E8C2EEAA5C96EC* a1, ::Struct_2_FEFADCB82FEB841E a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Struct_2_FEFADCB82FEB841E))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_C4AC82C65ADF42CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A0223071CB47F295(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_A0223071CB47F295_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_0D0E7304CEE5E84E(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_0D0E7304CEE5E84E_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_96EF6BD2BEDD8A19(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_96EF6BD2BEDD8A19_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_96EF6BD2BEDD8A19_1(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_96EF6BD2BEDD8A19_1_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_712385012EBE2753(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_712385012EBE2753_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_50502483BC1629CF(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_50502483BC1629CF_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_E5AE94B6925427DE(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_E5AE94B6925427DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BEF6D66512E44F16(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_BEF6D66512E44F16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_767D5B282FF788EB(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_767D5B282FF788EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_633215D849B5096F(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_633215D849B5096F_OFFSET))(this, a1);
	}

	::System::Void Method_1_92DA7880E9C9F1B5(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_92DA7880E9C9F1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B8274DEC695E537(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_0B8274DEC695E537_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5FC16F9D8B26CCF6(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_5FC16F9D8B26CCF6_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimViewBakedInfo* Method_1_4A12C5E841078B4C(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::RPG::GameCore::FiveDimViewBakedInfo*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_4A12C5E841078B4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09C2E83BABDC60F(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_B09C2E83BABDC60F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69FC072783CE58E(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_E69FC072783CE58E_OFFSET))(this, a1);
	}

	::System::Void Method_1_74439A9FABAFE511()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_74439A9FABAFE511_OFFSET))(this);
	}

	::System::Void Method_1_46144A9D47196045(::RPG::GameCore::LittleGameLevelConfig* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_46144A9D47196045_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_29782F49A707E0FB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_29782F49A707E0FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_BAC56FBA41174F6D(::RPG::GameCore::LittleGameLevelVariableCollection* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariableCollection*, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_BAC56FBA41174F6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B01F5292A1B6EB04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_B01F5292A1B6EB04_OFFSET))(this);
	}

	::System::Void Method_1_79AA90D22A410D54(::RPG::GameCore::FiveDimGameplayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_79AA90D22A410D54_OFFSET))(this, a1);
	}

	::System::Void Method_1_653F3493F422AF61(::RPG::GameCore::FiveDimLevelSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimLevelSettings*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_653F3493F422AF61_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9FE9E58EC5D236E(::RPG::GameCore::LittleGameLevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_F9FE9E58EC5D236E_OFFSET))(this, a1);
	}

	::System::Void Method_1_153C244FE00D1BE2(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_153C244FE00D1BE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9377BBBA3C664D82(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_9377BBBA3C664D82_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_253E5BB2EA9C5A7B(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_253E5BB2EA9C5A7B_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_962226EB9E485F5F(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_962226EB9E485F5F_OFFSET))(this, a1);
	}

	::System::Void Method_1_53194FDF2DF39FBF(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_53194FDF2DF39FBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_176ED34A930540FA(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_176ED34A930540FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB90D463EEA11F23(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_CB90D463EEA11F23_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8E56263469F03EF(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_D8E56263469F03EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_6934E22AC51505C1(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_6934E22AC51505C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_055DA51AE3FF04FB(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_055DA51AE3FF04FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EB1E47495B92553F(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::Class_2_ED7120C9B64DC28F* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LittleGameEntityPreset*, ::Class_2_ED7120C9B64DC28F*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_EB1E47495B92553F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3686AB153110A03D(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a2, ::RPG::GameCore::FiveDimPropMoveComponentConfig* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::RPG::GameCore::FiveDimPropMoveComponentConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_3686AB153110A03D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F43CE95E822C21B1(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::RPG::GameCore::FiveDimPropSpawnerParam* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPropSpawnerParam*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_F43CE95E822C21B1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0340F8A8DB05CD1D(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::RPG::GameCore::FiveDimPropSpawnerParam* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPropSpawnerParam*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_0340F8A8DB05CD1D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A2520A15D751E428(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_A2520A15D751E428_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2CED6CA81636F052(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_2CED6CA81636F052_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::LittleGameEntityPreset* Method_1_D91B0CA91B44646D(::RPG::GameCore::LittleGameEntityPreset* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::LittleGameEntityPreset*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityPreset*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_D91B0CA91B44646D_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* Method_1_7E6E7ECC452C08A4(::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_7E6E7ECC452C08A4_OFFSET))(this, a1, a2);
	}

	static ::RPG::GameCore::FiveDimChestConfig* Method_1_8460968AFD5251C8(::RPG::GameCore::FiveDimChestConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::FiveDimChestConfig*(*)(::RPG::GameCore::FiveDimChestConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_8460968AFD5251C8_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FiveDimCustomLoadConfig* Method_1_3CEFD021A3BAEC32(::RPG::GameCore::FiveDimCustomLoadConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::FiveDimCustomLoadConfig*(*)(::RPG::GameCore::FiveDimCustomLoadConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_3CEFD021A3BAEC32_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FiveDimDynamicVar* Method_1_36ECD76892FB3779(::System::String* a1)
	{
		return ((::RPG::GameCore::FiveDimDynamicVar*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_36ECD76892FB3779_OFFSET))(a1);
	}

	static ::System::String* Method_1_FA53007A29B435C0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_FA53007A29B435C0_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_1_F36C6B3E1710F7BE(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_F36C6B3E1710F7BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B0668ACF1ADCAD14(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a1, ::UnityEngine::Bounds& a2, ::UnityEngine::Bounds& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::UnityEngine::Bounds&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_B0668ACF1ADCAD14_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FiveDimViewBakedInfo* Method_1_859C841A874B7467(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a1)
	{
		return ((::RPG::GameCore::FiveDimViewBakedInfo*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_859C841A874B7467_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBE7159A243CA486(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimSplineMoveComponentConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimSplineMoveComponentConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_FBE7159A243CA486_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_A2916DC9045AB12E(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPropMoveConfig* a2, ::System::Boolean a3)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPropMoveConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_A2916DC9045AB12E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FB7D0FDB5C59421B(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimGravityWalkBoardConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimGravityWalkBoardConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_FB7D0FDB5C59421B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89586BD2A98D13C0(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_89586BD2A98D13C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_37980CAE6BD29586(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_37980CAE6BD29586_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C2D113F35FB89F0(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_4C2D113F35FB89F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_134605C93FF15550(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimPipePortalConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimPipePortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_134605C93FF15550_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_9498D1ED8BDA5159(::System::String* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::String*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_9498D1ED8BDA5159_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_571362FC81B1611D(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_571362FC81B1611D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_2B45E9C89EF5334C(::RPG::GameCore::FiveDimBaseCameraConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_2B45E9C89EF5334C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6D2799CEA9108E4(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_E6D2799CEA9108E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D2FDD4B15C12B657(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_D2FDD4B15C12B657_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B3189D09D2D49F4(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimEventReceiverConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimEventReceiverConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_0B3189D09D2D49F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE2C350C94EB8844(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_EE2C350C94EB8844_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B94B952E2B4ACDC7(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_B94B952E2B4ACDC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_21659461FD57CB43(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimWaterReflectionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_21659461FD57CB43_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_240A8C86F7EDF5CA(::System::String* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_240A8C86F7EDF5CA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_B0F48CB55E668E29(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F27F5CC158C369D_METHOD_1_B0F48CB55E668E29_OFFSET))(a1, a2);
	}
};
