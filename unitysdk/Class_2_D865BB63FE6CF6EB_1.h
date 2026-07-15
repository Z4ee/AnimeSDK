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
class Class_2_CA5C8B0FAB14B458;
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
template <typename T> class Class_4_4BB9EBAAE168F465;

#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x16227B50)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x162272F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16228CC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1FF59A52EE8D2650_1_OFFSET UNITYSDK_OFFSET(0x16228F80)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0x16226EC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_27BF68BDC6AE6014_OFFSET UNITYSDK_OFFSET(0x1622E170)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x16227370)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16226F10)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET UNITYSDK_OFFSET(0x1622B480)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x16229E30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET UNITYSDK_OFFSET(0x162288F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_1_OFFSET UNITYSDK_OFFSET(0x16229AF0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x16225CC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9E9F278325B55DE6_OFFSET UNITYSDK_OFFSET(0x1622B560)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0x1622B300)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x16225D10)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x16229040)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C026E36E75BBF283_OFFSET UNITYSDK_OFFSET(0x1622AF90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0x16228F10)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1622F190)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1622F1D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16226210)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x162282D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1622F210)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET UNITYSDK_OFFSET(0x16228430)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_DB34B1BA900DD004_OFFSET UNITYSDK_OFFSET(0x1622EDF0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E548C3CF0994CD38_OFFSET UNITYSDK_OFFSET(0x16227E10)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET UNITYSDK_OFFSET(0x16228820)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECB5F1C983BF42E9_OFFSET UNITYSDK_OFFSET(0x162265B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET UNITYSDK_OFFSET(0x16228890)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x16228FD0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0x162299E0)
#define CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x16230400)
#define CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1622F2A0)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex = 47465;

