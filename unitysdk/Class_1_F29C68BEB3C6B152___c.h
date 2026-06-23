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
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1EA8435E138F2E03;
class Class_1_A01CE0B13E11F09E;
class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class ScaledContentSizeFitter; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIInputFieldEx; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
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
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITextureOffsetModifier; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_1_OFFSET UNITYSDK_OFFSET(0x1438E8B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_OFFSET UNITYSDK_OFFSET(0x1438E1A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_011AEFDC60DE4F3A_OFFSET UNITYSDK_OFFSET(0x1438FAF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_033982E7E38F8283_OFFSET UNITYSDK_OFFSET(0x1438DA30)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0C38941215679694_OFFSET UNITYSDK_OFFSET(0x1438D9D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_102EFB127D9EC695_OFFSET UNITYSDK_OFFSET(0x1438F8D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_14DE3BA1DADA14A2_OFFSET UNITYSDK_OFFSET(0x1438E0B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_1_OFFSET UNITYSDK_OFFSET(0x1438FA80)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_2_OFFSET UNITYSDK_OFFSET(0x1438FEE0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_3_OFFSET UNITYSDK_OFFSET(0x14390590)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_4_OFFSET UNITYSDK_OFFSET(0x143909F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_OFFSET UNITYSDK_OFFSET(0x1438EC50)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1BEAC88486B53727_1_OFFSET UNITYSDK_OFFSET(0x1438F530)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1BEAC88486B53727_OFFSET UNITYSDK_OFFSET(0x1438DDF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2A4AC01439701532_OFFSET UNITYSDK_OFFSET(0x1438F4F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2A70AB2A96999B4C_OFFSET UNITYSDK_OFFSET(0x1438FF50)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2D01DF565DA14B0C_OFFSET UNITYSDK_OFFSET(0x1438FC30)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_309BC38B52E6E30B_OFFSET UNITYSDK_OFFSET(0x1438F5E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_31A6C780DD9DCC94_OFFSET UNITYSDK_OFFSET(0x1438E9D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3B8E9BBEFC88D3BE_OFFSET UNITYSDK_OFFSET(0x1438C850)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3D0C710459EC7E0A_OFFSET UNITYSDK_OFFSET(0x1438D590)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E52E17783104D59_OFFSET UNITYSDK_OFFSET(0x1438F7B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E6674EF2AE6AD0A_OFFSET UNITYSDK_OFFSET(0x1438F5B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_41C7F4619420CF62_OFFSET UNITYSDK_OFFSET(0x1438DFD0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_44369845860DE51C_OFFSET UNITYSDK_OFFSET(0x1438E560)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_45CDCF2BDEFEF85D_OFFSET UNITYSDK_OFFSET(0x1438E700)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_553780A2AC829D20_OFFSET UNITYSDK_OFFSET(0x1438CD40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_55B1F4BB42F9752E_OFFSET UNITYSDK_OFFSET(0x1438FC50)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6A0B489BA1A51EE8_OFFSET UNITYSDK_OFFSET(0x1438E300)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_1_OFFSET UNITYSDK_OFFSET(0x1438F720)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_OFFSET UNITYSDK_OFFSET(0x1438ED60)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6E05F7FB6E6383CF_OFFSET UNITYSDK_OFFSET(0x1438F390)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_70FF861174910729_OFFSET UNITYSDK_OFFSET(0x1438F670)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7254AC96FAA1BBAC_OFFSET UNITYSDK_OFFSET(0x1438C910)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_740F8E81B593C625_OFFSET UNITYSDK_OFFSET(0x14390850)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_74809AC25647973D_OFFSET UNITYSDK_OFFSET(0x1438E340)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7942E347FED008A8_OFFSET UNITYSDK_OFFSET(0x143909C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_79A54E63F1461251_OFFSET UNITYSDK_OFFSET(0x143908E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_8530A5E28B748577_OFFSET UNITYSDK_OFFSET(0x1438DA40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_85323CAA188BC557_OFFSET UNITYSDK_OFFSET(0x1438C680)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_868FAFEA157C2D70_OFFSET UNITYSDK_OFFSET(0x1438EA40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93CFB54728C3D11E_OFFSET UNITYSDK_OFFSET(0x1438C6C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93E497FEF4A2D816_OFFSET UNITYSDK_OFFSET(0x1438EDF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9720E80E62E45A0D_OFFSET UNITYSDK_OFFSET(0x1438FA50)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9937CD168B341674_OFFSET UNITYSDK_OFFSET(0x1438ECC0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_999C8D603BB5B4F3_OFFSET UNITYSDK_OFFSET(0x1438C940)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_1_OFFSET UNITYSDK_OFFSET(0x1438E5A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_OFFSET UNITYSDK_OFFSET(0x1438CCC0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9C04F42733D55C27_OFFSET UNITYSDK_OFFSET(0x1438F900)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_1_OFFSET UNITYSDK_OFFSET(0x14390810)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_OFFSET UNITYSDK_OFFSET(0x14390310)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D88605FD3035F75_OFFSET UNITYSDK_OFFSET(0x1438D180)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D9060D086F4B08F_OFFSET UNITYSDK_OFFSET(0x1438F870)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9F053AFC492D4A0E_OFFSET UNITYSDK_OFFSET(0x1438D500)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_A2A6FE02F44A73E8_OFFSET UNITYSDK_OFFSET(0x1438D650)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_ABA959575FF89EA6_OFFSET UNITYSDK_OFFSET(0x1438E620)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AFB94C0C710CD7BE_1_OFFSET UNITYSDK_OFFSET(0x14390490)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AFB94C0C710CD7BE_OFFSET UNITYSDK_OFFSET(0x1438FDE0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B1680C1B437BF349_OFFSET UNITYSDK_OFFSET(0x14390660)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B49BE3AD1D19BBC6_OFFSET UNITYSDK_OFFSET(0x1438E980)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BA02159EFC077A36_OFFSET UNITYSDK_OFFSET(0x1438C650)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BA07955123BA2A47_OFFSET UNITYSDK_OFFSET(0x1438E520)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BAC01C40602D2F44_OFFSET UNITYSDK_OFFSET(0x1438D570)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BB4F510B404DB080_OFFSET UNITYSDK_OFFSET(0x1438D210)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BD91F164ACD7863F_OFFSET UNITYSDK_OFFSET(0x1438F0E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BEFBD95C4447559E_OFFSET UNITYSDK_OFFSET(0x1438F1D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_C96E8ACB93CD0F64_OFFSET UNITYSDK_OFFSET(0x1438D2A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CC4DD900317BC01A_OFFSET UNITYSDK_OFFSET(0x1438E050)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CEE0CB10BF5ABCF1_OFFSET UNITYSDK_OFFSET(0x1438E900)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D1D3B3089353DDD4_OFFSET UNITYSDK_OFFSET(0x14390600)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D5CCE7DCE3CC29CF_OFFSET UNITYSDK_OFFSET(0x14390350)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DC7B012B1FEF4C59_OFFSET UNITYSDK_OFFSET(0x1438DE70)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DCF86428810E9F1D_OFFSET UNITYSDK_OFFSET(0x1438E950)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE0AD09332CBF150_1_OFFSET UNITYSDK_OFFSET(0x1438EB40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE0AD09332CBF150_OFFSET UNITYSDK_OFFSET(0x1438E1F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E0505DA13801CE79_OFFSET UNITYSDK_OFFSET(0x143900B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E067F6F5D5C4DD99_1_OFFSET UNITYSDK_OFFSET(0x1438F9C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E067F6F5D5C4DD99_OFFSET UNITYSDK_OFFSET(0x1438D470)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E1906D0440EAD4AF_OFFSET UNITYSDK_OFFSET(0x1438CD60)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E2D561F21E1CC608_OFFSET UNITYSDK_OFFSET(0x1438F8A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E533570C4924A466_OFFSET UNITYSDK_OFFSET(0x1438F2B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_1_OFFSET UNITYSDK_OFFSET(0x1438F460)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_OFFSET UNITYSDK_OFFSET(0x1438D5C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F5B2F95CDDB8BFD9_OFFSET UNITYSDK_OFFSET(0x1438ECF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_1_OFFSET UNITYSDK_OFFSET(0x1438D790)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_2_OFFSET UNITYSDK_OFFSET(0x1438E120)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_3_OFFSET UNITYSDK_OFFSET(0x14390210)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_4_OFFSET UNITYSDK_OFFSET(0x14390290)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_OFFSET UNITYSDK_OFFSET(0x1438C890)
#define CLASS_1_F29C68BEB3C6B152___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1438C600)
#define CLASS_1_F29C68BEB3C6B152___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1438C640)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex = 70774;

class Class_1_F29C68BEB3C6B152___c : public ::System::Object
{
public:
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType>** StaticGet___9__81_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BA0);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BA8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__55_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BB0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>** StaticGet___9__14_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BB8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__65_1()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BC0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Boolean>** StaticGet___9__27_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BC8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::String*>** StaticGet___9__34_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BD0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>** StaticGet___9__27_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BD8);
	}
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::System::Boolean>** StaticGet___9__83_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BE0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>** StaticGet___9__66_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BE8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>** StaticGet___9__28_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BF0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__62_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31BF8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__60_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C00);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C08);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__70_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C10);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__54_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C18);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__67_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C20);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__63_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C28);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*>** StaticGet___9__15_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C30);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>** StaticGet___9__69_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C38);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__58_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C40);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single>** StaticGet___9__84_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C48);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Single>** StaticGet___9__53_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C50);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__48_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C58);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__21_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C60);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__67_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C68);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet___9__34_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C70);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>** StaticGet___9__49_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C78);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__63_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C80);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color>** StaticGet___9__4_1()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C88);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect>** StaticGet___9__66_1()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C90);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>** StaticGet___9__73_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31C98);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__64_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CA0);
	}
	static ::System::Action_2<::MoleMole::MonoGamepadSelectable*, ::System::Boolean>** StaticGet___9__80_0()
	{
		return (::System::Action_2<::MoleMole::MonoGamepadSelectable*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CA8);
	}
	static ::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>** StaticGet___9__56_0()
	{
		return (::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CB0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__71_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CB8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__55_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CC0);
	}
	static ::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>** StaticGet___9__33_0()
	{
		return (::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CC8);
	}
	static ::System::Action_2<::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__79_0()
	{
		return (::System::Action_2<::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CD0);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>** StaticGet___9__72_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CD8);
	}
	static ::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::String*>** StaticGet___9__88_0()
	{
		return (::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CE0);
	}
	static ::Class_1_F29C68BEB3C6B152___c** StaticGet___9()
	{
		return (::Class_1_F29C68BEB3C6B152___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CE8);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__19_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CF0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__57_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31CF8);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*>** StaticGet___9__20_0()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D00);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__23_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D08);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__57_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D10);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>** StaticGet___9__45_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D18);
	}
	static ::System::Action_2<::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>>** StaticGet___9__82_0()
	{
		return (::System::Action_2<::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D20);
	}
	static ::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::Boolean>** StaticGet___9__87_0()
	{
		return (::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D28);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__59_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D30);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__18_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D38);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath>** StaticGet___9__17_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D40);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color>** StaticGet___9__4_2()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D48);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>** StaticGet___9__65_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D50);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__46_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D58);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D60);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__62_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D68);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::String*>** StaticGet___9__34_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D70);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__68_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D78);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet___9__27_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D80);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Int32>** StaticGet___9__29_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D88);
	}
	static ::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>** StaticGet___9__74_0()
	{
		return (::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D90);
	}
	static ::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>** StaticGet___9__52_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31D98);
	}
	static ::System::Action_2<::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__79_1()
	{
		return (::System::Action_2<::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DA0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::Object*>** StaticGet___9__11_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DA8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__58_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DB0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__61_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DB8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__54_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DC0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__59_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DC8);
	}
	static ::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>** StaticGet___9__28_1()
	{
		return (::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DD0);
	}
	static ::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>** StaticGet___9__86_0()
	{
		return (::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DD8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean>** StaticGet___9__32_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DE0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>>** StaticGet___9__12_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DE8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>** StaticGet___9__71_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DF0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__64_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31DF8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__70_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E00);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__68_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E08);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E10);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__60_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E18);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__69_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E20);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean>** StaticGet___9__16_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E28);
	}
	static ::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E30);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E38);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__61_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E40);
	}
	static ::System::Action_2<::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__23_0()
	{
		return (::System::Action_2<::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E48);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>** StaticGet___9__13_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E50);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Int32>** StaticGet___9__29_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E58);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__65_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E60);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*>** StaticGet___9__22_0()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x31E68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA02159EFC077A36(::UnityEngine::UI::Extension::UITextureOffsetModifier* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BA02159EFC077A36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85323CAA188BC557(::UnityEngine::UI::Extension::PathGuide* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_85323CAA188BC557_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93CFB54728C3D11E(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93CFB54728C3D11E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B8E9BBEFC88D3BE(::MoleMole::NotificationBadgeEx* a1, ::Class_1_1EA8435E138F2E03* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3B8E9BBEFC88D3BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7254AC96FAA1BBAC(::Class_1_A01CE0B13E11F09E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7254AC96FAA1BBAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_999C8D603BB5B4F3(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_999C8D603BB5B4F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A082094D383B5AF(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_553780A2AC829D20(::UnityEngine::UI::AspectRatioFitter* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AspectRatioFitter*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_553780A2AC829D20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1906D0440EAD4AF(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E1906D0440EAD4AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D88605FD3035F75(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D88605FD3035F75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB4F510B404DB080(::Class_2_1A39E1B51756BF41* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BB4F510B404DB080_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C96E8ACB93CD0F64(::UnityEngine::UI::Extension::ISetKey* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetKey*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_C96E8ACB93CD0F64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E067F6F5D5C4DD99(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E067F6F5D5C4DD99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F053AFC492D4A0E(::MoleMole::ScaledContentSizeFitter* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScaledContentSizeFitter*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9F053AFC492D4A0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BAC01C40602D2F44(::MoleMole::MonoGamepadSelectable* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BAC01C40602D2F44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D0C710459EC7E0A(::UnityEngine::UI::LayoutElement* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3D0C710459EC7E0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3CCD480DFEA6CDC(::Class_2_1A39E1B51756BF41* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A2A6FE02F44A73E8(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_A2A6FE02F44A73E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_1(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C38941215679694(::MoleMole::MonoInputKey* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0C38941215679694_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_033982E7E38F8283(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_033982E7E38F8283_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8530A5E28B748577(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_8530A5E28B748577_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1BEAC88486B53727(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1BEAC88486B53727_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC7B012B1FEF4C59(::UnityEngine::UI::Extension::ISetArg* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DC7B012B1FEF4C59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41C7F4619420CF62(::MoleMole::NotificationBadge* a1, ::Class_1_1EA8435E138F2E03* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_41C7F4619420CF62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC4DD900317BC01A(::UnityEngine::UI::LayoutElement* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CC4DD900317BC01A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_14DE3BA1DADA14A2(::UnityEngine::UI::Extension::UILocalizationText* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_14DE3BA1DADA14A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_2(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0030BBB9CB7501A7(::UnityEngine::Component* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE0AD09332CBF150(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE0AD09332CBF150_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A0B489BA1A51EE8(::MoleMole::UIGeneralButtonController* a1, ::Struct_2_55B1720D3ECF0A32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6A0B489BA1A51EE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_74809AC25647973D(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_74809AC25647973D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA07955123BA2A47(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BA07955123BA2A47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_44369845860DE51C(::Class_2_FDFE69FE7B72463B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_44369845860DE51C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A082094D383B5AF_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABA959575FF89EA6(::UnityEngine::UI::Extension::ISetText* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetText*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_ABA959575FF89EA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45CDCF2BDEFEF85D(::UnityEngine::Component* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_45CDCF2BDEFEF85D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0030BBB9CB7501A7_1(::UnityEngine::Component* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CEE0CB10BF5ABCF1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CEE0CB10BF5ABCF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCF86428810E9F1D(::Class_1_A01CE0B13E11F09E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DCF86428810E9F1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B49BE3AD1D19BBC6(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B49BE3AD1D19BBC6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_31A6C780DD9DCC94(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_31A6C780DD9DCC94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_868FAFEA157C2D70(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::TimeSpan a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_868FAFEA157C2D70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE0AD09332CBF150_1(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE0AD09332CBF150_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9937CD168B341674(::MoleMole::MonoInputKey* a1, ::MoleMole::InputLogicEventType a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9937CD168B341674_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F5B2F95CDDB8BFD9(::Class_2_1A39E1B51756BF41* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F5B2F95CDDB8BFD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C59F653D71D55E2(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93E497FEF4A2D816(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_2<::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93E497FEF4A2D816_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BD91F164ACD7863F(::Class_2_B4378B46E0020E85* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BD91F164ACD7863F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BEFBD95C4447559E(::UnityEngine::UI::Extension::ISetInteractable* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetInteractable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BEFBD95C4447559E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E533570C4924A466(::UnityEngine::UI::Extension::ISetArg* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E533570C4924A466_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E05F7FB6E6383CF(::UnityEngine::Component* a1, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6E05F7FB6E6383CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3CCD480DFEA6CDC_1(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A4AC01439701532(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2A4AC01439701532_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1BEAC88486B53727_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1BEAC88486B53727_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E6674EF2AE6AD0A(::UnityEngine::Camera* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E6674EF2AE6AD0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_309BC38B52E6E30B(::UnityEngine::UI::Slider* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_309BC38B52E6E30B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70FF861174910729(::MoleMole::UIInputFieldEx* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_70FF861174910729_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C59F653D71D55E2_1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E52E17783104D59(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E52E17783104D59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D9060D086F4B08F(::MoleMole::MonoInputKey* a1, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInputKey*, ::System::ValueTuple_2<::MoleMole::InputLogicEventType, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D9060D086F4B08F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2D561F21E1CC608(::Class_1_A01CE0B13E11F09E* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E2D561F21E1CC608_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_102EFB127D9EC695(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_102EFB127D9EC695_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9C04F42733D55C27(::Class_1_A01CE0B13E11F09E* a1, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9C04F42733D55C27_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E067F6F5D5C4DD99_1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E067F6F5D5C4DD99_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9720E80E62E45A0D(::UnityEngine::UI::Extension::PathGuide* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9720E80E62E45A0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_011AEFDC60DE4F3A(::UnityEngine::Component* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_011AEFDC60DE4F3A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D01DF565DA14B0C(::Class_2_1A39E1B51756BF41* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2D01DF565DA14B0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55B1F4BB42F9752E(::UnityEngine::UI::Extension::UICircleProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UICircleProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_55B1F4BB42F9752E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AFB94C0C710CD7BE(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AFB94C0C710CD7BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_2(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A70AB2A96999B4C(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2A70AB2A96999B4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E0505DA13801CE79(::UnityEngine::Component* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E0505DA13801CE79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_3(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_4(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3191CFBF5EF6BE(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5CCE7DCE3CC29CF(::UnityEngine::MonoBehaviour* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D5CCE7DCE3CC29CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AFB94C0C710CD7BE_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AFB94C0C710CD7BE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_3(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1D3B3089353DDD4(::MoleMole::UIGeneralButtonController* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D1D3B3089353DDD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1680C1B437BF349(::Class_1_A01CE0B13E11F09E* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B1680C1B437BF349_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3191CFBF5EF6BE_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_740F8E81B593C625(::Class_2_FDFE69FE7B72463B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_740F8E81B593C625_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79A54E63F1461251(::UnityEngine::UI::Extension::ISetGrey* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetGrey*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_79A54E63F1461251_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7942E347FED008A8(::UnityEngine::CanvasGroup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7942E347FED008A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_4(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_4_OFFSET))(this, a1, a2);
	}
};
