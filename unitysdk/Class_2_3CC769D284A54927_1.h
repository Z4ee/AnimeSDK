#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Enum_3_8B68B5C2E96E415B.h"
#include "unitysdk/Class_2_3CC769D284A54927_1_Struct_2_25AF7E5CD29C404A_3.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_0589839C04E22A88.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_B89961F60F1DB18A.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_86D58C2A2996E647.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_207206F45DEB584F;
class Class_1_2BEAA93324417DF4;
class Class_1_451601B8BB62C38C_2;
class Class_2_208CC9941471731A_58;
class Class_2_208CC9941471731A_611;
class Class_2_208CC9941471731A_782;
class Class_2_5F64140FAB2210F3;
class Class_3_6EF456A21AE85EEC_101;
class Class_3_9D33A2E94B3E53DC;
class Class_3_E82E721E2B3FD119_1;
class FishingRodController;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace RootMotion::FinalIK { class LookController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3CC769D284A54927_1_METHOD_2_00DF19F0A88D3736_OFFSET UNITYSDK_OFFSET(0x15189CF0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_0226814FB70D5A65_OFFSET UNITYSDK_OFFSET(0x1517D4F0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x15189DC0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x15188C90)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_08B8D05BB3CFDF07_OFFSET UNITYSDK_OFFSET(0x15180A00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_0ADC582EB14DFFD4_OFFSET UNITYSDK_OFFSET(0x1517F390)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x1517EFD0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_12EC7B01FB5FB7AD_OFFSET UNITYSDK_OFFSET(0x151829F0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15181EE0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1938F8C98D264CE8_OFFSET UNITYSDK_OFFSET(0x15180580)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x15188750)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1517DE80)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_1FD6BDA1CE7A4F68_OFFSET UNITYSDK_OFFSET(0x151871E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x15180080)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_2A464C7D2EBD78DF_OFFSET UNITYSDK_OFFSET(0x15180800)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_2E710A547EDB1A3B_OFFSET UNITYSDK_OFFSET(0x15188500)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_333A447E1F9DB36C_OFFSET UNITYSDK_OFFSET(0x1518AB50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1517FFB0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_33CBE6FE8D080760_OFFSET UNITYSDK_OFFSET(0x1517F2F0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3694AD952F4FFD05_OFFSET UNITYSDK_OFFSET(0x15182D70)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_1_OFFSET UNITYSDK_OFFSET(0x15182CB0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_2_OFFSET UNITYSDK_OFFSET(0x15186670)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_3_OFFSET UNITYSDK_OFFSET(0x15187800)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_4_OFFSET UNITYSDK_OFFSET(0x151879C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_OFFSET UNITYSDK_OFFSET(0x15181AF0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3E59D56A6D957BC3_1_OFFSET UNITYSDK_OFFSET(0x15185F00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_3E59D56A6D957BC3_OFFSET UNITYSDK_OFFSET(0x1517E620)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_425CA77B2A154CC8_OFFSET UNITYSDK_OFFSET(0x1517E020)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1517F290)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1518A500)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4568CF0A4B3096CD_OFFSET UNITYSDK_OFFSET(0x1518BC50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_483E22AD1DF04969_OFFSET UNITYSDK_OFFSET(0x1517E510)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1517E610)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x15187B30)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_4EB936DFEDBF174D_OFFSET UNITYSDK_OFFSET(0x1518A090)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x151878B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x15181F50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1517FC50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_5D97F2BBB034A0D8_OFFSET UNITYSDK_OFFSET(0x1518AF10)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_62FC2DCD2EF869D5_OFFSET UNITYSDK_OFFSET(0x15180DB0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_65177D87AE73D86A_1_OFFSET UNITYSDK_OFFSET(0x151878C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_65177D87AE73D86A_OFFSET UNITYSDK_OFFSET(0x1517E440)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_68C5DD35C3F86CD6_OFFSET UNITYSDK_OFFSET(0x15188CA0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_6C8825BD793BF050_OFFSET UNITYSDK_OFFSET(0x151863E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_734CC582838F149E_OFFSET UNITYSDK_OFFSET(0x15186170)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_7536D813D608DD3E_OFFSET UNITYSDK_OFFSET(0x1518AC10)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_806E0B713D18089E_OFFSET UNITYSDK_OFFSET(0x15181F80)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_81B91E393925E0D6_OFFSET UNITYSDK_OFFSET(0x1518A450)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x15187090)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x15188C80)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1517FBA0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_847EE1C72FB227FF_OFFSET UNITYSDK_OFFSET(0x151875A0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_851895CF23E62498_OFFSET UNITYSDK_OFFSET(0x1518B850)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_85937A082BD1F4EA_OFFSET UNITYSDK_OFFSET(0x1517E270)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x1517D060)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_8972CA953214CCAC_OFFSET UNITYSDK_OFFSET(0x15188F30)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_8D388218652F2B2F_OFFSET UNITYSDK_OFFSET(0x1517E1B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_91177D56EE5BDFAA_OFFSET UNITYSDK_OFFSET(0x15181A30)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_928CB4D70C21FDF4_OFFSET UNITYSDK_OFFSET(0x15181830)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9309CE6A2148BDD0_OFFSET UNITYSDK_OFFSET(0x15187D80)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_933D559847530E10_OFFSET UNITYSDK_OFFSET(0x1518B770)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x151881A0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x1517E8B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x15189010)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_9E606B1B650D2069_OFFSET UNITYSDK_OFFSET(0x1517F040)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x15186660)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x15189C50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A20A6181036872A3_1_OFFSET UNITYSDK_OFFSET(0x1518ADD0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A20A6181036872A3_OFFSET UNITYSDK_OFFSET(0x1517CF30)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x15188800)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_1_OFFSET UNITYSDK_OFFSET(0x15189DE0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_2_OFFSET UNITYSDK_OFFSET(0x1518AD80)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x151890B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x1518A980)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AC901EA28F4E7EB8_OFFSET UNITYSDK_OFFSET(0x15186F20)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AFDC576A9606B859_1_OFFSET UNITYSDK_OFFSET(0x151858F0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0x15183270)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x15189E30)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_B4B14845111E88EF_OFFSET UNITYSDK_OFFSET(0x1517C8A0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x15180520)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x151854B0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_BDA46A2B8AED6F11_OFFSET UNITYSDK_OFFSET(0x15186750)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1517E8A0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C39B31ED923BE88F_OFFSET UNITYSDK_OFFSET(0x151820C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C42984D76968C1E1_OFFSET UNITYSDK_OFFSET(0x1517FD70)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1517E890)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15187A80)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1517FB50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1517DDD0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_CA4BD7E44297D973_OFFSET UNITYSDK_OFFSET(0x1517D8C0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_D2EF5984500DDB97_OFFSET UNITYSDK_OFFSET(0x15182040)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1517DE60)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_D6D52FBAAAA4BA8B_OFFSET UNITYSDK_OFFSET(0x1518A510)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x15187690)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E2E632F486B6377D_OFFSET UNITYSDK_OFFSET(0x1517DEE0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E7262B6FC0F1EFC1_OFFSET UNITYSDK_OFFSET(0x151827E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E86DCAEC10915696_OFFSET UNITYSDK_OFFSET(0x15186210)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_E8A4A5DF27E2D917_OFFSET UNITYSDK_OFFSET(0x15188250)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_EFB5322CAF695953_OFFSET UNITYSDK_OFFSET(0x15180BC0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x151863D0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15181F70)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x151877E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x1518AD50)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15180D90)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x1517C7E0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1517FD00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F239777256F9BA8F_1_OFFSET UNITYSDK_OFFSET(0x1518AD40)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x15189DD0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F44CBB782D24B59B_OFFSET UNITYSDK_OFFSET(0x15187130)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x15186C00)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x15181BC0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x1518AAE0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FBE15357DD45AC7D_OFFSET UNITYSDK_OFFSET(0x15189100)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x1517FC60)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET UNITYSDK_OFFSET(0x151870A0)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET UNITYSDK_OFFSET(0x15187A90)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET UNITYSDK_OFFSET(0x1518AA40)
#define CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x1517FBB0)
#define CLASS_2_3CC769D284A54927_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1517CEF0)
#define CLASS_2_3CC769D284A54927_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1517CA00)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_TypeDefinitionIndex = 86297;

class Class_2_3CC769D284A54927_1 : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Single* StaticGet_Field_2_46()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0x10620);
	}
	static ::System::Int32* StaticGet_Field_2_63()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0x10624);
	}
	static ::System::Int32* StaticGet_Field_2_64()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0x10628);
	}
	static ::System::Int32* StaticGet_Field_2_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0x1062C);
	}
	static ::System::Boolean* StaticGet_Field_2_62()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0x10630);
	}
	static ::System::Int32* StaticGet_Field_2_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0x10634);
	}
	static ::System::Single* StaticGet_Field_2_27()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CC769D284A54927_1_TypeDefinitionIndex)->GetStaticField(0x10638);
	}
	// static const ::System::Int32 Field_2_139 = 0x579; // 0x0
	// static const ::System::Int32 Field_2_140 = 0x583; // 0x0
	::UnityEngine::Transform* Field_2_122; // 0x18
	::MoleMole::Battle::Entity* Field_2_106; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_50; // 0x28
	::MoleMole::Battle::Entity* Field_2_110; // 0x30
	::MoleMole::Battle::Entity* Field_2_115; // 0x38
	::Class_3_6EF456A21AE85EEC_101* Field_2_3; // 0x40
	::MoleMole::Battle::Entity* Field_2_109; // 0x48
	::UnityEngine::Transform* Field_2_118; // 0x50
	::UnityEngine::Transform* Field_2_112; // 0x58
	::UnityEngine::Material* Field_2_14; // 0x60
	::UnityEngine::Animator* Field_2_58; // 0x68
	::Class_2_208CC9941471731A_58* Field_2_38; // 0x70
	::MoleMole::Battle::Entity* Field_2_103; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_142; // 0x80
	::Class_2_208CC9941471731A_611* Field_2_43; // 0x88
	::Class_2_5F64140FAB2210F3* Field_2_8; // 0x90
	::System::Collections::Generic::List_1<::Class_3_6EF456A21AE85EEC_101*>* Field_2_2; // 0x98
	::System::Threading::CancellationToken Field_2_97; // 0xA0
	::MoleMole::Battle::Entity* Field_2_57; // 0xA8
	::RootMotion::FinalIK::LookController* Field_2_59; // 0xB0
	::System::Collections::Generic::Dictionary_2<::Class_2_3CC769D284A54927_1_Enum_3_8B68B5C2E96E415B, ::System::Int32>* Field_2_141; // 0xB8
	::System::Collections::Generic::List_1<::Class_3_E82E721E2B3FD119_1*>* Field_2_1; // 0xC0
	::UnityEngine::Transform* Field_2_120; // 0xC8
	::MoleMole::Battle::Entity* Field_2_108; // 0xD0
	::Foundation::AssetPath Field_2_104; // 0xD8
	::Foundation::AssetRequestHandle Field_2_127; // 0xE8
	::Class_1_2BEAA93324417DF4* Field_2_138; // 0x108
	::UnityEngine::Transform* Field_2_124; // 0x110
	::MoleMole::Battle::Entity* Field_2_144; // 0x118
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_49; // 0x120
	::UnityEngine::Transform* Field_2_111; // 0x128
	::UnityEngine::Animator* Field_2_117; // 0x130
	::UnityEngine::Transform* Field_2_123; // 0x138
	::UnityEngine::Transform* Field_2_121; // 0x140
	::System::Collections::Generic::List_1<::Class_3_9D33A2E94B3E53DC*>* Field_2_41; // 0x148
	::System::Collections::Generic::Queue_1<::Class_3_9D33A2E94B3E53DC*>* Field_2_40; // 0x150
	::Class_1_207206F45DEB584F* Field_2_4; // 0x158
	::Class_3_9D33A2E94B3E53DC* Field_2_42; // 0x160
	::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C_2*>* Field_2_147; // 0x168
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScreenEffectType>* Field_2_143; // 0x170
	::UnityEngine::Transform* Field_2_125; // 0x178
	::UnityEngine::Transform* Field_2_113; // 0x180
	::FishingRodController* Field_2_116; // 0x188
	::UnityEngine::GameObject* Field_2_126; // 0x190
	::UnityEngine::Transform* Field_2_119; // 0x198
	::Class_2_208CC9941471731A_782* Field_2_31; // 0x1A0
	::MoleMole::Battle::Entity* Field_2_107; // 0x1A8
	::UnityEngine::GameObject* Field_2_105; // 0x1B0
	::Class_2_3CC769D284A54927_1_Struct_2_25AF7E5CD29C404A_3 Field_2_9; // 0x1B8
	::System::Int32 Field_2_73; // 0x1D8
	::Class_2_3CC769D284A54927_Enum_3_B89961F60F1DB18A Field_2_29; // 0x1DC
	::System::Int32 Field_2_96; // 0x1E0
	::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A Field_2_5; // 0x1E4
	::System::Int32 Field_2_71; // 0x1E8
	::System::Int32 Field_2_72; // 0x1EC
	::System::Int32 Field_2_26; // 0x1F0
	::System::Int32 Field_2_30; // 0x1F4
	::System::Int32 Field_2_82; // 0x1F8
	::System::Int32 Field_2_0; // 0x1FC
	::System::Boolean Field_2_136; // 0x200
	::System::Boolean Field_2_34; // 0x201
	::System::Int32 Field_2_76; // 0x204
	::System::Int32 Field_2_137; // 0x208
	::System::Int32 Field_2_51; // 0x20C
	::UnityEngine::Vector3 Field_2_128; // 0x210
	::System::Int32 Field_2_25; // 0x21C
	::UnityEngine::Quaternion Field_2_61; // 0x220
	::System::Int32 Field_2_81; // 0x230
	::System::Int32 Field_2_79; // 0x234
	::System::Int32 Field_2_16; // 0x238
	::System::Single Field_2_135; // 0x23C
	::System::Boolean Field_2_100; // 0x240
	::System::Boolean Field_2_37; // 0x241
	::System::Boolean Field_2_44; // 0x242
	::System::Boolean Field_2_114; // 0x243
	::UnityEngine::Vector3 Field_2_60; // 0x244
	::System::Single Field_2_19; // 0x250
	::System::Int32 Field_2_92; // 0x254
	::System::Int32 Field_2_91; // 0x258
	::System::Int32 Field_2_75; // 0x25C
	::System::Single Field_2_55; // 0x260
	::System::Int32 Field_2_83; // 0x264
	::System::Int32 Field_2_10; // 0x268
	::System::Single Field_2_21; // 0x26C
	::System::Int32 Field_2_65; // 0x270
	::System::Int32 Field_2_84; // 0x274
	::System::Single Field_2_145; // 0x278
	::System::Int32 Field_2_80; // 0x27C
	::UnityEngine::Vector3 Field_2_13; // 0x280
	::System::Int32 Field_2_78; // 0x28C
	::System::Int32 Field_2_68; // 0x290
	::System::Int32 Field_2_86; // 0x294
	::System::Int32 Field_2_67; // 0x298
	::System::Boolean Field_2_98; // 0x29C
	::System::Boolean Field_2_102; // 0x29D
	::System::Boolean Field_2_54; // 0x29E
	::System::Boolean Field_2_101; // 0x29F
	::System::Int32 Field_2_89; // 0x2A0
	::System::Int32 Field_2_90; // 0x2A4
	::System::Int32 Field_2_33; // 0x2A8
	::System::Single Field_2_12; // 0x2AC
	::Class_2_3CC769D284A54927_Enum_3_0589839C04E22A88 Field_2_17; // 0x2B0
	::System::UInt32 Field_2_32; // 0x2B4
	::System::UInt32 Field_2_36; // 0x2B8
	::System::Int32 Field_2_94; // 0x2BC
	::System::Int32 Field_2_24; // 0x2C0
	::System::Int32 Field_2_130; // 0x2C4
	::System::Boolean Field_2_99; // 0x2C8
	::System::Boolean Field_2_28; // 0x2C9
	::System::Boolean Field_2_7; // 0x2CA
	::System::Boolean Field_2_52; // 0x2CB
	::System::Int32 Field_2_88; // 0x2CC
	::System::Single Field_2_45; // 0x2D0
	::System::Int32 Field_2_132; // 0x2D4
	::System::Single Field_2_56; // 0x2D8
	::System::Int32 Field_2_95; // 0x2DC
	::System::Single Field_2_129; // 0x2E0
	::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3 Field_2_23; // 0x2E4
	::System::Int32 Field_2_77; // 0x2E8
	::System::Int32 Field_2_69; // 0x2EC
	::System::Single Field_2_133; // 0x2F0
	::System::Single Field_2_6; // 0x2F4
	::System::Single Field_2_11; // 0x2F8
	::System::Int32 Field_2_70; // 0x2FC
	::System::Int32 Field_2_66; // 0x300
	::UnityEngine::Vector3 Field_2_134; // 0x304
	::System::Int32 Field_2_93; // 0x310
	::System::Int32 Field_2_74; // 0x314
	::System::Int32 Field_2_85; // 0x318
	::System::UInt32 Field_2_35; // 0x31C
	::System::Single Field_2_20; // 0x320
	::System::Int32 Field_2_131; // 0x324
	::System::Int32 Field_2_15; // 0x328
	::System::Boolean Field_2_53; // 0x32C
	::System::Boolean Field_2_22; // 0x32D
	::System::Boolean Field_2_146; // 0x32E
	::System::Boolean Field_2_39; // 0x32F
	::System::Int32 Field_2_87; // 0x330
	::System::Single Field_2_18; // 0x334

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_A20A6181036872A3(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A20A6181036872A3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_E2E632F486B6377D(::MoleMole::FishCameraConfig a1, ::MoleMole::Config::ConfigHollowCameraShake* a2, ::System::Single a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::MoleMole::FishCameraConfig, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E2E632F486B6377D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::AnimationCurve* Method_2_425CA77B2A154CC8(::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3 a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_425CA77B2A154CC8_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_8D388218652F2B2F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_8D388218652F2B2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_85937A082BD1F4EA(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_85937A082BD1F4EA_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_65177D87AE73D86A(::UnityEngine::Vector3 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_65177D87AE73D86A_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_483E22AD1DF04969(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_483E22AD1DF04969_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C_2*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_2_3E59D56A6D957BC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3E59D56A6D957BC3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_0ADC582EB14DFFD4(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_0ADC582EB14DFFD4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_20E8013D4AB67E17_OFFSET))(this);
	}

	::MoleMole::FishMoveParam* Method_2_2A464C7D2EBD78DF()
	{
		return ((::MoleMole::FishMoveParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_2A464C7D2EBD78DF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_08B8D05BB3CFDF07(::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A, ::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_08B8D05BB3CFDF07_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_EFB5322CAF695953(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_EFB5322CAF695953_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_62FC2DCD2EF869D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_62FC2DCD2EF869D5_OFFSET))(this);
	}

	::System::Void Method_2_928CB4D70C21FDF4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_928CB4D70C21FDF4_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_806E0B713D18089E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_806E0B713D18089E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C39B31ED923BE88F(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C39B31ED923BE88F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E7262B6FC0F1EFC1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E7262B6FC0F1EFC1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_12EC7B01FB5FB7AD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_12EC7B01FB5FB7AD_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_1(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3694AD952F4FFD05(::Class_2_3CC769D284A54927_1_Enum_3_8B68B5C2E96E415B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3CC769D284A54927_1_Enum_3_8B68B5C2E96E415B))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3694AD952F4FFD05_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFDC576A9606B859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AFDC576A9606B859_OFFSET))(this);
	}

	::System::Void Method_2_9E606B1B650D2069(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9E606B1B650D2069_OFFSET))(this, a1);
	}

	::System::Void Method_2_734CC582838F149E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_734CC582838F149E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_E86DCAEC10915696(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::MoleMole::FishMove3DCurve* a3, ::System::Single a4, ::System::Boolean a5, ::System::Threading::CancellationToken a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::FishMove3DCurve*, ::System::Single, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E86DCAEC10915696_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_6C8825BD793BF050(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_6C8825BD793BF050_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_2_A0042105686D97E8(::Class_3_9D33A2E94B3E53DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9D33A2E94B3E53DC*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A0042105686D97E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_2(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_BDA46A2B8AED6F11(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::MoleMole::Config::ConfigHollowCameraShake* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_BDA46A2B8AED6F11_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::MoleMole::FishPosConfig* Method_2_AC901EA28F4E7EB8()
	{
		return ((::MoleMole::FishPosConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AC901EA28F4E7EB8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C42984D76968C1E1(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C42984D76968C1E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_2()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_F44CBB782D24B59B(::System::Threading::CancellationTokenSource* a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationTokenSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F44CBB782D24B59B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1FD6BDA1CE7A4F68(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1FD6BDA1CE7A4F68_OFFSET))(this, a1, a2);
	}

	::Class_1_451601B8BB62C38C_2* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_451601B8BB62C38C_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_3(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA4BD7E44297D973(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_CA4BD7E44297D973_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_65177D87AE73D86A_1(::UnityEngine::Vector3 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_65177D87AE73D86A_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3979F8726BD0E71A_4(::System::Int32 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3979F8726BD0E71A_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_1938F8C98D264CE8(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1938F8C98D264CE8_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_3()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET))(this);
	}

	::System::Void Method_2_AFDC576A9606B859_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AFDC576A9606B859_1_OFFSET))(this);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9309CE6A2148BDD0(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Threading::CancellationTokenSource* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9309CE6A2148BDD0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_E8A4A5DF27E2D917(::System::String* a1, ::MoleMole::Config::ScreenEffectType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_E8A4A5DF27E2D917_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D2EF5984500DDB97(::Enum_3_86D58C2A2996E647 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_86D58C2A2996E647))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_D2EF5984500DDB97_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_2_91177D56EE5BDFAA()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_91177D56EE5BDFAA_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_2E710A547EDB1A3B(::PipelineCamera::WorldBasicCameraData a1, ::PipelineCamera::WorldBasicCameraData a2, ::System::Single a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_2E710A547EDB1A3B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_2_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_68C5DD35C3F86CD6(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_68C5DD35C3F86CD6_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_8972CA953214CCAC(::System::Boolean a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_8972CA953214CCAC_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBE15357DD45AC7D(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Action_1<::System::Boolean>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FBE15357DD45AC7D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_2_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_00DF19F0A88D3736(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_00DF19F0A88D3736_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_02A3D10A9D535169_1_OFFSET))(this);
	}

	::Class_3_9D33A2E94B3E53DC* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_9D33A2E94B3E53DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Void Method_2_AA08720895458700_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_4EB936DFEDBF174D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4EB936DFEDBF174D_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_81B91E393925E0D6(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_81B91E393925E0D6_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_611* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_611*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_2_D6D52FBAAAA4BA8B(::MoleMole::FishCameraConfig a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::MoleMole::FishCameraConfig))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_D6D52FBAAAA4BA8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4B14845111E88EF(::Enum_3_86D58C2A2996E647 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_86D58C2A2996E647, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_B4B14845111E88EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E59D56A6D957BC3_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_3E59D56A6D957BC3_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AA972BE565DAF9E3_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_847EE1C72FB227FF(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Single a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_847EE1C72FB227FF_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_4()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_2_33CBE6FE8D080760(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_33CBE6FE8D080760_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_333A447E1F9DB36C()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_333A447E1F9DB36C_OFFSET))(this);
	}

	::System::Void Method_2_7536D813D608DD3E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_7536D813D608DD3E_OFFSET))(this, a1);
	}

	::Class_3_9D33A2E94B3E53DC* Method_2_F239777256F9BA8F_1()
	{
		return ((::Class_3_9D33A2E94B3E53DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F239777256F9BA8F_1_OFFSET))(this);
	}

	::System::Void Method_2_0226814FB70D5A65(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_0226814FB70D5A65_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_F0E307B84478A272_2_OFFSET))(this);
	}

	::System::Void Method_2_AA08720895458700_2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_AA08720895458700_2_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_A20A6181036872A3_1(::System::Int32 a1, ::System::Boolean a2, ::System::Threading::CancellationTokenSource* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Threading::CancellationTokenSource*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_A20A6181036872A3_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_5D97F2BBB034A0D8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_5D97F2BBB034A0D8_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_933D559847530E10(::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_3CC769D284A54927_1_Enum_3_3C549D6CCF7A45F3))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_933D559847530E10_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_851895CF23E62498(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_851895CF23E62498_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4568CF0A4B3096CD(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_METHOD_2_4568CF0A4B3096CD_OFFSET))(this, a1);
	}
};
