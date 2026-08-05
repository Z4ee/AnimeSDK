#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_52C53FB70F903040_Struct_2_9DB2523694EFCBD9.h"
#include "unitysdk/Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIInLevelMonsterHudWidgetChildWindowController_HudFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_135;
class Class_1_071C40089A141ACA;
class Class_1_48D56DACBE4271BC;
class Class_1_52C53FB70F903040_Class_1_7FA5C3A43CE694AB;
class Class_1_52C53FB70F903040_Class_2_8D34C558483DC486;
class Class_1_52C53FB70F903040_Class_2_D13D1846575A4975;
class Class_1_52C53FB70F903040_Class_2_ECBDC7CD01E7C0C2;
class Class_1_534AF681CC2BD5FD_223_Class_2_D2CD7DCAEA484BF8;
class Class_1_66C4D81440373C6E;
class Class_1_BC02A473BC704E75;
class Class_1_D3AFDFA22385B1B4;
class Class_2_05BFAB15000D9DD3;
class Class_2_3DB445A4752BD42A;
class Class_2_79AE422BA06F6D26_18;
class Class_2_A4D62D05D5EA8464;
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

#define CLASS_1_52C53FB70F903040_METHOD_1_0404C765C41C7F23_OFFSET UNITYSDK_OFFSET(0xE22FBE0)
#define CLASS_1_52C53FB70F903040_METHOD_1_08F456DAF4329D84_OFFSET UNITYSDK_OFFSET(0xE238C60)
#define CLASS_1_52C53FB70F903040_METHOD_1_0B56C626F5AC60EB_OFFSET UNITYSDK_OFFSET(0xE2378E0)
#define CLASS_1_52C53FB70F903040_METHOD_1_0B668019D3AFFC76_OFFSET UNITYSDK_OFFSET(0xE2345C0)
#define CLASS_1_52C53FB70F903040_METHOD_1_0BDFAC56E6B704CB_1_OFFSET UNITYSDK_OFFSET(0xE23D390)
#define CLASS_1_52C53FB70F903040_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xE240520)
#define CLASS_1_52C53FB70F903040_METHOD_1_0D8B161FC097E741_OFFSET UNITYSDK_OFFSET(0xE234EF0)
#define CLASS_1_52C53FB70F903040_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xE232480)
#define CLASS_1_52C53FB70F903040_METHOD_1_10382836015EA7BB_OFFSET UNITYSDK_OFFSET(0xE232F90)
#define CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_1_OFFSET UNITYSDK_OFFSET(0xE2363B0)
#define CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_2_OFFSET UNITYSDK_OFFSET(0xE2369F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_3_OFFSET UNITYSDK_OFFSET(0xE238A20)
#define CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_4_OFFSET UNITYSDK_OFFSET(0xE23E830)
#define CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xE235130)
#define CLASS_1_52C53FB70F903040_METHOD_1_15E5FE4573AC3657_OFFSET UNITYSDK_OFFSET(0xE232610)
#define CLASS_1_52C53FB70F903040_METHOD_1_1656A95CE4A48665_OFFSET UNITYSDK_OFFSET(0xE236860)
#define CLASS_1_52C53FB70F903040_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0xE2372F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0xE239240)
#define CLASS_1_52C53FB70F903040_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xE2354F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_1ABF1CBED7A4AF0A_1_OFFSET UNITYSDK_OFFSET(0xE23E630)
#define CLASS_1_52C53FB70F903040_METHOD_1_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xE23BF00)
#define CLASS_1_52C53FB70F903040_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xE240660)
#define CLASS_1_52C53FB70F903040_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE238C00)
#define CLASS_1_52C53FB70F903040_METHOD_1_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0xE235F40)
#define CLASS_1_52C53FB70F903040_METHOD_1_1E83AACA378B37AB_OFFSET UNITYSDK_OFFSET(0xE234F50)
#define CLASS_1_52C53FB70F903040_METHOD_1_25E37B8C1EDE9E06_OFFSET UNITYSDK_OFFSET(0xE236BD0)
#define CLASS_1_52C53FB70F903040_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xE22EA10)
#define CLASS_1_52C53FB70F903040_METHOD_1_2DB52E9100DD37D8_OFFSET UNITYSDK_OFFSET(0xE233F10)
#define CLASS_1_52C53FB70F903040_METHOD_1_2E29038CF17E20BD_1_OFFSET UNITYSDK_OFFSET(0xE22EB10)
#define CLASS_1_52C53FB70F903040_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0xE237BD0)
#define CLASS_1_52C53FB70F903040_METHOD_1_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0xE240950)
#define CLASS_1_52C53FB70F903040_METHOD_1_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0xE237FB0)
#define CLASS_1_52C53FB70F903040_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xE2355B0)
#define CLASS_1_52C53FB70F903040_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0xE232E60)
#define CLASS_1_52C53FB70F903040_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xE231380)
#define CLASS_1_52C53FB70F903040_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xE2389D0)
#define CLASS_1_52C53FB70F903040_METHOD_1_4658620FE9C84CD6_OFFSET UNITYSDK_OFFSET(0xE23B600)
#define CLASS_1_52C53FB70F903040_METHOD_1_48307BDDDEB547D6_OFFSET UNITYSDK_OFFSET(0xE235B80)
#define CLASS_1_52C53FB70F903040_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xE237340)
#define CLASS_1_52C53FB70F903040_METHOD_1_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0xE236990)
#define CLASS_1_52C53FB70F903040_METHOD_1_4F934196753710D2_OFFSET UNITYSDK_OFFSET(0xE23DAF0)
#define CLASS_1_52C53FB70F903040_METHOD_1_4FE2D3C818DAF1E6_OFFSET UNITYSDK_OFFSET(0xE241300)
#define CLASS_1_52C53FB70F903040_METHOD_1_54B714E992A012F4_OFFSET UNITYSDK_OFFSET(0xE234E80)
#define CLASS_1_52C53FB70F903040_METHOD_1_57CA573DC7E679EC_OFFSET UNITYSDK_OFFSET(0xE2320C0)
#define CLASS_1_52C53FB70F903040_METHOD_1_586171A6FE1495FB_OFFSET UNITYSDK_OFFSET(0xE234740)
#define CLASS_1_52C53FB70F903040_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xE23D4E0)
#define CLASS_1_52C53FB70F903040_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0xE23C3F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_61C701B5E14F936D_OFFSET UNITYSDK_OFFSET(0xE240CC0)
#define CLASS_1_52C53FB70F903040_METHOD_1_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xE22FE30)
#define CLASS_1_52C53FB70F903040_METHOD_1_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0xE22F9E0)
#define CLASS_1_52C53FB70F903040_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xE2375A0)
#define CLASS_1_52C53FB70F903040_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xE2319F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_70CD9A040B4290BE_OFFSET UNITYSDK_OFFSET(0xE231300)
#define CLASS_1_52C53FB70F903040_METHOD_1_73524B07AB6465CB_OFFSET UNITYSDK_OFFSET(0xE23D700)
#define CLASS_1_52C53FB70F903040_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xE23DBB0)
#define CLASS_1_52C53FB70F903040_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xE239DB0)
#define CLASS_1_52C53FB70F903040_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xE2406F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE23EA10)
#define CLASS_1_52C53FB70F903040_METHOD_1_840E384EF0F75F32_OFFSET UNITYSDK_OFFSET(0xE23A720)
#define CLASS_1_52C53FB70F903040_METHOD_1_8466F1BC7EA6D0E0_OFFSET UNITYSDK_OFFSET(0xE2313D0)
#define CLASS_1_52C53FB70F903040_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0xE23E350)
#define CLASS_1_52C53FB70F903040_METHOD_1_8650F1C9B95581F6_OFFSET UNITYSDK_OFFSET(0xE23B820)
#define CLASS_1_52C53FB70F903040_METHOD_1_8A2905DAFB806E28_OFFSET UNITYSDK_OFFSET(0xE2366C0)
#define CLASS_1_52C53FB70F903040_METHOD_1_8A76897D6A693475_1_OFFSET UNITYSDK_OFFSET(0xE23AA10)
#define CLASS_1_52C53FB70F903040_METHOD_1_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xE231900)
#define CLASS_1_52C53FB70F903040_METHOD_1_8A872D5D1B5BF46C_OFFSET UNITYSDK_OFFSET(0xE23F460)
#define CLASS_1_52C53FB70F903040_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0xE236590)
#define CLASS_1_52C53FB70F903040_METHOD_1_906510432EEA2C38_OFFSET UNITYSDK_OFFSET(0xE232020)
#define CLASS_1_52C53FB70F903040_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xE23DD10)
#define CLASS_1_52C53FB70F903040_METHOD_1_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0xE2316D0)
#define CLASS_1_52C53FB70F903040_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xE23F670)
#define CLASS_1_52C53FB70F903040_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE236D20)
#define CLASS_1_52C53FB70F903040_METHOD_1_9A4DCB2B4ADEB8A9_OFFSET UNITYSDK_OFFSET(0xE23FCC0)
#define CLASS_1_52C53FB70F903040_METHOD_1_9C48521FE2D32B7F_OFFSET UNITYSDK_OFFSET(0xE234FC0)
#define CLASS_1_52C53FB70F903040_METHOD_1_A0DC5467BAA81F98_OFFSET UNITYSDK_OFFSET(0xE2401C0)
#define CLASS_1_52C53FB70F903040_METHOD_1_A2458167D7752575_1_OFFSET UNITYSDK_OFFSET(0xE23EA20)
#define CLASS_1_52C53FB70F903040_METHOD_1_A2458167D7752575_OFFSET UNITYSDK_OFFSET(0xE23C0F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_A536C0A3C82A1588_OFFSET UNITYSDK_OFFSET(0xE2340A0)
#define CLASS_1_52C53FB70F903040_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xE233120)
#define CLASS_1_52C53FB70F903040_METHOD_1_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0xE23DDA0)
#define CLASS_1_52C53FB70F903040_METHOD_1_AF82526B82A7316A_OFFSET UNITYSDK_OFFSET(0xE241040)
#define CLASS_1_52C53FB70F903040_METHOD_1_B07EC1ACF82C9F2F_OFFSET UNITYSDK_OFFSET(0xE236220)
#define CLASS_1_52C53FB70F903040_METHOD_1_B176F3308ECD56F6_OFFSET UNITYSDK_OFFSET(0xE234E30)
#define CLASS_1_52C53FB70F903040_METHOD_1_B632E3BE93938E42_OFFSET UNITYSDK_OFFSET(0xE241050)
#define CLASS_1_52C53FB70F903040_METHOD_1_C2CDB8F6AD753AAC_OFFSET UNITYSDK_OFFSET(0xE235C30)
#define CLASS_1_52C53FB70F903040_METHOD_1_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0xE23D140)
#define CLASS_1_52C53FB70F903040_METHOD_1_C4480433DB0A10CD_OFFSET UNITYSDK_OFFSET(0xE23DB50)
#define CLASS_1_52C53FB70F903040_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xE23FBA0)
#define CLASS_1_52C53FB70F903040_METHOD_1_C7387A8E87E6B50D_OFFSET UNITYSDK_OFFSET(0xE23B0E0)
#define CLASS_1_52C53FB70F903040_METHOD_1_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0xE23CFF0)
#define CLASS_1_52C53FB70F903040_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE23B3A0)
#define CLASS_1_52C53FB70F903040_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE235CE0)
#define CLASS_1_52C53FB70F903040_METHOD_1_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0xE23AB00)
#define CLASS_1_52C53FB70F903040_METHOD_1_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xE23E5A0)
#define CLASS_1_52C53FB70F903040_METHOD_1_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0xE231FB0)
#define CLASS_1_52C53FB70F903040_METHOD_1_D3129FE8DF635B48_1_OFFSET UNITYSDK_OFFSET(0xE23F880)
#define CLASS_1_52C53FB70F903040_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xE23E1F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_D4935B3503555207_OFFSET UNITYSDK_OFFSET(0xE2404A0)
#define CLASS_1_52C53FB70F903040_METHOD_1_D62C8DE162EE4DA7_OFFSET UNITYSDK_OFFSET(0xE240650)
#define CLASS_1_52C53FB70F903040_METHOD_1_D755E659050F5CB6_OFFSET UNITYSDK_OFFSET(0xE236E30)
#define CLASS_1_52C53FB70F903040_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0xE23F770)
#define CLASS_1_52C53FB70F903040_METHOD_1_DA6216D3D356F9FE_OFFSET UNITYSDK_OFFSET(0xE2391E0)
#define CLASS_1_52C53FB70F903040_METHOD_1_DA7D5FED1E10712C_1_OFFSET UNITYSDK_OFFSET(0xE241410)
#define CLASS_1_52C53FB70F903040_METHOD_1_DA7D5FED1E10712C_OFFSET UNITYSDK_OFFSET(0xE235040)
#define CLASS_1_52C53FB70F903040_METHOD_1_E4E28A03F241E0FE_OFFSET UNITYSDK_OFFSET(0xE235AC0)
#define CLASS_1_52C53FB70F903040_METHOD_1_EE085B6060B48362_OFFSET UNITYSDK_OFFSET(0xE23F9B0)
#define CLASS_1_52C53FB70F903040_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE23F9A0)
#define CLASS_1_52C53FB70F903040_METHOD_1_F175213186032CF3_OFFSET UNITYSDK_OFFSET(0xE23FBF0)
#define CLASS_1_52C53FB70F903040_METHOD_1_F206290BA342BA13_1_OFFSET UNITYSDK_OFFSET(0xE240D60)
#define CLASS_1_52C53FB70F903040_METHOD_1_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0xE234AD0)
#define CLASS_1_52C53FB70F903040_METHOD_1_F675341C48ED6437_1_OFFSET UNITYSDK_OFFSET(0xE23B3E0)
#define CLASS_1_52C53FB70F903040_METHOD_1_F675341C48ED6437_OFFSET UNITYSDK_OFFSET(0xE240700)
#define CLASS_1_52C53FB70F903040_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xE2387F0)
#define CLASS_1_52C53FB70F903040_METHOD_1_F81B4B2E08A60AC5_OFFSET UNITYSDK_OFFSET(0xE235D20)
#define CLASS_1_52C53FB70F903040_METHOD_1_F8D6E72D9B7F6305_OFFSET UNITYSDK_OFFSET(0xE23F990)
#define CLASS_1_52C53FB70F903040_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xE23F290)
#define CLASS_1_52C53FB70F903040_METHOD_1_FDE7C207933D6D55_OFFSET UNITYSDK_OFFSET(0xE231240)
#define CLASS_1_52C53FB70F903040_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xE22FB10)
#define CLASS_1_52C53FB70F903040__CCTOR_OFFSET UNITYSDK_OFFSET(0xE22FC90)
#define CLASS_1_52C53FB70F903040__CTOR_OFFSET UNITYSDK_OFFSET(0xE22E880)

