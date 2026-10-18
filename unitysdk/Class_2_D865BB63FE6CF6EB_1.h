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

#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x15D16340)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x15D185C0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15D174C0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1FF59A52EE8D2650_1_OFFSET UNITYSDK_OFFSET(0x15D17780)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0x15D15730)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_27BF68BDC6AE6014_OFFSET UNITYSDK_OFFSET(0x15D1C990)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x15D15B60)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x15D15780)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET UNITYSDK_OFFSET(0x15D19CA0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x15D18640)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET UNITYSDK_OFFSET(0x15D16F80)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_1_OFFSET UNITYSDK_OFFSET(0x15D18280)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x15D14530)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9E9F278325B55DE6_OFFSET UNITYSDK_OFFSET(0x15D19D80)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0x15D19B20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x15D14580)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x15D17840)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C026E36E75BBF283_OFFSET UNITYSDK_OFFSET(0x15D197B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0x15D17710)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15D1D9B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15D1D9F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15D14A80)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x15D1DAC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15D1DA30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET UNITYSDK_OFFSET(0x15D16AC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_DB34B1BA900DD004_OFFSET UNITYSDK_OFFSET(0x15D1D610)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E548C3CF0994CD38_OFFSET UNITYSDK_OFFSET(0x15D16600)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET UNITYSDK_OFFSET(0x15D16EB0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECB5F1C983BF42E9_OFFSET UNITYSDK_OFFSET(0x15D14E20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET UNITYSDK_OFFSET(0x15D16F20)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x15D177D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0x15D18170)
#define CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D1ED80)
#define CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1DC20)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex = 49319;

