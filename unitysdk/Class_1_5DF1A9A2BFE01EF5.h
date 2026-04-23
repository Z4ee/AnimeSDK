#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_2.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_237_Class_1_39154B8B2AA98D66;
class Class_1_24C2E7EF22229C6A;
class Class_1_79F4C97127452753;
class Class_2_9DD8A46984F1AFFD;
class Class_2_ED7120C9B64DC28F;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimAnimatorStateListenerConfig; }
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimDragonDogPropSpawnerParam; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FiveDimEventReceiverConfig; }
namespace RPG::GameCore { class FiveDimGravityWalkBoardConfig; }
namespace RPG::GameCore { class FiveDimLevelSettings; }
namespace RPG::GameCore { class FiveDimPipePortalConfig; }
namespace RPG::GameCore { class FiveDimPropMoveComponentConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace RPG::GameCore { class FiveDimSplineMoveComponentConfig; }
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

#define CLASS_1_5DF1A9A2BFE01EF5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B9F0A0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_03752E2BF715F912_OFFSET UNITYSDK_OFFSET(0x9BA9C30)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_07880C3C85D28804_OFFSET UNITYSDK_OFFSET(0x9BABCE0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_09CE94408DD2A7E8_OFFSET UNITYSDK_OFFSET(0x9BA5690)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_0A50B8D0FB7E316B_OFFSET UNITYSDK_OFFSET(0x9B9F2D0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_0B3189D09D2D49F4_OFFSET UNITYSDK_OFFSET(0x9BA7560)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_0B8274DEC695E537_OFFSET UNITYSDK_OFFSET(0x9BAB3E0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_0FCA3F8792C4F9A8_OFFSET UNITYSDK_OFFSET(0x9BACD10)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_134605C93FF15550_OFFSET UNITYSDK_OFFSET(0x9BA8270)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_1438F2303E561F30_OFFSET UNITYSDK_OFFSET(0x9BA0F90)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_1F459D3CE05953A1_OFFSET UNITYSDK_OFFSET(0x9BA1050)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_207D47713558ACC2_OFFSET UNITYSDK_OFFSET(0x9BAC2D0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_21659461FD57CB43_OFFSET UNITYSDK_OFFSET(0x9BA84E0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_21AC040BEE25A8E1_OFFSET UNITYSDK_OFFSET(0x9BA7EB0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_224BEF1092B8B62F_OFFSET UNITYSDK_OFFSET(0x9BA2C90)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_23DE1669CEB9D158_OFFSET UNITYSDK_OFFSET(0x9BA4590)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_240A8C86F7EDF5CA_OFFSET UNITYSDK_OFFSET(0x9BA5D80)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_2B45E9C89EF5334C_OFFSET UNITYSDK_OFFSET(0x9BAB2D0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_2CCBBF8A95D15892_OFFSET UNITYSDK_OFFSET(0x9BAD8D0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_2CED6CA81636F052_OFFSET UNITYSDK_OFFSET(0x9BAD3B0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_2DF74667F9E9A71A_OFFSET UNITYSDK_OFFSET(0x9BA4E30)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_343EEC6C6C1954B5_OFFSET UNITYSDK_OFFSET(0x9BA00F0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_36ECD76892FB3779_OFFSET UNITYSDK_OFFSET(0x9BAE140)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_388A7AB7AED80A21_OFFSET UNITYSDK_OFFSET(0x9BAC890)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_3DE69049A85FB42F_OFFSET UNITYSDK_OFFSET(0x9BA7F50)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_3E7384E08D2D5671_OFFSET UNITYSDK_OFFSET(0x9BAD250)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_3EC046C94E6AE439_OFFSET UNITYSDK_OFFSET(0x9BA88D0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_441BE74626B5CC12_OFFSET UNITYSDK_OFFSET(0x9BA29A0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_48D10C1E3CA96A16_OFFSET UNITYSDK_OFFSET(0x9BA9420)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_4A12C5E841078B4C_OFFSET UNITYSDK_OFFSET(0x9BAB540)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_53BCE5BE74B1A3B4_OFFSET UNITYSDK_OFFSET(0x9BA5290)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_545F8ED4678B1A23_OFFSET UNITYSDK_OFFSET(0x9BA0070)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_554A055F4C266C4D_OFFSET UNITYSDK_OFFSET(0x9B9F340)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_5606439D351B8B66_OFFSET UNITYSDK_OFFSET(0x9BA72E0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_571362FC81B1611D_OFFSET UNITYSDK_OFFSET(0x9BA8DA0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_5FFB87F21459AC96_OFFSET UNITYSDK_OFFSET(0x9BA5E30)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_653F3493F422AF61_OFFSET UNITYSDK_OFFSET(0x9BABFA0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_669D59E1C6AC1955_OFFSET UNITYSDK_OFFSET(0x9BABEA0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_6AB0CE85E34D5F10_OFFSET UNITYSDK_OFFSET(0x9BAE1A0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_6B023B384C17AC5A_OFFSET UNITYSDK_OFFSET(0x9BAE590)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_6B1E5D708C7F7E2D_OFFSET UNITYSDK_OFFSET(0x9BA2FB0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x9BA3010)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_70FB48151596BA20_OFFSET UNITYSDK_OFFSET(0x9BA4100)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_72E4EA884B462501_OFFSET UNITYSDK_OFFSET(0x9BA3730)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_73D9821501F13DF6_OFFSET UNITYSDK_OFFSET(0x9B9F140)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_780DFAC2B7BF253E_OFFSET UNITYSDK_OFFSET(0x9BA75D0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_7B6DC7754C233E62_OFFSET UNITYSDK_OFFSET(0x9BA7400)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_7B7555169CADCDE6_OFFSET UNITYSDK_OFFSET(0x9BA39E0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_87B9EF6D5476C53F_OFFSET UNITYSDK_OFFSET(0x9BACB10)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_88054DE8B32FB230_OFFSET UNITYSDK_OFFSET(0x9BA35B0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_890667DD111401F7_OFFSET UNITYSDK_OFFSET(0x9BABF40)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_890844340D67EDBB_OFFSET UNITYSDK_OFFSET(0x9BA3280)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_92DA7880E9C9F1B5_OFFSET UNITYSDK_OFFSET(0x9BA92B0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_9498D1ED8BDA5159_OFFSET UNITYSDK_OFFSET(0x9BAB350)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_94CE6AEE424535F0_OFFSET UNITYSDK_OFFSET(0x9BA74C0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_94E67AA2B361C292_OFFSET UNITYSDK_OFFSET(0x9BAAB30)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_9C08B9089FC39E88_OFFSET UNITYSDK_OFFSET(0x9BA17B0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_A0223071CB47F295_OFFSET UNITYSDK_OFFSET(0x9BA0350)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_A2E269316D81C5D5_OFFSET UNITYSDK_OFFSET(0x9BA8F00)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_ABFD3F1DF9E9C72D_OFFSET UNITYSDK_OFFSET(0x9BA3170)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B09C2E83BABDC60F_OFFSET UNITYSDK_OFFSET(0x9BA2E60)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B0F48CB55E668E29_OFFSET UNITYSDK_OFFSET(0x9BAC680)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B42B60FDD97A28E3_OFFSET UNITYSDK_OFFSET(0x9BA2DB0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B68BB63C6CEE57D3_OFFSET UNITYSDK_OFFSET(0x9BAC270)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B7B7406DC7EAA311_OFFSET UNITYSDK_OFFSET(0x9BA5A20)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B86B783EBE83F7BB_OFFSET UNITYSDK_OFFSET(0x9BADBB0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_C4AC82C65ADF42CC_OFFSET UNITYSDK_OFFSET(0x9BA8B10)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_C69D256CFB765B0F_OFFSET UNITYSDK_OFFSET(0x9B9FF00)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_C8ACC852C881E3A7_OFFSET UNITYSDK_OFFSET(0x9BA0470)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_CB39A709D0B693E6_OFFSET UNITYSDK_OFFSET(0x9BA14B0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D52661AF242C4945_OFFSET UNITYSDK_OFFSET(0x9BA3480)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D5BBCBE2A7D472A8_OFFSET UNITYSDK_OFFSET(0x9BAE420)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D67F6DF1F801DBA5_OFFSET UNITYSDK_OFFSET(0x9B9F230)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D72C9C68784F1CF1_OFFSET UNITYSDK_OFFSET(0x9BADEB0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D91B0CA91B44646D_OFFSET UNITYSDK_OFFSET(0x9BAD810)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_E0D1A9FB896978AD_OFFSET UNITYSDK_OFFSET(0x9BAA540)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_EAF87F6F33C72ABB_OFFSET UNITYSDK_OFFSET(0x9BADFF0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_EB1E47495B92553F_OFFSET UNITYSDK_OFFSET(0x9BA0D20)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F02B5B383D593A70_OFFSET UNITYSDK_OFFSET(0x9BAC740)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F15E877F748ED5C9_OFFSET UNITYSDK_OFFSET(0x9BAE2B0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F300A5B436A1A18E_OFFSET UNITYSDK_OFFSET(0x9BA91B0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F3BC15D602300767_OFFSET UNITYSDK_OFFSET(0x9BA0E00)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F58FB09FACC25632_OFFSET UNITYSDK_OFFSET(0x9BA48E0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F7E71F5BED414A40_OFFSET UNITYSDK_OFFSET(0x9BAA020)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F9FE9E58EC5D236E_OFFSET UNITYSDK_OFFSET(0x9B9F4F0)
#define CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_FA53007A29B435C0_OFFSET UNITYSDK_OFFSET(0x9BADB40)
#define CLASS_1_5DF1A9A2BFE01EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x9B9EE40)

inline static constexpr unsigned int Class_1_5DF1A9A2BFE01EF5_TypeDefinitionIndex = 70594;

class Class_1_5DF1A9A2BFE01EF5 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_4; // 0x10
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_5; // 0x18
	::Class_1_24C2E7EF22229C6A* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimViewBakedInfo*>* Field_1_0; // 0x28
	::Class_3_1A92845FAFA5EC77* Field_1_2; // 0x30
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x38

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_73D9821501F13DF6(::RPG::GameCore::LittleGameLevelConfig* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::LittleGameLevelVarBindingMap*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_73D9821501F13DF6_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_545F8ED4678B1A23(::RPG::GameCore::LittleGameEntityConfig* a1, ::Struct_2_FEFADCB82FEB841E_1 a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Struct_2_FEFADCB82FEB841E_1))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_545F8ED4678B1A23_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_C8ACC852C881E3A7(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::Class_2_ED7120C9B64DC28F* a3, ::Struct_2_B6A3FA7992F9F37E_2 a4)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEntityPreset*, ::Class_2_ED7120C9B64DC28F*, ::Struct_2_B6A3FA7992F9F37E_2))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_C8ACC852C881E3A7_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_1F459D3CE05953A1(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_1F459D3CE05953A1_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_441BE74626B5CC12(::Class_2_9DD8A46984F1AFFD* a1, ::System::String* a2, ::RPG::GameCore::FiveDimPropSpawnerParam* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::String*, ::RPG::GameCore::FiveDimPropSpawnerParam*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_441BE74626B5CC12_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_CB39A709D0B693E6(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::Class_0_16E4307DCC419505_237_Class_1_39154B8B2AA98D66* a3)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEntityPreset*, ::Class_0_16E4307DCC419505_237_Class_1_39154B8B2AA98D66*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_CB39A709D0B693E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_224BEF1092B8B62F(::RPG::GameCore::LittleGameLevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_224BEF1092B8B62F_OFFSET))(this, a1);
	}

	::System::Void Method_1_1438F2303E561F30(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_1438F2303E561F30_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_79F4C97127452753* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79F4C97127452753*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C69D256CFB765B0F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_C69D256CFB765B0F_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_343EEC6C6C1954B5(::RPG::GameCore::LittleGameEntityConfig* a1, ::Struct_2_FEFADCB82FEB841E_1 a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Struct_2_FEFADCB82FEB841E_1))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_343EEC6C6C1954B5_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_ABFD3F1DF9E9C72D(::RPG::GameCore::LittleGameEntityConfig* a1, ::Struct_2_FEFADCB82FEB841E_1 a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Struct_2_FEFADCB82FEB841E_1))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_ABFD3F1DF9E9C72D_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_F3BC15D602300767(::RPG::GameCore::LittleGameEntityPreset* a1, ::System::String* a2, ::Struct_2_FEFADCB82FEB841E_1 a3)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityPreset*, ::System::String*, ::Struct_2_FEFADCB82FEB841E_1))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F3BC15D602300767_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5FFB87F21459AC96(::Class_2_9DD8A46984F1AFFD* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::LittleGameComponentConfig*>* a2, ::Struct_2_FEFADCB82FEB841E_1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Collections::Generic::IList_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::Struct_2_FEFADCB82FEB841E_1))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_5FFB87F21459AC96_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_890844340D67EDBB(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_890844340D67EDBB_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_88054DE8B32FB230(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_88054DE8B32FB230_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_F58FB09FACC25632(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F58FB09FACC25632_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_2DF74667F9E9A71A(::RPG::GameCore::LittleGameEntityConfig* a1, ::Struct_2_FEFADCB82FEB841E_1 a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::Struct_2_FEFADCB82FEB841E_1))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_2DF74667F9E9A71A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5606439D351B8B66(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameViewComponentConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameViewComponentConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_5606439D351B8B66_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C4AC82C65ADF42CC(::Class_2_9DD8A46984F1AFFD* a1, ::Struct_2_FEFADCB82FEB841E_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Struct_2_FEFADCB82FEB841E_1))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_C4AC82C65ADF42CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A0223071CB47F295(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_A0223071CB47F295_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_53BCE5BE74B1A3B4(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_53BCE5BE74B1A3B4_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_09CE94408DD2A7E8(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_09CE94408DD2A7E8_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_B7B7406DC7EAA311(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B7B7406DC7EAA311_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_D52661AF242C4945(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D52661AF242C4945_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_7B7555169CADCDE6(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_7B7555169CADCDE6_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_70FB48151596BA20(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_70FB48151596BA20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_72E4EA884B462501(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_72E4EA884B462501_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A2E269316D81C5D5(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_A2E269316D81C5D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F300A5B436A1A18E(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F300A5B436A1A18E_OFFSET))(this, a1);
	}

	::System::Void Method_1_92DA7880E9C9F1B5(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_92DA7880E9C9F1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B8274DEC695E537(::Class_2_9DD8A46984F1AFFD* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_0B8274DEC695E537_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B42B60FDD97A28E3(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B42B60FDD97A28E3_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimViewBakedInfo* Method_1_4A12C5E841078B4C(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::RPG::GameCore::FiveDimViewBakedInfo*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_4A12C5E841078B4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09C2E83BABDC60F(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B09C2E83BABDC60F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B1E5D708C7F7E2D(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_6B1E5D708C7F7E2D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D67F6DF1F801DBA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D67F6DF1F801DBA5_OFFSET))(this);
	}

	::System::Void Method_1_554A055F4C266C4D(::RPG::GameCore::LittleGameLevelConfig* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_554A055F4C266C4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_07880C3C85D28804(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_07880C3C85D28804_OFFSET))(this, a1);
	}

	::System::Void Method_1_669D59E1C6AC1955(::RPG::GameCore::LittleGameLevelVariableCollection* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariableCollection*, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_669D59E1C6AC1955_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0A50B8D0FB7E316B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_0A50B8D0FB7E316B_OFFSET))(this);
	}

	::System::Void Method_1_890667DD111401F7(::RPG::GameCore::FiveDimGameplayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_890667DD111401F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_653F3493F422AF61(::RPG::GameCore::FiveDimLevelSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimLevelSettings*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_653F3493F422AF61_OFFSET))(this, a1);
	}

	::System::Void Method_1_F9FE9E58EC5D236E(::RPG::GameCore::LittleGameLevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F9FE9E58EC5D236E_OFFSET))(this, a1);
	}

	::System::Void Method_1_03752E2BF715F912(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_03752E2BF715F912_OFFSET))(this, a1);
	}

	::System::Void Method_1_B68BB63C6CEE57D3(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B68BB63C6CEE57D3_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_23DE1669CEB9D158(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_23DE1669CEB9D158_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_207D47713558ACC2(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_207D47713558ACC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_48D10C1E3CA96A16(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_48D10C1E3CA96A16_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7E71F5BED414A40(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F7E71F5BED414A40_OFFSET))(this, a1);
	}

	::System::Void Method_1_F02B5B383D593A70(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F02B5B383D593A70_OFFSET))(this, a1);
	}

	::System::Void Method_1_E0D1A9FB896978AD(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_E0D1A9FB896978AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_388A7AB7AED80A21(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_388A7AB7AED80A21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_87B9EF6D5476C53F(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_87B9EF6D5476C53F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EB1E47495B92553F(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::Class_2_ED7120C9B64DC28F* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::LittleGameEntityPreset*, ::Class_2_ED7120C9B64DC28F*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_EB1E47495B92553F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_780DFAC2B7BF253E(::Class_2_9DD8A46984F1AFFD* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a2, ::RPG::GameCore::FiveDimPropMoveComponentConfig* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::RPG::GameCore::FiveDimPropMoveComponentConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_780DFAC2B7BF253E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9C08B9089FC39E88(::Class_2_9DD8A46984F1AFFD* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::RPG::GameCore::FiveDimPropSpawnerParam* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPropSpawnerParam*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_9C08B9089FC39E88_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2CED6CA81636F052(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_2CED6CA81636F052_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::LittleGameEntityPreset* Method_1_D91B0CA91B44646D(::RPG::GameCore::LittleGameEntityPreset* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::LittleGameEntityPreset*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityPreset*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D91B0CA91B44646D_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* Method_1_B86B783EBE83F7BB(::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B86B783EBE83F7BB_OFFSET))(this, a1, a2);
	}

	static ::RPG::GameCore::FiveDimChestConfig* Method_1_D72C9C68784F1CF1(::RPG::GameCore::FiveDimChestConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::FiveDimChestConfig*(*)(::RPG::GameCore::FiveDimChestConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D72C9C68784F1CF1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FiveDimCustomLoadConfig* Method_1_EAF87F6F33C72ABB(::RPG::GameCore::FiveDimCustomLoadConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::FiveDimCustomLoadConfig*(*)(::RPG::GameCore::FiveDimCustomLoadConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_EAF87F6F33C72ABB_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FiveDimDynamicVar* Method_1_36ECD76892FB3779(::System::String* a1)
	{
		return ((::RPG::GameCore::FiveDimDynamicVar*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_36ECD76892FB3779_OFFSET))(a1);
	}

	static ::System::String* Method_1_FA53007A29B435C0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_FA53007A29B435C0_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_1_2CCBBF8A95D15892(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_2CCBBF8A95D15892_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3E7384E08D2D5671(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a1, ::UnityEngine::Bounds& a2, ::UnityEngine::Bounds& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::UnityEngine::Bounds&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_3E7384E08D2D5671_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FiveDimViewBakedInfo* Method_1_6AB0CE85E34D5F10(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a1)
	{
		return ((::RPG::GameCore::FiveDimViewBakedInfo*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_6AB0CE85E34D5F10_OFFSET))(this, a1);
	}

	::System::Void Method_1_21AC040BEE25A8E1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSplineMoveComponentConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSplineMoveComponentConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_21AC040BEE25A8E1_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_0FCA3F8792C4F9A8(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPropMoveConfig* a2, ::System::Boolean a3)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPropMoveConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_0FCA3F8792C4F9A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3DE69049A85FB42F(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimGravityWalkBoardConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimGravityWalkBoardConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_3DE69049A85FB42F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_94E67AA2B361C292(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_94E67AA2B361C292_OFFSET))(this, a1);
	}

	::System::Void Method_1_F15E877F748ED5C9(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_F15E877F748ED5C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5BBCBE2A7D472A8(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_D5BBCBE2A7D472A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_134605C93FF15550(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPipePortalConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPipePortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_134605C93FF15550_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* Method_1_9498D1ED8BDA5159(::System::String* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::String*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_9498D1ED8BDA5159_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_571362FC81B1611D(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_571362FC81B1611D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_2B45E9C89EF5334C(::RPG::GameCore::FiveDimBaseCameraConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_2B45E9C89EF5334C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B6DC7754C233E62(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_7B6DC7754C233E62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_94CE6AEE424535F0(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_94CE6AEE424535F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B3189D09D2D49F4(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimEventReceiverConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimEventReceiverConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_0B3189D09D2D49F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3EC046C94E6AE439(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_3EC046C94E6AE439_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6B023B384C17AC5A(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_6B023B384C17AC5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_21659461FD57CB43(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimWaterReflectionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_21659461FD57CB43_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_240A8C86F7EDF5CA(::System::String* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_240A8C86F7EDF5CA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_B0F48CB55E668E29(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5DF1A9A2BFE01EF5_METHOD_1_B0F48CB55E668E29_OFFSET))(a1, a2);
	}
};
