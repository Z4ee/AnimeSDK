#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F;
class Class_1_C7C4EDD02A4426B2;
class Class_1_EAF7984A8FAD6BE4;
class Class_2_192F771A04C312FB;
namespace EnviromentSystemV2Space { class EnvAtmosphereQualityConfig; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_3_E4A470CB2179ACFB;
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0x13B7B5D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x13B71420)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x13B70BC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13B72570)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_17C2BBE3CA88BBC8_OFFSET UNITYSDK_OFFSET(0x13B737A0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_27BF68BDC6AE6014_OFFSET UNITYSDK_OFFSET(0x13B78620)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x13B70C40)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_2A38E69140BEF946_1_OFFSET UNITYSDK_OFFSET(0x13B72830)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_2A38E69140BEF946_OFFSET UNITYSDK_OFFSET(0x13B70700)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_320949446BC5980E_OFFSET UNITYSDK_OFFSET(0x13B7B4B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13B7B570)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET UNITYSDK_OFFSET(0x13B75490)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x13B70750)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5631B5CB588B5328_OFFSET UNITYSDK_OFFSET(0x13B75570)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13B7B450)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x13B7B510)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x13B7B630)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x13B7B690)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x13B7B6F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13B7B3E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x13B728F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET UNITYSDK_OFFSET(0x13B721A0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x13B6F4E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x13B6F530)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A282EE36728D6DE6_OFFSET UNITYSDK_OFFSET(0x13B79700)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x13B7B440)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C026E36E75BBF283_OFFSET UNITYSDK_OFFSET(0x13B74F50)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0x13B727C0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x13B73460)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13B79AF0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x13B79B30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13B6FA30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x13B71BA0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x13B79B70)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET UNITYSDK_OFFSET(0x13B71D00)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E548C3CF0994CD38_OFFSET UNITYSDK_OFFSET(0x13B716E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET UNITYSDK_OFFSET(0x13B720D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECB5F1C983BF42E9_OFFSET UNITYSDK_OFFSET(0x13B6FDE0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET UNITYSDK_OFFSET(0x13B72140)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x13B72880)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F9D8AF4B91BAC175_OFFSET UNITYSDK_OFFSET(0x13B752C0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0x13B73350)
#define CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B7AD70)
#define CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B79C00)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex = 46500;

class Class_2_D865BB63FE6CF6EB_1 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_0()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624B0);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624B8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_2()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624C0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_3()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624C8);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_2_4()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624D0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_5()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624D8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_6()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624E0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_7()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624E8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_8()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624F0);
	}
	static ::UnityEngine::Material** StaticGet_Field_2_9()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x624F8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_10()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x62500);
	}
	static ::EnviromentSystemV2Space::EnvAtmosphereQualityConfig** StaticGet_Field_2_11()
	{
		return (::EnviromentSystemV2Space::EnvAtmosphereQualityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x62508);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_12()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x62510);
	}
	static ::System::String** StaticGet_Field_2_13()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x62518);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_14()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x62520);
	}
	static ::System::String** StaticGet_Field_2_15()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x62528);
	}
	static ::UnityEngine::Texture3D** StaticGet_Field_2_16()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x62530);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_17()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x62538);
	}
	static ::System::Int32* StaticGet_Field_2_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13430);
	}
	static ::System::Int32* StaticGet_Field_2_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13434);
	}
	static ::System::Int32* StaticGet_Field_2_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13438);
	}
	static ::System::Int32* StaticGet_Field_2_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1343C);
	}
	static ::System::Int32* StaticGet_Field_2_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13440);
	}
	static ::System::Int32* StaticGet_Field_2_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13444);
	}
	static ::System::Int32* StaticGet_Field_2_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13448);
	}
	static ::System::Int32* StaticGet_Field_2_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1344C);
	}
	static ::System::Int32* StaticGet_Field_2_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13450);
	}
	static ::System::Int32* StaticGet_Field_2_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13454);
	}
	static ::System::Int32* StaticGet_Field_2_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13458);
	}
	static ::System::Int32* StaticGet_Field_2_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1345C);
	}
	static ::System::Int32* StaticGet_Field_2_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13460);
	}
	static ::System::Int32* StaticGet_Field_2_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13464);
	}
	static ::System::Int32* StaticGet_Field_2_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13468);
	}
	static ::System::Int32* StaticGet_Field_2_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1346C);
	}
	static ::System::Int32* StaticGet_Field_2_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13470);
	}
	static ::System::Int32* StaticGet_Field_2_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13474);
	}
	static ::System::Int32* StaticGet_Field_2_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13478);
	}
	static ::System::Int32* StaticGet_Field_2_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1347C);
	}
	static ::System::Int32* StaticGet_Field_2_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13480);
	}
	static ::System::Int32* StaticGet_Field_2_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13484);
	}
	static ::System::Int32* StaticGet_Field_2_40()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13488);
	}
	static ::System::Int32* StaticGet_Field_2_41()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1348C);
	}
	static ::System::Int32* StaticGet_Field_2_42()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13490);
	}
	static ::System::Int32* StaticGet_Field_2_43()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13494);
	}
	static ::System::Int32* StaticGet_Field_2_44()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13498);
	}
	static ::System::Int32* StaticGet_Field_2_45()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1349C);
	}
	static ::System::Int32* StaticGet_Field_2_46()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134A0);
	}
	static ::System::Int32* StaticGet_Field_2_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134A4);
	}
	static ::System::Int32* StaticGet_Field_2_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134A8);
	}
	static ::System::Int32* StaticGet_Field_2_49()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134AC);
	}
	static ::System::Int32* StaticGet_Field_2_50()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134B0);
	}
	static ::System::Int32* StaticGet_Field_2_51()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134B4);
	}
	static ::System::Int32* StaticGet_Field_2_52()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134B8);
	}
	static ::System::Int32* StaticGet_Field_2_53()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134BC);
	}
	static ::System::Int32* StaticGet_Field_2_54()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134C0);
	}
	static ::System::Int32* StaticGet_Field_2_55()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134C4);
	}
	static ::System::Int32* StaticGet_Field_2_56()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134C8);
	}
	static ::System::Int32* StaticGet_Field_2_57()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134CC);
	}
	static ::System::Int32* StaticGet_Field_2_58()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134D0);
	}
	static ::System::Int32* StaticGet_Field_2_59()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134D4);
	}
	static ::System::Int32* StaticGet_Field_2_60()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134D8);
	}
	static ::System::Int32* StaticGet_Field_2_61()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134DC);
	}
	static ::System::Int32* StaticGet_Field_2_62()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134E0);
	}
	static ::System::Int32* StaticGet_Field_2_63()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134E4);
	}
	static ::System::Int32* StaticGet_Field_2_64()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134E8);
	}
	static ::System::Int32* StaticGet_Field_2_65()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134EC);
	}
	static ::System::Int32* StaticGet_Field_2_66()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134F0);
	}
	static ::System::Int32* StaticGet_Field_2_67()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134F4);
	}
	static ::System::Int32* StaticGet_Field_2_68()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134F8);
	}
	static ::System::Int32* StaticGet_Field_2_69()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x134FC);
	}
	static ::System::Int32* StaticGet_Field_2_70()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13500);
	}
	static ::System::Int32* StaticGet_Field_2_71()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13504);
	}
	static ::System::Int32* StaticGet_Field_2_72()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13508);
	}
	static ::System::Int32* StaticGet_Field_2_73()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1350C);
	}
	static ::System::Int32* StaticGet_Field_2_74()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13510);
	}
	static ::System::Int32* StaticGet_Field_2_75()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13514);
	}
	static ::System::Int32* StaticGet_Field_2_76()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13518);
	}
	static ::System::Int32* StaticGet_Field_2_77()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1351C);
	}
	static ::System::Int32* StaticGet_Field_2_78()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13520);
	}
	static ::System::Int32* StaticGet_Field_2_79()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13524);
	}
	static ::System::Int32* StaticGet_Field_2_80()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13528);
	}
	static ::System::Int32* StaticGet_Field_2_81()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1352C);
	}
	static ::System::Int32* StaticGet_Field_2_82()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13530);
	}
	static ::System::Int32* StaticGet_Field_2_83()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13534);
	}
	static ::System::Int32* StaticGet_Field_2_84()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13538);
	}
	static ::System::Int32* StaticGet_Field_2_85()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1353C);
	}
	static ::System::Int32* StaticGet_Field_2_86()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13540);
	}
	static ::System::Int32* StaticGet_Field_2_87()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13544);
	}
	static ::System::Int32* StaticGet_Field_2_88()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13548);
	}
	static ::System::Int32* StaticGet_Field_2_89()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1354C);
	}
	static ::System::Int32* StaticGet_Field_2_90()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13550);
	}
	static ::System::Int32* StaticGet_Field_2_91()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13554);
	}
	static ::System::Int32* StaticGet_Field_2_92()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13558);
	}
	static ::System::Int32* StaticGet_Field_2_93()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1355C);
	}
	static ::System::Int32* StaticGet_Field_2_94()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13560);
	}
	static ::System::Int32* StaticGet_Field_2_95()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13564);
	}
	static ::System::Int32* StaticGet_Field_2_96()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13568);
	}
	static ::System::Int32* StaticGet_Field_2_97()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1356C);
	}
	static ::System::Int32* StaticGet_Field_2_98()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13570);
	}
	static ::System::Int32* StaticGet_Field_2_99()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13574);
	}
	static ::System::Int32* StaticGet_Field_2_100()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x13578);
	}
	// static const ::System::Single Field_2_101; // 0x0
	// static const ::System::Single Field_2_102; // 0x0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_103; // 0x28
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_104; // 0x30
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_105; // 0x38
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_106; // 0x40
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_107; // 0x48
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_108; // 0x50
	::Class_2_192F771A04C312FB* Field_2_109; // 0x58
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_110; // 0x60
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_111; // 0x68
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_112; // 0x70
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_113; // 0x78
	::UnityEngine::MeshRenderer* Field_2_114; // 0x80
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_115; // 0x88
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_116; // 0x90
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_117; // 0x98
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_118; // 0xA0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_119; // 0xA8
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_120; // 0xB0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_121; // 0xB8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_122; // 0xC0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_123; // 0xC8
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_124; // 0xD0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_125; // 0xD8
	::UnityEngine::RenderTexture* Field_2_126; // 0xE0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_127; // 0xE8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_128; // 0xF0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_129; // 0xF8
	::Class_4_77EB9B0502521934<::System::Int32>* Field_2_130; // 0x100
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_131; // 0x108
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_132; // 0x110
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_133; // 0x118
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_134; // 0x120
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_135; // 0x128
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_136; // 0x130
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_137; // 0x138
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_138; // 0x140
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_139; // 0x148
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_140; // 0x150
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_141; // 0x158
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_142; // 0x160
	::UnityEngine::RenderTexture* Field_2_143; // 0x168
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_144; // 0x170
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_145; // 0x178
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_146; // 0x180
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_147; // 0x188
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_148; // 0x190
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_149; // 0x198
	::UnityEngine::RenderTexture* Field_2_150; // 0x1A0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_151; // 0x1A8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_152; // 0x1B0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_153; // 0x1B8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_154; // 0x1C0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_155; // 0x1C8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_156; // 0x1D0
	::UnityEngine::Vector3 Field_2_157; // 0x1D8
	::System::Single Field_2_158; // 0x1E4
	::System::Int32 Field_2_159; // 0x1E8
	::System::Single Field_2_160; // 0x1EC
	::System::Single Field_2_161; // 0x1F0
	::System::Int32 Field_2_162; // 0x1F4
	::System::Int32 Field_2_163; // 0x1F8
	::System::Single Field_2_164; // 0x1FC
	::UnityEngine::RenderTextureFormat Field_2_165; // 0x200
	::System::Single Field_2_166; // 0x204
	::System::Single Field_2_167; // 0x208
	::System::Single Field_2_168; // 0x20C
	::System::Int32 Field_2_169; // 0x210
	::UnityEngine::Color Field_2_170; // 0x214
	::UnityEngine::Matrix4x4 Field_2_171; // 0x224
	::System::Int32 Field_2_172; // 0x264
	::System::Single Field_2_173; // 0x268
	::UnityEngine::Vector3 Field_2_174; // 0x26C
	::System::Int32 Field_2_175; // 0x278
	::UnityEngine::Color Field_2_176; // 0x27C
	::UnityEngine::Matrix4x4 Field_2_177; // 0x28C
	::UnityEngine::Color Field_2_178; // 0x2CC
	::UnityEngine::Matrix4x4 Field_2_179; // 0x2DC
	::System::Int32 Field_2_180; // 0x31C
	::UnityEngine::Matrix4x4 Field_2_181; // 0x320
	::UnityEngine::Vector4 Field_2_182; // 0x360
	::UnityEngine::Vector3 Field_2_183; // 0x370
	::System::Single Field_2_184; // 0x37C
	::System::Int32 Field_2_185; // 0x380
	::UnityEngine::Color Field_2_186; // 0x384
	::System::Single Field_2_187; // 0x394
	::System::Int32 Field_2_188; // 0x398
	::UnityEngine::Vector3 Field_2_189; // 0x39C
	::UnityEngine::Matrix4x4 Field_2_190; // 0x3A8
	::System::Int32 Field_2_191; // 0x3E8
	::System::Single Field_2_192; // 0x3EC
	::UnityEngine::Vector4 Field_2_193; // 0x3F0
	::System::Boolean Field_2_194; // 0x400
	::System::Boolean Field_2_195; // 0x401
	::System::Boolean Field_2_196; // 0x402
	::System::Boolean Field_2_197; // 0x403
	::System::Single Field_2_198; // 0x404
	::System::Int32 Field_2_199; // 0x408
	::System::Single Field_2_200; // 0x40C
	::UnityEngine::Color Field_2_201; // 0x410
	::System::Single Field_2_202; // 0x420
	::UnityEngine::Color Field_2_203; // 0x424
	::System::Int32 Field_2_204; // 0x434

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_ECB5F1C983BF42E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECB5F1C983BF42E9_OFFSET))(this);
	}

	::System::Void Method_2_2A38E69140BEF946(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_2A38E69140BEF946_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	static ::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET))();
	}

	static ::System::Void Method_2_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET))();
	}

	::System::Void Method_2_E548C3CF0994CD38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E548C3CF0994CD38_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_2_D4782799BBAD631B(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9FC08CF7527DC91(::UnityEngine::RenderTextureFormat a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_ECEC258AA9D9E334(::RPG::CustomRP::CustomLightQualityFilter a1)
	{
		return ((::System::Int32(*)(::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET))(a1);
	}

	::System::Void Method_2_7760BC14807C2DCE(::RPG::CustomRP::CustomLightQualityFilter a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_2A38E69140BEF946_1(::Class_1_C7C4EDD02A4426B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7C4EDD02A4426B2*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_2A38E69140BEF946_1_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_2_C0353B6D8FB55332()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_FAC1E4DEB02B3801(::UnityEngine::Color a1, ::System::Single a2)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_17C2BBE3CA88BBC8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_17C2BBE3CA88BBC8_OFFSET))(this, a1);
	}

	::System::Single Method_2_F9D8AF4B91BAC175()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F9D8AF4B91BAC175_OFFSET))(this);
	}

	static ::System::Void Method_2_44650C36F3358F75(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* a3, ::UnityEngine::RenderTexture* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_5631B5CB588B5328(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5631B5CB588B5328_OFFSET))(this, a1);
	}

	::System::Void Method_2_27BF68BDC6AE6014(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_27BF68BDC6AE6014_OFFSET))(this, a1);
	}

	::System::Void Method_2_A282EE36728D6DE6(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A282EE36728D6DE6_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_C026E36E75BBF283(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C026E36E75BBF283_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_2_CBC2443440B894D4(::UnityEngine::RenderTexture* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::RenderTextureFormat a5)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_320949446BC5980E(::RPG::CustomRP::CustomLightQualityFilter a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_320949446BC5980E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_4_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_5_OFFSET))(this);
	}
};
