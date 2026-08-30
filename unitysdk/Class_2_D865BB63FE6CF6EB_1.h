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

#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x180F01E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x180EF980)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x180F1330)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1FF59A52EE8D2650_1_OFFSET UNITYSDK_OFFSET(0x180F15F0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0x180EF550)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_27BF68BDC6AE6014_OFFSET UNITYSDK_OFFSET(0x180F67D0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x180EFA00)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x180EF5A0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_44650C36F3358F75_OFFSET UNITYSDK_OFFSET(0x180F3B00)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x180F24B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_7760BC14807C2DCE_OFFSET UNITYSDK_OFFSET(0x180F0F60)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_1_OFFSET UNITYSDK_OFFSET(0x180F2170)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x180EE340)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9E9F278325B55DE6_OFFSET UNITYSDK_OFFSET(0x180F3BE0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0x180F3980)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x180EE390)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x180F16B0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C026E36E75BBF283_OFFSET UNITYSDK_OFFSET(0x180F3610)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0x180F1580)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x180F77E0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x180F7820)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180EE880)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x180F0960)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x180F7860)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_D4782799BBAD631B_OFFSET UNITYSDK_OFFSET(0x180F0AC0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_DB34B1BA900DD004_OFFSET UNITYSDK_OFFSET(0x180F7440)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E548C3CF0994CD38_OFFSET UNITYSDK_OFFSET(0x180F04A0)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_E9FC08CF7527DC91_OFFSET UNITYSDK_OFFSET(0x180F0E90)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECB5F1C983BF42E9_OFFSET UNITYSDK_OFFSET(0x180EEC30)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_ECEC258AA9D9E334_OFFSET UNITYSDK_OFFSET(0x180F0F00)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x180F1640)
#define CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0x180F2060)
#define CLASS_2_D865BB63FE6CF6EB_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x180F8A60)
#define CLASS_2_D865BB63FE6CF6EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180F78F0)

inline static constexpr unsigned int Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex = 49745;

