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
class Class_2_719453818C1A6AE9;
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

#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x10A16B60)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x10A18DA0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x10A16300)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10A17EE0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0x10A15540)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0x10A1AAD0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x10A16380)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_414A270E91E4BF2D_OFFSET UNITYSDK_OFFSET(0x10A19080)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10A15EB0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET UNITYSDK_OFFSET(0x10A1AC90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_1_OFFSET UNITYSDK_OFFSET(0x10A18190)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0x10A15E60)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4FE33FD178F57C51_OFFSET UNITYSDK_OFFSET(0x10A1AD70)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x10A18250)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10A20C30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x10A20D00)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x10A20E40)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x10A20EA0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x10A20F00)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10A20BC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x10A20C20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x10A20DD0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET UNITYSDK_OFFSET(0x10A17A20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x10A20D60)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x10A14C10)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x10A16E20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9B3D46D8F2D493E3_OFFSET UNITYSDK_OFFSET(0x10A20C90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x10A14C60)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0x10A18120)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10A1F2D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10A1F310)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A15190)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x10A17350)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10A1F350)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET UNITYSDK_OFFSET(0x10A174B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET UNITYSDK_OFFSET(0x10A17950)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET UNITYSDK_OFFSET(0x10A179C0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F63565EA57F495CC_OFFSET UNITYSDK_OFFSET(0x10A1A760)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x10A181E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0x10A18C90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FC2D782AE5BA571D_OFFSET UNITYSDK_OFFSET(0x10A1DED0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FD24D4C7B14328FB_OFFSET UNITYSDK_OFFSET(0x10A1EF10)
#define CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A20550)
#define CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1F3E0)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex = 40008;

