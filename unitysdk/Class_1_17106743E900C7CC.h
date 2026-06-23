#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_17106743E900C7CC_Struct_2_9DB2523694EFCBD9.h"
#include "unitysdk/Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_3.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIInLevelMonsterHudWidgetChildWindowController_HudFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_139;
class Class_1_071C40089A141ACA;
class Class_1_17106743E900C7CC_Class_1_7FA5C3A43CE694AB;
class Class_1_17106743E900C7CC_Class_2_486B26F671E13405;
class Class_1_17106743E900C7CC_Class_2_8D34C558483DC486;
class Class_1_17106743E900C7CC_Class_2_D13D1846575A4975;
class Class_1_48D56DACBE4271BC;
class Class_1_534AF681CC2BD5FD_256_Class_2_28249A88E2D6FCE3;
class Class_1_66C4D81440373C6E;
class Class_1_BC02A473BC704E75;
class Class_1_D3AFDFA22385B1B4;
class Class_2_05BFAB15000D9DD3;
class Class_2_3DB445A4752BD42A;
class Class_2_79AE422BA06F6D26_75;
class Class_2_A9A857AD270B9CE1;
class Class_3_7472FB6CC4015359;
class Class_3_F97B015544BE936B;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace MoleMole { class UIInLevelUpToolbarBOSSBarrierWidgetController; }
namespace MoleMole { class UIStunDamageWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_17106743E900C7CC_METHOD_1_0404C765C41C7F23_OFFSET UNITYSDK_OFFSET(0x163E5BA0)
#define CLASS_1_17106743E900C7CC_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x163EB490)
#define CLASS_1_17106743E900C7CC_METHOD_1_08F456DAF4329D84_OFFSET UNITYSDK_OFFSET(0x163F07C0)
#define CLASS_1_17106743E900C7CC_METHOD_1_0B56C626F5AC60EB_OFFSET UNITYSDK_OFFSET(0x163EC580)
#define CLASS_1_17106743E900C7CC_METHOD_1_0B668019D3AFFC76_OFFSET UNITYSDK_OFFSET(0x163EE840)
#define CLASS_1_17106743E900C7CC_METHOD_1_0D8B161FC097E741_OFFSET UNITYSDK_OFFSET(0x163EB340)
#define CLASS_1_17106743E900C7CC_METHOD_1_0DF420E95D6252BE_1_OFFSET UNITYSDK_OFFSET(0x163EE220)
#define CLASS_1_17106743E900C7CC_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x163EB3A0)
#define CLASS_1_17106743E900C7CC_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x163F5E20)
#define CLASS_1_17106743E900C7CC_METHOD_1_10382836015EA7BB_OFFSET UNITYSDK_OFFSET(0x163EE090)
#define CLASS_1_17106743E900C7CC_METHOD_1_11ABB7007D86D2F9_OFFSET UNITYSDK_OFFSET(0x163F65A0)
#define CLASS_1_17106743E900C7CC_METHOD_1_1656A95CE4A48665_OFFSET UNITYSDK_OFFSET(0x163F0680)
#define CLASS_1_17106743E900C7CC_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x163E9BD0)
#define CLASS_1_17106743E900C7CC_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x163E85E0)
#define CLASS_1_17106743E900C7CC_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x163F6510)
#define CLASS_1_17106743E900C7CC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x163E7710)
#define CLASS_1_17106743E900C7CC_METHOD_1_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x163F36E0)
#define CLASS_1_17106743E900C7CC_METHOD_1_1E83AACA378B37AB_OFFSET UNITYSDK_OFFSET(0x163F0280)
#define CLASS_1_17106743E900C7CC_METHOD_1_25E37B8C1EDE9E06_OFFSET UNITYSDK_OFFSET(0x163F0020)
#define CLASS_1_17106743E900C7CC_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x163E4BF0)
#define CLASS_1_17106743E900C7CC_METHOD_1_2E29038CF17E20BD_1_OFFSET UNITYSDK_OFFSET(0x163E97F0)
#define CLASS_1_17106743E900C7CC_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x163E4D00)
#define CLASS_1_17106743E900C7CC_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x163E63D0)
#define CLASS_1_17106743E900C7CC_METHOD_1_3A599F23178B2776_1_OFFSET UNITYSDK_OFFSET(0x163F5620)
#define CLASS_1_17106743E900C7CC_METHOD_1_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x163EAB70)
#define CLASS_1_17106743E900C7CC_METHOD_1_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x163F02F0)
#define CLASS_1_17106743E900C7CC_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x163F1C50)
#define CLASS_1_17106743E900C7CC_METHOD_1_41AA181104E03F2C_1_OFFSET UNITYSDK_OFFSET(0x163F0DF0)
#define CLASS_1_17106743E900C7CC_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x163F3290)
#define CLASS_1_17106743E900C7CC_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x163F0DA0)
#define CLASS_1_17106743E900C7CC_METHOD_1_4658620FE9C84CD6_OFFSET UNITYSDK_OFFSET(0x163EC870)
#define CLASS_1_17106743E900C7CC_METHOD_1_48307BDDDEB547D6_OFFSET UNITYSDK_OFFSET(0x163E6990)
#define CLASS_1_17106743E900C7CC_METHOD_1_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x163F3DD0)
#define CLASS_1_17106743E900C7CC_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x163F3F50)
#define CLASS_1_17106743E900C7CC_METHOD_1_4F934196753710D2_OFFSET UNITYSDK_OFFSET(0x163EBCC0)
#define CLASS_1_17106743E900C7CC_METHOD_1_54B714E992A012F4_OFFSET UNITYSDK_OFFSET(0x163E6360)
#define CLASS_1_17106743E900C7CC_METHOD_1_56CE4AFC5339F746_1_OFFSET UNITYSDK_OFFSET(0x163F0540)
#define CLASS_1_17106743E900C7CC_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x163EBB90)
#define CLASS_1_17106743E900C7CC_METHOD_1_586171A6FE1495FB_OFFSET UNITYSDK_OFFSET(0x163EA640)
#define CLASS_1_17106743E900C7CC_METHOD_1_5F832E106216F7FB_OFFSET UNITYSDK_OFFSET(0x163EA9E0)
#define CLASS_1_17106743E900C7CC_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x163F2690)
#define CLASS_1_17106743E900C7CC_METHOD_1_61C701B5E14F936D_OFFSET UNITYSDK_OFFSET(0x163F39B0)
#define CLASS_1_17106743E900C7CC_METHOD_1_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x163E59A0)
#define CLASS_1_17106743E900C7CC_METHOD_1_6A3D0D9049D7EDC2_OFFSET UNITYSDK_OFFSET(0x163EE9C0)
#define CLASS_1_17106743E900C7CC_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x163E86A0)
#define CLASS_1_17106743E900C7CC_METHOD_1_70CD9A040B4290BE_OFFSET UNITYSDK_OFFSET(0x163F0D20)
#define CLASS_1_17106743E900C7CC_METHOD_1_73524B07AB6465CB_OFFSET UNITYSDK_OFFSET(0x163EB770)
#define CLASS_1_17106743E900C7CC_METHOD_1_7952C32242C5A7A5_OFFSET UNITYSDK_OFFSET(0x163F3E40)
#define CLASS_1_17106743E900C7CC_METHOD_1_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x163E6AE0)
#define CLASS_1_17106743E900C7CC_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x163E5DF0)
#define CLASS_1_17106743E900C7CC_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x163E77C0)
#define CLASS_1_17106743E900C7CC_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x163E95E0)
#define CLASS_1_17106743E900C7CC_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x163F3E30)
#define CLASS_1_17106743E900C7CC_METHOD_1_8466F1BC7EA6D0E0_OFFSET UNITYSDK_OFFSET(0x163F1E80)
#define CLASS_1_17106743E900C7CC_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x163ECA80)
#define CLASS_1_17106743E900C7CC_METHOD_1_8650F1C9B95581F6_OFFSET UNITYSDK_OFFSET(0x163F0FF0)
#define CLASS_1_17106743E900C7CC_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x163ED170)
#define CLASS_1_17106743E900C7CC_METHOD_1_8A05DE1403363D53_OFFSET UNITYSDK_OFFSET(0x163F16F0)
#define CLASS_1_17106743E900C7CC_METHOD_1_8A2905DAFB806E28_OFFSET UNITYSDK_OFFSET(0x163ECCD0)
#define CLASS_1_17106743E900C7CC_METHOD_1_906510432EEA2C38_OFFSET UNITYSDK_OFFSET(0x163E8CB0)
#define CLASS_1_17106743E900C7CC_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x163EBD20)
#define CLASS_1_17106743E900C7CC_METHOD_1_921C3C3E09D59CD4_1_OFFSET UNITYSDK_OFFSET(0x163F3B30)
#define CLASS_1_17106743E900C7CC_METHOD_1_921C3C3E09D59CD4_2_OFFSET UNITYSDK_OFFSET(0x163F4EA0)
#define CLASS_1_17106743E900C7CC_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x163F1910)
#define CLASS_1_17106743E900C7CC_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x163F4150)
#define CLASS_1_17106743E900C7CC_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x163F0170)
#define CLASS_1_17106743E900C7CC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x163EB240)
#define CLASS_1_17106743E900C7CC_METHOD_1_9A4DCB2B4ADEB8A9_OFFSET UNITYSDK_OFFSET(0x163E8D50)
#define CLASS_1_17106743E900C7CC_METHOD_1_9C48521FE2D32B7F_OFFSET UNITYSDK_OFFSET(0x163F2350)
#define CLASS_1_17106743E900C7CC_METHOD_1_9E2DCE81D5D10717_OFFSET UNITYSDK_OFFSET(0x163E8070)
#define CLASS_1_17106743E900C7CC_METHOD_1_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x163E8360)
#define CLASS_1_17106743E900C7CC_METHOD_1_A536C0A3C82A1588_OFFSET UNITYSDK_OFFSET(0x163EE310)
#define CLASS_1_17106743E900C7CC_METHOD_1_A5585E9B4E5D2EE5_OFFSET UNITYSDK_OFFSET(0x163E5F50)
#define CLASS_1_17106743E900C7CC_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x163F2180)
#define CLASS_1_17106743E900C7CC_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x163EF210)
#define CLASS_1_17106743E900C7CC_METHOD_1_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x163E72D0)
#define CLASS_1_17106743E900C7CC_METHOD_1_AF82526B82A7316A_OFFSET UNITYSDK_OFFSET(0x163F1900)
#define CLASS_1_17106743E900C7CC_METHOD_1_B07EC1ACF82C9F2F_OFFSET UNITYSDK_OFFSET(0x163F5280)
#define CLASS_1_17106743E900C7CC_METHOD_1_B176F3308ECD56F6_OFFSET UNITYSDK_OFFSET(0x163E6310)
#define CLASS_1_17106743E900C7CC_METHOD_1_B4B534D7924F91AD_OFFSET UNITYSDK_OFFSET(0x163F4BC0)
#define CLASS_1_17106743E900C7CC_METHOD_1_B632E3BE93938E42_OFFSET UNITYSDK_OFFSET(0x163F4570)
#define CLASS_1_17106743E900C7CC_METHOD_1_B67DCF72B717FA9F_1_OFFSET UNITYSDK_OFFSET(0x163F4AD0)
#define CLASS_1_17106743E900C7CC_METHOD_1_B67DCF72B717FA9F_OFFSET UNITYSDK_OFFSET(0x163F3A50)
#define CLASS_1_17106743E900C7CC_METHOD_1_C2CDB8F6AD753AAC_OFFSET UNITYSDK_OFFSET(0x163E6A40)
#define CLASS_1_17106743E900C7CC_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x163F6010)
#define CLASS_1_17106743E900C7CC_METHOD_1_C7387A8E87E6B50D_OFFSET UNITYSDK_OFFSET(0x163F23D0)
#define CLASS_1_17106743E900C7CC_METHOD_1_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0x163E8490)
#define CLASS_1_17106743E900C7CC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x163F3250)
#define CLASS_1_17106743E900C7CC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x163E7770)
#define CLASS_1_17106743E900C7CC_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x163F4250)
#define CLASS_1_17106743E900C7CC_METHOD_1_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x163ED0E0)
#define CLASS_1_17106743E900C7CC_METHOD_1_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x163E8C40)
#define CLASS_1_17106743E900C7CC_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x163ECE70)
#define CLASS_1_17106743E900C7CC_METHOD_1_D4935B3503555207_OFFSET UNITYSDK_OFFSET(0x163F41E0)
#define CLASS_1_17106743E900C7CC_METHOD_1_D62C8DE162EE4DA7_OFFSET UNITYSDK_OFFSET(0x163E77B0)
#define CLASS_1_17106743E900C7CC_METHOD_1_D755E659050F5CB6_OFFSET UNITYSDK_OFFSET(0x163EC090)
#define CLASS_1_17106743E900C7CC_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x163F5170)
#define CLASS_1_17106743E900C7CC_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x163F3B80)
#define CLASS_1_17106743E900C7CC_METHOD_1_DA6216D3D356F9FE_OFFSET UNITYSDK_OFFSET(0x163F3D70)
#define CLASS_1_17106743E900C7CC_METHOD_1_E4E28A03F241E0FE_OFFSET UNITYSDK_OFFSET(0x163E68D0)
#define CLASS_1_17106743E900C7CC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x163F4BB0)
#define CLASS_1_17106743E900C7CC_METHOD_1_F175213186032CF3_OFFSET UNITYSDK_OFFSET(0x163F4A00)
#define CLASS_1_17106743E900C7CC_METHOD_1_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x163EAE60)
#define CLASS_1_17106743E900C7CC_METHOD_1_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0x163F6060)
#define CLASS_1_17106743E900C7CC_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x163ECF90)
#define CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_1_OFFSET UNITYSDK_OFFSET(0x163EB060)
#define CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_2_OFFSET UNITYSDK_OFFSET(0x163F1CA0)
#define CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_3_OFFSET UNITYSDK_OFFSET(0x163F4820)
#define CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_4_OFFSET UNITYSDK_OFFSET(0x163F6170)
#define CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_5_OFFSET UNITYSDK_OFFSET(0x163F6340)
#define CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x163E9250)
#define CLASS_1_17106743E900C7CC_METHOD_1_F81B4B2E08A60AC5_OFFSET UNITYSDK_OFFSET(0x163F34D0)
#define CLASS_1_17106743E900C7CC_METHOD_1_F8D6E72D9B7F6305_OFFSET UNITYSDK_OFFSET(0x163EA9D0)
#define CLASS_1_17106743E900C7CC_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x163F5410)
#define CLASS_1_17106743E900C7CC_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x163E5AD0)
#define CLASS_1_17106743E900C7CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x163E5C50)
#define CLASS_1_17106743E900C7CC__CTOR_OFFSET UNITYSDK_OFFSET(0x163E4A10)

inline static constexpr unsigned int Class_1_17106743E900C7CC_TypeDefinitionIndex = 46327;

class Class_1_17106743E900C7CC : public ::System::Object
{
public:
	static ::UnityEngine::Color32* StaticGet_Field_1_42()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF610);
	}
	static ::System::Single* StaticGet_Field_1_49()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF614);
	}
	static ::System::Int32* StaticGet_Field_1_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF618);
	}
	static ::System::Int32* StaticGet_Field_1_84()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF61C);
	}
	static ::System::Int32* StaticGet_Field_1_82()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF620);
	}
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF624);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_58()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF628);
	}
	static ::System::Int32* StaticGet_Field_1_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF638);
	}
	static ::System::Int32* StaticGet_Field_1_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF63C);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF640);
	}
	static ::System::Int32* StaticGet_Field_1_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF644);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_40()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF648);
	}
	static ::System::Single* StaticGet_Field_1_48()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF64C);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_57()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF650);
	}
	static ::System::Int32* StaticGet_Field_1_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF660);
	}
	static ::System::Int32* StaticGet_Field_1_55()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF664);
	}
	static ::System::Int32* StaticGet_Field_1_85()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF668);
	}
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF66C);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_41()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF670);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_45()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF674);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_43()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF678);
	}
	static ::System::Int32* StaticGet_Field_1_83()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF67C);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_47()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF680);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_46()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF684);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_44()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF688);
	}
	static ::System::Int32* StaticGet_Field_1_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17106743E900C7CC_TypeDefinitionIndex)->GetStaticField(0xF68C);
	}
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_26; // 0x0
	// static const ::System::String* Field_1_50; // 0x0
	// static const ::System::String* Field_1_51; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	// static const ::System::String* Field_1_53; // 0x0
	// static const ::System::String* Field_1_54; // 0x0
	// static const ::System::String* Field_1_77; // 0x0
	::UnityEngine::Material* Field_1_68; // 0x10
	::Class_1_17106743E900C7CC_Class_2_8D34C558483DC486* Field_1_22; // 0x18
	::UnityEngine::Material* Field_1_61; // 0x20
	::MoleMole::CharacterScriptConfig* Field_1_59; // 0x28
	::Class_1_66C4D81440373C6E* Field_1_74; // 0x30
	::Class_3_F97B015544BE936B* Field_1_75; // 0x38
	::Class_1_17106743E900C7CC_Class_2_D13D1846575A4975* Field_1_19; // 0x40
	::UnityEngine::Material* Field_1_67; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_89; // 0x50
	::Class_1_17106743E900C7CC_Class_1_7FA5C3A43CE694AB* Field_1_23; // 0x58
	::Class_1_BC02A473BC704E75* Field_1_87; // 0x60
	::UnityEngine::Material* Field_1_65; // 0x68
	::System::Collections::Generic::Dictionary_2<::Enum_3_7609C87F8335DE37_3, ::System::Single>* Field_1_80; // 0x70
	::Class_1_071C40089A141ACA* Field_1_8; // 0x78
	::MoleMole::UIInLevelUpToolBarBossWidgetController* Field_1_72; // 0x80
	::MoleMole::UIInLevelUpToolbarBOSSBarrierWidgetController* Field_1_81; // 0x88
	::UnityEngine::Material* Field_1_64; // 0x90
	::Class_3_7472FB6CC4015359* Field_1_76; // 0x98
	::Class_1_48D56DACBE4271BC* Field_1_18; // 0xA0
	::UnityEngine::Material* Field_1_66; // 0xA8
	::UnityEngine::Material* Field_1_70; // 0xB0
	::Class_1_48D56DACBE4271BC* Field_1_17; // 0xB8
	::UnityEngine::Material* Field_1_63; // 0xC0
	::UnityEngine::Material* Field_1_62; // 0xC8
	::UnityEngine::Material* Field_1_69; // 0xD0
	::Class_2_79AE422BA06F6D26_75* Field_1_71; // 0xD8
	::Class_1_D3AFDFA22385B1B4* Field_1_7; // 0xE0
	::Class_0_16E4307DCC419505_139* Field_1_9; // 0xE8
	::MoleMole::UIStunDamageWidgetController* Field_1_73; // 0xF0
	::Class_2_A9A857AD270B9CE1* Field_1_10; // 0xF8
	::Class_1_17106743E900C7CC_Class_2_486B26F671E13405* Field_1_20; // 0x100
	::Class_2_3DB445A4752BD42A* Field_1_21; // 0x108
	::Class_1_BC02A473BC704E75* Field_1_86; // 0x110
	::System::Single Field_1_5; // 0x118
	::Class_1_17106743E900C7CC_Struct_2_9DB2523694EFCBD9 Field_1_14; // 0x11C
	::System::Single Field_1_79; // 0x12C
	::System::Single Field_1_6; // 0x130
	::System::Boolean Field_1_27; // 0x134
	::System::Boolean Field_1_78; // 0x135
	::System::Boolean Field_1_16; // 0x136
	::System::Boolean Field_1_3; // 0x137
	::Foundation::Coroutine::CoroutineHandle Field_1_15; // 0x138
	::System::Boolean Field_1_30; // 0x13C
	::System::Boolean Field_1_0; // 0x13D
	::System::Boolean Field_1_29; // 0x13E
	::System::Boolean Field_1_90; // 0x13F
	::System::Boolean Field_1_1; // 0x140
	::System::Boolean Field_1_2; // 0x141
	::System::Boolean Field_1_4; // 0x142
	::System::Single Field_1_88; // 0x144
	::System::Single Field_1_12; // 0x148
	::UnityEngine::Color Field_1_60; // 0x14C
	::System::Boolean Field_1_11; // 0x15C
	::System::Boolean Field_1_28; // 0x15D
	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag Field_1_56; // 0x160

	::System::Void _ctor(::Class_2_A9A857AD270B9CE1* a1, ::Class_2_79AE422BA06F6D26_75* a2, ::MoleMole::UIInLevelUpToolBarBossWidgetController* a3, ::MoleMole::UIStunDamageWidgetController* a4, ::Class_0_16E4307DCC419505_139* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::Class_2_79AE422BA06F6D26_75*, ::MoleMole::UIInLevelUpToolBarBossWidgetController*, ::MoleMole::UIStunDamageWidgetController*, ::Class_0_16E4307DCC419505_139*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC__CCTOR_OFFSET))();
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Boolean Method_1_A5585E9B4E5D2EE5(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_A5585E9B4E5D2EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_1_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D62C8DE162EE4DA7(::Class_1_17106743E900C7CC_Struct_2_9DB2523694EFCBD9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17106743E900C7CC_Struct_2_9DB2523694EFCBD9))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D62C8DE162EE4DA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_1_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_9A4DCB2B4ADEB8A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_9A4DCB2B4ADEB8A9_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_1_586171A6FE1495FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_586171A6FE1495FB_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag Method_1_F8D6E72D9B7F6305()
	{
		return ((::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F8D6E72D9B7F6305_OFFSET))(this);
	}

	::System::Void Method_1_5F832E106216F7FB(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_5F832E106216F7FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_0D8B161FC097E741(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_0D8B161FC097E741_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Boolean Method_1_906510432EEA2C38(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_906510432EEA2C38_OFFSET))(this, a1);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F934196753710D2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_4F934196753710D2_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_1_48307BDDDEB547D6(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_48307BDDDEB547D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_1_C2CDB8F6AD753AAC(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_C2CDB8F6AD753AAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_1_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_3A599F23178B2776_OFFSET))(this);
	}

	::System::Boolean Method_1_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_0DF420E95D6252BE_1_OFFSET))(this);
	}

	::System::Void Method_1_A536C0A3C82A1588(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_A536C0A3C82A1588_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A3D0D9049D7EDC2(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_6A3D0D9049D7EDC2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_25E37B8C1EDE9E06(::Class_1_17106743E900C7CC_Struct_2_9DB2523694EFCBD9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17106743E900C7CC_Struct_2_9DB2523694EFCBD9))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_25E37B8C1EDE9E06_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void Method_1_1656A95CE4A48665(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_1656A95CE4A48665_OFFSET))(this, a1);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_08F456DAF4329D84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_08F456DAF4329D84_OFFSET))(this, a1);
	}

	::System::Void Method_1_8650F1C9B95581F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_8650F1C9B95581F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0B668019D3AFFC76(::Enum_3_7609C87F8335DE37_3 a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7609C87F8335DE37_3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_0B668019D3AFFC76_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8A05DE1403363D53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_8A05DE1403363D53_OFFSET))(this, a1);
	}

	::Class_1_17106743E900C7CC_Struct_2_9DB2523694EFCBD9 Method_1_AF82526B82A7316A()
	{
		return ((::Class_1_17106743E900C7CC_Struct_2_9DB2523694EFCBD9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_AF82526B82A7316A_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F79D5EC57FBF426E_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_2_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_56CE4AFC5339F746_1_OFFSET))(this);
	}

	::System::Void Method_1_70CD9A040B4290BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_70CD9A040B4290BE_OFFSET))(this);
	}

	::System::Void Method_1_2E29038CF17E20BD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_2E29038CF17E20BD_1_OFFSET))(this);
	}

	::System::Void Method_1_9E2DCE81D5D10717(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_9E2DCE81D5D10717_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_9C48521FE2D32B7F(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_9C48521FE2D32B7F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C7387A8E87E6B50D(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_C7387A8E87E6B50D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_1_D755E659050F5CB6(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D755E659050F5CB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_4658620FE9C84CD6(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_4658620FE9C84CD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_1_F81B4B2E08A60AC5(::UnityEngine::Color a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F81B4B2E08A60AC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_61C701B5E14F936D(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_61C701B5E14F936D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_B67DCF72B717FA9F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_B67DCF72B717FA9F_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_921C3C3E09D59CD4_1_OFFSET))(this);
	}

	::Class_1_534AF681CC2BD5FD_256_Class_2_28249A88E2D6FCE3* Method_1_DA6216D3D356F9FE()
	{
		return ((::Class_1_534AF681CC2BD5FD_256_Class_2_28249A88E2D6FCE3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_DA6216D3D356F9FE_OFFSET))(this);
	}

	::System::Void Method_1_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::UInt32 Method_1_7952C32242C5A7A5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_7952C32242C5A7A5_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_73524B07AB6465CB(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_73524B07AB6465CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_41AA181104E03F2C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_41AA181104E03F2C_1_OFFSET))(this);
	}

	::System::Void Method_1_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_1_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4935B3503555207(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D4935B3503555207_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Boolean Method_1_B632E3BE93938E42()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_B632E3BE93938E42_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_3_OFFSET))(this);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_1_F175213186032CF3(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F175213186032CF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_B67DCF72B717FA9F_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_B67DCF72B717FA9F_1_OFFSET))(this);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_8A2905DAFB806E28(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_8A2905DAFB806E28_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_B4B534D7924F91AD(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_B4B534D7924F91AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_921C3C3E09D59CD4_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_921C3C3E09D59CD4_2_OFFSET))(this);
	}

	::System::Void Method_1_1E83AACA378B37AB(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_1E83AACA378B37AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B56C626F5AC60EB(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_0B56C626F5AC60EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_54B714E992A012F4(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_54B714E992A012F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_1_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_10382836015EA7BB(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_10382836015EA7BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B07EC1ACF82C9F2F(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_B07EC1ACF82C9F2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3A599F23178B2776_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_3A599F23178B2776_1_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_8466F1BC7EA6D0E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_8466F1BC7EA6D0E0_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_1_0404C765C41C7F23(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_0404C765C41C7F23_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F5447CD65612575D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F5447CD65612575D_1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F79D5EC57FBF426E_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_4_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_F79D5EC57FBF426E_5_OFFSET))(this);
	}

	::System::Boolean Method_1_B176F3308ECD56F6(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_B176F3308ECD56F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_1DE6433C25680F9D_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_E4E28A03F241E0FE(::UnityEngine::RectTransform* a1)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_E4E28A03F241E0FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_11ABB7007D86D2F9(::Class_2_05BFAB15000D9DD3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_05BFAB15000D9DD3*))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_11ABB7007D86D2F9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17106743E900C7CC_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}
};
