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
class Class_1_B69B8B108BBE7284;
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
template <typename T> class Class_3_0A823CC27C1FBE92;
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x11C33080)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x11C35250)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x11C32820)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11C34410)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0x11C31A90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0x11C36F90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11C328A0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_414A270E91E4BF2D_OFFSET UNITYSDK_OFFSET(0x11C35530)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11C323E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET UNITYSDK_OFFSET(0x11C37150)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_1_OFFSET UNITYSDK_OFFSET(0x11C346C0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0x11C32390)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4FE33FD178F57C51_OFFSET UNITYSDK_OFFSET(0x11C37230)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x11C34780)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11C3D0E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x11C3D1B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x11C3D2F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x11C3D350)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x11C3D3B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11C3D070)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x11C3D0D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x11C3D280)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET UNITYSDK_OFFSET(0x11C33F50)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x11C3D210)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x11C31170)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x11C33340)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9B3D46D8F2D493E3_OFFSET UNITYSDK_OFFSET(0x11C3D140)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x11C311C0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0x11C34650)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11C3B790)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11C3B7D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11C316F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x11C33870)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x11C3B810)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET UNITYSDK_OFFSET(0x11C339D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET UNITYSDK_OFFSET(0x11C33E80)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET UNITYSDK_OFFSET(0x11C33EF0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F63565EA57F495CC_OFFSET UNITYSDK_OFFSET(0x11C36C10)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x11C34710)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0x11C35140)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FC2D782AE5BA571D_OFFSET UNITYSDK_OFFSET(0x11C3A390)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FD24D4C7B14328FB_OFFSET UNITYSDK_OFFSET(0x11C3B3C0)
#define CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C3CA00)
#define CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11C3B8A0)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex = 45917;

