#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
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
namespace UnityEngine::UI::Extension { class ISetKey; }
namespace UnityEngine::UI::Extension { class ISetText; }
namespace UnityEngine::UI::Extension { class PathGuide; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITextureOffsetModifier; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_1_OFFSET UNITYSDK_OFFSET(0x10B11A40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_OFFSET UNITYSDK_OFFSET(0x10B11950)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_011AEFDC60DE4F3A_OFFSET UNITYSDK_OFFSET(0x10B0FC70)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_033982E7E38F8283_OFFSET UNITYSDK_OFFSET(0x10B0FED0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0C55E47FC986DAE3_OFFSET UNITYSDK_OFFSET(0x10B10710)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_14DE3BA1DADA14A2_OFFSET UNITYSDK_OFFSET(0x10B10830)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_1_OFFSET UNITYSDK_OFFSET(0x10B0F150)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_2_OFFSET UNITYSDK_OFFSET(0x10B0F6B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_3_OFFSET UNITYSDK_OFFSET(0x10B0F8B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_4_OFFSET UNITYSDK_OFFSET(0x10B0FC00)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_OFFSET UNITYSDK_OFFSET(0x10B0EC90)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1BEAC88486B53727_1_OFFSET UNITYSDK_OFFSET(0x10B12240)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1BEAC88486B53727_OFFSET UNITYSDK_OFFSET(0x10B10B80)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2645E5891AAE3B04_OFFSET UNITYSDK_OFFSET(0x10B10B60)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2A4AC01439701532_OFFSET UNITYSDK_OFFSET(0x10B0F2A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2D01DF565DA14B0C_1_OFFSET UNITYSDK_OFFSET(0x10B11FA0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2D01DF565DA14B0C_OFFSET UNITYSDK_OFFSET(0x10B10DB0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_309BC38B52E6E30B_OFFSET UNITYSDK_OFFSET(0x10B108A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_30FC7C3EBDD4FC6E_OFFSET UNITYSDK_OFFSET(0x10B11530)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_318BC565AAB92D03_OFFSET UNITYSDK_OFFSET(0x10B126F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_31A6C780DD9DCC94_OFFSET UNITYSDK_OFFSET(0x10B0F230)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3B8E9BBEFC88D3BE_OFFSET UNITYSDK_OFFSET(0x10B126B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3D0C710459EC7E0A_OFFSET UNITYSDK_OFFSET(0x10B11820)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E52E17783104D59_OFFSET UNITYSDK_OFFSET(0x10B0F3C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E6674EF2AE6AD0A_OFFSET UNITYSDK_OFFSET(0x10B127E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3F7A838ECD7838A8_OFFSET UNITYSDK_OFFSET(0x10B0EFF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_41C7F4619420CF62_OFFSET UNITYSDK_OFFSET(0x10B11B00)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_44369845860DE51C_OFFSET UNITYSDK_OFFSET(0x10B10A00)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_45CDCF2BDEFEF85D_OFFSET UNITYSDK_OFFSET(0x10B10C00)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_553780A2AC829D20_OFFSET UNITYSDK_OFFSET(0x10B10810)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_5C58858C36B4A7C0_OFFSET UNITYSDK_OFFSET(0x10B10750)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_5E1DB17054DA32A0_OFFSET UNITYSDK_OFFSET(0x10B11AD0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6A0B489BA1A51EE8_OFFSET UNITYSDK_OFFSET(0x10B11A90)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_1_OFFSET UNITYSDK_OFFSET(0x10B10DD0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_OFFSET UNITYSDK_OFFSET(0x10B0ED50)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6E05F7FB6E6383CF_OFFSET UNITYSDK_OFFSET(0x10B0F7E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_70FF861174910729_OFFSET UNITYSDK_OFFSET(0x10B10E60)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7254AC96FAA1BBAC_OFFSET UNITYSDK_OFFSET(0x10B0FEE0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_740F8E81B593C625_OFFSET UNITYSDK_OFFSET(0x10B0F510)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_74809AC25647973D_OFFSET UNITYSDK_OFFSET(0x10B0F4F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7942E347FED008A8_OFFSET UNITYSDK_OFFSET(0x10B10F10)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_8530A5E28B748577_OFFSET UNITYSDK_OFFSET(0x10B10770)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_868FAFEA157C2D70_OFFSET UNITYSDK_OFFSET(0x10B11A20)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93CFB54728C3D11E_OFFSET UNITYSDK_OFFSET(0x10B0FF10)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93E497FEF4A2D816_OFFSET UNITYSDK_OFFSET(0x10B100A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9720E80E62E45A0D_OFFSET UNITYSDK_OFFSET(0x10B11FC0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_999C8D603BB5B4F3_OFFSET UNITYSDK_OFFSET(0x10B10390)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_1_OFFSET UNITYSDK_OFFSET(0x10B11710)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_OFFSET UNITYSDK_OFFSET(0x10B0EDE0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9C04F42733D55C27_OFFSET UNITYSDK_OFFSET(0x10B0F300)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_1_OFFSET UNITYSDK_OFFSET(0x10B10990)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_OFFSET UNITYSDK_OFFSET(0x10B0FDB0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D88605FD3035F75_OFFSET UNITYSDK_OFFSET(0x10B10AD0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9F053AFC492D4A0E_OFFSET UNITYSDK_OFFSET(0x10B0F1C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9F9C7DC137ECDFBE_OFFSET UNITYSDK_OFFSET(0x10B0F720)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_A2A6FE02F44A73E8_OFFSET UNITYSDK_OFFSET(0x10B11370)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_ABA959575FF89EA6_OFFSET UNITYSDK_OFFSET(0x10B0EBB0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AFB94C0C710CD7BE_1_OFFSET UNITYSDK_OFFSET(0x10B11850)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AFB94C0C710CD7BE_OFFSET UNITYSDK_OFFSET(0x10B0EEF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B1680C1B437BF349_OFFSET UNITYSDK_OFFSET(0x10B123A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B2B9F59894DC14E3_OFFSET UNITYSDK_OFFSET(0x10B0F2E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B49BE3AD1D19BBC6_OFFSET UNITYSDK_OFFSET(0x10B12790)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BA02159EFC077A36_OFFSET UNITYSDK_OFFSET(0x10B0FAE0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BAC01C40602D2F44_OFFSET UNITYSDK_OFFSET(0x10B0ED00)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BB4F510B404DB080_OFFSET UNITYSDK_OFFSET(0x10B110A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BD91F164ACD7863F_OFFSET UNITYSDK_OFFSET(0x10B0FB10)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_C96E8ACB93CD0F64_OFFSET UNITYSDK_OFFSET(0x10B11FF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CC4DD900317BC01A_OFFSET UNITYSDK_OFFSET(0x10B10930)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CEE0CB10BF5ABCF1_OFFSET UNITYSDK_OFFSET(0x10B0FDF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D1D3B3089353DDD4_OFFSET UNITYSDK_OFFSET(0x10B0EE60)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D5CCE7DCE3CC29CF_OFFSET UNITYSDK_OFFSET(0x10B0F010)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DC7B012B1FEF4C59_OFFSET UNITYSDK_OFFSET(0x10B12550)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DCF86428810E9F1D_OFFSET UNITYSDK_OFFSET(0x10B0ED20)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE0AD09332CBF150_1_OFFSET UNITYSDK_OFFSET(0x10B0F5A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE0AD09332CBF150_OFFSET UNITYSDK_OFFSET(0x10B0F3E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE9930191149F85C_OFFSET UNITYSDK_OFFSET(0x10B109D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E0505DA13801CE79_OFFSET UNITYSDK_OFFSET(0x10B10F40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E067F6F5D5C4DD99_1_OFFSET UNITYSDK_OFFSET(0x10B10A40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E067F6F5D5C4DD99_OFFSET UNITYSDK_OFFSET(0x10B0F750)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E1906D0440EAD4AF_OFFSET UNITYSDK_OFFSET(0x10B11B80)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E2D561F21E1CC608_OFFSET UNITYSDK_OFFSET(0x10B0EEC0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E533570C4924A466_OFFSET UNITYSDK_OFFSET(0x10B122C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_1_OFFSET UNITYSDK_OFFSET(0x10B11790)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_OFFSET UNITYSDK_OFFSET(0x10B0FE40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_1_OFFSET UNITYSDK_OFFSET(0x10B114B0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_2_OFFSET UNITYSDK_OFFSET(0x10B11690)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_3_OFFSET UNITYSDK_OFFSET(0x10B119A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_4_OFFSET UNITYSDK_OFFSET(0x10B121C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_OFFSET UNITYSDK_OFFSET(0x10B11130)
#define CLASS_1_F29C68BEB3C6B152___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B0EB60)
#define CLASS_1_F29C68BEB3C6B152___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B0EBA0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex = 62618;

class Class_1_F29C68BEB3C6B152___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::String*>** StaticGet___9__84_0()
	{
		return (::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DD60);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__70_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DD68);
	}
	static ::System::Action_2<::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__79_1()
	{
		return (::System::Action_2<::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DD70);
	}
	static ::System::Action_2<::MoleMole::MonoGamepadSelectable*, ::System::Boolean>** StaticGet___9__80_0()
	{
		return (::System::Action_2<::MoleMole::MonoGamepadSelectable*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DD78);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__46_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DD80);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__59_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DD88);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>** StaticGet___9__73_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DD90);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__71_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DD98);
	}
	static ::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::Boolean>** StaticGet___9__32_2()
	{
		return (::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDA0);
	}
	static ::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>** StaticGet___9__56_0()
	{
		return (::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDA8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*>** StaticGet___9__15_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDB0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__67_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDB8);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>** StaticGet___9__72_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDC0);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDC8);
	}
	static ::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>** StaticGet___9__52_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDD0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__57_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDD8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__65_1()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDE0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::Object*>** StaticGet___9__11_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDE8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__68_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDF0);
	}
	static ::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>** StaticGet___9__82_0()
	{
		return (::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DDF8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>** StaticGet___9__28_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE00);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>** StaticGet___9__65_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE08);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__59_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE10);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>** StaticGet___9__45_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE18);
	}
	static ::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>** StaticGet___9__33_0()
	{
		return (::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE20);
	}
	static ::System::Action_2<::Class_2_B4378B46E0020E85*, ::System::Boolean>** StaticGet___9__32_0()
	{
		return (::System::Action_2<::Class_2_B4378B46E0020E85*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE28);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Int32>** StaticGet___9__29_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE30);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE38);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Single>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE40);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::String*>** StaticGet___9__34_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE48);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__55_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE50);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__54_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE58);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>** StaticGet___9__71_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE60);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__64_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE68);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Boolean>** StaticGet___9__16_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE70);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*>** StaticGet___9__20_0()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE78);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__63_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE80);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__57_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE88);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE90);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__68_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DE98);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color>** StaticGet___9__4_1()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEA0);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*>** StaticGet___9__22_0()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEA8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__54_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEB0);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect>** StaticGet___9__66_1()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEB8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__60_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEC0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Int32>** StaticGet___9__29_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEC8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__61_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DED0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DED8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>** StaticGet___9__69_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEE0);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__65_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEE8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__60_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEF0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>** StaticGet___9__27_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DEF8);
	}
	static ::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF00);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__18_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF08);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>** StaticGet___9__14_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF10);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__21_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF18);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__64_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF20);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>** StaticGet___9__49_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF28);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet___9__34_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF30);
	}
	static ::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>** StaticGet___9__74_0()
	{
		return (::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF38);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__55_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF40);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__23_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF48);
	}
	static ::System::Action_2<::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__79_0()
	{
		return (::System::Action_2<::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF50);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__58_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF58);
	}
	static ::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::Boolean>** StaticGet___9__83_0()
	{
		return (::System::Action_2<::Class_2_FDFE69FE7B72463B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF60);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__70_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF68);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet___9__27_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF70);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::System::Boolean>** StaticGet___9__32_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF78);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>** StaticGet___9__13_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF80);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Boolean>** StaticGet___9__27_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF88);
	}
	static ::Class_1_F29C68BEB3C6B152___c** StaticGet___9()
	{
		return (::Class_1_F29C68BEB3C6B152___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF90);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::String*>** StaticGet___9__34_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DF98);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath>** StaticGet___9__17_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFA0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>** StaticGet___9__66_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFA8);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Single>** StaticGet___9__53_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFB0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__61_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFB8);
	}
	static ::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>** StaticGet___9__28_1()
	{
		return (::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFC0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__62_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFC8);
	}
	static ::System::Action_2<::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__23_0()
	{
		return (::System::Action_2<::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFD0);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color>** StaticGet___9__4_2()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFD8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFE0);
	}
	static ::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>** StaticGet___9__19_0()
	{
		return (::System::Action_2<::Class_2_1A39E1B51756BF41*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFE8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__69_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFF0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__63_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3DFF8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>>** StaticGet___9__12_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3E000);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__62_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3E008);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__48_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3E010);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3E018);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__58_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3E020);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__67_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x3E028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ABA959575FF89EA6(::UnityEngine::UI::Extension::ISetText* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetText*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_ABA959575FF89EA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BAC01C40602D2F44(::MoleMole::MonoGamepadSelectable* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BAC01C40602D2F44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCF86428810E9F1D(::Class_1_A01CE0B13E11F09E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DCF86428810E9F1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C59F653D71D55E2(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A082094D383B5AF(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1D3B3089353DDD4(::MoleMole::UIGeneralButtonController* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D1D3B3089353DDD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2D561F21E1CC608(::Class_1_A01CE0B13E11F09E* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E2D561F21E1CC608_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AFB94C0C710CD7BE(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AFB94C0C710CD7BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3F7A838ECD7838A8(::Class_2_1A39E1B51756BF41* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3F7A838ECD7838A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5CCE7DCE3CC29CF(::UnityEngine::MonoBehaviour* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D5CCE7DCE3CC29CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F053AFC492D4A0E(::MoleMole::ScaledContentSizeFitter* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScaledContentSizeFitter*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9F053AFC492D4A0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_31A6C780DD9DCC94(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_31A6C780DD9DCC94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A4AC01439701532(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2A4AC01439701532_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B2B9F59894DC14E3(::MoleMole::UIInputFieldEx* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B2B9F59894DC14E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9C04F42733D55C27(::Class_1_A01CE0B13E11F09E* a1, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9C04F42733D55C27_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E52E17783104D59(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E52E17783104D59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE0AD09332CBF150(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE0AD09332CBF150_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_74809AC25647973D(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_74809AC25647973D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_740F8E81B593C625(::Class_2_FDFE69FE7B72463B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_740F8E81B593C625_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE0AD09332CBF150_1(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE0AD09332CBF150_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_2(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F9C7DC137ECDFBE(::UnityEngine::UI::Extension::UIDynamicNumberLabel* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9F9C7DC137ECDFBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E067F6F5D5C4DD99(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E067F6F5D5C4DD99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E05F7FB6E6383CF(::UnityEngine::Component* a1, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6E05F7FB6E6383CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_3(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA02159EFC077A36(::UnityEngine::UI::Extension::UITextureOffsetModifier* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BA02159EFC077A36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BD91F164ACD7863F(::Class_2_B4378B46E0020E85* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BD91F164ACD7863F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1824B59F2499FC53_4(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1824B59F2499FC53_4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_011AEFDC60DE4F3A(::UnityEngine::Component* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_011AEFDC60DE4F3A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3191CFBF5EF6BE(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CEE0CB10BF5ABCF1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CEE0CB10BF5ABCF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3CCD480DFEA6CDC(::Class_2_1A39E1B51756BF41* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_033982E7E38F8283(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_033982E7E38F8283_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7254AC96FAA1BBAC(::Class_1_A01CE0B13E11F09E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7254AC96FAA1BBAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93CFB54728C3D11E(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93CFB54728C3D11E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93E497FEF4A2D816(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_2<::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93E497FEF4A2D816_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_999C8D603BB5B4F3(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_999C8D603BB5B4F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C55E47FC986DAE3(::UnityEngine::UI::Extension::PathGuide* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0C55E47FC986DAE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C58858C36B4A7C0(::MoleMole::UIGeneralButtonController* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_5C58858C36B4A7C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8530A5E28B748577(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_8530A5E28B748577_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_553780A2AC829D20(::UnityEngine::UI::AspectRatioFitter* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AspectRatioFitter*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_553780A2AC829D20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_14DE3BA1DADA14A2(::UnityEngine::UI::Extension::UILocalizationText* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_14DE3BA1DADA14A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_309BC38B52E6E30B(::UnityEngine::UI::Slider* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_309BC38B52E6E30B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC4DD900317BC01A(::UnityEngine::UI::LayoutElement* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CC4DD900317BC01A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3191CFBF5EF6BE_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE9930191149F85C(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DE9930191149F85C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_44369845860DE51C(::Class_2_FDFE69FE7B72463B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_44369845860DE51C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E067F6F5D5C4DD99_1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E067F6F5D5C4DD99_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D88605FD3035F75(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D88605FD3035F75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2645E5891AAE3B04(::Class_2_B4378B46E0020E85* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2645E5891AAE3B04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1BEAC88486B53727(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1BEAC88486B53727_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45CDCF2BDEFEF85D(::UnityEngine::Component* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_45CDCF2BDEFEF85D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D01DF565DA14B0C(::Class_2_1A39E1B51756BF41* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2D01DF565DA14B0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C59F653D71D55E2_1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70FF861174910729(::MoleMole::UIInputFieldEx* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_70FF861174910729_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7942E347FED008A8(::UnityEngine::CanvasGroup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7942E347FED008A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E0505DA13801CE79(::UnityEngine::Component* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E0505DA13801CE79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB4F510B404DB080(::Class_2_1A39E1B51756BF41* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BB4F510B404DB080_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A2A6FE02F44A73E8(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_A2A6FE02F44A73E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_1(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30FC7C3EBDD4FC6E(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_30FC7C3EBDD4FC6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_2(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A082094D383B5AF_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3CCD480DFEA6CDC_1(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D0C710459EC7E0A(::UnityEngine::UI::LayoutElement* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3D0C710459EC7E0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AFB94C0C710CD7BE_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AFB94C0C710CD7BE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0030BBB9CB7501A7(::UnityEngine::Component* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_3(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_868FAFEA157C2D70(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::TimeSpan a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_868FAFEA157C2D70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0030BBB9CB7501A7_1(::UnityEngine::Component* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A0B489BA1A51EE8(::MoleMole::UIGeneralButtonController* a1, ::Struct_2_55B1720D3ECF0A32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6A0B489BA1A51EE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5E1DB17054DA32A0(::UnityEngine::UI::Extension::UIDynamicNumberLabel* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_5E1DB17054DA32A0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41C7F4619420CF62(::MoleMole::NotificationBadge* a1, ::Class_1_1EA8435E138F2E03* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_41C7F4619420CF62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1906D0440EAD4AF(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E1906D0440EAD4AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D01DF565DA14B0C_1(::Class_2_1A39E1B51756BF41* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2D01DF565DA14B0C_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9720E80E62E45A0D(::UnityEngine::UI::Extension::PathGuide* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9720E80E62E45A0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C96E8ACB93CD0F64(::UnityEngine::UI::Extension::ISetKey* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetKey*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_C96E8ACB93CD0F64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F8A42165D1CADC25_4(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F8A42165D1CADC25_4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1BEAC88486B53727_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_1BEAC88486B53727_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E533570C4924A466(::UnityEngine::UI::Extension::ISetArg* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E533570C4924A466_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1680C1B437BF349(::Class_1_A01CE0B13E11F09E* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B1680C1B437BF349_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC7B012B1FEF4C59(::UnityEngine::UI::Extension::ISetArg* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DC7B012B1FEF4C59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B8E9BBEFC88D3BE(::MoleMole::NotificationBadgeEx* a1, ::Class_1_1EA8435E138F2E03* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3B8E9BBEFC88D3BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_318BC565AAB92D03(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_318BC565AAB92D03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B49BE3AD1D19BBC6(::Class_2_1A39E1B51756BF41* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B49BE3AD1D19BBC6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E6674EF2AE6AD0A(::UnityEngine::Camera* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E6674EF2AE6AD0A_OFFSET))(this, a1, a2);
	}
};
