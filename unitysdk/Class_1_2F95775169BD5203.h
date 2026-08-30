#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2F95775169BD5203_RegionType.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/WaveInteract.h"

class Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F;
class FloatingObjectBuffer;
class InteractProxy;
class LegacyGPUParticleSystem;
class WaveSimPanel;
namespace RPG::Client { class WaveSimConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define CLASS_1_2F95775169BD5203_GET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x16199E20)
#define CLASS_1_2F95775169BD5203_GET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x16193FD0)
#define CLASS_1_2F95775169BD5203_METHOD_1_00EB2C748D484792_OFFSET UNITYSDK_OFFSET(0x1619A110)
#define CLASS_1_2F95775169BD5203_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x1619C4E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_0807B7473B8F5526_OFFSET UNITYSDK_OFFSET(0x16195730)
#define CLASS_1_2F95775169BD5203_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x1619B120)
#define CLASS_1_2F95775169BD5203_METHOD_1_0F7D41D7CCA1E58B_OFFSET UNITYSDK_OFFSET(0x16199AF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_1752943C8EA15AFA_OFFSET UNITYSDK_OFFSET(0x16197E30)
#define CLASS_1_2F95775169BD5203_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x16198970)
#define CLASS_1_2F95775169BD5203_METHOD_1_25B3AD34AD1F3D62_OFFSET UNITYSDK_OFFSET(0x1619B540)
#define CLASS_1_2F95775169BD5203_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x161935B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1619B030)
#define CLASS_1_2F95775169BD5203_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0x1619AF80)
#define CLASS_1_2F95775169BD5203_METHOD_1_396D1F1F9458998C_OFFSET UNITYSDK_OFFSET(0x161984B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x16195550)
#define CLASS_1_2F95775169BD5203_METHOD_1_457158F21AF4EFF1_OFFSET UNITYSDK_OFFSET(0x16198ED0)
#define CLASS_1_2F95775169BD5203_METHOD_1_48EB1D48BD21EBE0_OFFSET UNITYSDK_OFFSET(0x1619B660)
#define CLASS_1_2F95775169BD5203_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x16193630)
#define CLASS_1_2F95775169BD5203_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x16194160)
#define CLASS_1_2F95775169BD5203_METHOD_1_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0x16195E40)
#define CLASS_1_2F95775169BD5203_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x16198250)
#define CLASS_1_2F95775169BD5203_METHOD_1_6386527715220317_OFFSET UNITYSDK_OFFSET(0x16199CC0)
#define CLASS_1_2F95775169BD5203_METHOD_1_640C71A5A5EAE1D0_OFFSET UNITYSDK_OFFSET(0x161985D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_6506177692E2002A_OFFSET UNITYSDK_OFFSET(0x16193820)
#define CLASS_1_2F95775169BD5203_METHOD_1_6FCADD6476EBA26E_OFFSET UNITYSDK_OFFSET(0x1619C070)
#define CLASS_1_2F95775169BD5203_METHOD_1_6FE1AD71BA198A2B_OFFSET UNITYSDK_OFFSET(0x161997E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_72CC672E0ECF05A7_OFFSET UNITYSDK_OFFSET(0x1619B720)
#define CLASS_1_2F95775169BD5203_METHOD_1_749E996CB446551C_OFFSET UNITYSDK_OFFSET(0x16193610)
#define CLASS_1_2F95775169BD5203_METHOD_1_78E151D9A3BE2ACD_OFFSET UNITYSDK_OFFSET(0x16195420)
#define CLASS_1_2F95775169BD5203_METHOD_1_7B8E66A4FD58DCEE_OFFSET UNITYSDK_OFFSET(0x1619BC30)
#define CLASS_1_2F95775169BD5203_METHOD_1_83408277B358B570_OFFSET UNITYSDK_OFFSET(0x16192F60)
#define CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_1_OFFSET UNITYSDK_OFFSET(0x16195390)
#define CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_OFFSET UNITYSDK_OFFSET(0x161952F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x16193F50)
#define CLASS_1_2F95775169BD5203_METHOD_1_86FAFA42ABDC538F_OFFSET UNITYSDK_OFFSET(0x16193D00)
#define CLASS_1_2F95775169BD5203_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x161937D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x161958F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x16198B30)
#define CLASS_1_2F95775169BD5203_METHOD_1_8DC7A8D48742DFD6_OFFSET UNITYSDK_OFFSET(0x1619B4F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16193770)
#define CLASS_1_2F95775169BD5203_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16192F10)
#define CLASS_1_2F95775169BD5203_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x161933F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A60E5E0917F6A6F4_OFFSET UNITYSDK_OFFSET(0x16193480)
#define CLASS_1_2F95775169BD5203_METHOD_1_A6B412A42E4C4567_OFFSET UNITYSDK_OFFSET(0x161992D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0x16196150)
#define CLASS_1_2F95775169BD5203_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x16194190)
#define CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_1_OFFSET UNITYSDK_OFFSET(0x16193BC0)
#define CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_OFFSET UNITYSDK_OFFSET(0x16193AB0)
#define CLASS_1_2F95775169BD5203_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16194040)
#define CLASS_1_2F95775169BD5203_METHOD_1_B44AE63E34C20CB3_OFFSET UNITYSDK_OFFSET(0x16199E50)
#define CLASS_1_2F95775169BD5203_METHOD_1_B6DDFC1AF3B5F97D_OFFSET UNITYSDK_OFFSET(0x161986F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16192F00)
#define CLASS_1_2F95775169BD5203_METHOD_1_C8B959BA4F3993AF_OFFSET UNITYSDK_OFFSET(0x1619B400)
#define CLASS_1_2F95775169BD5203_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1619C030)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_1_OFFSET UNITYSDK_OFFSET(0x161988E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_2_OFFSET UNITYSDK_OFFSET(0x16198930)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_OFFSET UNITYSDK_OFFSET(0x16198890)
#define CLASS_1_2F95775169BD5203_METHOD_1_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0x16194520)
#define CLASS_1_2F95775169BD5203_METHOD_1_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x161936E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0x16192E90)
#define CLASS_1_2F95775169BD5203_METHOD_1_D2E7B99027D15632_OFFSET UNITYSDK_OFFSET(0x16199E40)
#define CLASS_1_2F95775169BD5203_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x161958D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x1619B800)
#define CLASS_1_2F95775169BD5203_METHOD_1_E2B6F1F20E5DF7A7_OFFSET UNITYSDK_OFFSET(0x1619C250)
#define CLASS_1_2F95775169BD5203_METHOD_1_E54BDE077E068F63_OFFSET UNITYSDK_OFFSET(0x161939D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x16197E80)
#define CLASS_1_2F95775169BD5203_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x161956E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16193620)
#define CLASS_1_2F95775169BD5203_SET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x16199E30)
#define CLASS_1_2F95775169BD5203_SET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x16194000)
#define CLASS_1_2F95775169BD5203__CCTOR_OFFSET UNITYSDK_OFFSET(0x1619C520)
#define CLASS_1_2F95775169BD5203__CTOR_OFFSET UNITYSDK_OFFSET(0x161942A0)