class Class_2_D865BB63FE6CF6EB_1 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_CGKAOCEMKOG()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6A0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_BINOLBBBBDP()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6A8);
	}
	static ::UnityEngine::ComputeShader** StaticGet_FBPMEEMNPAA()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6B0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_HGGFPCCHAPB()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6B8);
	}
	static ::System::String** StaticGet_AHOOBGFCAND()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6C0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_DKCAMNPIFBF()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6C8);
	}
	static ::System::String** StaticGet_MPKFILAJMKN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6D0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_NLAAGKMBBGA()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6D8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_JCOEBGIBMHH()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6E0);
	}
	static ::EnviromentSystemV2Space::EnvAtmosphereQualityConfig** StaticGet_MGDAAKAHJIF()
	{
		return (::EnviromentSystemV2Space::EnvAtmosphereQualityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6E8);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_DKBBBPJLBGP()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6F0);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_HNKEBGCLKCG()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E6F8);
	}
	static ::UnityEngine::Material** StaticGet_DFDDGGHDAOK()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E700);
	}
	static ::UnityEngine::Texture3D** StaticGet_DICHDCLMOCI()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E708);
	}
	static ::System::String** StaticGet_BLFAJPJPCNE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E710);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_FPENKONFOJB()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E718);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_FKCDGFONLHE()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E720);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_NBCELCHGEJF()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x1E728);
	}
	static ::System::Int32* StaticGet_EAGJAJGCDBM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E20);
	}
	static ::System::Int32* StaticGet_BDGCJCFOLFF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E24);
	}
	static ::System::Int32* StaticGet_IGDOFKLMANN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E28);
	}
	static ::System::Int32* StaticGet_JCJNAPADOFE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E2C);
	}
	static ::System::Int32* StaticGet_CPFAGDDOBIF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E30);
	}
	static ::System::Int32* StaticGet_CCCLHJMNNLL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E34);
	}
	static ::System::Int32* StaticGet_IPJEDGLFBOM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E38);
	}
	static ::System::Int32* StaticGet_CFKOPKNFHOH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E3C);
	}
	static ::System::Int32* StaticGet_NHFHJDEFACC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E40);
	}
	static ::System::Int32* StaticGet_MDGKNFIHDBC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E44);
	}
	static ::System::Int32* StaticGet_KLJMKIKPPDB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E48);
	}
	static ::System::Int32* StaticGet_FCDGCGNPJDI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E4C);
	}
	static ::System::Int32* StaticGet_LBDAJGPJBDP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E50);
	}
	static ::System::Int32* StaticGet_PONLECCBLGG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E54);
	}
	static ::System::Int32* StaticGet_PDBJHAOBJOA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E58);
	}
	static ::System::Int32* StaticGet_BJDFMDNKGBJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E5C);
	}
	static ::System::Int32* StaticGet_GFJOMHPCPGG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E60);
	}
	static ::System::Int32* StaticGet_JAKCMIDGAOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E64);
	}
	static ::System::Int32* StaticGet_APFPHPJHPIP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E68);
	}
	static ::System::Int32* StaticGet_NDPAFCPKKML()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E6C);
	}
	static ::System::Int32* StaticGet_MCFCMLECNIJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E70);
	}
	static ::System::Int32* StaticGet_LGIEJNJNJKJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E74);
	}
	static ::System::Int32* StaticGet_KAELCBEDHKD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E78);
	}
	static ::System::Int32* StaticGet_MDONFDPCDOP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E7C);
	}
	static ::System::Int32* StaticGet_LMPDGFKHMDL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E80);
	}
	static ::System::Int32* StaticGet_JIBHILFPPOM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E84);
	}
	static ::System::Int32* StaticGet_DDAKPFIIEEK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E88);
	}
	static ::System::Int32* StaticGet_LBJHGCGMFLN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E8C);
	}
	static ::System::Int32* StaticGet_LBAACBHPBGL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E90);
	}
	static ::System::Int32* StaticGet_OIEAFNFMEIA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E94);
	}
	static ::System::Int32* StaticGet_EKMIMGKKNFF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E98);
	}
	static ::System::Int32* StaticGet_PEPMKADECGH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6E9C);
	}
	static ::System::Int32* StaticGet_IBBEJHOCDIP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EA0);
	}
	static ::System::Int32* StaticGet_GMEKDGNKFIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EA4);
	}
	static ::System::Int32* StaticGet_CMCNHKIKION()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EA8);
	}
	static ::System::Int32* StaticGet_PGHHIBECIJK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EAC);
	}
	static ::System::Int32* StaticGet_GKIIINIKDPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EB0);
	}
	static ::System::Int32* StaticGet_IKEHAAEMBEB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EB4);
	}
	static ::System::Int32* StaticGet_LAPAIOECCNL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EB8);
	}
	static ::System::Int32* StaticGet_JELCBIMHKOP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EBC);
	}
	static ::System::Int32* StaticGet_JKHEHPCPOMN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EC0);
	}
	static ::System::Int32* StaticGet_CGOMIKBLDHL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EC4);
	}
	static ::System::Int32* StaticGet_NIAHPKHLPJP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EC8);
	}
	static ::System::Int32* StaticGet_MAPJBHGMFAI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6ECC);
	}
	static ::System::Int32* StaticGet_AEBFAOBLDIB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6ED0);
	}
	static ::System::Int32* StaticGet_NJBACEDOBPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6ED4);
	}
	static ::System::Int32* StaticGet_LMBENCJDPDH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6ED8);
	}
	static ::System::Int32* StaticGet_NOONHMECNFJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EDC);
	}
	static ::System::Int32* StaticGet_GFJFICPMDCE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EE0);
	}
	static ::System::Int32* StaticGet_ALOCBDDHKEG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EE4);
	}
	static ::System::Int32* StaticGet_BPPLPLPHEIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EE8);
	}
	static ::System::Int32* StaticGet_HCLJAAJBHBC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EEC);
	}
	static ::System::Int32* StaticGet_CIMOJCHOAHP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EF0);
	}
	static ::System::Int32* StaticGet_BNFFDIGCBGH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EF4);
	}
	static ::System::Int32* StaticGet_MBMBPJHJOHB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EF8);
	}
	static ::System::Int32* StaticGet_EKPGPOBLNEB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6EFC);
	}
	static ::System::Int32* StaticGet_PLMFPDOMEMI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F00);
	}
	static ::System::Int32* StaticGet_LGEDDGPOEPD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F04);
	}
	static ::System::Int32* StaticGet_GLLENLODJJM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F08);
	}
	static ::System::Int32* StaticGet_GPJFEOFEGAK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F0C);
	}
	static ::System::Int32* StaticGet_JOFLCFBCNFN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F10);
	}
	static ::System::Int32* StaticGet_BPBDDJGJCJP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F14);
	}
	static ::System::Int32* StaticGet_MDFDKBKJGLL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F18);
	}
	static ::System::Int32* StaticGet_CPPGJICAMPK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F1C);
	}
	static ::System::Int32* StaticGet_OCPGCAGEOKJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F20);
	}
	static ::System::Int32* StaticGet_JGGPMEDKLFO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F24);
	}
	static ::System::Int32* StaticGet_DHJJHEDFIGP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F28);
	}
	static ::System::Int32* StaticGet_CAKLDHPOJEO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F2C);
	}
	static ::System::Int32* StaticGet_FOGNLGFJNOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F30);
	}
	static ::System::Int32* StaticGet_DHDDNKFGAAG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F34);
	}
	static ::System::Int32* StaticGet_LDADCJHMPLM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F38);
	}
	static ::System::Int32* StaticGet_HOKLLHIICND()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F3C);
	}
	static ::System::Int32* StaticGet_LPNNAADOBLB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F40);
	}
	static ::System::Int32* StaticGet_OLOBPADNOFI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F44);
	}
	static ::System::Int32* StaticGet_ENJJBEMEOCJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F48);
	}
	static ::System::Int32* StaticGet_NPCJAIFPIJG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F4C);
	}
	static ::System::Int32* StaticGet_IJLJKAIHCHK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F50);
	}
	static ::System::Int32* StaticGet_EAOAJLEFOMJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F54);
	}
	static ::System::Int32* StaticGet_MFEEBGFBIKP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F58);
	}
	static ::System::Int32* StaticGet_CKNKBPACOJA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F5C);
	}
	static ::System::Int32* StaticGet_FCHEPFAKPGK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F60);
	}
	static ::System::Int32* StaticGet_MGFMHPABHIN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F64);
	}
	static ::System::Int32* StaticGet_ILODFKHOAGE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x6F68);
	}
	// static const ::System::Single IPBEEMJECHB; // 0x0
	// static const ::System::Single BLFJIDDEFAF; // 0x0
	::Class_4_4BB9EBAAE168F465<::System::Single>* CAAIEINBEIL; // 0x28
	::Class_4_4BB9EBAAE168F465<::System::Single>* OHLMBGIIGIE; // 0x30
	::Class_4_4BB9EBAAE168F465<::System::Single>* FHKCPJHGFJI; // 0x38
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* NMPCLCCACJO; // 0x40
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* BLDICONFMEP; // 0x48
	::Class_4_4BB9EBAAE168F465<::System::Single>* FPKKKJAPDEN; // 0x50
	::Class_4_4BB9EBAAE168F465<::System::Single>* IJAGALELFHD; // 0x58
	::Class_4_4BB9EBAAE168F465<::System::Single>* MICOINNMIHN; // 0x60
	::Class_4_4BB9EBAAE168F465<::System::Single>* NBPLMEAJJOL; // 0x68
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* PHLBHJALAHD; // 0x70
	::Class_4_4BB9EBAAE168F465<::System::Single>* HPJNODGNAJN; // 0x78
	::Class_4_4BB9EBAAE168F465<::System::Single>* IDDGAGLMLIA; // 0x80
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* CLHPBEEAOPL; // 0x88
	::Class_4_4BB9EBAAE168F465<::System::Single>* ECKNNGJOJBB; // 0x90
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* FHNBHADMFKN; // 0x98
	::UnityEngine::RenderTexture* BMAOENCLPAA; // 0xA0
	::Class_4_4BB9EBAAE168F465<::System::Single>* ICOKGAEOMLG; // 0xA8
	::Class_4_4BB9EBAAE168F465<::System::Single>* PJIOIJHELPB; // 0xB0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* NHBBDCODCCK; // 0xB8
	::Il2CppArray<::UnityEngine::RenderTexture*>* HCNONNKBBEL; // 0xC0
	::Class_4_4BB9EBAAE168F465<::System::Single>* HOHILEOIOJD; // 0xC8
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* MKFJHEDCCOC; // 0xD0
	::Class_4_4BB9EBAAE168F465<::System::Single>* EMEDFMAAKMP; // 0xD8
	::Class_4_4BB9EBAAE168F465<::System::Single>* NEMMOILBELB; // 0xE0
	::Class_4_4BB9EBAAE168F465<::System::Single>* BKIAKKBCPCA; // 0xE8
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* DMHPEANLONF; // 0xF0
	::Class_4_4BB9EBAAE168F465<::System::Single>* CDPJFMHENAO; // 0xF8
	::Class_4_4BB9EBAAE168F465<::System::Single>* MEBLMKIHCMA; // 0x100
	::Class_4_4BB9EBAAE168F465<::System::Single>* EGKOGKNCNAA; // 0x108
	::Class_4_4BB9EBAAE168F465<::System::Single>* PENHDKELCIJ; // 0x110
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* DPHHHADPKMA; // 0x118
	::Class_4_4BB9EBAAE168F465<::System::Single>* CDCEDOAEKHE; // 0x120
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* PNJAADHNAOJ; // 0x128
	::Il2CppArray<::UnityEngine::RenderTexture*>* ADNAOMGMMAK; // 0x130
	::UnityEngine::MeshRenderer* DFKNLODJFBK; // 0x138
	::Class_4_4BB9EBAAE168F465<::System::Int32>* GOEOBOHLDJP; // 0x140
	::Class_4_4BB9EBAAE168F465<::System::Single>* CCKKOMJMNHC; // 0x148
	::Class_4_4BB9EBAAE168F465<::System::Single>* GEOEJNGJNGJ; // 0x150
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* OPHCIEECKGJ; // 0x158
	::Class_4_4BB9EBAAE168F465<::System::Single>* IJFMIHOHHPH; // 0x160
	::Class_4_4BB9EBAAE168F465<::System::Single>* BFDHLJACAKN; // 0x168
	::Class_4_4BB9EBAAE168F465<::System::Single>* IEJNKENLLAP; // 0x170
	::Class_2_CA5C8B0FAB14B458* EKNJLLJKOIH; // 0x178
	::Class_4_4BB9EBAAE168F465<::System::Single>* ENJLMHNLEOD; // 0x180
	::Class_4_4BB9EBAAE168F465<::System::Single>* FNKJNDMOIIG; // 0x188
	::Class_4_4BB9EBAAE168F465<::System::Single>* GGJFLHKGOEA; // 0x190
	::UnityEngine::RenderTexture* EDINGGPGCME; // 0x198
	::Class_4_4BB9EBAAE168F465<::System::Single>* CIMLLKFMFPN; // 0x1A0
	::UnityEngine::RenderTexture* GCAANABACKH; // 0x1A8
	::Class_4_4BB9EBAAE168F465<::System::Single>* FICMJMCFPHP; // 0x1B0
	::Class_4_4BB9EBAAE168F465<::System::Single>* FMECKHJGKIH; // 0x1B8
	::Class_4_4BB9EBAAE168F465<::System::Single>* OOPFEBACBDO; // 0x1C0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* IKJBNEMLMEP; // 0x1C8
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* MMKEAMNJNIM; // 0x1D0
	::System::Single NHAPHNAFLAO; // 0x1D8
	::UnityEngine::Matrix4x4 JLDKMEAGCNC; // 0x1DC
	::UnityEngine::Vector4 OOCAFIKFEJA; // 0x21C
	::UnityEngine::Color KCEAGIKIAHE; // 0x22C
	::System::Single NPHOLAHLFLE; // 0x23C
	::UnityEngine::Color BEIIJDMLIDE; // 0x240
	::System::Single HIJOGGFLEOP; // 0x250
	::UnityEngine::Color PENDMCIJOPF; // 0x254
	::System::Single MILMHNCIEDH; // 0x264
	::System::Int32 HKOFOPDFEDB; // 0x268
	::System::Single DIIBIEOFMDJ; // 0x26C
	::System::Int32 LAPDCPGELLC; // 0x270
	::System::Int32 GPHDMDKFEOD; // 0x274
	::System::Int32 IJPIKMAMBPC; // 0x278
	::System::Single CAEDLAHEFHA; // 0x27C
	::UnityEngine::Vector3 NGPHMDPKGMP; // 0x280
	::UnityEngine::Matrix4x4 IFPCFBIGFAN; // 0x28C
	::UnityEngine::Vector3 GEFIAPKMGJD; // 0x2CC
	::System::Int32 FCBCOCKOFJB; // 0x2D8
	::System::Single OICENFDNAOM; // 0x2DC
	::UnityEngine::Color LLIFIAGOGNC; // 0x2E0
	::UnityEngine::Matrix4x4 PPEAHOKPJEK; // 0x2F0
	::UnityEngine::Color EAJDGCOPNGH; // 0x330
	::System::Int32 PKPJLLLIPDD; // 0x340
	::System::Single FCAJFFLDLBO; // 0x344
	::System::Single FJFEMJFCAGG; // 0x348
	::UnityEngine::RenderTextureFormat FLHNOIFENIK; // 0x34C
	::System::Single DFLDOJHDOFD; // 0x350
	::UnityEngine::Vector3 NBEJJPLCBGO; // 0x354
	::UnityEngine::Vector3 DBPCLBGCHNB; // 0x360
	::System::Int32 PDDOCANIFON; // 0x36C
	::UnityEngine::Matrix4x4 OMILNPIPAAO; // 0x370
	::System::Single MEBCADGCDHJ; // 0x3B0
	::System::Int32 HJIMCECIFJM; // 0x3B4
	::UnityEngine::Vector4 NOFHDGNGJGF; // 0x3B8
	::System::Single JDPPAGIAAPH; // 0x3C8
	::System::Int32 NHLGCMPPPED; // 0x3CC
	::System::Boolean IEFHHDNCAHC; // 0x3D0
	::System::Boolean HAJKJDELCFO; // 0x3D1
	::System::Boolean HJIMHECEHAG; // 0x3D2
	::System::Boolean FBPCIGGDHGB; // 0x3D3
	::System::Int32 NELDFDBDCBF; // 0x3D4
	::UnityEngine::Matrix4x4 ELKPPONKBKK; // 0x3D8
	::System::Single EKIJGOGNMGM; // 0x418
	::System::Single BLJLNHGDLKL; // 0x41C
	::UnityEngine::Color BGNKEKEMJEL; // 0x420
	::System::Int32 GFMABAGPENI; // 0x430
	::System::Int32 CMBFLODMHGP; // 0x434

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