class Class_2_D865BB63FE6CF6EB_1 : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_JCOEBGIBMHH()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57510);
	}
	static ::UnityEngine::Texture3D** StaticGet_DICHDCLMOCI()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57518);
	}
	static ::System::String** StaticGet_AHOOBGFCAND()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57520);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_NLAAGKMBBGA()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57528);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_HNKEBGCLKCG()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57530);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_FPENKONFOJB()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57538);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_HGGFPCCHAPB()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57540);
	}
	static ::System::String** StaticGet_MPKFILAJMKN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57548);
	}
	static ::UnityEngine::ComputeShader** StaticGet_FBPMEEMNPAA()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57550);
	}
	static ::System::String** StaticGet_BLFAJPJPCNE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57558);
	}
	static ::UnityEngine::Material** StaticGet_DFDDGGHDAOK()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57560);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_BINOLBBBBDP()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57568);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_CGKAOCEMKOG()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57570);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_FKCDGFONLHE()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57578);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_DKBBBPJLBGP()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57580);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_DKCAMNPIFBF()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57588);
	}
	static ::EnviromentSystemV2Space::EnvAtmosphereQualityConfig** StaticGet_MGDAAKAHJIF()
	{
		return (::EnviromentSystemV2Space::EnvAtmosphereQualityConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57590);
	}
	static ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F** StaticGet_NBCELCHGEJF()
	{
		return (::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x57598);
	}
	static ::System::Int32* StaticGet_CMCNHKIKION()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BB0);
	}
	static ::System::Int32* StaticGet_DHJJHEDFIGP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BB4);
	}
	static ::System::Int32* StaticGet_LMBENCJDPDH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BB8);
	}
	static ::System::Int32* StaticGet_LBDAJGPJBDP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BBC);
	}
	static ::System::Int32* StaticGet_CGOMIKBLDHL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BC0);
	}
	static ::System::Int32* StaticGet_KAELCBEDHKD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BC4);
	}
	static ::System::Int32* StaticGet_MFEEBGFBIKP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BC8);
	}
	static ::System::Int32* StaticGet_LBAACBHPBGL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BCC);
	}
	static ::System::Int32* StaticGet_CIMOJCHOAHP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BD0);
	}
	static ::System::Int32* StaticGet_DHDDNKFGAAG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BD4);
	}
	static ::System::Int32* StaticGet_CKNKBPACOJA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BD8);
	}
	static ::System::Int32* StaticGet_CAKLDHPOJEO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BDC);
	}
	static ::System::Int32* StaticGet_BNFFDIGCBGH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BE0);
	}
	static ::System::Int32* StaticGet_MBMBPJHJOHB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BE4);
	}
	static ::System::Int32* StaticGet_ENJJBEMEOCJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BE8);
	}
	static ::System::Int32* StaticGet_GPJFEOFEGAK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BEC);
	}
	static ::System::Int32* StaticGet_PONLECCBLGG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BF0);
	}
	static ::System::Int32* StaticGet_MDGKNFIHDBC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BF4);
	}
	static ::System::Int32* StaticGet_GKIIINIKDPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BF8);
	}
	static ::System::Int32* StaticGet_IBBEJHOCDIP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11BFC);
	}
	static ::System::Int32* StaticGet_NHFHJDEFACC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C00);
	}
	static ::System::Int32* StaticGet_MCFCMLECNIJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C04);
	}
	static ::System::Int32* StaticGet_JGGPMEDKLFO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C08);
	}
	static ::System::Int32* StaticGet_EKPGPOBLNEB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C0C);
	}
	static ::System::Int32* StaticGet_MAPJBHGMFAI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C10);
	}
	static ::System::Int32* StaticGet_PEPMKADECGH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C14);
	}
	static ::System::Int32* StaticGet_AEBFAOBLDIB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C18);
	}
	static ::System::Int32* StaticGet_LAPAIOECCNL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C1C);
	}
	static ::System::Int32* StaticGet_ALOCBDDHKEG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C20);
	}
	static ::System::Int32* StaticGet_GMEKDGNKFIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C24);
	}
	static ::System::Int32* StaticGet_GFJOMHPCPGG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C28);
	}
	static ::System::Int32* StaticGet_IPJEDGLFBOM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C2C);
	}
	static ::System::Int32* StaticGet_BPBDDJGJCJP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C30);
	}
	static ::System::Int32* StaticGet_BDGCJCFOLFF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C34);
	}
	static ::System::Int32* StaticGet_ILODFKHOAGE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C38);
	}
	static ::System::Int32* StaticGet_KLJMKIKPPDB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C3C);
	}
	static ::System::Int32* StaticGet_LGEDDGPOEPD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C40);
	}
	static ::System::Int32* StaticGet_EAOAJLEFOMJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C44);
	}
	static ::System::Int32* StaticGet_IGDOFKLMANN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C48);
	}
	static ::System::Int32* StaticGet_NPCJAIFPIJG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C4C);
	}
	static ::System::Int32* StaticGet_BPPLPLPHEIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C50);
	}
	static ::System::Int32* StaticGet_FCHEPFAKPGK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C54);
	}
	static ::System::Int32* StaticGet_OIEAFNFMEIA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C58);
	}
	static ::System::Int32* StaticGet_IKEHAAEMBEB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C5C);
	}
	static ::System::Int32* StaticGet_JELCBIMHKOP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C60);
	}
	static ::System::Int32* StaticGet_FCDGCGNPJDI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C64);
	}
	static ::System::Int32* StaticGet_BJDFMDNKGBJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C68);
	}
	static ::System::Int32* StaticGet_JAKCMIDGAOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C6C);
	}
	static ::System::Int32* StaticGet_NOONHMECNFJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C70);
	}
	static ::System::Int32* StaticGet_OLOBPADNOFI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C74);
	}
	static ::System::Int32* StaticGet_DDAKPFIIEEK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C78);
	}
	static ::System::Int32* StaticGet_IJLJKAIHCHK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C7C);
	}
	static ::System::Int32* StaticGet_PDBJHAOBJOA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C80);
	}
	static ::System::Int32* StaticGet_GLLENLODJJM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C84);
	}
	static ::System::Int32* StaticGet_FOGNLGFJNOO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C88);
	}
	static ::System::Int32* StaticGet_LMPDGFKHMDL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C8C);
	}
	static ::System::Int32* StaticGet_LDADCJHMPLM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C90);
	}
	static ::System::Int32* StaticGet_CFKOPKNFHOH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C94);
	}
	static ::System::Int32* StaticGet_LBJHGCGMFLN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C98);
	}
	static ::System::Int32* StaticGet_PLMFPDOMEMI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11C9C);
	}
	static ::System::Int32* StaticGet_HOKLLHIICND()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CA0);
	}
	static ::System::Int32* StaticGet_JKHEHPCPOMN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CA4);
	}
	static ::System::Int32* StaticGet_LGIEJNJNJKJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CA8);
	}
	static ::System::Int32* StaticGet_HCLJAAJBHBC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CAC);
	}
	static ::System::Int32* StaticGet_APFPHPJHPIP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CB0);
	}
	static ::System::Int32* StaticGet_CPFAGDDOBIF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CB4);
	}
	static ::System::Int32* StaticGet_NIAHPKHLPJP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CB8);
	}
	static ::System::Int32* StaticGet_EAGJAJGCDBM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CBC);
	}
	static ::System::Int32* StaticGet_LPNNAADOBLB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CC0);
	}
	static ::System::Int32* StaticGet_NDPAFCPKKML()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CC4);
	}
	static ::System::Int32* StaticGet_MDONFDPCDOP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CC8);
	}
	static ::System::Int32* StaticGet_GFJFICPMDCE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CCC);
	}
	static ::System::Int32* StaticGet_MGFMHPABHIN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CD0);
	}
	static ::System::Int32* StaticGet_MDFDKBKJGLL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CD4);
	}
	static ::System::Int32* StaticGet_CCCLHJMNNLL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CD8);
	}
	static ::System::Int32* StaticGet_OCPGCAGEOKJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CDC);
	}
	static ::System::Int32* StaticGet_JIBHILFPPOM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CE0);
	}
	static ::System::Int32* StaticGet_PGHHIBECIJK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CE4);
	}
	static ::System::Int32* StaticGet_JOFLCFBCNFN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CE8);
	}
	static ::System::Int32* StaticGet_NJBACEDOBPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CEC);
	}
	static ::System::Int32* StaticGet_CPPGJICAMPK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CF0);
	}
	static ::System::Int32* StaticGet_EKMIMGKKNFF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CF4);
	}
	static ::System::Int32* StaticGet_JCJNAPADOFE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D865BB63FE6CF6EB_1_TypeDefinitionIndex)->GetStaticField(0x11CF8);
	}
	// static const ::System::Single IPBEEMJECHB; // 0x0
	// static const ::System::Single BLFJIDDEFAF; // 0x0
	::Class_4_4BB9EBAAE168F465<::System::Single>* EMEDFMAAKMP; // 0x28
	::UnityEngine::RenderTexture* BMAOENCLPAA; // 0x30
	::Il2CppArray<::UnityEngine::RenderTexture*>* ADNAOMGMMAK; // 0x38
	::Class_4_4BB9EBAAE168F465<::System::Single>* IDDGAGLMLIA; // 0x40
	::Class_4_4BB9EBAAE168F465<::System::Single>* FMECKHJGKIH; // 0x48
	::Class_4_4BB9EBAAE168F465<::System::Single>* NBPLMEAJJOL; // 0x50
	::Class_4_4BB9EBAAE168F465<::System::Single>* FHKCPJHGFJI; // 0x58
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* FHNBHADMFKN; // 0x60
	::Class_4_4BB9EBAAE168F465<::System::Single>* PENHDKELCIJ; // 0x68
	::Class_4_4BB9EBAAE168F465<::System::Single>* PJIOIJHELPB; // 0x70
	::Class_4_4BB9EBAAE168F465<::System::Int32>* GOEOBOHLDJP; // 0x78
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* MKFJHEDCCOC; // 0x80
	::UnityEngine::MeshRenderer* DFKNLODJFBK; // 0x88
	::Class_4_4BB9EBAAE168F465<::System::Single>* CIMLLKFMFPN; // 0x90
	::Class_4_4BB9EBAAE168F465<::System::Single>* FICMJMCFPHP; // 0x98
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* NHBBDCODCCK; // 0xA0
	::Il2CppArray<::UnityEngine::RenderTexture*>* HCNONNKBBEL; // 0xA8
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* CLHPBEEAOPL; // 0xB0
	::Class_4_4BB9EBAAE168F465<::System::Single>* GEOEJNGJNGJ; // 0xB8
	::Class_4_4BB9EBAAE168F465<::System::Single>* IEJNKENLLAP; // 0xC0
	::Class_4_4BB9EBAAE168F465<::System::Single>* FPKKKJAPDEN; // 0xC8
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* MMKEAMNJNIM; // 0xD0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* PHLBHJALAHD; // 0xD8
	::Class_4_4BB9EBAAE168F465<::System::Single>* CCKKOMJMNHC; // 0xE0
	::Class_4_4BB9EBAAE168F465<::System::Single>* CDCEDOAEKHE; // 0xE8
	::Class_4_4BB9EBAAE168F465<::System::Single>* HPJNODGNAJN; // 0xF0
	::Class_4_4BB9EBAAE168F465<::System::Single>* MEBLMKIHCMA; // 0xF8
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* BLDICONFMEP; // 0x100
	::Class_4_4BB9EBAAE168F465<::System::Single>* NEMMOILBELB; // 0x108
	::Class_4_4BB9EBAAE168F465<::System::Single>* BKIAKKBCPCA; // 0x110
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* NMPCLCCACJO; // 0x118
	::Class_4_4BB9EBAAE168F465<::System::Single>* HOHILEOIOJD; // 0x120
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* OPHCIEECKGJ; // 0x128
	::Class_4_4BB9EBAAE168F465<::System::Single>* MICOINNMIHN; // 0x130
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* PNJAADHNAOJ; // 0x138
	::Class_4_4BB9EBAAE168F465<::System::Single>* FNKJNDMOIIG; // 0x140
	::Class_4_4BB9EBAAE168F465<::System::Single>* CAAIEINBEIL; // 0x148
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* IKJBNEMLMEP; // 0x150
	::Class_4_4BB9EBAAE168F465<::System::Single>* IJAGALELFHD; // 0x158
	::UnityEngine::RenderTexture* GCAANABACKH; // 0x160
	::Class_4_4BB9EBAAE168F465<::System::Single>* OOPFEBACBDO; // 0x168
	::Class_4_4BB9EBAAE168F465<::System::Single>* IJFMIHOHHPH; // 0x170
	::Class_4_4BB9EBAAE168F465<::System::Single>* EGKOGKNCNAA; // 0x178
	::UnityEngine::RenderTexture* EDINGGPGCME; // 0x180
	::Class_4_4BB9EBAAE168F465<::System::Single>* ECKNNGJOJBB; // 0x188
	::Class_4_4BB9EBAAE168F465<::System::Single>* BFDHLJACAKN; // 0x190
	::Class_2_CA5C8B0FAB14B458* EKNJLLJKOIH; // 0x198
	::Class_4_4BB9EBAAE168F465<::System::Boolean>* DPHHHADPKMA; // 0x1A0
	::Class_4_4BB9EBAAE168F465<::System::Single>* GGJFLHKGOEA; // 0x1A8
	::Class_4_4BB9EBAAE168F465<::System::Single>* ENJLMHNLEOD; // 0x1B0
	::Class_4_4BB9EBAAE168F465<::System::Single>* CDPJFMHENAO; // 0x1B8
	::Class_4_4BB9EBAAE168F465<::System::Single>* ICOKGAEOMLG; // 0x1C0
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* DMHPEANLONF; // 0x1C8
	::Class_4_4BB9EBAAE168F465<::System::Single>* OHLMBGIIGIE; // 0x1D0
	::UnityEngine::Matrix4x4 ELKPPONKBKK; // 0x1D8
	::UnityEngine::Vector4 NOFHDGNGJGF; // 0x218
	::UnityEngine::Matrix4x4 OMILNPIPAAO; // 0x228
	::UnityEngine::Matrix4x4 IFPCFBIGFAN; // 0x268
	::System::Int32 HJIMCECIFJM; // 0x2A8
	::System::Single BLJLNHGDLKL; // 0x2AC
	::UnityEngine::Vector3 NBEJJPLCBGO; // 0x2B0
	::UnityEngine::Matrix4x4 PPEAHOKPJEK; // 0x2BC
	::UnityEngine::Color EAJDGCOPNGH; // 0x2FC
	::System::Int32 NHLGCMPPPED; // 0x30C
	::System::Single FCAJFFLDLBO; // 0x310
	::UnityEngine::RenderTextureFormat FLHNOIFENIK; // 0x314
	::System::Int32 HKOFOPDFEDB; // 0x318
	::System::Int32 PKPJLLLIPDD; // 0x31C
	::UnityEngine::Color BGNKEKEMJEL; // 0x320
	::System::Int32 GFMABAGPENI; // 0x330
	::UnityEngine::Vector4 OOCAFIKFEJA; // 0x334
	::System::Int32 NELDFDBDCBF; // 0x344
	::UnityEngine::Vector3 NGPHMDPKGMP; // 0x348
	::System::Int32 PDDOCANIFON; // 0x354
	::UnityEngine::Color PENDMCIJOPF; // 0x358
	::System::Single OICENFDNAOM; // 0x368
	::UnityEngine::Vector3 DBPCLBGCHNB; // 0x36C
	::System::Int32 IJPIKMAMBPC; // 0x378
	::System::Int32 LAPDCPGELLC; // 0x37C
	::System::Single DFLDOJHDOFD; // 0x380
	::System::Int32 GPHDMDKFEOD; // 0x384
	::System::Single JDPPAGIAAPH; // 0x388
	::System::Single MILMHNCIEDH; // 0x38C
	::UnityEngine::Color LLIFIAGOGNC; // 0x390
	::System::Int32 FCBCOCKOFJB; // 0x3A0
	::System::Single DIIBIEOFMDJ; // 0x3A4
	::UnityEngine::Color KCEAGIKIAHE; // 0x3A8
	::System::Single NPHOLAHLFLE; // 0x3B8
	::System::Single FJFEMJFCAGG; // 0x3BC
	::UnityEngine::Vector3 GEFIAPKMGJD; // 0x3C0
	::System::Single NHAPHNAFLAO; // 0x3CC
	::System::Single EKIJGOGNMGM; // 0x3D0
	::System::Boolean FBPCIGGDHGB; // 0x3D4
	::System::Boolean HJIMHECEHAG; // 0x3D5
	::System::Boolean IEFHHDNCAHC; // 0x3D6
	::System::Boolean HAJKJDELCFO; // 0x3D7
	::UnityEngine::Matrix4x4 JLDKMEAGCNC; // 0x3D8
	::System::Single MEBCADGCDHJ; // 0x418
	::UnityEngine::Color BEIIJDMLIDE; // 0x41C
	::System::Single CAEDLAHEFHA; // 0x42C
	::System::Single HIJOGGFLEOP; // 0x430
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

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D865BB63FE6CF6EB_1_METHOD_2_FA662896843C137A_OFFSET))(this);
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