inline static constexpr unsigned int Class_1_2F95775169BD5203_TypeDefinitionIndex = 47955;

class Class_1_2F95775169BD5203 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>** StaticGet_PGHIEMMNBIE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x1E0A0);
	}
	static ::Class_1_2F95775169BD5203** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_2F95775169BD5203**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x1E0A8);
	}
	static ::UnityEngine::ComputeShader** StaticGet_FBPMEEMNPAA()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x1E0B0);
	}
	static ::UnityEngine::Material** StaticGet_CCGDBLEEJBI()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x1E0B8);
	}
	static ::System::Action** StaticGet__OnInstanced_k__BackingField()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x1E0C0);
	}
	static ::System::Int32* StaticGet_KALCPOLBHKH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA130);
	}
	static ::System::Int32* StaticGet_HCOGLIOJIAJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA134);
	}
	static ::System::Int32* StaticGet_MILEHHEMKEE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA138);
	}
	static ::System::Int32* StaticGet_MIHNOGLELED()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA13C);
	}
	static ::System::Int32* StaticGet_FMJIGKNOHEL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA140);
	}
	static ::System::Int32* StaticGet_FOJCCEGHMDA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA144);
	}
	static ::System::Int32* StaticGet_DNELCAEJHII()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA148);
	}
	static ::System::Int32* StaticGet_HLHIMFIOCAP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA14C);
	}
	static ::System::Int32* StaticGet_AILIHLKGOIE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA150);
	}
	static ::System::Int32* StaticGet_JIAGPNADJAA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA154);
	}
	static ::System::Int32* StaticGet_HMGNBNNJMHD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA158);
	}
	static ::System::Int32* StaticGet_BDOBGPPJABP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA15C);
	}
	static ::System::Int32* StaticGet_HPAIKCNCECC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA160);
	}
	static ::System::Int32* StaticGet_FJJNJDMFBFM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA164);
	}
	static ::System::Int32* StaticGet_JMEHCEGMHAM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA168);
	}
	static ::System::Int32* StaticGet_MJGALJCDKKF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA16C);
	}
	static ::System::Int32* StaticGet_AGIAHOONLPL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA170);
	}
	static ::System::Int32* StaticGet_NLEJFBMABPO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA174);
	}
	static ::System::Int32* StaticGet_IPOODMAEJIH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA178);
	}
	static ::System::Int32* StaticGet_DFOLGLIIOBD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA17C);
	}
	static ::System::Int32* StaticGet_LGNBCAEJKHE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA180);
	}
	static ::System::Int32* StaticGet_GAKGCBGHNCJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA184);
	}
	static ::System::Int32* StaticGet_IBPIABMNHNO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA188);
	}
	static ::System::Int32* StaticGet_DJBEGNAKKOP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA18C);
	}
	static ::System::Int32* StaticGet_MPDMMHNBJOF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA190);
	}
	static ::System::Int32* StaticGet_LMBNLCGDNOG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA194);
	}
	static ::System::Int32* StaticGet_CDLJNMGEBMB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA198);
	}
	static ::System::Int32* StaticGet_PGPPBHLNLGH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA19C);
	}
	static ::System::Int32* StaticGet_CGJDGDEKEMP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1A0);
	}
	static ::System::Int32* StaticGet_BMLENDFMDPJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1A4);
	}
	static ::System::Int32* StaticGet_KDEOGFCADDL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1A8);
	}
	static ::System::Int32* StaticGet_KGAEHNNPDKN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1AC);
	}
	static ::System::Int32* StaticGet_PJOHECOHBKM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1B0);
	}
	static ::System::Int32* StaticGet_BFIMLCMAOHB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1B4);
	}
	static ::System::Int32* StaticGet_CEHDALCKGPN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1B8);
	}
	static ::System::Int32* StaticGet_OEBBIGPHIFD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1BC);
	}
	static ::System::Int32* StaticGet_EJDPLPHPBIM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1C0);
	}
	static ::System::Int32* StaticGet_MFOEEPEJHPG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1C4);
	}
	static ::System::Int32* StaticGet_EJMGJLBMFIF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1C8);
	}
	static ::System::Int32* StaticGet_MHIHGOPAGDP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1CC);
	}
	static ::System::Int32* StaticGet_FHKLENCJCFO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1D0);
	}
	static ::System::Int32* StaticGet_OKENNHMKDJE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1D4);
	}
	static ::System::Int32* StaticGet_IABLEJJMDHB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1D8);
	}
	static ::System::Int32* StaticGet_PODKGDHDKKP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1DC);
	}
	static ::System::Int32* StaticGet_ILELEEAHBAP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1E0);
	}
	static ::System::Int32* StaticGet_LEBDBCGPFHF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1E4);
	}
	static ::System::Int32* StaticGet_NFAHLEALJHC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1E8);
	}
	static ::System::Int32* StaticGet_MIAKIPHKMHC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1EC);
	}
	static ::System::Int32* StaticGet_COMOHKIFKLA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1F0);
	}
	static ::System::Int32* StaticGet_NBODNHBJEFF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1F4);
	}
	static ::System::Int32* StaticGet_CLODEKOPNNI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1F8);
	}
	static ::System::Int32* StaticGet_DKNMBCHILGM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA1FC);
	}
	static ::System::Int32* StaticGet_BDPIPEAAHMP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA200);
	}
	static ::System::Int32* StaticGet_MAILKJBBFPP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA204);
	}
	static ::System::Int32* StaticGet_EGAKMIAKGIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA208);
	}
	static ::System::Int32* StaticGet_LAJMFAKPDEG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA20C);
	}
	static ::System::Int32* StaticGet_CIALLPHJEFA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA210);
	}
	static ::System::Int32* StaticGet_OOOENJBONMP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA214);
	}
	static ::System::Int32* StaticGet_HDEJPHCBCJE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA218);
	}
	static ::System::Int32* StaticGet_NHHPPGBLJLN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA21C);
	}
	static ::System::Int32* StaticGet_MEMHEHLJDDF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA220);
	}
	static ::System::Int32* StaticGet_CGIJGCPFEGI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xA224);
	}
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LBGAECLGNBB; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* EIAIDFKCIIB; // 0x18
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* PNJPCDHKMCG; // 0x20
	::UnityEngine::Texture2D* INODBIIOKJF; // 0x28
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* CCHJAPOGCAO; // 0x30
	::System::Action* _OnActivePanelChanged_k__BackingField; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* GALKMMDDMML; // 0x40
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* AGFBFBBFEDB; // 0x48
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* GEPPFIJIBEE; // 0x50
	::System::Collections::Generic::List_1<::WaveSimPanel*>* EBKEIPNGIIE; // 0x58
	::UnityEngine::RenderTexture* EEJGEEPHAJN; // 0x60
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* FAMNFOLEGDP; // 0x68
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* HEINKCABJCK; // 0x70
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* GEDPJCIOAIL; // 0x78
	::System::Collections::Generic::List_1<::WaveSimPanel*>* EIPGOJKMCHM; // 0x80
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* NCAJBDDGKFG; // 0x88
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* IAEMLCFPIDL; // 0x90
	::UnityEngine::RenderTexture* PPJFPMPAPEO; // 0x98
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* EKFELFOHGIO; // 0xA0
	::UnityEngine::Texture2D* HBFOMDFLIDM; // 0xA8
	::UnityEngine::RenderTexture* LGDLLDMGBME; // 0xB0
	::RPG::Client::WaveSimConfig* MGDAAKAHJIF; // 0xB8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* CGGBJFBLHGA; // 0xC0
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* HNJDGJBIIDH; // 0xC8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* PJMPNONAGCO; // 0xD0
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* MFPJLJGHHOE; // 0xD8
	::UnityEngine::Texture2D* MFBCHAOBGPJ; // 0xE0
	::System::Collections::Generic::List_1<::WaveInteract>* HBHEJKHHKHC; // 0xE8
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* OJIOCCFMFFF; // 0xF0
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* KPPPNEHIKGO; // 0xF8
	::WaveSimPanel* DNLPFPBKFLD; // 0x100
	::FloatingObjectBuffer* DJMLAGMDJOE; // 0x108
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* HALBOGJNIDM; // 0x110
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* NDOEDHJDBCM; // 0x118
	::System::Collections::Generic::List_1<::InteractProxy*>* OEKEHMFBBLP; // 0x120
	::UnityEngine::RenderTexture* BAFHICDIDCB; // 0x128
	::WaveSimPanel* DBEMOOOOLAL; // 0x130
	::UnityEngine::Texture2D* JOLJKIKPMNN; // 0x138
	::System::Single EAHACKPPEDN; // 0x140
	::System::Int32 AEKCJCBKDDK; // 0x144
	::UnityEngine::Vector3 LAOOIDPHOJB; // 0x148
	::System::Int32 JOAMDDEKIOK; // 0x154
	::System::Boolean DKGPDODEOIN; // 0x158
	::System::Boolean EIMHDPLJOFO; // 0x159
	::System::Boolean ANGBDKGKKMJ; // 0x15A
	::System::Boolean EIJABKJLDCA; // 0x15B
	::System::Int32 OJJIKNDCBKK; // 0x15C
	::System::Int32 GADPMJCOKHH; // 0x160
	::System::Int32 FABFFEJGELJ; // 0x164
	::System::Int32 JLLHJDFDCOA; // 0x168
	::System::Single JOBGEKHBBPA; // 0x16C
	::System::Int32 MJPBOBPHHIH; // 0x170
	::System::Int32 DPBHNDEHALF; // 0x174
	::System::Single KEJOEDFNJEK; // 0x178
	::System::Single ONCIOKBFGMJ; // 0x17C
	::System::Single NHMLEIDBOAC; // 0x180
	::System::Boolean PPOBCIICKJK; // 0x184
	::System::Boolean FHCCAJDECNN; // 0x185
	::System::Boolean IBCFNFLMKBI; // 0x186
	::System::Int32 EAINOIBOJLM; // 0x188
	::UnityEngine::Vector4 ONEBEEOEMBN; // 0x18C
	::System::Boolean MIDJOGFHEFJ; // 0x19C
	::System::Boolean IALHFNMCLNA; // 0x19D
	::System::Single KOBJBIKCIEI; // 0x1A0
	::System::Single CPEGIHKHICN; // 0x1A4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203__CCTOR_OFFSET))();
	}

	::UnityEngine::Texture* Method_1_D2DA768232E640DF()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D2DA768232E640DF_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::FloatingObjectBuffer* Method_1_83408277B358B570()
	{
		return ((::FloatingObjectBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83408277B358B570_OFFSET))(this);
	}

	::System::Void Method_1_A60E5E0917F6A6F4(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A60E5E0917F6A6F4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::WaveSimPanel*>* Method_1_749E996CB446551C()
	{
		return ((::System::Collections::Generic::List_1<::WaveSimPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_749E996CB446551C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_6506177692E2002A(::LegacyGPUParticleSystem* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6506177692E2002A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E54BDE077E068F63(::LegacyGPUParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_E54BDE077E068F63_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09968832FEFF646(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09968832FEFF646_1(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::System::Action* get_OnInstanced()
	{
		return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_GET_ONINSTANCED_OFFSET))();
	}

	static ::System::Void set_OnInstanced(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_SET_ONINSTANCED_OFFSET))(a1);
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	static ::Class_1_2F95775169BD5203* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_2F95775169BD5203*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	static ::Class_1_2F95775169BD5203* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_2F95775169BD5203*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Void Method_1_83F84A2352FBB33C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_OFFSET))(this, a1);
	}

	::System::Void Method_1_83F84A2352FBB33C_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_78E151D9A3BE2ACD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_78E151D9A3BE2ACD_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_6092608CF92684DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6092608CF92684DE_OFFSET))(this);
	}

	::System::Void Method_1_1752943C8EA15AFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_1752943C8EA15AFA_OFFSET))(this);
	}

	::System::Void Method_1_CC32BB23BD684E52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CC32BB23BD684E52_OFFSET))(this);
	}

	::System::Void Method_1_396D1F1F9458998C(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_396D1F1F9458998C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6DDFC1AF3B5F97D(::UnityEngine::RenderTexture* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B6DDFC1AF3B5F97D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64_1()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_1_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64_2()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_2_OFFSET))(this);
	}

	::System::Void Method_1_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_457158F21AF4EFF1(::WaveSimPanel* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_457158F21AF4EFF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A6B412A42E4C4567(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A6B412A42E4C4567_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE1AD71BA198A2B(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::Class_1_2F95775169BD5203_RegionType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::Class_1_2F95775169BD5203_RegionType))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6FE1AD71BA198A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0F7D41D7CCA1E58B(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0F7D41D7CCA1E58B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0807B7473B8F5526(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0807B7473B8F5526_OFFSET))(this, a1, a2, a3);
	}

	::System::Action* get_OnActivePanelChanged()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_GET_ONACTIVEPANELCHANGED_OFFSET))(this);
	}

	::System::Void set_OnActivePanelChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_SET_ONACTIVEPANELCHANGED_OFFSET))(this, a1);
	}

	::WaveSimPanel* Method_1_D2E7B99027D15632()
	{
		return ((::WaveSimPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D2E7B99027D15632_OFFSET))(this);
	}

	::System::Void Method_1_B44AE63E34C20CB3(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B44AE63E34C20CB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0D372435D9CAE4BC_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_C8B959BA4F3993AF()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C8B959BA4F3993AF_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_8DC7A8D48742DFD6()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8DC7A8D48742DFD6_OFFSET))(this);
	}

	::System::Void Method_1_86FAFA42ABDC538F(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_86FAFA42ABDC538F_OFFSET))(this, a1);
	}

	::System::Void Method_1_25B3AD34AD1F3D62(::InteractProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_25B3AD34AD1F3D62_OFFSET))(this, a1);
	}

	::System::Void Method_1_48EB1D48BD21EBE0(::InteractProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_48EB1D48BD21EBE0_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_6386527715220317(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6386527715220317_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_72CC672E0ECF05A7(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_72CC672E0ECF05A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B8E66A4FD58DCEE(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_7B8E66A4FD58DCEE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_1_00EB2C748D484792(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_00EB2C748D484792_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_6FCADD6476EBA26E(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6FCADD6476EBA26E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2B6F1F20E5DF7A7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_E2B6F1F20E5DF7A7_OFFSET))(a1);
	}

	static ::System::Void Method_1_640C71A5A5EAE1D0(::UnityEngine::ComputeShader* a1, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* a2, ::UnityEngine::RenderTexture* a3)
	{
		return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_640C71A5A5EAE1D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_1DE63FE11FA0D5B4_OFFSET))();
	}

	static ::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_60E1F7F58CCF739F_OFFSET))();
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}
};