class Class_2_D865BB63FE6CF6EB_1 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_68()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44BF0);
	}
	static ::System::String** StaticGet_Field_2_115()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44BF8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_67()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C00);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_72()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C08);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_70()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C10);
	}
	static ::EnviromentSystemV2Space::EnvAtmosphereQualityConfig** StaticGet_Field_2_112()
	{
		return (::EnviromentSystemV2Space::EnvAtmosphereQualityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C18);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_74()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C20);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_75()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C28);
	}
	static ::System::String** StaticGet_Field_2_114()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C30);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_73()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C38);
	}
	static ::System::String** StaticGet_Field_2_113()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C40);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_2_66()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C48);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_69()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C50);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_76()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C58);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_71()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C60);
	}
	static ::UnityEngine::Texture3D** StaticGet_Field_2_109()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C68);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_77()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C70);
	}
	static ::UnityEngine::Material** StaticGet_Field_2_108()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x44C78);
	}
	static ::System::Int32* StaticGet_Field_2_148()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B20);
	}
	static ::System::Int32* StaticGet_Field_2_120()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B24);
	}
	static ::System::Int32* StaticGet_Field_2_180()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B28);
	}
	static ::System::Int32* StaticGet_Field_2_183()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B2C);
	}
	static ::System::Int32* StaticGet_Field_2_196()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B30);
	}
	static ::System::Int32* StaticGet_Field_2_153()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B34);
	}
	static ::System::Int32* StaticGet_Field_2_130()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B38);
	}
	static ::System::Int32* StaticGet_Field_2_202()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B3C);
	}
	static ::System::Int32* StaticGet_Field_2_133()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B40);
	}
	static ::System::Int32* StaticGet_Field_2_155()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B44);
	}
	static ::System::Int32* StaticGet_Field_2_186()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B48);
	}
	static ::System::Int32* StaticGet_Field_2_152()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B4C);
	}
	static ::System::Int32* StaticGet_Field_2_141()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B50);
	}
	static ::System::Int32* StaticGet_Field_2_173()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B54);
	}
	static ::System::Int32* StaticGet_Field_2_129()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B58);
	}
	static ::System::Int32* StaticGet_Field_2_161()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B5C);
	}
	static ::System::Int32* StaticGet_Field_2_197()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B60);
	}
	static ::System::Int32* StaticGet_Field_2_168()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B64);
	}
	static ::System::Int32* StaticGet_Field_2_170()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B68);
	}
	static ::System::Int32* StaticGet_Field_2_140()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B6C);
	}
	static ::System::Int32* StaticGet_Field_2_160()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B70);
	}
	static ::System::Int32* StaticGet_Field_2_156()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B74);
	}
	static ::System::Int32* StaticGet_Field_2_192()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B78);
	}
	static ::System::Int32* StaticGet_Field_2_171()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B7C);
	}
	static ::System::Int32* StaticGet_Field_2_121()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B80);
	}
	static ::System::Int32* StaticGet_Field_2_125()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B84);
	}
	static ::System::Int32* StaticGet_Field_2_146()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B88);
	}
	static ::System::Int32* StaticGet_Field_2_189()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B8C);
	}
	static ::System::Int32* StaticGet_Field_2_184()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B90);
	}
	static ::System::Int32* StaticGet_Field_2_177()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B94);
	}
	static ::System::Int32* StaticGet_Field_2_191()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B98);
	}
	static ::System::Int32* StaticGet_Field_2_162()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11B9C);
	}
	static ::System::Int32* StaticGet_Field_2_159()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BA0);
	}
	static ::System::Int32* StaticGet_Field_2_135()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BA4);
	}
	static ::System::Int32* StaticGet_Field_2_187()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BA8);
	}
	static ::System::Int32* StaticGet_Field_2_124()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BAC);
	}
	static ::System::Int32* StaticGet_Field_2_172()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BB0);
	}
	static ::System::Int32* StaticGet_Field_2_150()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BB4);
	}
	static ::System::Int32* StaticGet_Field_2_151()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BB8);
	}
	static ::System::Int32* StaticGet_Field_2_190()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BBC);
	}
	static ::System::Int32* StaticGet_Field_2_136()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BC0);
	}
	static ::System::Int32* StaticGet_Field_2_147()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BC4);
	}
	static ::System::Int32* StaticGet_Field_2_127()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BC8);
	}
	static ::System::Int32* StaticGet_Field_2_188()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BCC);
	}
	static ::System::Int32* StaticGet_Field_2_142()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BD0);
	}
	static ::System::Int32* StaticGet_Field_2_145()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BD4);
	}
	static ::System::Int32* StaticGet_Field_2_158()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BD8);
	}
	static ::System::Int32* StaticGet_Field_2_164()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BDC);
	}
	static ::System::Int32* StaticGet_Field_2_137()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BE0);
	}
	static ::System::Int32* StaticGet_Field_2_200()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BE4);
	}
	static ::System::Int32* StaticGet_Field_2_178()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BE8);
	}
	static ::System::Int32* StaticGet_Field_2_169()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BEC);
	}
	static ::System::Int32* StaticGet_Field_2_167()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BF0);
	}
	static ::System::Int32* StaticGet_Field_2_166()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BF4);
	}
	static ::System::Int32* StaticGet_Field_2_143()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BF8);
	}
	static ::System::Int32* StaticGet_Field_2_175()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BFC);
	}
	static ::System::Int32* StaticGet_Field_2_199()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C00);
	}
	static ::System::Int32* StaticGet_Field_2_138()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C04);
	}
	static ::System::Int32* StaticGet_Field_2_165()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C08);
	}
	static ::System::Int32* StaticGet_Field_2_154()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C0C);
	}
	static ::System::Int32* StaticGet_Field_2_134()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C10);
	}
	static ::System::Int32* StaticGet_Field_2_194()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C14);
	}
	static ::System::Int32* StaticGet_Field_2_174()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C18);
	}
	static ::System::Int32* StaticGet_Field_2_131()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C1C);
	}
	static ::System::Int32* StaticGet_Field_2_139()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C20);
	}
	static ::System::Int32* StaticGet_Field_2_203()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C24);
	}
	static ::System::Int32* StaticGet_Field_2_128()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C28);
	}
	static ::System::Int32* StaticGet_Field_2_201()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C2C);
	}
	static ::System::Int32* StaticGet_Field_2_176()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C30);
	}
	static ::System::Int32* StaticGet_Field_2_157()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C34);
	}
	static ::System::Int32* StaticGet_Field_2_193()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C38);
	}
	static ::System::Int32* StaticGet_Field_2_149()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C3C);
	}
	static ::System::Int32* StaticGet_Field_2_182()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C40);
	}
	static ::System::Int32* StaticGet_Field_2_132()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C44);
	}
	static ::System::Int32* StaticGet_Field_2_181()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C48);
	}
	static ::System::Int32* StaticGet_Field_2_198()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C4C);
	}
	static ::System::Int32* StaticGet_Field_2_126()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C50);
	}
	static ::System::Int32* StaticGet_Field_2_179()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C54);
	}
	static ::System::Int32* StaticGet_Field_2_185()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C58);
	}
	static ::System::Int32* StaticGet_Field_2_195()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C5C);
	}
	static ::System::Int32* StaticGet_Field_2_144()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C60);
	}
	static ::System::Int32* StaticGet_Field_2_204()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C64);
	}
	static ::System::Int32* StaticGet_Field_2_163()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C68);
	}
	// static const ::System::Single Field_2_17; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_48; // 0x28
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_54; // 0x30
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_44; // 0x38
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_52; // 0x40
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_80; // 0x48
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_34; // 0x50
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_27; // 0x58
	::UnityEngine::RenderTexture* Field_2_83; // 0x60
	::UnityEngine::MeshRenderer* Field_2_122; // 0x68
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_50; // 0x70
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_56; // 0x78
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_35; // 0x80
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_33; // 0x88
	::Class_2_719453818C1A6AE9* Field_2_110; // 0x90
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_31; // 0x98
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_42; // 0xA0
	::UnityEngine::RenderTexture* Field_2_78; // 0xA8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_46; // 0xB0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_37; // 0xB8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_38; // 0xC0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_25; // 0xC8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_58; // 0xD0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_64; // 0xD8
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_19; // 0xE0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_43; // 0xE8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_20; // 0xF0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_61; // 0xF8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_60; // 0x100
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_41; // 0x108
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_65; // 0x110
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_23; // 0x118
	::UnityEngine::RenderTexture* Field_2_82; // 0x120
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_53; // 0x128
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_45; // 0x130
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_26; // 0x138
	::Class_4_77EB9B0502521934<::System::Int32>* Field_2_59; // 0x140
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_51; // 0x148
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_79; // 0x150
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_21; // 0x158
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_32; // 0x160
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_29; // 0x168
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_22; // 0x170
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_62; // 0x178
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_28; // 0x180
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_47; // 0x188
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_49; // 0x190
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_40; // 0x198
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_55; // 0x1A0
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_57; // 0x1A8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_63; // 0x1B0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_24; // 0x1B8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_36; // 0x1C0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_39; // 0x1C8
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_30; // 0x1D0
	::UnityEngine::RenderTextureFormat Field_2_16; // 0x1D8
	::UnityEngine::Matrix4x4 Field_2_102; // 0x1DC
	::System::Int32 Field_2_8; // 0x21C
	::UnityEngine::Color Field_2_87; // 0x220
	::System::Boolean Field_2_107; // 0x230
	::System::Boolean Field_2_15; // 0x231
	::System::Boolean Field_2_111; // 0x232
	::System::Boolean Field_2_123; // 0x233
	::System::Int32 Field_2_2; // 0x234
	::UnityEngine::Vector3 Field_2_84; // 0x238
	::System::Single Field_2_105; // 0x244
	::System::Single Field_2_6; // 0x248
	::System::Single Field_2_10; // 0x24C
	::UnityEngine::Color Field_2_106; // 0x250
	::UnityEngine::Vector3 Field_2_85; // 0x260
	::UnityEngine::Vector4 Field_2_101; // 0x26C
	::System::Single Field_2_86; // 0x27C
	::System::Int32 Field_2_0; // 0x280
	::UnityEngine::Matrix4x4 Field_2_118; // 0x284
	::System::Single Field_2_93; // 0x2C4
	::UnityEngine::Vector3 Field_2_119; // 0x2C8
	::System::Single Field_2_99; // 0x2D4
	::UnityEngine::Vector3 Field_2_100; // 0x2D8
	::System::Single Field_2_11; // 0x2E4
	::UnityEngine::Matrix4x4 Field_2_117; // 0x2E8
	::System::Int32 Field_2_9; // 0x328
	::UnityEngine::Vector4 Field_2_98; // 0x32C
	::System::Single Field_2_5; // 0x33C
	::System::Single Field_2_97; // 0x340
	::System::Int32 Field_2_4; // 0x344
	::System::Single Field_2_92; // 0x348
	::System::Int32 Field_2_81; // 0x34C
	::UnityEngine::Color Field_2_104; // 0x350
	::UnityEngine::Matrix4x4 Field_2_116; // 0x360
	::System::Single Field_2_95; // 0x3A0
	::System::Int32 Field_2_13; // 0x3A4
	::System::Int32 Field_2_14; // 0x3A8
	::System::Int32 Field_2_3; // 0x3AC
	::UnityEngine::Color Field_2_88; // 0x3B0
	::System::Int32 Field_2_12; // 0x3C0
	::UnityEngine::Matrix4x4 Field_2_103; // 0x3C4
	::System::Int32 Field_2_7; // 0x404
	::System::Single Field_2_94; // 0x408
	::UnityEngine::Color Field_2_91; // 0x40C
	::UnityEngine::Color Field_2_90; // 0x41C
	::System::Int32 Field_2_1; // 0x42C
	::System::Single Field_2_89; // 0x430
	::System::Single Field_2_96; // 0x434

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

	::System::Void Method_2_19B14977ABA39612()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19B14977ABA39612_OFFSET))(this);
	}

	::System::Void Method_2_4ED5A32649C8BEBA(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_OFFSET))(this, a1);
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

	::System::Void Method_2_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_95CBA07394A84492_OFFSET))(this, a1);
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

	::System::Void Method_2_4ED5A32649C8BEBA_1(::Class_1_C7C4EDD02A4426B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C7C4EDD02A4426B2*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_1_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_2_C0353B6D8FB55332()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::UnityEngine::Color Method_2_FAC1E4DEB02B3801(::UnityEngine::Color a1, ::System::Single a2)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_414A270E91E4BF2D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_414A270E91E4BF2D_OFFSET))(this, a1);
	}

	::System::Single Method_2_19F951B38D2C86E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19F951B38D2C86E3_OFFSET))(this);
	}

	static ::System::Void Method_2_44650C36F3358F75(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* a3, ::UnityEngine::RenderTexture* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_4FE33FD178F57C51(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4FE33FD178F57C51_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC2D782AE5BA571D(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FC2D782AE5BA571D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD24D4C7B14328FB(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FD24D4C7B14328FB_OFFSET))(this, a1);
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

	::System::Void Method_2_F63565EA57F495CC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F63565EA57F495CC_OFFSET))(this, a1);
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

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_9B3D46D8F2D493E3(::RPG::CustomRP::CustomLightQualityFilter P0, ::RPG::CustomRP::CustomLightQualityFilter P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9B3D46D8F2D493E3_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
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