class Class_2_D865BB63FE6CF6EB_1 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_0()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x577D0);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_2_1()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x577D8);
	}
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x577E0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_3()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x577E8);
	}
	static ::EnviromentSystemV2Space::EnvAtmosphereQualityConfig** StaticGet_Field_2_4()
	{
		return (::EnviromentSystemV2Space::EnvAtmosphereQualityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x577F0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_5()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x577F8);
	}
	static ::UnityEngine::Texture3D** StaticGet_Field_2_6()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57800);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_7()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57808);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_8()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57810);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_9()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57818);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_10()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57820);
	}
	static ::System::String** StaticGet_Field_2_11()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57828);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_12()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57830);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_13()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57838);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_14()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57840);
	}
	static ::System::String** StaticGet_Field_2_15()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57848);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_16()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57850);
	}
	static ::UnityEngine::Material** StaticGet_Field_2_17()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57858);
	}
	static ::System::Int32* StaticGet_Field_2_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFA0);
	}
	static ::System::Int32* StaticGet_Field_2_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFA4);
	}
	static ::System::Int32* StaticGet_Field_2_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFA8);
	}
	static ::System::Int32* StaticGet_Field_2_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFAC);
	}
	static ::System::Int32* StaticGet_Field_2_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFB0);
	}
	static ::System::Int32* StaticGet_Field_2_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFB4);
	}
	static ::System::Int32* StaticGet_Field_2_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFB8);
	}
	static ::System::Int32* StaticGet_Field_2_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFBC);
	}
	static ::System::Int32* StaticGet_Field_2_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFC0);
	}
	static ::System::Int32* StaticGet_Field_2_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFC4);
	}
	static ::System::Int32* StaticGet_Field_2_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFC8);
	}
	static ::System::Int32* StaticGet_Field_2_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFCC);
	}
	static ::System::Int32* StaticGet_Field_2_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFD0);
	}
	static ::System::Int32* StaticGet_Field_2_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFD4);
	}
	static ::System::Int32* StaticGet_Field_2_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFD8);
	}
	static ::System::Int32* StaticGet_Field_2_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFDC);
	}
	static ::System::Int32* StaticGet_Field_2_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFE0);
	}
	static ::System::Int32* StaticGet_Field_2_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFE4);
	}
	static ::System::Int32* StaticGet_Field_2_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFE8);
	}
	static ::System::Int32* StaticGet_Field_2_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFEC);
	}
	static ::System::Int32* StaticGet_Field_2_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFF0);
	}
	static ::System::Int32* StaticGet_Field_2_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFF4);
	}
	static ::System::Int32* StaticGet_Field_2_40()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFF8);
	}
	static ::System::Int32* StaticGet_Field_2_41()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xEFFC);
	}
	static ::System::Int32* StaticGet_Field_2_42()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF000);
	}
	static ::System::Int32* StaticGet_Field_2_43()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF004);
	}
	static ::System::Int32* StaticGet_Field_2_44()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF008);
	}
	static ::System::Int32* StaticGet_Field_2_45()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF00C);
	}
	static ::System::Int32* StaticGet_Field_2_46()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF010);
	}
	static ::System::Int32* StaticGet_Field_2_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF014);
	}
	static ::System::Int32* StaticGet_Field_2_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF018);
	}
	static ::System::Int32* StaticGet_Field_2_49()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF01C);
	}
	static ::System::Int32* StaticGet_Field_2_50()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF020);
	}
	static ::System::Int32* StaticGet_Field_2_51()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF024);
	}
	static ::System::Int32* StaticGet_Field_2_52()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF028);
	}
	static ::System::Int32* StaticGet_Field_2_53()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF02C);
	}
	static ::System::Int32* StaticGet_Field_2_54()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF030);
	}
	static ::System::Int32* StaticGet_Field_2_55()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF034);
	}
	static ::System::Int32* StaticGet_Field_2_56()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF038);
	}
	static ::System::Int32* StaticGet_Field_2_57()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF03C);
	}
	static ::System::Int32* StaticGet_Field_2_58()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF040);
	}
	static ::System::Int32* StaticGet_Field_2_59()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF044);
	}
	static ::System::Int32* StaticGet_Field_2_60()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF048);
	}
	static ::System::Int32* StaticGet_Field_2_61()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF04C);
	}
	static ::System::Int32* StaticGet_Field_2_62()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF050);
	}
	static ::System::Int32* StaticGet_Field_2_63()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF054);
	}
	static ::System::Int32* StaticGet_Field_2_64()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF058);
	}
	static ::System::Int32* StaticGet_Field_2_65()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF05C);
	}
	static ::System::Int32* StaticGet_Field_2_66()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF060);
	}
	static ::System::Int32* StaticGet_Field_2_67()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF064);
	}
	static ::System::Int32* StaticGet_Field_2_68()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF068);
	}
	static ::System::Int32* StaticGet_Field_2_69()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF06C);
	}
	static ::System::Int32* StaticGet_Field_2_70()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF070);
	}
	static ::System::Int32* StaticGet_Field_2_71()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF074);
	}
	static ::System::Int32* StaticGet_Field_2_72()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF078);
	}
	static ::System::Int32* StaticGet_Field_2_73()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF07C);
	}
	static ::System::Int32* StaticGet_Field_2_74()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF080);
	}
	static ::System::Int32* StaticGet_Field_2_75()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF084);
	}
	static ::System::Int32* StaticGet_Field_2_76()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF088);
	}
	static ::System::Int32* StaticGet_Field_2_77()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF08C);
	}
	static ::System::Int32* StaticGet_Field_2_78()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF090);
	}
	static ::System::Int32* StaticGet_Field_2_79()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF094);
	}
	static ::System::Int32* StaticGet_Field_2_80()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF098);
	}
	static ::System::Int32* StaticGet_Field_2_81()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF09C);
	}
	static ::System::Int32* StaticGet_Field_2_82()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0A0);
	}
	static ::System::Int32* StaticGet_Field_2_83()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0A4);
	}
	static ::System::Int32* StaticGet_Field_2_84()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0A8);
	}
	static ::System::Int32* StaticGet_Field_2_85()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0AC);
	}
	static ::System::Int32* StaticGet_Field_2_86()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0B0);
	}
	static ::System::Int32* StaticGet_Field_2_87()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0B4);
	}
	static ::System::Int32* StaticGet_Field_2_88()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0B8);
	}
	static ::System::Int32* StaticGet_Field_2_89()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0BC);
	}
	static ::System::Int32* StaticGet_Field_2_90()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0C0);
	}
	static ::System::Int32* StaticGet_Field_2_91()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0C4);
	}
	static ::System::Int32* StaticGet_Field_2_92()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0C8);
	}
	static ::System::Int32* StaticGet_Field_2_93()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0CC);
	}
	static ::System::Int32* StaticGet_Field_2_94()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0D0);
	}
	static ::System::Int32* StaticGet_Field_2_95()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0D4);
	}
	static ::System::Int32* StaticGet_Field_2_96()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0D8);
	}
	static ::System::Int32* StaticGet_Field_2_97()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0DC);
	}
	static ::System::Int32* StaticGet_Field_2_98()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0E0);
	}
	static ::System::Int32* StaticGet_Field_2_99()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0E4);
	}
	static ::System::Int32* StaticGet_Field_2_100()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xF0E8);
	}
	// static const ::System::Single Field_2_101; // 0x0
	// static const ::System::Single Field_2_102; // 0x0
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_103; // 0x28
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_104; // 0x30
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_105; // 0x38
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_106; // 0x40
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_107; // 0x48
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_108; // 0x50
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_109; // 0x58
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* Field_2_110; // 0x60
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_111; // 0x68
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_112; // 0x70
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_113; // 0x78
	::Class_4_4BB9EBAAE168F465<::System::Int32>* Field_2_114; // 0x80
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_115; // 0x88
	::UnityEngine::MeshRenderer* Field_2_116; // 0x90
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* Field_2_117; // 0x98
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_118; // 0xA0
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_119; // 0xA8
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_120; // 0xB0
	::UnityEngine::RenderTexture* Field_2_121; // 0xB8
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_122; // 0xC0
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_123; // 0xC8
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_124; // 0xD0
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* Field_2_125; // 0xD8
	::UnityEngine::RenderTexture* Field_2_126; // 0xE0
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_127; // 0xE8
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_128; // 0xF0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_129; // 0xF8
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_130; // 0x100
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* Field_2_131; // 0x108
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_132; // 0x110
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_133; // 0x118
	::UnityEngine::RenderTexture* Field_2_134; // 0x120
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_135; // 0x128
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_136; // 0x130
	::Class_2_CA5C8B0FAB14B458* Field_2_137; // 0x138
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_138; // 0x140
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_139; // 0x148
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_140; // 0x150
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_141; // 0x158
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_142; // 0x160
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_143; // 0x168
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_144; // 0x170
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_145; // 0x178
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_146; // 0x180
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_147; // 0x188
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_148; // 0x190
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_149; // 0x198
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_150; // 0x1A0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_151; // 0x1A8
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_152; // 0x1B0
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_153; // 0x1B8
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_154; // 0x1C0
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_155; // 0x1C8
	::Class_4_4BB9EBAAE168F465<::System::Single>* Field_2_156; // 0x1D0
	::System::Int32 Field_2_157; // 0x1D8
	::System::Single Field_2_158; // 0x1DC
	::System::Single Field_2_159; // 0x1E0
	::System::Int32 Field_2_160; // 0x1E4
	::UnityEngine::Matrix4x4 Field_2_161; // 0x1E8
	::UnityEngine::Vector3 Field_2_162; // 0x228
	::System::Single Field_2_163; // 0x234
	::System::Single Field_2_164; // 0x238
	::UnityEngine::Color Field_2_165; // 0x23C
	::UnityEngine::Color Field_2_166; // 0x24C
	::System::Int32 Field_2_167; // 0x25C
	::UnityEngine::Matrix4x4 Field_2_168; // 0x260
	::System::Single Field_2_169; // 0x2A0
	::System::Single Field_2_170; // 0x2A4
	::UnityEngine::Color Field_2_171; // 0x2A8
	::System::Single Field_2_172; // 0x2B8
	::UnityEngine::Matrix4x4 Field_2_173; // 0x2BC
	::System::Single Field_2_174; // 0x2FC
	::UnityEngine::Vector3 Field_2_175; // 0x300
	::System::Int32 Field_2_176; // 0x30C
	::System::Int32 Field_2_177; // 0x310
	::UnityEngine::Matrix4x4 Field_2_178; // 0x314
	::UnityEngine::Color Field_2_179; // 0x354
	::System::Int32 Field_2_180; // 0x364
	::UnityEngine::Color Field_2_181; // 0x368
	::System::Int32 Field_2_182; // 0x378
	::System::Int32 Field_2_183; // 0x37C
	::UnityEngine::Matrix4x4 Field_2_184; // 0x380
	::System::Boolean Field_2_185; // 0x3C0
	::System::Boolean Field_2_186; // 0x3C1
	::System::Boolean Field_2_187; // 0x3C2
	::System::Boolean Field_2_188; // 0x3C3
	::System::Single Field_2_189; // 0x3C4
	::UnityEngine::Color Field_2_190; // 0x3C8
	::System::Single Field_2_191; // 0x3D8
	::System::Int32 Field_2_192; // 0x3DC
	::System::Single Field_2_193; // 0x3E0
	::UnityEngine::RenderTextureFormat Field_2_194; // 0x3E4
	::System::Single Field_2_195; // 0x3E8
	::System::Single Field_2_196; // 0x3EC
	::UnityEngine::Vector4 Field_2_197; // 0x3F0
	::System::Int32 Field_2_198; // 0x400
	::UnityEngine::Vector4 Field_2_199; // 0x404
	::UnityEngine::Vector3 Field_2_200; // 0x414
	::System::Int32 Field_2_201; // 0x420
	::UnityEngine::Vector3 Field_2_202; // 0x424
	::System::Int32 Field_2_203; // 0x430
	::System::Single Field_2_204; // 0x434

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

	::System::Void Method_2_1FF59A52EE8D2650(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1FF59A52EE8D2650_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
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

	::System::Void Method_2_1FF59A52EE8D2650_1(::Class_1_C7C4EDD02A4426B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7C4EDD02A4426B2*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1FF59A52EE8D2650_1_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_2_C0353B6D8FB55332()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_FAC1E4DEB02B3801(::UnityEngine::Color a1, ::System::Single a2)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F7825DAFFB9B517_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_1_OFFSET))(this);
	}

	::System::Void Method_2_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}

	::System::Single Method_2_9F86FD0988591376()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9F86FD0988591376_OFFSET))(this);
	}

	static ::System::Void Method_2_44650C36F3358F75(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* a3, ::UnityEngine::RenderTexture* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_9E9F278325B55DE6(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9E9F278325B55DE6_OFFSET))(this, a1);
	}

	::System::Void Method_2_27BF68BDC6AE6014(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_27BF68BDC6AE6014_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB34B1BA900DD004(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_DB34B1BA900DD004_OFFSET))(this, a1);
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
};
