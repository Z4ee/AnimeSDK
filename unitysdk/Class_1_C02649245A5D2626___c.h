#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/Struct_2_55B1720D3ECF0A32.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/TitleShowType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1EA8435E138F2E03;
class Class_1_A01CE0B13E11F09E;
class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class Class_2_FDFE69FE7B72463B;
class PopText;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class ScaledContentSizeFitter; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIInputFieldEx; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI::Extension { class ISetArg; }
namespace UnityEngine::UI::Extension { class ISetGrey; }
namespace UnityEngine::UI::Extension { class ISetInteractable; }
namespace UnityEngine::UI::Extension { class ISetKey; }
namespace UnityEngine::UI::Extension { class ISetText; }
namespace UnityEngine::UI::Extension { class PathGuide; }
namespace UnityEngine::UI::Extension { class UICircleProgress; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITextureOffsetModifier; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_C02649245A5D2626___C_METHOD_1_0030BBB9CB7501A7_1_OFFSET UNITYSDK_OFFSET(0x18743690)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_0030BBB9CB7501A7_OFFSET UNITYSDK_OFFSET(0x187420F0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_011AEFDC60DE4F3A_OFFSET UNITYSDK_OFFSET(0x1A27CDB0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_033982E7E38F8283_OFFSET UNITYSDK_OFFSET(0x18743C70)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_05640D8035B8B1C4_OFFSET UNITYSDK_OFFSET(0x18740AB0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_06E9615B1E54EBBF_OFFSET UNITYSDK_OFFSET(0x187418D0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_0C38941215679694_OFFSET UNITYSDK_OFFSET(0x18741070)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_14DE3BA1DADA14A2_OFFSET UNITYSDK_OFFSET(0x18740A40)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_1_OFFSET UNITYSDK_OFFSET(0x18742BE0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_2_OFFSET UNITYSDK_OFFSET(0x18742E10)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_3_OFFSET UNITYSDK_OFFSET(0x18743BC0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_4_OFFSET UNITYSDK_OFFSET(0x1A27D0E0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_OFFSET UNITYSDK_OFFSET(0x18740B10)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_1BEAC88486B53727_1_OFFSET UNITYSDK_OFFSET(0x18740C60)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_1BEAC88486B53727_OFFSET UNITYSDK_OFFSET(0x18740BE0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_20FCE24B702C8819_OFFSET UNITYSDK_OFFSET(0x18740800)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_2A4AC01439701532_OFFSET UNITYSDK_OFFSET(0x18743C30)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_2D01DF565DA14B0C_OFFSET UNITYSDK_OFFSET(0x18742190)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_309BC38B52E6E30B_OFFSET UNITYSDK_OFFSET(0x18742530)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_31A6C780DD9DCC94_OFFSET UNITYSDK_OFFSET(0x18741FA0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_3B8E9BBEFC88D3BE_OFFSET UNITYSDK_OFFSET(0x18740D90)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_3D0C710459EC7E0A_OFFSET UNITYSDK_OFFSET(0x18740F40)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_3E6674EF2AE6AD0A_OFFSET UNITYSDK_OFFSET(0x18741580)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_3F37AB3DBDB7D7E5_OFFSET UNITYSDK_OFFSET(0x1A27CFC0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_409EAD1250642F97_OFFSET UNITYSDK_OFFSET(0x18742170)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_41C7F4619420CF62_OFFSET UNITYSDK_OFFSET(0x187406F0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_44369845860DE51C_OFFSET UNITYSDK_OFFSET(0x18742CE0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_45CDCF2BDEFEF85D_OFFSET UNITYSDK_OFFSET(0x187410D0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_4940783CCC37E4D9_OFFSET UNITYSDK_OFFSET(0x18743D80)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_55B1F4BB42F9752E_OFFSET UNITYSDK_OFFSET(0x18742D20)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_62B86BAB517C5BA8_OFFSET UNITYSDK_OFFSET(0x187439B0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_6672903101A026C0_OFFSET UNITYSDK_OFFSET(0x18741E30)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_697A8C4A2DD0D36A_OFFSET UNITYSDK_OFFSET(0x18743C80)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_6A0B489BA1A51EE8_OFFSET UNITYSDK_OFFSET(0x1A27D460)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_6C59F653D71D55E2_1_OFFSET UNITYSDK_OFFSET(0x187419F0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_6C59F653D71D55E2_OFFSET UNITYSDK_OFFSET(0x18740770)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_6E05F7FB6E6383CF_OFFSET UNITYSDK_OFFSET(0x187435C0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_6F289A83BF98EE03_OFFSET UNITYSDK_OFFSET(0x18740850)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_70FF861174910729_OFFSET UNITYSDK_OFFSET(0x187414D0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_7254AC96FAA1BBAC_OFFSET UNITYSDK_OFFSET(0x18742140)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_73FD1260EFE2D651_OFFSET UNITYSDK_OFFSET(0x18742450)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_74809AC25647973D_OFFSET UNITYSDK_OFFSET(0x187414B0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_7942E347FED008A8_OFFSET UNITYSDK_OFFSET(0x187418A0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_7FD5B8F14BDE86A9_OFFSET UNITYSDK_OFFSET(0x18743A50)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_8530A5E28B748577_OFFSET UNITYSDK_OFFSET(0x1A27CEF0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_868FAFEA157C2D70_OFFSET UNITYSDK_OFFSET(0x18742DF0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_8911F45C9465654C_OFFSET UNITYSDK_OFFSET(0x18740930)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_8CF347418B78866B_OFFSET UNITYSDK_OFFSET(0x18741420)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_90140A4DFB38C5AB_OFFSET UNITYSDK_OFFSET(0x18743CA0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_93CFB54728C3D11E_OFFSET UNITYSDK_OFFSET(0x187436E0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_93E497FEF4A2D816_OFFSET UNITYSDK_OFFSET(0x187415B0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9720E80E62E45A0D_OFFSET UNITYSDK_OFFSET(0x18743870)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9937CD168B341674_OFFSET UNITYSDK_OFFSET(0x187438A0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_999C8D603BB5B4F3_OFFSET UNITYSDK_OFFSET(0x18741A80)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9A082094D383B5AF_1_OFFSET UNITYSDK_OFFSET(0x18742A20)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9A082094D383B5AF_OFFSET UNITYSDK_OFFSET(0x18742290)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9C04F42733D55C27_OFFSET UNITYSDK_OFFSET(0x18741280)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9D3191CFBF5EF6BE_1_OFFSET UNITYSDK_OFFSET(0x1A27D310)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9D3191CFBF5EF6BE_OFFSET UNITYSDK_OFFSET(0x18742250)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9D88605FD3035F75_OFFSET UNITYSDK_OFFSET(0x187421B0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9D9060D086F4B08F_OFFSET UNITYSDK_OFFSET(0x18740A10)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_9F053AFC492D4A0E_OFFSET UNITYSDK_OFFSET(0x18743430)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_A2A6FE02F44A73E8_OFFSET UNITYSDK_OFFSET(0x18742AA0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_AFB94C0C710CD7BE_1_OFFSET UNITYSDK_OFFSET(0x1A27CFE0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_AFB94C0C710CD7BE_OFFSET UNITYSDK_OFFSET(0x18740F70)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_B1680C1B437BF349_OFFSET UNITYSDK_OFFSET(0x1A27CC00)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_BA02159EFC077A36_OFFSET UNITYSDK_OFFSET(0x187429F0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_BA07955123BA2A47_OFFSET UNITYSDK_OFFSET(0x18740AD0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_BAC01C40602D2F44_OFFSET UNITYSDK_OFFSET(0x18740CE0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_BB4F510B404DB080_OFFSET UNITYSDK_OFFSET(0x18741960)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_BCCFCF9115776D83_OFFSET UNITYSDK_OFFSET(0x18743400)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_BD91F164ACD7863F_OFFSET UNITYSDK_OFFSET(0x18740600)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_BE6592B935519B1E_OFFSET UNITYSDK_OFFSET(0x18742310)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_C647746D564DA0F4_OFFSET UNITYSDK_OFFSET(0x18743060)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_C70E934F0B9D805B_OFFSET UNITYSDK_OFFSET(0x187438D0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_CC4DD900317BC01A_OFFSET UNITYSDK_OFFSET(0x18740B80)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_CEE0CB10BF5ABCF1_OFFSET UNITYSDK_OFFSET(0x187413D0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_D1D3B3089353DDD4_OFFSET UNITYSDK_OFFSET(0x18743530)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_D21FBBCE3E472870_OFFSET UNITYSDK_OFFSET(0x18743140)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_D5CCE7DCE3CC29CF_OFFSET UNITYSDK_OFFSET(0x1A27CAC0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_DC7B012B1FEF4C59_OFFSET UNITYSDK_OFFSET(0x18740DD0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_DCF86428810E9F1D_OFFSET UNITYSDK_OFFSET(0x18743590)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_DE0AD09332CBF150_1_OFFSET UNITYSDK_OFFSET(0x1A27D350)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_DE0AD09332CBF150_OFFSET UNITYSDK_OFFSET(0x187404F0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_E0505DA13801CE79_OFFSET UNITYSDK_OFFSET(0x18742E80)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_E067F6F5D5C4DD99_1_OFFSET UNITYSDK_OFFSET(0x18741340)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_E067F6F5D5C4DD99_OFFSET UNITYSDK_OFFSET(0x18740D00)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_E1906D0440EAD4AF_OFFSET UNITYSDK_OFFSET(0x187425C0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_E2D561F21E1CC608_OFFSET UNITYSDK_OFFSET(0x18741E00)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_ED5DF87391265028_OFFSET UNITYSDK_OFFSET(0x1A27CF90)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F069B17D3766426B_OFFSET UNITYSDK_OFFSET(0x18742010)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F3CCD480DFEA6CDC_1_OFFSET UNITYSDK_OFFSET(0x187434A0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F3CCD480DFEA6CDC_OFFSET UNITYSDK_OFFSET(0x18742C50)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F5B2F95CDDB8BFD9_OFFSET UNITYSDK_OFFSET(0x18742350)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_1_OFFSET UNITYSDK_OFFSET(0x18742FE0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_2_OFFSET UNITYSDK_OFFSET(0x187431C0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_3_OFFSET UNITYSDK_OFFSET(0x187439D0)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_4_OFFSET UNITYSDK_OFFSET(0x1A27CA40)
#define CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_OFFSET UNITYSDK_OFFSET(0x187423D0)
#define CLASS_1_C02649245A5D2626___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187404A0)
#define CLASS_1_C02649245A5D2626___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187404E0)

inline static constexpr unsigned int Class_1_C02649245A5D2626___c_TypeDefinitionIndex = 52526;

class Class_1_C02649245A5D2626___c : public ::System::Object
{
public:
	static ::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>** StaticGet___9__58_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B770);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__71_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B778);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__68_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B780);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__65_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B788);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>** StaticGet___9__33_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B790);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__21_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B798);
	}
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType>** StaticGet___9__88_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7A0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__64_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7A8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__62_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7B0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__54_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7B8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>** StaticGet___9__34_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7C0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>>** StaticGet___9__14_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7C8);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Int32>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7D0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__67_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7D8);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect>** StaticGet___9__73_1()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7E0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__66_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7E8);
	}
	static ::System::Action_2<::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__86_1()
	{
		return (::System::Action_2<::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7F0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single>** StaticGet___9__60_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B7F8);
	}
	static ::System::Action_2<::MoleMole::UIGeneralBtn03WidgetController*, ::System::Boolean>** StaticGet___9__38_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralBtn03WidgetController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B800);
	}
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::System::Boolean>** StaticGet___9__90_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B808);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__72_1()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B810);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Boolean>** StaticGet___9__33_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B818);
	}
	static ::Class_1_C02649245A5D2626___c** StaticGet___9()
	{
		return (::Class_1_C02649245A5D2626___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B820);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__61_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B828);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>** StaticGet___9__73_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B830);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean>** StaticGet___9__38_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B838);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__69_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B840);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Boolean>** StaticGet___9__121_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B848);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath>** StaticGet___9__22_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B850);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean>** StaticGet___9__18_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B858);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>** StaticGet___9__16_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B860);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__76_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B868);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>** StaticGet___9__80_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B870);
	}
	static ::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::Boolean>** StaticGet___9__94_0()
	{
		return (::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B878);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__68_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B880);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__78_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B888);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single>** StaticGet___9__91_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B890);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__24_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B898);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Single>** StaticGet___9__59_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8A0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__52_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8A8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>** StaticGet___9__15_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8B0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__77_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8B8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8C0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__75_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8C8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__66_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8D0);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>** StaticGet___9__79_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8D8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*>** StaticGet___9__17_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8E0);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*>** StaticGet___9__23_0()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8E8);
	}
	static ::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>** StaticGet___9__34_1()
	{
		return (::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8F0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__77_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B8F8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::Object*>** StaticGet___9__13_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B900);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::String*>** StaticGet___9__40_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B908);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__70_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B910);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__74_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B918);
	}
	static ::System::Action_2<::MoleMole::MonoGamepadSelectable*, ::System::Boolean>** StaticGet___9__87_0()
	{
		return (::System::Action_2<::MoleMole::MonoGamepadSelectable*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B920);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__62_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B928);
	}
	static ::System::Action_2<::MoleMole::UIGeneralBtn03WidgetController*, ::UnityEngine::Color>** StaticGet___9__4_3()
	{
		return (::System::Action_2<::MoleMole::UIGeneralBtn03WidgetController*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B930);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::String*>** StaticGet___9__40_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B938);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__71_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B940);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet___9__33_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B948);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color>** StaticGet___9__4_1()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B950);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B958);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__72_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B960);
	}
	static ::System::Action_2<::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__86_0()
	{
		return (::System::Action_2<::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B968);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::UnityEngine::UI::Extension::TitleShowType>** StaticGet___9__120_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::UnityEngine::UI::Extension::TitleShowType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B970);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*>** StaticGet___9__27_0()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B978);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B980);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__74_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B988);
	}
	static ::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>** StaticGet___9__39_0()
	{
		return (::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B990);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>** StaticGet___9__55_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B998);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Int32>** StaticGet___9__35_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9A0);
	}
	static ::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::String*>** StaticGet___9__95_0()
	{
		return (::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9A8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>** StaticGet___9__76_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9B0);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__20_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9B8);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Boolean>** StaticGet___9__37_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9C0);
	}
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>>** StaticGet___9__89_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9C8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Int32>** StaticGet___9__35_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9D0);
	}
	static ::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>** StaticGet___9__93_0()
	{
		return (::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9D8);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__29_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9E0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>** StaticGet___9__78_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9E8);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32>** StaticGet___9__31_0()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9F0);
	}
	static ::System::Action_2<::PopText*, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_2<::PopText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3B9F8);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet___9__40_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA00);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>** StaticGet___9__10_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA08);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath>** StaticGet___9__19_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA10);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__75_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA18);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__67_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA20);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color>** StaticGet___9__4_2()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA28);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__70_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA30);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__61_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA38);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__64_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA40);
	}
	static ::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>** StaticGet___9__81_0()
	{
		return (::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA48);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>** StaticGet___9__51_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA50);
	}
	static ::System::Action_2<::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__29_0()
	{
		return (::System::Action_2<::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA58);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::Material*>** StaticGet___9__28_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA60);
	}
	static ::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>** StaticGet___9__11_0()
	{
		return (::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA68);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>** StaticGet___9__72_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA70);
	}
	static ::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>** StaticGet___9__63_0()
	{
		return (::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA78);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__65_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA80);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__69_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C02649245A5D2626___c_TypeDefinitionIndex)->GetStaticField(0x3BA88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DE0AD09332CBF150(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_DE0AD09332CBF150_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BD91F164ACD7863F(::Class_2_B4378B46E0020E85* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_BD91F164ACD7863F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41C7F4619420CF62(::MoleMole::NotificationBadge* a1, ::Class_1_1EA8435E138F2E03* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_41C7F4619420CF62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C59F653D71D55E2(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_6C59F653D71D55E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_20FCE24B702C8819(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_20FCE24B702C8819_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6F289A83BF98EE03(::UnityEngine::UI::Extension::ISetInteractable* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_6F289A83BF98EE03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8911F45C9465654C(::UnityEngine::UI::Extension::ISetGrey* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_8911F45C9465654C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D9060D086F4B08F(::MoleMole::MonoInputKey* a1, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9D9060D086F4B08F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_14DE3BA1DADA14A2(::UnityEngine::UI::Extension::UILocalizationText* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_14DE3BA1DADA14A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05640D8035B8B1C4(::UnityEngine::UI::Extension::UITimeWidget* a1, ::UnityEngine::UI::Extension::TitleShowType a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::UnityEngine::UI::Extension::TitleShowType))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_05640D8035B8B1C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA07955123BA2A47(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_BA07955123BA2A47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC4DD900317BC01A(::UnityEngine::UI::LayoutElement* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_CC4DD900317BC01A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1BEAC88486B53727(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_1BEAC88486B53727_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1BEAC88486B53727_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_1BEAC88486B53727_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BAC01C40602D2F44(::MoleMole::MonoGamepadSelectable* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_BAC01C40602D2F44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E067F6F5D5C4DD99(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_E067F6F5D5C4DD99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B8E9BBEFC88D3BE(::MoleMole::NotificationBadgeEx* a1, ::Class_1_1EA8435E138F2E03* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_3B8E9BBEFC88D3BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC7B012B1FEF4C59(::UnityEngine::UI::Extension::ISetArg* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_DC7B012B1FEF4C59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D0C710459EC7E0A(::UnityEngine::UI::LayoutElement* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_3D0C710459EC7E0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AFB94C0C710CD7BE(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_AFB94C0C710CD7BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C38941215679694(::MoleMole::MonoInputKey* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_0C38941215679694_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45CDCF2BDEFEF85D(::UnityEngine::Component* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_45CDCF2BDEFEF85D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9C04F42733D55C27(::Class_1_A01CE0B13E11F09E* a1, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9C04F42733D55C27_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E067F6F5D5C4DD99_1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_E067F6F5D5C4DD99_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CEE0CB10BF5ABCF1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_CEE0CB10BF5ABCF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8CF347418B78866B(::Class_2_FDFE69FE7B72463B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_8CF347418B78866B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_74809AC25647973D(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_74809AC25647973D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70FF861174910729(::MoleMole::UIInputFieldEx* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_70FF861174910729_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E6674EF2AE6AD0A(::UnityEngine::Camera* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_3E6674EF2AE6AD0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93E497FEF4A2D816(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_2<::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_93E497FEF4A2D816_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7942E347FED008A8(::UnityEngine::CanvasGroup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_7942E347FED008A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_06E9615B1E54EBBF(::Class_2_1A39E1B51756BF41* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_06E9615B1E54EBBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB4F510B404DB080(::Class_2_1A39E1B51756BF41* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_BB4F510B404DB080_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C59F653D71D55E2_1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_6C59F653D71D55E2_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_999C8D603BB5B4F3(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_999C8D603BB5B4F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2D561F21E1CC608(::Class_1_A01CE0B13E11F09E* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_E2D561F21E1CC608_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6672903101A026C0(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_6672903101A026C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_31A6C780DD9DCC94(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_31A6C780DD9DCC94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F069B17D3766426B(::UnityEngine::UI::Extension::ISetArg* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F069B17D3766426B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0030BBB9CB7501A7(::UnityEngine::Component* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_0030BBB9CB7501A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7254AC96FAA1BBAC(::Class_1_A01CE0B13E11F09E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_7254AC96FAA1BBAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_409EAD1250642F97(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_409EAD1250642F97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D01DF565DA14B0C(::Class_2_1A39E1B51756BF41* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_2D01DF565DA14B0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D88605FD3035F75(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9D88605FD3035F75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3191CFBF5EF6BE(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9D3191CFBF5EF6BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A082094D383B5AF(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9A082094D383B5AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BE6592B935519B1E(::UnityEngine::UI::Extension::PathGuide* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_BE6592B935519B1E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F5B2F95CDDB8BFD9(::Class_2_1A39E1B51756BF41* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F5B2F95CDDB8BFD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_73FD1260EFE2D651(::PopText* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::PopText*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_73FD1260EFE2D651_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_309BC38B52E6E30B(::UnityEngine::UI::Slider* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_309BC38B52E6E30B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1906D0440EAD4AF(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_E1906D0440EAD4AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA02159EFC077A36(::UnityEngine::UI::Extension::UITextureOffsetModifier* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_BA02159EFC077A36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A082094D383B5AF_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9A082094D383B5AF_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A2A6FE02F44A73E8(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_A2A6FE02F44A73E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3CCD480DFEA6CDC(::Class_2_1A39E1B51756BF41* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F3CCD480DFEA6CDC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_44369845860DE51C(::Class_2_FDFE69FE7B72463B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_44369845860DE51C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55B1F4BB42F9752E(::UnityEngine::UI::Extension::UICircleProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_55B1F4BB42F9752E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_868FAFEA157C2D70(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::TimeSpan a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_868FAFEA157C2D70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_2(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E0505DA13801CE79(::UnityEngine::Component* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_E0505DA13801CE79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_1(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C647746D564DA0F4(::UnityEngine::UI::Extension::ISetText* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetText*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_C647746D564DA0F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D21FBBCE3E472870(::MoleMole::UIGeneralBtn03WidgetController* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralBtn03WidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_D21FBBCE3E472870_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_2(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BCCFCF9115776D83(::MoleMole::UIGeneralBtn03WidgetController* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralBtn03WidgetController*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_BCCFCF9115776D83_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F053AFC492D4A0E(::MoleMole::ScaledContentSizeFitter* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScaledContentSizeFitter*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9F053AFC492D4A0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3CCD480DFEA6CDC_1(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F3CCD480DFEA6CDC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1D3B3089353DDD4(::MoleMole::UIGeneralButtonController* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_D1D3B3089353DDD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCF86428810E9F1D(::Class_1_A01CE0B13E11F09E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_DCF86428810E9F1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E05F7FB6E6383CF(::UnityEngine::Component* a1, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_6E05F7FB6E6383CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0030BBB9CB7501A7_1(::UnityEngine::Component* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_0030BBB9CB7501A7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93CFB54728C3D11E(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_93CFB54728C3D11E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9720E80E62E45A0D(::UnityEngine::UI::Extension::PathGuide* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9720E80E62E45A0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9937CD168B341674(::MoleMole::MonoInputKey* a1, ::MoleMole::InputLogicEventType a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9937CD168B341674_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C70E934F0B9D805B(::Class_2_1A39E1B51756BF41* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_C70E934F0B9D805B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_62B86BAB517C5BA8(::Class_2_1A39E1B51756BF41* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_62B86BAB517C5BA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_3(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FD5B8F14BDE86A9(::UnityEngine::UI::Extension::ISetKey* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetKey*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_7FD5B8F14BDE86A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_3(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A4AC01439701532(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_2A4AC01439701532_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_033982E7E38F8283(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_033982E7E38F8283_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_697A8C4A2DD0D36A(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_697A8C4A2DD0D36A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_90140A4DFB38C5AB(::UnityEngine::UI::Extension::ISetText* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetText*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_90140A4DFB38C5AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4940783CCC37E4D9(::UnityEngine::UI::Extension::UILinearProgressBar* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILinearProgressBar*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_4940783CCC37E4D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_4(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_F8A42165D1CADC25_4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5CCE7DCE3CC29CF(::UnityEngine::MonoBehaviour* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_D5CCE7DCE3CC29CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1680C1B437BF349(::Class_1_A01CE0B13E11F09E* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_B1680C1B437BF349_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_011AEFDC60DE4F3A(::UnityEngine::Component* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_011AEFDC60DE4F3A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8530A5E28B748577(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_8530A5E28B748577_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ED5DF87391265028(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_ED5DF87391265028_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3F37AB3DBDB7D7E5(::UnityEngine::UI::AspectRatioFitter* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AspectRatioFitter*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_3F37AB3DBDB7D7E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AFB94C0C710CD7BE_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_AFB94C0C710CD7BE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_4(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_1824B59F2499FC53_4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3191CFBF5EF6BE_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_9D3191CFBF5EF6BE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE0AD09332CBF150_1(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_DE0AD09332CBF150_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A0B489BA1A51EE8(::MoleMole::UIGeneralButtonController* a1, ::Struct_2_55B1720D3ECF0A32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626___C_METHOD_1_6A0B489BA1A51EE8_OFFSET))(this, a1, a2);
	}
};
