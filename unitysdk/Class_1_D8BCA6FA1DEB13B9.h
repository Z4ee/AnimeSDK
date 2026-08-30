#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/RegionVisualStateReason.h"
#include "unitysdk/RPG/Client/RegionVisualStateRefCntReason.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionType.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_6B1DEF4C12A48710.h"
#include "unitysdk/Struct_2_960171EC79068492.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3948F09825CE1BA8;
class Class_1_A71861351D4ACE4D;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelRegionInfo; }
namespace RPG::GameCore { class LevelRegionStateCondition; }
namespace RPG::GameCore { class LevelRegionStateConditionSet; }
namespace RPG::GameCore { class LevelRegionStateConfig; }
namespace RPG::GameCore { class StageRegionAffect; }
namespace RPG::GameCore { class StageRegionConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_D8BCA6FA1DEB13B9_GET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0x16DA6CC0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_0173612688FB36A6_OFFSET UNITYSDK_OFFSET(0x16DA4CF0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_030BA68CCB02CCAD_OFFSET UNITYSDK_OFFSET(0x16DA3540)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x16DA3380)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_0BD43267D60313DC_OFFSET UNITYSDK_OFFSET(0x16DA3750)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_0FB4701C048F21A8_OFFSET UNITYSDK_OFFSET(0x16DA2740)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_1011839DF6D17ECE_OFFSET UNITYSDK_OFFSET(0x16DA3D00)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_20B511A103C213DD_OFFSET UNITYSDK_OFFSET(0x16DA2270)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_241FCB0507EB9FA1_1_OFFSET UNITYSDK_OFFSET(0x16DA6C80)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x16DA57E0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_34504604B0FFC7C3_OFFSET UNITYSDK_OFFSET(0x16D9C040)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16DA63E0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16D9B620)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_3D1A76B7DFE821F3_OFFSET UNITYSDK_OFFSET(0x16DA5870)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_42534C094D9FC222_1_OFFSET UNITYSDK_OFFSET(0x16DA6CE0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_42534C094D9FC222_OFFSET UNITYSDK_OFFSET(0x16DA5960)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_49085A3FC0F13F5E_1_OFFSET UNITYSDK_OFFSET(0x16DA5140)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_49085A3FC0F13F5E_OFFSET UNITYSDK_OFFSET(0x16DA4EC0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_4D43147BDC6D78EE_OFFSET UNITYSDK_OFFSET(0x16D9B850)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_4FDFCF0E824F852D_OFFSET UNITYSDK_OFFSET(0x16DA64A0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_53788AABC08BED63_OFFSET UNITYSDK_OFFSET(0x16DA22C0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_586D3E78EB76EA14_OFFSET UNITYSDK_OFFSET(0x16DA59C0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_5AE65BC66F5834C0_OFFSET UNITYSDK_OFFSET(0x16DA53C0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_68007CFD6400DAC2_OFFSET UNITYSDK_OFFSET(0x16D9B9E0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6ABA6A7D3FD8E04E_OFFSET UNITYSDK_OFFSET(0x16DA6670)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6AC60E17A6A2BBB9_OFFSET UNITYSDK_OFFSET(0x16DA1EC0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6BB8B909016DC1E1_OFFSET UNITYSDK_OFFSET(0x16DA58B0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6CC0E8D2DB72D85E_OFFSET UNITYSDK_OFFSET(0x16D9D890)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6E4A08BCEEDE9205_OFFSET UNITYSDK_OFFSET(0x16DA46E0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6F901BAEE7DCC4D1_OFFSET UNITYSDK_OFFSET(0x16DA4A70)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x16DA0E30)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x16D9EBC0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_74C5E451DB3BCE7F_OFFSET UNITYSDK_OFFSET(0x16DA6950)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x16DA6B50)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_7A51A1C590A67AE1_OFFSET UNITYSDK_OFFSET(0x16DA6D40)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_7ACD2C18B6660360_OFFSET UNITYSDK_OFFSET(0x16DA2390)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_818F911E2177BEB3_OFFSET UNITYSDK_OFFSET(0x16DA1C80)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_829B09E994469287_OFFSET UNITYSDK_OFFSET(0x16D9E0C0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_840DB136F4FEF208_OFFSET UNITYSDK_OFFSET(0x16DA5E90)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_85D9BB2EBD662D55_OFFSET UNITYSDK_OFFSET(0x16DA2960)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_87EBA5EB20CB62D4_OFFSET UNITYSDK_OFFSET(0x16DA2320)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_8DBA9D503648CF4A_OFFSET UNITYSDK_OFFSET(0x16DA6E70)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16DA3230)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_986E4F3D92DC02FB_OFFSET UNITYSDK_OFFSET(0x16DA28E0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_990D492087A958D7_OFFSET UNITYSDK_OFFSET(0x16D9AFF0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x16DA0070)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_9F5F3F90C66496E1_OFFSET UNITYSDK_OFFSET(0x16D9E100)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_A3341C341945A85E_OFFSET UNITYSDK_OFFSET(0x16DA3830)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x16DA6BE0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x16D9C6E0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_ABE5738A0CCE8823_OFFSET UNITYSDK_OFFSET(0x16DA2C00)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B0D0D30AA6E083F2_OFFSET UNITYSDK_OFFSET(0x16DA1620)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B1FD6E7C3CBA7EAF_OFFSET UNITYSDK_OFFSET(0x16DA3A70)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x16D9F4F0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x16DA0AC0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B355D3861E365318_OFFSET UNITYSDK_OFFSET(0x16D9FEE0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x16D9B670)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B79C2FE4831A322B_OFFSET UNITYSDK_OFFSET(0x16DA4500)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_BBAB4D72BFD3417E_OFFSET UNITYSDK_OFFSET(0x16D9BFF0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x16DA5820)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_BC5B668148D964CC_OFFSET UNITYSDK_OFFSET(0x16DA1F70)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_BD932B56F58CAF64_OFFSET UNITYSDK_OFFSET(0x16DA6430)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_C533DFD74EC3B4F1_OFFSET UNITYSDK_OFFSET(0x16DA6C30)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_C5B644989D59B9A1_OFFSET UNITYSDK_OFFSET(0x16DA2CD0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_C78CD55DCDD16250_OFFSET UNITYSDK_OFFSET(0x16DA6330)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16DA2C50)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x16DA32E0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x16DA4050)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16D9B700)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_D3D90DFCA5A06372_OFFSET UNITYSDK_OFFSET(0x16DA5790)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_D51C43B78C16F87F_OFFSET UNITYSDK_OFFSET(0x16DA5900)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_D52BA3DAE5DF1A9E_OFFSET UNITYSDK_OFFSET(0x16D9F3E0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_D8A38B75FB093779_OFFSET UNITYSDK_OFFSET(0x16D9C350)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_DAE2E18BDC4ADFD7_OFFSET UNITYSDK_OFFSET(0x16DA3B80)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E107ABB7B934BEF3_OFFSET UNITYSDK_OFFSET(0x16DA47D0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x16DA3480)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E4B33477B7A6A3F1_OFFSET UNITYSDK_OFFSET(0x16DA4090)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E7661A75673806CC_OFFSET UNITYSDK_OFFSET(0x16D9C120)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x16D9DAD0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_ECA9CEB8BBCC7524_OFFSET UNITYSDK_OFFSET(0x16D9B750)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_EEA3DA24B2C7A27F_OFFSET UNITYSDK_OFFSET(0x16D9FD70)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_F1222B20415F4E6E_OFFSET UNITYSDK_OFFSET(0x16DA0ED0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_F59C64654F230E9C_OFFSET UNITYSDK_OFFSET(0x16DA66D0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_FD9FABB0A847C348_OFFSET UNITYSDK_OFFSET(0x16DA13B0)
#define CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x16DA19C0)
#define CLASS_1_D8BCA6FA1DEB13B9_SET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0x16DA6CD0)
#define CLASS_1_D8BCA6FA1DEB13B9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16D9C610)
#define CLASS_1_D8BCA6FA1DEB13B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DA7A60)
#define CLASS_1_D8BCA6FA1DEB13B9__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9C730)

inline static constexpr unsigned int Class_1_D8BCA6FA1DEB13B9_TypeDefinitionIndex = 62232;

class Class_1_D8BCA6FA1DEB13B9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>** StaticGet_HJKDIKKODEC()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BCA6FA1DEB13B9_TypeDefinitionIndex)->GetStaticField(0x62D20);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>** StaticGet_MGNAEKAIDBD()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BCA6FA1DEB13B9_TypeDefinitionIndex)->GetStaticField(0x62D28);
	}
	static ::Class_1_D8BCA6FA1DEB13B9** StaticGet_PJEPEMCGJMF()
	{
		return (::Class_1_D8BCA6FA1DEB13B9**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BCA6FA1DEB13B9_TypeDefinitionIndex)->GetStaticField(0x62D30);
	}
	// static const ::System::Int32 FBEHOLBACJE = 0xFFFFFFFF; // 0x0
	// static const ::System::String* GMNOGCANNNF; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* FDEDCDIMIPA; // 0x10
	::RPG::GameCore::LevelRegionStateConfig* KAJFMMNOLEJ; // 0x18
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* EAMOCIIICBE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A71861351D4ACE4D*>* JODLNDJGOPC; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* IJPJPHMMODC; // 0x30
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_D8BCA6FA1DEB13B9*, ::RPG::GameCore::StageRegionVisualState>*>* PBIMIKABLGO; // 0x38
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* DFLKEEOEBIA; // 0x40
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* FONDGECHGHA; // 0x48
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Struct_2_960171EC79068492, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* KBBIKMMDCGI; // 0x50
	::System::Action_3<::Class_1_D8BCA6FA1DEB13B9*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* JHFLOAFAFBA; // 0x58
	::RPG::GameCore::StageRegionConfig* CFKEEIGFKDH; // 0x60
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_D8BCA6FA1DEB13B9*, ::Struct_2_960171EC79068492>*>* MDKJEHNDFPD; // 0x68
	::System::Collections::Generic::HashSet_1<::System::UInt32>* MJKLPKMNMFF; // 0x70
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* DHDLAAAEGPI; // 0x78
	::RPG::GameCore::HoyoTagContainer* HIJFIDNJJKB; // 0x80
	::RPG::GameCore::LevelRegionInfo* OANJKADBIBE; // 0x88
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* HGLLDKBNOEJ; // 0x90
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* DPKNJGFHOAC; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* MILHJDLAODN; // 0xA0
	::UnityEngine::GameObject* JFKANJOPEHN; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* _VisibleMiddleOwnerStreamingBlocks_k__BackingField; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* CMNLNIPMHBI; // 0xB8
	::RPG::GameCore::HoyoTagContainer* FLLGAPPECIO; // 0xC0
	::Class_1_3948F09825CE1BA8* CJGHIABBLHI; // 0xC8
	::Class_1_D70A30D666F20D90* NFPCBMCGFDD; // 0xD0
	::System::Boolean BKPMGCPJKKO; // 0xD8
	::System::Boolean EOFIIKNACBH; // 0xD9
	::System::Boolean NPKCELIKGCD; // 0xDA
	::System::Boolean ABKLGIKNBOC; // 0xDB
	::System::Int32 KEKJBLFMAEL; // 0xDC
	::RPG::GameCore::StageRegionVisualState BIMCKIJJJJJ; // 0xE0
	::Struct_2_960171EC79068492 EAOFLGIHDBG; // 0xE4
	::System::Boolean FEODGDAMPKO; // 0xEC
	::Struct_2_960171EC79068492 LIAFAKEHMID; // 0xF0
	::UnityEngine::Matrix4x4 HGPFBOLEACI; // 0xF8
	::RPG::GameCore::StageRegionVisualState HHMICDPNGJK; // 0x138
	::RPG::GameCore::StageRegionActiveState NHJJGOHPBLA; // 0x13C
	::System::Boolean GNLHMEALOAG; // 0x140
	::System::Boolean ANNHPINKMCO; // 0x141
	::System::Boolean EBBICOBIIJP; // 0x142
	::System::Boolean EFIIOOJJLDM; // 0x143
	::System::Boolean NGLPGCKGIFB; // 0x144
	::System::Boolean NHKDIFJGGKL; // 0x145
	::System::Boolean EJFDKHNEEOM; // 0x146
	::System::Boolean NPNLDMJGNEK; // 0x147
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority PBFENJMKPLP; // 0x148
	::Struct_2_6B1DEF4C12A48710 GJMKMHHJHAE; // 0x14C

	::System::Void _ctor(::Class_1_3948F09825CE1BA8* a1, ::RPG::GameCore::StageRegionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3948F09825CE1BA8*, ::RPG::GameCore::StageRegionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9__CCTOR_OFFSET))();
	}

	::Struct_2_960171EC79068492 Method_1_990D492087A958D7()
	{
		return ((::Struct_2_960171EC79068492(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_990D492087A958D7_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Struct_2_6B1DEF4C12A48710 Method_1_ECA9CEB8BBCC7524()
	{
		return ((::Struct_2_6B1DEF4C12A48710(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_ECA9CEB8BBCC7524_OFFSET))(this);
	}

	::Struct_2_6B1DEF4C12A48710 Method_1_4D43147BDC6D78EE()
	{
		return ((::Struct_2_6B1DEF4C12A48710(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_4D43147BDC6D78EE_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_68007CFD6400DAC2(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_68007CFD6400DAC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7661A75673806CC(::Class_1_D8BCA6FA1DEB13B9* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E7661A75673806CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D8A38B75FB093779(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_D8A38B75FB093779_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_6CC0E8D2DB72D85E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6CC0E8D2DB72D85E_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_9F5F3F90C66496E1(::RPG::GameCore::LevelRegionInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_9F5F3F90C66496E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D52BA3DAE5DF1A9E(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_D52BA3DAE5DF1A9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_1_FD9FABB0A847C348(::Class_1_D8BCA6FA1DEB13B9* a1, ::RPG::GameCore::StageRegionVisualState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_FD9FABB0A847C348_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B0D0D30AA6E083F2(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B0D0D30AA6E083F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC5B668148D964CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_BC5B668148D964CC_OFFSET))(this);
	}

	::System::Void Method_1_818F911E2177BEB3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_818F911E2177BEB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_53788AABC08BED63(::RPG::GameCore::LevelRegionStateConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionStateConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_53788AABC08BED63_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA3DA24B2C7A27F(::Class_1_D8BCA6FA1DEB13B9* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_EEA3DA24B2C7A27F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_87EBA5EB20CB62D4(::Class_1_D8BCA6FA1DEB13B9* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_87EBA5EB20CB62D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FB4701C048F21A8(::Class_1_D8BCA6FA1DEB13B9* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8BCA6FA1DEB13B9*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_0FB4701C048F21A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B355D3861E365318(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B355D3861E365318_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_986E4F3D92DC02FB(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_986E4F3D92DC02FB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_85D9BB2EBD662D55(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_85D9BB2EBD662D55_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7ACD2C18B6660360(::Struct_2_960171EC79068492 a1, ::Struct_2_960171EC79068492 a2, ::RPG::GameCore::StageRegionActiveState a3, ::RPG::GameCore::StageRegionActiveState a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::Struct_2_960171EC79068492, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_7ACD2C18B6660360_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_F1222B20415F4E6E(::Struct_2_960171EC79068492 a1, ::System::Boolean a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_F1222B20415F4E6E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6AC60E17A6A2BBB9(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6AC60E17A6A2BBB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3341C341945A85E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_A3341C341945A85E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0BD43267D60313DC(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_0BD43267D60313DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAE2E18BDC4ADFD7(::Class_1_303D5A33D1401D59* a1, ::RPG::GameCore::RegionBlockVisibilityStatus a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_DAE2E18BDC4ADFD7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_B1FD6E7C3CBA7EAF(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B1FD6E7C3CBA7EAF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_030BA68CCB02CCAD(::Struct_2_960171EC79068492 a1, ::System::Boolean a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59* a4, ::System::Boolean a5, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59*, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_030BA68CCB02CCAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_E4B33477B7A6A3F1(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E4B33477B7A6A3F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B79C2FE4831A322B(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_B79C2FE4831A322B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6E4A08BCEEDE9205(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6E4A08BCEEDE9205_OFFSET))(this, a1);
	}

	::System::Void Method_1_E107ABB7B934BEF3(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_E107ABB7B934BEF3_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_6F901BAEE7DCC4D1(::RPG::GameCore::LevelRegionStateCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6F901BAEE7DCC4D1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0173612688FB36A6(::RPG::GameCore::LevelRegionStateConditionSet* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_0173612688FB36A6_OFFSET))(a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_49085A3FC0F13F5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_49085A3FC0F13F5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_49085A3FC0F13F5E_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_49085A3FC0F13F5E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AE65BC66F5834C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_5AE65BC66F5834C0_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageRegionType Method_1_D3D90DFCA5A06372()
	{
		return ((::RPG::GameCore::StageRegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_D3D90DFCA5A06372_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StageRegionAffect*>* Method_1_20B511A103C213DD()
	{
		return ((::Il2CppArray<::RPG::GameCore::StageRegionAffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_20B511A103C213DD_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionConfig* Method_1_3D1A76B7DFE821F3()
	{
		return ((::RPG::GameCore::StageRegionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_3D1A76B7DFE821F3_OFFSET))(this);
	}

	::RPG::GameCore::LevelRegionInfo* Method_1_6BB8B909016DC1E1()
	{
		return ((::RPG::GameCore::LevelRegionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6BB8B909016DC1E1_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_D51C43B78C16F87F()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_D51C43B78C16F87F_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_42534C094D9FC222()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_42534C094D9FC222_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_586D3E78EB76EA14()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_586D3E78EB76EA14_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_840DB136F4FEF208(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_840DB136F4FEF208_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_ABE5738A0CCE8823(::Struct_2_960171EC79068492 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_960171EC79068492))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_ABE5738A0CCE8823_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_34504604B0FFC7C3(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_34504604B0FFC7C3_OFFSET))(a1);
	}

	::System::Void Method_1_C5B644989D59B9A1(::Struct_2_960171EC79068492 a1, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_960171EC79068492, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_C5B644989D59B9A1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::StageRegionActiveState Method_1_C78CD55DCDD16250()
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_C78CD55DCDD16250_OFFSET))(this);
	}

	static ::RPG::GameCore::StageRegionActiveState Method_1_BBAB4D72BFD3417E(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_BBAB4D72BFD3417E_OFFSET))(a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	static ::System::Boolean Method_1_BD932B56F58CAF64(::System::Boolean a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::GameCore::LevelRegionInfo* a3)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_BD932B56F58CAF64_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_1_4FDFCF0E824F852D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_4FDFCF0E824F852D_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_6ABA6A7D3FD8E04E()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_6ABA6A7D3FD8E04E_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_829B09E994469287()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_829B09E994469287_OFFSET))(this);
	}

	::System::Boolean Method_1_F59C64654F230E9C(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_F59C64654F230E9C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_74C5E451DB3BCE7F(::Class_1_303D5A33D1401D59* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::Class_1_303D5A33D1401D59*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_74C5E451DB3BCE7F_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_77577333B4681208_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1011839DF6D17ECE(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_1011839DF6D17ECE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Method_1_C533DFD74EC3B4F1()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_C533DFD74EC3B4F1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_241FCB0507EB9FA1_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_241FCB0507EB9FA1_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* get_VisibleMiddleOwnerStreamingBlocks()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_GET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET))(this);
	}

	::System::Void set_VisibleMiddleOwnerStreamingBlocks(::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_SET_VISIBLEMIDDLEOWNERSTREAMINGBLOCKS_OFFSET))(this, a1);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_42534C094D9FC222_1()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_42534C094D9FC222_1_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_7A51A1C590A67AE1()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_7A51A1C590A67AE1_OFFSET))(this);
	}

	::System::Void Method_1_8DBA9D503648CF4A(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::Class_1_D8BCA6FA1DEB13B9*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::Class_1_D8BCA6FA1DEB13B9*>*))((::PBYTE)hIl2Cpp + CLASS_1_D8BCA6FA1DEB13B9_METHOD_1_8DBA9D503648CF4A_OFFSET))(this, a1, a2);
	}
};