class Class_2_D865BB63FE6CF6EB_1 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_72()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34140);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_75()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34148);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_2_66()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34150);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_70()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34158);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_68()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34160);
	}
	static ::System::String** StaticGet_Field_2_115()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34168);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_74()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34170);
	}
	static ::System::String** StaticGet_Field_2_114()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34178);
	}
	static ::UnityEngine::Material** StaticGet_Field_2_108()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34180);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_77()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34188);
	}
	static ::System::String** StaticGet_Field_2_113()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34190);
	}
	static ::EnviromentSystemV2Space::EnvAtmosphereQualityConfig** StaticGet_Field_2_112()
	{
		return (::EnviromentSystemV2Space::EnvAtmosphereQualityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x34198);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_69()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x341A0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_76()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x341A8);
	}
	static ::UnityEngine::Texture3D** StaticGet_Field_2_109()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x341B0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_67()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x341B8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_73()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x341C0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_Field_2_71()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x341C8);
	}
	static ::System::Int32* StaticGet_Field_2_137()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBB0);
	}
	static ::System::Int32* StaticGet_Field_2_186()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBB4);
	}
	static ::System::Int32* StaticGet_Field_2_120()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBB8);
	}
	static ::System::Int32* StaticGet_Field_2_132()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBBC);
	}
	static ::System::Int32* StaticGet_Field_2_179()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBC0);
	}
	static ::System::Int32* StaticGet_Field_2_197()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBC4);
	}
	static ::System::Int32* StaticGet_Field_2_174()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBC8);
	}
	static ::System::Int32* StaticGet_Field_2_184()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBCC);
	}
	static ::System::Int32* StaticGet_Field_2_121()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBD0);
	}
	static ::System::Int32* StaticGet_Field_2_143()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBD4);
	}
	static ::System::Int32* StaticGet_Field_2_159()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBD8);
	}
	static ::System::Int32* StaticGet_Field_2_160()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBDC);
	}
	static ::System::Int32* StaticGet_Field_2_141()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBE0);
	}
	static ::System::Int32* StaticGet_Field_2_199()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBE4);
	}
	static ::System::Int32* StaticGet_Field_2_187()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBE8);
	}
	static ::System::Int32* StaticGet_Field_2_148()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBEC);
	}
	static ::System::Int32* StaticGet_Field_2_170()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBF0);
	}
	static ::System::Int32* StaticGet_Field_2_183()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBF4);
	}
	static ::System::Int32* StaticGet_Field_2_194()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBF8);
	}
	static ::System::Int32* StaticGet_Field_2_166()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCBFC);
	}
	static ::System::Int32* StaticGet_Field_2_126()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC00);
	}
	static ::System::Int32* StaticGet_Field_2_157()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC04);
	}
	static ::System::Int32* StaticGet_Field_2_192()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC08);
	}
	static ::System::Int32* StaticGet_Field_2_161()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC0C);
	}
	static ::System::Int32* StaticGet_Field_2_198()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC10);
	}
	static ::System::Int32* StaticGet_Field_2_175()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC14);
	}
	static ::System::Int32* StaticGet_Field_2_158()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC18);
	}
	static ::System::Int32* StaticGet_Field_2_200()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC1C);
	}
	static ::System::Int32* StaticGet_Field_2_163()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC20);
	}
	static ::System::Int32* StaticGet_Field_2_164()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC24);
	}
	static ::System::Int32* StaticGet_Field_2_178()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC28);
	}
	static ::System::Int32* StaticGet_Field_2_188()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC2C);
	}
	static ::System::Int32* StaticGet_Field_2_193()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC30);
	}
	static ::System::Int32* StaticGet_Field_2_204()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC34);
	}
	static ::System::Int32* StaticGet_Field_2_155()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC38);
	}
	static ::System::Int32* StaticGet_Field_2_171()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC3C);
	}
	static ::System::Int32* StaticGet_Field_2_185()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC40);
	}
	static ::System::Int32* StaticGet_Field_2_151()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC44);
	}
	static ::System::Int32* StaticGet_Field_2_173()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC48);
	}
	static ::System::Int32* StaticGet_Field_2_130()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC4C);
	}
	static ::System::Int32* StaticGet_Field_2_125()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC50);
	}
	static ::System::Int32* StaticGet_Field_2_154()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC54);
	}
	static ::System::Int32* StaticGet_Field_2_182()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC58);
	}
	static ::System::Int32* StaticGet_Field_2_196()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC5C);
	}
	static ::System::Int32* StaticGet_Field_2_144()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC60);
	}
	static ::System::Int32* StaticGet_Field_2_149()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC64);
	}
	static ::System::Int32* StaticGet_Field_2_134()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC68);
	}
	static ::System::Int32* StaticGet_Field_2_135()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC6C);
	}
	static ::System::Int32* StaticGet_Field_2_128()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC70);
	}
	static ::System::Int32* StaticGet_Field_2_168()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC74);
	}
	static ::System::Int32* StaticGet_Field_2_142()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC78);
	}
	static ::System::Int32* StaticGet_Field_2_180()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC7C);
	}
	static ::System::Int32* StaticGet_Field_2_162()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC80);
	}
	static ::System::Int32* StaticGet_Field_2_129()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC84);
	}
	static ::System::Int32* StaticGet_Field_2_176()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC88);
	}
	static ::System::Int32* StaticGet_Field_2_167()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC8C);
	}
	static ::System::Int32* StaticGet_Field_2_181()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC90);
	}
	static ::System::Int32* StaticGet_Field_2_195()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC94);
	}
	static ::System::Int32* StaticGet_Field_2_133()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC98);
	}
	static ::System::Int32* StaticGet_Field_2_169()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCC9C);
	}
	static ::System::Int32* StaticGet_Field_2_136()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCA0);
	}
	static ::System::Int32* StaticGet_Field_2_146()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCA4);
	}
	static ::System::Int32* StaticGet_Field_2_190()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCA8);
	}
	static ::System::Int32* StaticGet_Field_2_165()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCAC);
	}
	static ::System::Int32* StaticGet_Field_2_147()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCB0);
	}
	static ::System::Int32* StaticGet_Field_2_152()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCB4);
	}
	static ::System::Int32* StaticGet_Field_2_172()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCB8);
	}
	static ::System::Int32* StaticGet_Field_2_131()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCBC);
	}
	static ::System::Int32* StaticGet_Field_2_202()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCC0);
	}
	static ::System::Int32* StaticGet_Field_2_124()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCC4);
	}
	static ::System::Int32* StaticGet_Field_2_150()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCC8);
	}
	static ::System::Int32* StaticGet_Field_2_189()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCCC);
	}
	static ::System::Int32* StaticGet_Field_2_127()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCD0);
	}
	static ::System::Int32* StaticGet_Field_2_201()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCD4);
	}
	static ::System::Int32* StaticGet_Field_2_153()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCD8);
	}
	static ::System::Int32* StaticGet_Field_2_138()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCDC);
	}
	static ::System::Int32* StaticGet_Field_2_156()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCE0);
	}
	static ::System::Int32* StaticGet_Field_2_203()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCE4);
	}
	static ::System::Int32* StaticGet_Field_2_139()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCE8);
	}
	static ::System::Int32* StaticGet_Field_2_177()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCEC);
	}
	static ::System::Int32* StaticGet_Field_2_191()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCF0);
	}
	static ::System::Int32* StaticGet_Field_2_145()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCF4);
	}
	static ::System::Int32* StaticGet_Field_2_140()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0xCCF8);
	}
	// static const ::System::Single Field_2_17; // 0x0
	// static const ::System::Single Field_2_18; // 0x0
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_41; // 0x28
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_62; // 0x30
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_49; // 0x38
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_63; // 0x40
	::UnityEngine::RenderTexture* Field_2_78; // 0x48
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_19; // 0x50
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_53; // 0x58
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_24; // 0x60
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_37; // 0x68
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_39; // 0x70
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_20; // 0x78
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_57; // 0x80
	::UnityEngine::RenderTexture* Field_2_83; // 0x88
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_42; // 0x90
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_79; // 0x98
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_36; // 0xA0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_44; // 0xA8
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_25; // 0xB0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_65; // 0xB8
	::Il2CppArray<::UnityEngine::RenderTexture*>* Field_2_80; // 0xC0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_51; // 0xC8
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_48; // 0xD0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_47; // 0xD8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_60; // 0xE0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_40; // 0xE8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_21; // 0xF0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_54; // 0xF8
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_27; // 0x100
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_23; // 0x108
	::UnityEngine::MeshRenderer* Field_2_122; // 0x110
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_50; // 0x118
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_29; // 0x120
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_56; // 0x128
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_64; // 0x130
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_46; // 0x138
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_22; // 0x140
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_52; // 0x148
	::UnityEngine::RenderTexture* Field_2_82; // 0x150
	::Class_2_719453818C1A6AE9* Field_2_110; // 0x158
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_31; // 0x160
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_35; // 0x168
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_38; // 0x170
	::Class_4_77EB9B0502521934<::System::Int32>* Field_2_59; // 0x178
	::Class_4_77EB9B0502521934<::System::Boolean>* Field_2_55; // 0x180
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_32; // 0x188
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_30; // 0x190
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_26; // 0x198
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_58; // 0x1A0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_28; // 0x1A8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_34; // 0x1B0
	::Class_3_0A823CC27C1FBE92<::UnityEngine::Vector4>* Field_2_33; // 0x1B8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_43; // 0x1C0
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_61; // 0x1C8
	::Class_4_77EB9B0502521934<::System::Single>* Field_2_45; // 0x1D0
	::System::Single Field_2_95; // 0x1D8
	::System::Single Field_2_97; // 0x1DC
	::UnityEngine::Matrix4x4 Field_2_102; // 0x1E0
	::UnityEngine::Vector4 Field_2_98; // 0x220
	::UnityEngine::Color Field_2_88; // 0x230
	::UnityEngine::Matrix4x4 Field_2_118; // 0x240
	::System::Single Field_2_96; // 0x280
	::System::Single Field_2_92; // 0x284
	::UnityEngine::Color Field_2_87; // 0x288
	::System::Single Field_2_94; // 0x298
	::System::Single Field_2_105; // 0x29C
	::System::Boolean Field_2_15; // 0x2A0
	::System::Boolean Field_2_123; // 0x2A1
	::System::Boolean Field_2_107; // 0x2A2
	::System::Boolean Field_2_111; // 0x2A3
	::System::Int32 Field_2_14; // 0x2A4
	::System::Single Field_2_5; // 0x2A8
	::UnityEngine::Matrix4x4 Field_2_103; // 0x2AC
	::System::Int32 Field_2_4; // 0x2EC
	::UnityEngine::Vector3 Field_2_85; // 0x2F0
	::System::Int32 Field_2_8; // 0x2FC
	::System::Int32 Field_2_7; // 0x300
	::System::Single Field_2_6; // 0x304
	::System::Int32 Field_2_1; // 0x308
	::UnityEngine::Vector3 Field_2_119; // 0x30C
	::UnityEngine::Matrix4x4 Field_2_117; // 0x318
	::UnityEngine::Vector4 Field_2_101; // 0x358
	::UnityEngine::Color Field_2_90; // 0x368
	::System::Single Field_2_86; // 0x378
	::System::Int32 Field_2_13; // 0x37C
	::UnityEngine::Color Field_2_106; // 0x380
	::UnityEngine::Vector3 Field_2_84; // 0x390
	::UnityEngine::Color Field_2_91; // 0x39C
	::UnityEngine::Color Field_2_104; // 0x3AC
	::System::Int32 Field_2_81; // 0x3BC
	::System::Int32 Field_2_12; // 0x3C0
	::System::Single Field_2_93; // 0x3C4
	::System::Int32 Field_2_9; // 0x3C8
	::UnityEngine::RenderTextureFormat Field_2_16; // 0x3CC
	::System::Single Field_2_11; // 0x3D0
	::System::Single Field_2_89; // 0x3D4
	::UnityEngine::Matrix4x4 Field_2_116; // 0x3D8
	::System::Int32 Field_2_0; // 0x418
	::System::Single Field_2_99; // 0x41C
	::System::Int32 Field_2_2; // 0x420
	::UnityEngine::Vector3 Field_2_100; // 0x424
	::System::Int32 Field_2_3; // 0x430
	::System::Single Field_2_10; // 0x434

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

	::System::Void Method_2_4ED5A32649C8BEBA_1(::Class_1_B69B8B108BBE7284* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B69B8B108BBE7284*))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4ED5A32649C8BEBA_1_OFFSET))(this, a1);
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