inline static constexpr unsigned int Class_1_52C53FB70F903040_TypeDefinitionIndex = 42155;

class Class_1_52C53FB70F903040 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0B0);
	}
	static ::System::Single* StaticGet_Field_1_49()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0B4);
	}
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0B8);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_57()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0BC);
	}
	static ::System::Int32* StaticGet_Field_1_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0CC);
	}
	static ::System::Int32* StaticGet_Field_1_93()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0D0);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_42()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0D4);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_56()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0D8);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_40()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0E8);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_45()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0EC);
	}
	static ::System::Int32* StaticGet_Field_1_95()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0F0);
	}
	static ::System::Int32* StaticGet_Field_1_92()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0F4);
	}
	static ::System::Int32* StaticGet_Field_1_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0F8);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_46()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC0FC);
	}
	static ::System::Single* StaticGet_Field_1_50()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC100);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_47()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC104);
	}
	static ::System::Int32* StaticGet_Field_1_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC108);
	}
	static ::System::Int32* StaticGet_Field_1_43()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC10C);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_44()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC110);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC114);
	}
	static ::System::Int32* StaticGet_Field_1_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC118);
	}
	static ::System::Int32* StaticGet_Field_1_59()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC11C);
	}
	static ::System::Int32* StaticGet_Field_1_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC120);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_51()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC124);
	}
	static ::System::Int32* StaticGet_Field_1_94()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC128);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_41()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C53FB70F903040_TypeDefinitionIndex)->GetStaticField(0xC12C);
	}
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_26; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_48; // 0x0
	// static const ::System::String* Field_1_55; // 0x0
	// static const ::System::String* Field_1_54; // 0x0
	// static const ::System::String* Field_1_53; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	// static const ::System::String* Field_1_76; // 0x0
	// static const ::System::String* Field_1_83; // 0x0
	// static const ::System::String* Field_1_82; // 0x0
	// static const ::System::String* Field_1_81; // 0x0
	// static const ::System::String* Field_1_80; // 0x0
	// static const ::System::String* Field_1_87; // 0x0
	// static const ::System::String* Field_1_86; // 0x0
	// static const ::System::String* Field_1_85; // 0x0
	// static const ::System::String* Field_1_84; // 0x0
	::Class_1_52C53FB70F903040_Class_2_ECBDC7CD01E7C0C2* Field_1_22; // 0x10
	::Class_2_A4D62D05D5EA8464* Field_1_8; // 0x18
	::Class_0_16E4307DCC419505_135* Field_1_9; // 0x20
	::Class_1_48D56DACBE4271BC* Field_1_17; // 0x28
	::UnityEngine::Material* Field_1_64; // 0x30
	::UnityEngine::Material* Field_1_75; // 0x38
	::UnityEngine::Material* Field_1_69; // 0x40
	::Class_1_52C53FB70F903040_Class_2_8D34C558483DC486* Field_1_20; // 0x48
	::Class_1_D3AFDFA22385B1B4* Field_1_11; // 0x50
	::System::Collections::Generic::Dictionary_2<::Enum_3_7609C87F8335DE37_1, ::System::Single>* Field_1_89; // 0x58
	::Class_1_48D56DACBE4271BC* Field_1_16; // 0x60
	::Class_1_52C53FB70F903040_Class_1_7FA5C3A43CE694AB* Field_1_27; // 0x68
	::Class_2_3DB445A4752BD42A* Field_1_21; // 0x70
	::Class_3_F97B015544BE936B* Field_1_78; // 0x78
	::UnityEngine::Material* Field_1_71; // 0x80
	::UnityEngine::Material* Field_1_68; // 0x88
	::MoleMole::UIInLevelUpToolbarBOSSBarrierWidgetController* Field_1_88; // 0x90
	::UnityEngine::Material* Field_1_66; // 0x98
	::Class_1_BC02A473BC704E75* Field_1_98; // 0xA0
	::MoleMole::UIStunDamageWidgetController* Field_1_72; // 0xA8
	::Class_3_7472FB6CC4015359* Field_1_77; // 0xB0
	::Class_1_BC02A473BC704E75* Field_1_99; // 0xB8
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_96; // 0xC0
	::UnityEngine::Material* Field_1_60; // 0xC8
	::Class_1_52C53FB70F903040_Class_2_D13D1846575A4975* Field_1_23; // 0xD0
	::UnityEngine::Material* Field_1_70; // 0xD8
	::MoleMole::CharacterScriptConfig* Field_1_63; // 0xE0
	::UnityEngine::Material* Field_1_65; // 0xE8
	::Class_1_071C40089A141ACA* Field_1_10; // 0xF0
	::UnityEngine::Material* Field_1_61; // 0xF8
	::Class_1_66C4D81440373C6E* Field_1_79; // 0x100
	::UnityEngine::Material* Field_1_67; // 0x108
	::Class_2_79AE422BA06F6D26_18* Field_1_74; // 0x110
	::MoleMole::UIInLevelUpToolBarBossWidgetController* Field_1_73; // 0x118
	::System::Single Field_1_97; // 0x120
	::System::Boolean Field_1_7; // 0x124
	::System::Boolean Field_1_2; // 0x125
	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag Field_1_58; // 0x128
	::Foundation::Coroutine::CoroutineHandle Field_1_19; // 0x12C
	::System::Single Field_1_5; // 0x130
	::System::Single Field_1_4; // 0x134
	::System::Single Field_1_14; // 0x138
	::System::Boolean Field_1_31; // 0x13C
	::System::Boolean Field_1_103; // 0x13D
	::System::Boolean Field_1_28; // 0x13E
	::System::Boolean Field_1_29; // 0x13F
	::System::Boolean Field_1_6; // 0x140
	::System::Boolean Field_1_1; // 0x141
	::System::Boolean Field_1_15; // 0x142
	::System::Boolean Field_1_18; // 0x143
	::System::Boolean Field_1_91; // 0x144
	::System::Boolean Field_1_30; // 0x145
	::System::Boolean Field_1_0; // 0x146
	::System::Single Field_1_90; // 0x148
	::UnityEngine::Color Field_1_62; // 0x14C
	::Class_1_52C53FB70F903040_Struct_2_9DB2523694EFCBD9 Field_1_12; // 0x15C

	::System::Void _ctor(::Class_2_A4D62D05D5EA8464* a1, ::Class_2_79AE422BA06F6D26_18* a2, ::MoleMole::UIInLevelUpToolBarBossWidgetController* a3, ::MoleMole::UIStunDamageWidgetController* a4, ::Class_0_16E4307DCC419505_135* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::Class_2_79AE422BA06F6D26_18*, ::MoleMole::UIInLevelUpToolBarBossWidgetController*, ::MoleMole::UIStunDamageWidgetController*, ::Class_0_16E4307DCC419505_135*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040__CCTOR_OFFSET))();
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_1_70CD9A040B4290BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_70CD9A040B4290BE_OFFSET))(this);
	}

	::System::Void Method_1_95FC878EB184D294()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_95FC878EB184D294_OFFSET))(this);
	}

	::System::Boolean Method_1_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_8A76897D6A693475_OFFSET))(this);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_15E5FE4573AC3657(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_15E5FE4573AC3657_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A536C0A3C82A1588(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_A536C0A3C82A1588_OFFSET))(this, a1);
	}

	::System::Void Method_1_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F206290BA342BA13_OFFSET))(this);
	}

	::System::Boolean Method_1_57CA573DC7E679EC(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_57CA573DC7E679EC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0D8B161FC097E741(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_0D8B161FC097E741_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1E83AACA378B37AB(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1E83AACA378B37AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C48521FE2D32B7F(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_9C48521FE2D32B7F_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_DA7D5FED1E10712C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_DA7D5FED1E10712C_OFFSET))(this);
	}

	::System::Void Method_1_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_F81B4B2E08A60AC5(::UnityEngine::Color a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F81B4B2E08A60AC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B07EC1ACF82C9F2F(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_B07EC1ACF82C9F2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1293CB739F1151A1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_1_OFFSET))(this);
	}

	::System::Boolean Method_1_906510432EEA2C38(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_906510432EEA2C38_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_8A2905DAFB806E28(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_8A2905DAFB806E28_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Void Method_1_1293CB739F1151A1_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_2_OFFSET))(this);
	}

	::System::Void Method_1_586171A6FE1495FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_586171A6FE1495FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_25E37B8C1EDE9E06(::Class_1_52C53FB70F903040_Struct_2_9DB2523694EFCBD9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52C53FB70F903040_Struct_2_9DB2523694EFCBD9))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_25E37B8C1EDE9E06_OFFSET))(this, a1);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_1_0B56C626F5AC60EB(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_0B56C626F5AC60EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_1_361C06486F56B4E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_361C06486F56B4E7_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_1293CB739F1151A1_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_3_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_1656A95CE4A48665(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1656A95CE4A48665_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_FDE7C207933D6D55(::System::Boolean a1, ::System::String*& a2, ::System::String*& a3, ::System::String*& a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_FDE7C207933D6D55_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_534AF681CC2BD5FD_223_Class_2_D2CD7DCAEA484BF8* Method_1_DA6216D3D356F9FE()
	{
		return ((::Class_1_534AF681CC2BD5FD_223_Class_2_D2CD7DCAEA484BF8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_DA6216D3D356F9FE_OFFSET))(this);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_48307BDDDEB547D6(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_48307BDDDEB547D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Boolean Method_1_8A76897D6A693475_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_8A76897D6A693475_1_OFFSET))(this);
	}

	::System::Void Method_1_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D1F5A654A67BB61C_OFFSET))(this);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_0404C765C41C7F23(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_0404C765C41C7F23_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void Method_1_4658620FE9C84CD6(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_4658620FE9C84CD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_8650F1C9B95581F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_8650F1C9B95581F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_1_A2458167D7752575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_A2458167D7752575_OFFSET))(this);
	}

	::System::Void Method_1_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_1_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_1_E4E28A03F241E0FE(::UnityEngine::RectTransform* a1)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_E4E28A03F241E0FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B176F3308ECD56F6(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_B176F3308ECD56F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3CD621FE895B79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_C3CD621FE895B79A_OFFSET))(this);
	}

	::System::Void Method_1_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_4F934196753710D2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_4F934196753710D2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_10382836015EA7BB(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_10382836015EA7BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_C4480433DB0A10CD(::Class_2_05BFAB15000D9DD3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_05BFAB15000D9DD3*))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_C4480433DB0A10CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_AE828D899505A3B4_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_1_1ABF1CBED7A4AF0A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1ABF1CBED7A4AF0A_1_OFFSET))(this);
	}

	::System::Void Method_1_54B714E992A012F4(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_54B714E992A012F4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0B668019D3AFFC76(::Enum_3_7609C87F8335DE37_1 a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7609C87F8335DE37_1, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_0B668019D3AFFC76_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1293CB739F1151A1_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1293CB739F1151A1_4_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_A2458167D7752575_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_A2458167D7752575_1_OFFSET))(this);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_1_73524B07AB6465CB(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_73524B07AB6465CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8466F1BC7EA6D0E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_8466F1BC7EA6D0E0_OFFSET))(this);
	}

	::System::Void Method_1_8A872D5D1B5BF46C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_8A872D5D1B5BF46C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D3129FE8DF635B48_1_OFFSET))(this);
	}

	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag Method_1_F8D6E72D9B7F6305()
	{
		return ((::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F8D6E72D9B7F6305_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D755E659050F5CB6(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D755E659050F5CB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DB52E9100DD37D8(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_2DB52E9100DD37D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE085B6060B48362()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_EE085B6060B48362_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_1_F175213186032CF3(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F175213186032CF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A4DCB2B4ADEB8A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_9A4DCB2B4ADEB8A9_OFFSET))(this);
	}

	::System::Void Method_1_A0DC5467BAA81F98(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_A0DC5467BAA81F98_OFFSET))(this, a1);
	}

	::System::Void Method_1_2E29038CF17E20BD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_2E29038CF17E20BD_1_OFFSET))(this);
	}

	::System::Void Method_1_D4935B3503555207(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D4935B3503555207_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_D62C8DE162EE4DA7(::Class_1_52C53FB70F903040_Struct_2_9DB2523694EFCBD9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52C53FB70F903040_Struct_2_9DB2523694EFCBD9))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D62C8DE162EE4DA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_1_F675341C48ED6437()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F675341C48ED6437_OFFSET))(this);
	}

	::System::Void Method_1_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Void Method_1_61C701B5E14F936D(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_61C701B5E14F936D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F206290BA342BA13_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F206290BA342BA13_1_OFFSET))(this);
	}

	::Class_1_52C53FB70F903040_Struct_2_9DB2523694EFCBD9 Method_1_AF82526B82A7316A()
	{
		return ((::Class_1_52C53FB70F903040_Struct_2_9DB2523694EFCBD9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_AF82526B82A7316A_OFFSET))(this);
	}

	::System::Void Method_1_840E384EF0F75F32(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_840E384EF0F75F32_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F675341C48ED6437_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_F675341C48ED6437_1_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_0BDFAC56E6B704CB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_B632E3BE93938E42()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_B632E3BE93938E42_OFFSET))(this);
	}

	::System::Void Method_1_C7387A8E87E6B50D(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_C7387A8E87E6B50D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector4 Method_1_C2CDB8F6AD753AAC(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_C2CDB8F6AD753AAC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::UInt32 Method_1_4FE2D3C818DAF1E6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_4FE2D3C818DAF1E6_OFFSET))(this);
	}

	::System::Void Method_1_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Single Method_1_DA7D5FED1E10712C_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_DA7D5FED1E10712C_1_OFFSET))(this);
	}

	::System::Void Method_1_08F456DAF4329D84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_METHOD_1_08F456DAF4329D84_OFFSET))(this, a1);
	}
};
