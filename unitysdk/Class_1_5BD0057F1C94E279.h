#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF6DCCA0AF3DB5F.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/MoleMole/Config/AttackEffectTriggerAt.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/MoleMole/Config/ConfigDataClearPriority.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosYType.h"
#include "unitysdk/MoleMole/Config/HitDirectionType.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/Struct_2_057163E12A7F6FF0.h"
#include "unitysdk/Struct_2_2B6FA625C20F556D.h"
#include "unitysdk/Struct_2_455336A079B58DD3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CDA382D823F8E80;
class Class_1_341DE5683684EA81;
class Class_1_560B23058CA4940C;
class Class_1_EA1FEF8121ADE963;
class Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D;
class Class_3_B8F2A25A5ADF5CEE;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_E2819F45333A39BF;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraPitchPolar; }
namespace MoleMole::Config { class ConfigCameraScreenOffset; }
namespace MoleMole::Config { class ConfigCameraShake; }
namespace MoleMole::Config { class ConfigCameraStretch; }
namespace MoleMole::Config { class ConfigCameraZoom; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntityAttackCameraShake; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigEntityAttackEffectItem; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityCameraStretch; }
namespace MoleMole::Config { class ConfigEntityCameraZoom; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5BD0057F1C94E279_METHOD_1_002843A4E12DD1A7_OFFSET UNITYSDK_OFFSET(0x11064530)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_1_OFFSET UNITYSDK_OFFSET(0x11055E70)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_2_OFFSET UNITYSDK_OFFSET(0x11058B80)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_3_OFFSET UNITYSDK_OFFSET(0x1105FDA0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_4_OFFSET UNITYSDK_OFFSET(0x11065E40)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_OFFSET UNITYSDK_OFFSET(0x11051150)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_1_OFFSET UNITYSDK_OFFSET(0x11060C00)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_2_OFFSET UNITYSDK_OFFSET(0x110667C0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_3_OFFSET UNITYSDK_OFFSET(0x11067D80)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_4_OFFSET UNITYSDK_OFFSET(0x11068410)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_OFFSET UNITYSDK_OFFSET(0x1105C1F0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_0E27D192EFDD2B6C_OFFSET UNITYSDK_OFFSET(0x11053670)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_10429418B17E8BCB_1_OFFSET UNITYSDK_OFFSET(0x11053FF0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_10429418B17E8BCB_2_OFFSET UNITYSDK_OFFSET(0x1105C760)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_10429418B17E8BCB_OFFSET UNITYSDK_OFFSET(0x11051B70)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_114760F3C5EF669F_OFFSET UNITYSDK_OFFSET(0x11056040)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_11F2764A61BB8D06_OFFSET UNITYSDK_OFFSET(0x11066910)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_150F634526131908_OFFSET UNITYSDK_OFFSET(0x11055740)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_1A11147A28C4B33F_OFFSET UNITYSDK_OFFSET(0x11058F00)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_1CD5D43F4A882D09_OFFSET UNITYSDK_OFFSET(0x11061000)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_1CDB76B4EC7004C0_OFFSET UNITYSDK_OFFSET(0x1105F060)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_2037E79D2F5485D2_OFFSET UNITYSDK_OFFSET(0x1105E6F0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_231E3825FEFBD3D4_OFFSET UNITYSDK_OFFSET(0x11068270)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_23E92DBFBAF54EB4_OFFSET UNITYSDK_OFFSET(0x1105CC60)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_28137D816632F098_OFFSET UNITYSDK_OFFSET(0x11055160)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_2BF58CD0A8C8CB09_OFFSET UNITYSDK_OFFSET(0x11052AF0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_358B6DA6F9657CDB_OFFSET UNITYSDK_OFFSET(0x1105F500)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_3907F8ED27E5F444_OFFSET UNITYSDK_OFFSET(0x11054890)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_39BAA858D59BF083_OFFSET UNITYSDK_OFFSET(0x110509D0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_3ABF2BA37D92CBC2_1_OFFSET UNITYSDK_OFFSET(0x11065BC0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_3ABF2BA37D92CBC2_OFFSET UNITYSDK_OFFSET(0x11060D80)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_3F3763398682420D_OFFSET UNITYSDK_OFFSET(0x11068980)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_3FC4FCD9153DBB4C_OFFSET UNITYSDK_OFFSET(0x1105C340)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_413ABDEFD9BC435B_1_OFFSET UNITYSDK_OFFSET(0x11051970)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_413ABDEFD9BC435B_2_OFFSET UNITYSDK_OFFSET(0x11058D00)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_413ABDEFD9BC435B_OFFSET UNITYSDK_OFFSET(0x1104E310)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_44640F0321202E8C_OFFSET UNITYSDK_OFFSET(0x110641D0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_49DBDFF5F4F45266_OFFSET UNITYSDK_OFFSET(0x110542A0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_49E768A3AB3E39F9_OFFSET UNITYSDK_OFFSET(0x11068FB0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_4BF78A3812B246AC_OFFSET UNITYSDK_OFFSET(0x11050AD0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_4C06C1856C00F3A5_OFFSET UNITYSDK_OFFSET(0x1105F650)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_508790878A8EAA7B_OFFSET UNITYSDK_OFFSET(0x110500B0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_5132ACE7ABD85740_OFFSET UNITYSDK_OFFSET(0x11067EA0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_58910688B4A4DCD7_OFFSET UNITYSDK_OFFSET(0x1104EC80)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_5EC0CBFD6377D778_OFFSET UNITYSDK_OFFSET(0x11066ED0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_61225D651FDB2328_OFFSET UNITYSDK_OFFSET(0x110583B0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_67B3B72B1198EEB4_OFFSET UNITYSDK_OFFSET(0x1105B2C0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_68A4F97549FD2B15_OFFSET UNITYSDK_OFFSET(0x11056700)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x110508E0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_6EA09D1549BAA259_OFFSET UNITYSDK_OFFSET(0x11062000)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_7727758F8ED6D95E_OFFSET UNITYSDK_OFFSET(0x110588E0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_77E580E9585C6E9B_OFFSET UNITYSDK_OFFSET(0x11067310)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x110622B0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_79C5879242230702_OFFSET UNITYSDK_OFFSET(0x11052CC0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_7BA7610B31175E32_OFFSET UNITYSDK_OFFSET(0x11065740)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_7BFC2F4A5F93C7F6_OFFSET UNITYSDK_OFFSET(0x1104D590)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_849157A23FDCE840_OFFSET UNITYSDK_OFFSET(0x1104FC00)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_88806261F5F32FBC_OFFSET UNITYSDK_OFFSET(0x110638C0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_8B6C1794A77527EC_1_OFFSET UNITYSDK_OFFSET(0x11062300)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_8B6C1794A77527EC_OFFSET UNITYSDK_OFFSET(0x1105F390)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_8BB9BCB2943AB6B5_OFFSET UNITYSDK_OFFSET(0x11050DC0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x1105ED60)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_9D6373FD5912493D_OFFSET UNITYSDK_OFFSET(0x11062F40)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_9E2364EECBA75EF2_OFFSET UNITYSDK_OFFSET(0x1105BA00)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_A136ECCD00565C1A_1_OFFSET UNITYSDK_OFFSET(0x1105FF70)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_A136ECCD00565C1A_OFFSET UNITYSDK_OFFSET(0x1105F190)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_A1B3482A7653EC52_OFFSET UNITYSDK_OFFSET(0x11062470)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_A632EB8433615BD0_1_OFFSET UNITYSDK_OFFSET(0x110646C0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_A632EB8433615BD0_OFFSET UNITYSDK_OFFSET(0x11054E20)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_AA02D6D6A3EE9FD0_OFFSET UNITYSDK_OFFSET(0x11057670)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_AD43877F9134B666_OFFSET UNITYSDK_OFFSET(0x1104D3D0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_B36F08CB2F2669B5_OFFSET UNITYSDK_OFFSET(0x11055950)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_B79E4627EF615D58_OFFSET UNITYSDK_OFFSET(0x11053140)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_BB9BFC87E7C54740_OFFSET UNITYSDK_OFFSET(0x11055510)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_BC710C1665BC175B_OFFSET UNITYSDK_OFFSET(0x1104DD30)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_BE6A8CD031E0DAC9_OFFSET UNITYSDK_OFFSET(0x11051E20)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_BEBA2F0C409D0430_OFFSET UNITYSDK_OFFSET(0x11063A80)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_C50AB5C929286712_1_OFFSET UNITYSDK_OFFSET(0x11068760)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_C50AB5C929286712_OFFSET UNITYSDK_OFFSET(0x1105CA10)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_C7BC5039624F8FC5_OFFSET UNITYSDK_OFFSET(0x11067670)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_C7D46DBAB054BBCA_OFFSET UNITYSDK_OFFSET(0x11067AA0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_C8FC2759DCCE1C47_OFFSET UNITYSDK_OFFSET(0x11060240)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_C95BF4B56089B030_OFFSET UNITYSDK_OFFSET(0x11053430)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_C9E2B48C80F476C2_OFFSET UNITYSDK_OFFSET(0x11050E50)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_CB843913D46E29C6_OFFSET UNITYSDK_OFFSET(0x1104F0D0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_CDF5355A9CEEC361_OFFSET UNITYSDK_OFFSET(0x11061F30)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_D0593F6C53F7E4B2_OFFSET UNITYSDK_OFFSET(0x11061450)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_D67A9BB814C25B56_OFFSET UNITYSDK_OFFSET(0x11069200)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_D9D62DFF90160B7A_OFFSET UNITYSDK_OFFSET(0x11057130)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_DE8941A31C5729B7_OFFSET UNITYSDK_OFFSET(0x1104FF40)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_E0507B07073B4B67_OFFSET UNITYSDK_OFFSET(0x11064C90)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_1_OFFSET UNITYSDK_OFFSET(0x11064A00)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_2_OFFSET UNITYSDK_OFFSET(0x11067FD0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_3_OFFSET UNITYSDK_OFFSET(0x11068AB0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_4_OFFSET UNITYSDK_OFFSET(0x11068D50)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_OFFSET UNITYSDK_OFFSET(0x1105BC90)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F1CDF50D8D878F54_OFFSET UNITYSDK_OFFSET(0x1105B920)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F21E33954FB9D152_OFFSET UNITYSDK_OFFSET(0x110674A0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F320E24688BA49E4_OFFSET UNITYSDK_OFFSET(0x11051320)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F3C8CB32D5C46D71_OFFSET UNITYSDK_OFFSET(0x1104F2E0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F463D4E5D696FDE6_1_OFFSET UNITYSDK_OFFSET(0x11056D20)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F463D4E5D696FDE6_OFFSET UNITYSDK_OFFSET(0x110662E0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F4AC4590BE48F2DC_1_OFFSET UNITYSDK_OFFSET(0x1104E510)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F4AC4590BE48F2DC_OFFSET UNITYSDK_OFFSET(0x11052380)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F5C4C32487427BD7_OFFSET UNITYSDK_OFFSET(0x11050C80)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F5EDE820B9FBE124_OFFSET UNITYSDK_OFFSET(0x11060170)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F6932A73BFE49F08_1_OFFSET UNITYSDK_OFFSET(0x11064040)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F6932A73BFE49F08_OFFSET UNITYSDK_OFFSET(0x1105EED0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F707FE2010908624_1_OFFSET UNITYSDK_OFFSET(0x1105BEF0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F707FE2010908624_2_OFFSET UNITYSDK_OFFSET(0x11065FD0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F707FE2010908624_OFFSET UNITYSDK_OFFSET(0x11054C60)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F7C6915A3F38948C_OFFSET UNITYSDK_OFFSET(0x110586F0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F8B114C4534FDB63_1_OFFSET UNITYSDK_OFFSET(0x11067CE0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_F8B114C4534FDB63_OFFSET UNITYSDK_OFFSET(0x11058AE0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_FBECF58068A0589F_OFFSET UNITYSDK_OFFSET(0x110504C0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_FDB14BCECAB6E4EE_OFFSET UNITYSDK_OFFSET(0x11068530)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_FFBA759D21F63F92_1_OFFSET UNITYSDK_OFFSET(0x1105C4C0)
#define CLASS_1_5BD0057F1C94E279_METHOD_1_FFBA759D21F63F92_OFFSET UNITYSDK_OFFSET(0x1105B680)
#define CLASS_1_5BD0057F1C94E279__CCTOR_OFFSET UNITYSDK_OFFSET(0x165E9CC0)

inline static constexpr unsigned int Class_1_5BD0057F1C94E279_TypeDefinitionIndex = 75448;

class Class_1_5BD0057F1C94E279 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BD0057F1C94E279_TypeDefinitionIndex)->GetStaticField(0x48090);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BD0057F1C94E279_TypeDefinitionIndex)->GetStaticField(0x48098);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HitDirectionType, ::System::Func_6<::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HitDirectionType, ::System::Func_6<::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BD0057F1C94E279_TypeDefinitionIndex)->GetStaticField(0x480A0);
	}
	static ::System::UInt32* StaticGet_Field_1_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BD0057F1C94E279_TypeDefinitionIndex)->GetStaticField(0x113F0);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279__CCTOR_OFFSET))();
	}

	static ::MoleMole::Battle::Entity* Method_1_AD43877F9134B666(::MoleMole::Battle::Entity* a1, ::Class_1_1CDA382D823F8E80* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::Class_1_1CDA382D823F8E80*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_AD43877F9134B666_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_7BFC2F4A5F93C7F6(::MoleMole::Config::ConfigEntityAttackEffectItem* a1, ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackEffectItem*, ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_7BFC2F4A5F93C7F6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_413ABDEFD9BC435B(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::UInt32 a9, ::System::UInt32 a10, ::Struct_2_057163E12A7F6FF0 a11, ::System::Boolean a12)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_413ABDEFD9BC435B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Single Method_1_58910688B4A4DCD7(::System::Int32 a1, ::System::Single a2, ::MoleMole::Config::AttackEffectTriggerAt a3, ::System::Single a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6)
	{
		return ((::System::Single(*)(::System::Int32, ::System::Single, ::MoleMole::Config::AttackEffectTriggerAt, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_58910688B4A4DCD7_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_CB843913D46E29C6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_CB843913D46E29C6_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_F3C8CB32D5C46D71(::MoleMole::Battle::Entity* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::MoleMole::Config::ConfigEntityAttackPattern* a3)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F3C8CB32D5C46D71_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_849157A23FDCE840(::MoleMole::Config::CameraDelayMoveMode a1, ::MoleMole::Config::CameraDelayMoveMode a2, ::System::Single a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Int32(*)(::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Config::CameraDelayMoveMode, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_849157A23FDCE840_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_DE8941A31C5729B7(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_DE8941A31C5729B7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_508790878A8EAA7B(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::Boolean a9, ::UnityEngine::Vector3 a10, ::UnityEngine::Quaternion a11, ::Struct_2_057163E12A7F6FF0 a12)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_508790878A8EAA7B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Void Method_1_4BF78A3812B246AC(::MoleMole::Config::ConfigDataPriority a1, ::MoleMole::Config::ConfigDataClearPriority a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDataPriority, ::MoleMole::Config::ConfigDataClearPriority, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_4BF78A3812B246AC_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::LayerMask Method_1_8BB9BCB2943AB6B5(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::LayerMask(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_8BB9BCB2943AB6B5_OFFSET))(a1);
	}

	static ::System::Void Method_1_C9E2B48C80F476C2(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::MoleMole::Battle::Entity* a6, ::MoleMole::Battle::Entity* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_C9E2B48C80F476C2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_0B59A49EC148D23B(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::Struct_2_057163E12A7F6FF0 a9, ::System::Boolean a10)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Boolean Method_1_413ABDEFD9BC435B_1(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::UInt32 a9, ::System::UInt32 a10, ::Struct_2_057163E12A7F6FF0 a11, ::System::Boolean a12)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_413ABDEFD9BC435B_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Boolean Method_1_10429418B17E8BCB(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::Boolean a8, ::Il2CppArray<::System::String*>* a9, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a10, ::System::UInt32 a11, ::System::UInt32 a12, ::Struct_2_057163E12A7F6FF0 a13, ::System::Boolean a14)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_10429418B17E8BCB_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	static ::System::Boolean Method_1_BE6A8CD031E0DAC9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_BE6A8CD031E0DAC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F4AC4590BE48F2DC(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::UInt32 a9, ::System::Boolean a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Quaternion a12, ::System::UInt32 a13, ::Struct_2_057163E12A7F6FF0 a14, ::System::Boolean a15)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F4AC4590BE48F2DC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}

	static ::System::Void Method_1_2BF58CD0A8C8CB09(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>* a1, ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*, ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_2BF58CD0A8C8CB09_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_F320E24688BA49E4(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::UInt32 a9, ::System::Boolean a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Quaternion a12, ::System::UInt32 a13, ::Struct_2_057163E12A7F6FF0 a14, ::System::Boolean a15)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F320E24688BA49E4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}

	static ::System::Void Method_1_79C5879242230702(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_79C5879242230702_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_C95BF4B56089B030(::Class_3_E2819F45333A39BF* a1, ::Class_3_E2819F45333A39BF* a2, ::Class_1_EA1FEF8121ADE963* a3, ::System::Collections::Generic::HashSet_1<::System::Int32>* a4, ::Class_1_341DE5683684EA81* a5, ::System::Boolean a6, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>* a7)
	{
		return ((::System::Void(*)(::Class_3_E2819F45333A39BF*, ::Class_3_E2819F45333A39BF*, ::Class_1_EA1FEF8121ADE963*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::Class_1_341DE5683684EA81*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_C95BF4B56089B030_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_0E27D192EFDD2B6C(::System::String* a1, ::MoleMole::Config::ConfigCameraShake* a2, ::MoleMole::Battle::Entity* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::ConfigCameraShake*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0E27D192EFDD2B6C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_10429418B17E8BCB_1(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::Boolean a8, ::Il2CppArray<::System::String*>* a9, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a10, ::System::UInt32 a11, ::System::UInt32 a12, ::Struct_2_057163E12A7F6FF0 a13, ::System::Boolean a14)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_10429418B17E8BCB_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	static ::System::Void Method_1_49DBDFF5F4F45266(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_1_1CDA382D823F8E80* a3, ::Enum_3_7CF6DCCA0AF3DB5F a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_1CDA382D823F8E80*, ::Enum_3_7CF6DCCA0AF3DB5F))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_49DBDFF5F4F45266_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_3907F8ED27E5F444(::Class_3_E2819F45333A39BF* a1, ::Class_3_E2819F45333A39BF* a2, ::Class_1_EA1FEF8121ADE963* a3, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>* a5)
	{
		return ((::System::Void(*)(::Class_3_E2819F45333A39BF*, ::Class_3_E2819F45333A39BF*, ::Class_1_EA1FEF8121ADE963*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_3907F8ED27E5F444_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_F707FE2010908624(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F707FE2010908624_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_A632EB8433615BD0(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::UInt32 a5, ::System::Func_1<::System::Single>* a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::System::Single, ::System::UInt32, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_A632EB8433615BD0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_1_28137D816632F098(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_28137D816632F098_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_150F634526131908(::System::String* a1, ::System::Single a2, ::UnityEngine::Canvas* a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::System::Single a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::UnityEngine::Canvas*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_150F634526131908_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_0B59A49EC148D23B_1(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::Struct_2_057163E12A7F6FF0 a9, ::System::Boolean a10)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::UnityEngine::Vector3 Method_1_68A4F97549FD2B15(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_68A4F97549FD2B15_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_F4AC4590BE48F2DC_1(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::UInt32 a9, ::System::Boolean a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Quaternion a12, ::System::UInt32 a13, ::Struct_2_057163E12A7F6FF0 a14, ::System::Boolean a15)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F4AC4590BE48F2DC_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}

	static ::System::Void Method_1_D9D62DFF90160B7A(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::MoleMole::Config::ConfigCameraZoom* a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Config::ConfigCameraZoom*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_D9D62DFF90160B7A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_AA02D6D6A3EE9FD0(::Class_1_EA1FEF8121ADE963* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Config::ConfigEntityAttackEffect* a4)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackEffect*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_AA02D6D6A3EE9FD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_61225D651FDB2328(::System::String* a1, ::MoleMole::Config::ConfigCameraPitchPolar* a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::System::Single a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::ConfigCameraPitchPolar*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_61225D651FDB2328_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_F7C6915A3F38948C(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::ConfigEntityAttackPattern* a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F7C6915A3F38948C_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_6BCB722BBE18B904_OFFSET))();
	}

	static ::System::Boolean Method_1_F8B114C4534FDB63(::MoleMole::Cameras::CameraDataAccessor* a1, ::MoleMole::Config::ConfigCameraStretch* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::Config::ConfigCameraStretch*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F8B114C4534FDB63_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0B59A49EC148D23B_2(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::Struct_2_057163E12A7F6FF0 a9, ::System::Boolean a10)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_1_B36F08CB2F2669B5(::System::String* a1, ::MoleMole::Config::ConfigCameraScreenOffset* a2, ::System::Single a3, ::UnityEngine::Canvas* a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::System::Single a7, ::System::Single a8, ::MoleMole::Battle::Entity* a9)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::ConfigCameraScreenOffset*, ::System::Single, ::UnityEngine::Canvas*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_B36F08CB2F2669B5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_1A11147A28C4B33F(::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* a1, ::MoleMole::Config::HitDirectionType a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*, ::MoleMole::Config::HitDirectionType, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_1A11147A28C4B33F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_67B3B72B1198EEB4(::Class_1_EA1FEF8121ADE963* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Config::ConfigEntityAttackEffect* a4)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackEffect*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_67B3B72B1198EEB4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_FFBA759D21F63F92(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_FFBA759D21F63F92_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* Method_1_F1CDF50D8D878F54(::PipelineCamera::WorldBasicCameraDataDeltaFlag a1, ::System::Boolean a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F1CDF50D8D878F54_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_9E2364EECBA75EF2(::System::String* a1, ::System::UInt32 a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_9E2364EECBA75EF2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_413ABDEFD9BC435B_2(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::UInt32 a9, ::System::UInt32 a10, ::Struct_2_057163E12A7F6FF0 a11, ::System::Boolean a12)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_413ABDEFD9BC435B_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Boolean Method_1_EDCE93D9F44BE831(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::UInt32 a8, ::System::Boolean a9, ::Il2CppArray<::System::String*>* a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_057163E12A7F6FF0 a12, ::System::Boolean a13)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	static ::UnityEngine::Vector3 Method_1_F707FE2010908624_1(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F707FE2010908624_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_BC710C1665BC175B(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::MoleMole::Config::AttackEffectTriggerAt a3, ::System::Single a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32, ::UnityEngine::Vector3, ::MoleMole::Config::AttackEffectTriggerAt, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_BC710C1665BC175B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Vector3 Method_1_0D9C6EB19BC09198(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3FC4FCD9153DBB4C(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_3FC4FCD9153DBB4C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_FFBA759D21F63F92_1(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Boolean a4, ::System::Single a5, ::System::Int32 a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_FFBA759D21F63F92_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_10429418B17E8BCB_2(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::Boolean a8, ::Il2CppArray<::System::String*>* a9, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a10, ::System::UInt32 a11, ::System::UInt32 a12, ::Struct_2_057163E12A7F6FF0 a13, ::System::Boolean a14)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_10429418B17E8BCB_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	static ::UnityEngine::Vector3 Method_1_C50AB5C929286712(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_C50AB5C929286712_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_39BAA858D59BF083(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a4, ::System::UInt32 a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_39BAA858D59BF083_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_2037E79D2F5485D2(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_2037E79D2F5485D2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_8F059A365E90744C_OFFSET))();
	}

	static ::System::Void Method_1_F6932A73BFE49F08(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Config::ConfigDataClearPriority a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigDataClearPriority, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F6932A73BFE49F08_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_1CDB76B4EC7004C0(::MoleMole::Config::ConfigEntityAttackEffectItem* a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackEffectItem*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_1CDB76B4EC7004C0_OFFSET))(a1);
	}

	static ::System::Void Method_1_A136ECCD00565C1A(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_A136ECCD00565C1A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_8B6C1794A77527EC(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_8B6C1794A77527EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_358B6DA6F9657CDB(::MoleMole::Config::ConfigEntityCameraStretch* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityCameraStretch*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_358B6DA6F9657CDB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0B59A49EC148D23B_3(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::Struct_2_057163E12A7F6FF0 a9, ::System::Boolean a10)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_1_A136ECCD00565C1A_1(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_A136ECCD00565C1A_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F5EDE820B9FBE124(::Class_1_EA1FEF8121ADE963* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F5EDE820B9FBE124_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_0D9C6EB19BC09198_1(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3ABF2BA37D92CBC2(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_3ABF2BA37D92CBC2_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_1CD5D43F4A882D09(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_1CD5D43F4A882D09_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D0593F6C53F7E4B2(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a1, ::MoleMole::Config::ConfigEntityAnimEvent* a2, ::Class_1_1CDA382D823F8E80* a3, ::MoleMole::Battle::Entity* a4, ::Class_3_B8F2A25A5ADF5CEE* a5, ::Class_3_F97B015544BE936B* a6, ::System::UInt32 a7, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>* a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::MoleMole::Config::ConfigEntityAnimEvent*, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::Class_3_B8F2A25A5ADF5CEE*, ::Class_3_F97B015544BE936B*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_D0593F6C53F7E4B2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Boolean Method_1_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_797B0DC3D00A8877_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_6EA09D1549BAA259(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::MoleMole::Config::ConfigEntityAttackProperty* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Config::ConfigEntityAttackProperty*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_6EA09D1549BAA259_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_8B6C1794A77527EC_1(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_8B6C1794A77527EC_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_BB9BFC87E7C54740(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_BB9BFC87E7C54740_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_1_FBECF58068A0589F(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_FBECF58068A0589F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A1B3482A7653EC52(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_A1B3482A7653EC52_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_9D6373FD5912493D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType a2, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Transform* a5)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_9D6373FD5912493D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_BEBA2F0C409D0430(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_BEBA2F0C409D0430_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_7727758F8ED6D95E(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::MoleMole::Config::ConfigEntityAttackPattern* a3)
	{
		return ((::System::Boolean(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_7727758F8ED6D95E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F6932A73BFE49F08_1(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Config::ConfigDataClearPriority a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigDataClearPriority, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F6932A73BFE49F08_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_44640F0321202E8C(::MoleMole::Config::ConfigEntityAttackCameraShake* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityAttackCameraShake*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_44640F0321202E8C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_002843A4E12DD1A7(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Config::ConfigDataClearPriority a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigDataClearPriority, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_002843A4E12DD1A7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A632EB8433615BD0_1(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::UInt32 a5, ::System::Func_1<::System::Single>* a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::System::Single, ::System::UInt32, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_A632EB8433615BD0_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_EDCE93D9F44BE831_1(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::UInt32 a8, ::System::Boolean a9, ::Il2CppArray<::System::String*>* a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_057163E12A7F6FF0 a12, ::System::Boolean a13)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_23E92DBFBAF54EB4(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a4, ::System::UInt32 a5, ::System::Boolean a6, ::System::Boolean& a7, ::System::Int32 a8)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32, ::System::Boolean, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_23E92DBFBAF54EB4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_3ABF2BA37D92CBC2_1(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_3ABF2BA37D92CBC2_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0B59A49EC148D23B_4(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::Struct_2_057163E12A7F6FF0 a9, ::System::Boolean a10)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0B59A49EC148D23B_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::UnityEngine::Vector3 Method_1_F707FE2010908624_2(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F707FE2010908624_2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_F463D4E5D696FDE6(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F463D4E5D696FDE6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_7BA7610B31175E32(::Class_3_E2819F45333A39BF* a1, ::Class_3_E2819F45333A39BF* a2, ::MoleMole::Config::ConfigEntityAttackProperty* a3)
	{
		return ((::System::Boolean(*)(::Class_3_E2819F45333A39BF*, ::Class_3_E2819F45333A39BF*, ::MoleMole::Config::ConfigEntityAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_7BA7610B31175E32_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_88806261F5F32FBC(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Single(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_88806261F5F32FBC_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_0D9C6EB19BC09198_2(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4C06C1856C00F3A5(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::MoleMole::Config::ConfigCameraStretch* a3, ::System::Single a4, ::System::Int32 a5, ::System::Single a6, ::System::Single a7, ::System::Action_2<::Enum_3_903100312A285543, ::Enum_3_903100312A285543>* a8)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::MoleMole::Config::ConfigCameraStretch*, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Action_2<::Enum_3_903100312A285543, ::Enum_3_903100312A285543>*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_4C06C1856C00F3A5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_5EC0CBFD6377D778(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_5EC0CBFD6377D778_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_77E580E9585C6E9B(::MoleMole::Config::ConfigDataPriority a1, ::MoleMole::Config::ConfigDataClearPriority a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDataPriority, ::MoleMole::Config::ConfigDataClearPriority, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_77E580E9585C6E9B_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_F463D4E5D696FDE6_1(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F463D4E5D696FDE6_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F21E33954FB9D152(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a1, ::Class_1_1CDA382D823F8E80* a2, ::MoleMole::Battle::Entity* a3, ::Class_3_B8F2A25A5ADF5CEE* a4, ::Class_3_F97B015544BE936B* a5, ::System::UInt32 a6, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>* a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::Class_3_B8F2A25A5ADF5CEE*, ::Class_3_F97B015544BE936B*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F21E33954FB9D152_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_C7BC5039624F8FC5(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_C7BC5039624F8FC5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_C7D46DBAB054BBCA(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_C7D46DBAB054BBCA_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_1_11F2764A61BB8D06(::MoleMole::Cameras::CameraDataAccessor* a1, ::System::String* a2, ::MoleMole::Config::ConfigCameraStretch* a3, ::System::Single a4, ::System::Int32 a5, ::MoleMole::Battle::Entity* a6)
	{
		return ((::System::Int32(*)(::MoleMole::Cameras::CameraDataAccessor*, ::System::String*, ::MoleMole::Config::ConfigCameraStretch*, ::System::Single, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_11F2764A61BB8D06_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_F8B114C4534FDB63_1(::MoleMole::Cameras::CameraDataAccessor* a1, ::MoleMole::Config::ConfigCameraStretch* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::Config::ConfigCameraStretch*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F8B114C4534FDB63_1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_0D9C6EB19BC09198_3(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Func_6<::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>* Method_1_5132ACE7ABD85740(::MoleMole::Config::HitDirectionType a1)
	{
		return ((::System::Func_6<::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>*(*)(::MoleMole::Config::HitDirectionType))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_5132ACE7ABD85740_OFFSET))(a1);
	}

	static ::System::Void Method_1_C8FC2759DCCE1C47(::Class_1_EA1FEF8121ADE963* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>* a4)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_C8FC2759DCCE1C47_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_EDCE93D9F44BE831_2(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::UInt32 a8, ::System::Boolean a9, ::Il2CppArray<::System::String*>* a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_057163E12A7F6FF0 a12, ::System::Boolean a13)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	static ::System::Nullable_1<::Struct_2_455336A079B58DD3> Method_1_231E3825FEFBD3D4(::System::Boolean a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Nullable_1<::Struct_2_455336A079B58DD3>(*)(::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_231E3825FEFBD3D4_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B79E4627EF615D58(::System::Boolean a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_B79E4627EF615D58_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* Method_1_E0507B07073B4B67(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a2, ::System::UInt32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_E0507B07073B4B67_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_0D9C6EB19BC09198_4(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_0D9C6EB19BC09198_4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Struct_2_2B6FA625C20F556D Method_1_CDF5355A9CEEC361(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::Struct_2_2B6FA625C20F556D(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_CDF5355A9CEEC361_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FDB14BCECAB6E4EE(::System::String* a1, ::System::Single a2, ::UnityEngine::Canvas* a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::System::Single a6, ::System::Single a7, ::MoleMole::Battle::Entity* a8)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::UnityEngine::Canvas*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_FDB14BCECAB6E4EE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_F5C4C32487427BD7(::MoleMole::Config::ConfigDataPriority a1, ::MoleMole::Config::ConfigDataClearPriority a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigDataPriority, ::MoleMole::Config::ConfigDataClearPriority, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_F5C4C32487427BD7_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_C50AB5C929286712_1(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_C50AB5C929286712_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3F3763398682420D(::MoleMole::Config::ConfigEntityCameraZoom* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityCameraZoom*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_3F3763398682420D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EDCE93D9F44BE831_3(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::UInt32 a8, ::System::Boolean a9, ::Il2CppArray<::System::String*>* a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_057163E12A7F6FF0 a12, ::System::Boolean a13)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	static ::System::Boolean Method_1_EDCE93D9F44BE831_4(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::UInt32 a8, ::System::Boolean a9, ::Il2CppArray<::System::String*>* a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_057163E12A7F6FF0 a12, ::System::Boolean a13)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_EDCE93D9F44BE831_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	static ::System::Void Method_1_49E768A3AB3E39F9(::Class_1_EA1FEF8121ADE963* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_49E768A3AB3E39F9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_114760F3C5EF669F(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::Boolean a9, ::UnityEngine::Vector3 a10, ::UnityEngine::Quaternion a11, ::Struct_2_057163E12A7F6FF0 a12)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_057163E12A7F6FF0))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_114760F3C5EF669F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::UnityEngine::Vector3 Method_1_D67A9BB814C25B56(::MoleMole::Config::ConfigEntityAttackPattern* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_METHOD_1_D67A9BB814C25B56_OFFSET))(a1, a2, a3, a4, a5);
	}
};
