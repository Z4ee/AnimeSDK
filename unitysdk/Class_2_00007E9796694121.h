#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0_StreamingFeatureType.h"
#include "unitysdk/Class_2_00007E9796694121_ForceEntityLodReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/LockEntityStreamingReason.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_877AA22B04AFB81F_3;
class Class_1_8A6989C352B0F0F0;
class Class_1_A966C8DDC3B81EDD;
class Class_2_01F4079471966D8C;
class Class_2_5A5C70F7A3C39C00;
class Class_2_5D39AC189E1C49A8;
class Class_2_7CF36DB1DCE43BAF;
class Class_2_849DACF0B6D839B1;
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class NpcMonoLod; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class EntityLodDetail; }
namespace RPG::GameCore { class EntityLodTemplate; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_00007E9796694121_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1582EF20)
#define CLASS_2_00007E9796694121_GET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x15832E90)
#define CLASS_2_00007E9796694121_METHOD_2_06FB5CE9453808CD_OFFSET UNITYSDK_OFFSET(0x1582F680)
#define CLASS_2_00007E9796694121_METHOD_2_08A14F75C7774341_OFFSET UNITYSDK_OFFSET(0x15831930)
#define CLASS_2_00007E9796694121_METHOD_2_0A08BEB5A6FF1267_OFFSET UNITYSDK_OFFSET(0x1582ED50)
#define CLASS_2_00007E9796694121_METHOD_2_0D17F2CAF848BF89_OFFSET UNITYSDK_OFFSET(0x15833120)
#define CLASS_2_00007E9796694121_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1582E3D0)
#define CLASS_2_00007E9796694121_METHOD_2_0EA1E9ED58A6D702_OFFSET UNITYSDK_OFFSET(0x1582FBB0)
#define CLASS_2_00007E9796694121_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15833030)
#define CLASS_2_00007E9796694121_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x1582EDB0)
#define CLASS_2_00007E9796694121_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x15832AC0)
#define CLASS_2_00007E9796694121_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x15832B20)
#define CLASS_2_00007E9796694121_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1582E350)
#define CLASS_2_00007E9796694121_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x1582E440)
#define CLASS_2_00007E9796694121_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x15832430)
#define CLASS_2_00007E9796694121_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1582DFE0)
#define CLASS_2_00007E9796694121_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15832FE0)
#define CLASS_2_00007E9796694121_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x1582EAB0)
#define CLASS_2_00007E9796694121_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x158318C0)
#define CLASS_2_00007E9796694121_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1582F7B0)
#define CLASS_2_00007E9796694121_METHOD_2_51CEBE1EADAE34D3_OFFSET UNITYSDK_OFFSET(0x158320F0)
#define CLASS_2_00007E9796694121_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x1582E070)
#define CLASS_2_00007E9796694121_METHOD_2_5E3C4CA92AB4366E_OFFSET UNITYSDK_OFFSET(0x1582EEC0)
#define CLASS_2_00007E9796694121_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1582DE20)
#define CLASS_2_00007E9796694121_METHOD_2_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0x15831D20)
#define CLASS_2_00007E9796694121_METHOD_2_78DC90973F252701_OFFSET UNITYSDK_OFFSET(0x158330B0)
#define CLASS_2_00007E9796694121_METHOD_2_7F61773A0561F28B_OFFSET UNITYSDK_OFFSET(0x158310B0)
#define CLASS_2_00007E9796694121_METHOD_2_8C573D8373912096_OFFSET UNITYSDK_OFFSET(0x1582F410)
#define CLASS_2_00007E9796694121_METHOD_2_9046D4DE6D91F652_OFFSET UNITYSDK_OFFSET(0x158328A0)
#define CLASS_2_00007E9796694121_METHOD_2_927E9FED80D8DD89_OFFSET UNITYSDK_OFFSET(0x15830B00)
#define CLASS_2_00007E9796694121_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15832F20)
#define CLASS_2_00007E9796694121_METHOD_2_966135F9822D270A_OFFSET UNITYSDK_OFFSET(0x1582EE40)
#define CLASS_2_00007E9796694121_METHOD_2_A4269E3E00874962_1_OFFSET UNITYSDK_OFFSET(0x15832A30)
#define CLASS_2_00007E9796694121_METHOD_2_A4269E3E00874962_OFFSET UNITYSDK_OFFSET(0x158329A0)
#define CLASS_2_00007E9796694121_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x15832B80)
#define CLASS_2_00007E9796694121_METHOD_2_AD0B0E12407A9C62_OFFSET UNITYSDK_OFFSET(0x1582DD60)
#define CLASS_2_00007E9796694121_METHOD_2_BD5C1F5B4FE53096_OFFSET UNITYSDK_OFFSET(0x158331D0)
#define CLASS_2_00007E9796694121_METHOD_2_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x15832C30)
#define CLASS_2_00007E9796694121_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15832EB0)
#define CLASS_2_00007E9796694121_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1582EBA0)
#define CLASS_2_00007E9796694121_METHOD_2_CDC866873C69EAE5_OFFSET UNITYSDK_OFFSET(0x1582F310)
#define CLASS_2_00007E9796694121_METHOD_2_D063D7D09D8EF070_OFFSET UNITYSDK_OFFSET(0x15831C90)
#define CLASS_2_00007E9796694121_METHOD_2_D074F7FF8D9C8961_OFFSET UNITYSDK_OFFSET(0x15832D70)
#define CLASS_2_00007E9796694121_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x15832F80)
#define CLASS_2_00007E9796694121_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x1582DB80)
#define CLASS_2_00007E9796694121_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1582DCB0)
#define CLASS_2_00007E9796694121_METHOD_2_EA3C63A9D7DB277F_OFFSET UNITYSDK_OFFSET(0x1582ECE0)
#define CLASS_2_00007E9796694121_METHOD_2_EC5C1AC08DA276C7_OFFSET UNITYSDK_OFFSET(0x1582DD10)
#define CLASS_2_00007E9796694121_METHOD_2_ECBDEBC7E0D122FE_OFFSET UNITYSDK_OFFSET(0x1582EBE0)
#define CLASS_2_00007E9796694121_METHOD_2_EDF18EDB284DEFF4_OFFSET UNITYSDK_OFFSET(0x15832710)
#define CLASS_2_00007E9796694121_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x15832EC0)
#define CLASS_2_00007E9796694121_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x15832CE0)
#define CLASS_2_00007E9796694121_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1582E990)
#define CLASS_2_00007E9796694121_METHOD_2_FA62BCB480AFF4EA_OFFSET UNITYSDK_OFFSET(0x15830E10)
#define CLASS_2_00007E9796694121_METHOD_2_FC232EE597095738_OFFSET UNITYSDK_OFFSET(0x158333E0)
#define CLASS_2_00007E9796694121_METHOD_2_FF6E23481D62F7D7_OFFSET UNITYSDK_OFFSET(0x15831160)
#define CLASS_2_00007E9796694121_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1582F2C0)
#define CLASS_2_00007E9796694121_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1582F170)
#define CLASS_2_00007E9796694121_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x1582F220)
#define CLASS_2_00007E9796694121_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1582F1C0)
#define CLASS_2_00007E9796694121_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x15833440)
#define CLASS_2_00007E9796694121_SET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x15832EA0)
#define CLASS_2_00007E9796694121_TICK_OFFSET UNITYSDK_OFFSET(0x15832920)
#define CLASS_2_00007E9796694121__CCTOR_OFFSET UNITYSDK_OFFSET(0x15833660)
#define CLASS_2_00007E9796694121__CTOR_OFFSET UNITYSDK_OFFSET(0x158335C0)

inline static constexpr unsigned int Class_2_00007E9796694121_TypeDefinitionIndex = 57408;

class Class_2_00007E9796694121 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_BDDECGPCNFP()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0xD610);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_KAFCKHLCCAB()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0xD618);
	}
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_IHEBFHMFPPL()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0xD620);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_PHIKJONMDBO()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0xD628);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JAHHHLENPON()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0xD630);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_AALCEMPLCIM()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0xD638);
	}
	static ::System::Single* StaticGet_KGHJKOAOEMG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0x40C0);
	}
	static ::System::Int32* StaticGet_JKIJELCAEJC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0x40C4);
	}
	static ::System::Int32* StaticGet_AJJAHBPAKOJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0x40C8);
	}
	static ::System::Int32* StaticGet_NONCOJNJEFA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0x40CC);
	}
	static ::System::Int32* StaticGet_GBOOELMDPLL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0x40D0);
	}
	static ::System::Int32* StaticGet_GKGCIDICMMM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0x40D4);
	}
	static ::System::Single* StaticGet_OANFMNALHPN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00007E9796694121_TypeDefinitionIndex)->GetStaticField(0x40D8);
	}
	// static const ::System::Int32 CENOOEDGIBD = 0x2; // 0x0
	// static const ::System::Int32 KIKFNMMCJGC = 0xFFFFFF9C; // 0x0
	// static const ::System::Int32 BMLPHPOFHNJ = 0xFFFFFFFF; // 0x0
	::RPG::Client::Stage* PDAIGLPEMEE; // 0x18
	::Class_2_5D39AC189E1C49A8* OOGKPHFFOOB; // 0x20
	::Class_2_849DACF0B6D839B1* BFPODJOCLIE; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* NGFDBOJIDKL; // 0x30
	::Class_1_877AA22B04AFB81F_3* KIBBNOCADLC; // 0x38
	::RPG::Client::NpcMonoLod* MPJAEDHDFBK; // 0x40
	::RPG::GameCore::TransformComponent* NELGDHJKAJJ; // 0x48
	::System::Collections::Generic::List_1<::System::Single>* MEEAMGHNIBB; // 0x50
	::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x58
	::Class_1_A966C8DDC3B81EDD* GNKODBBHIJI; // 0x60
	::RPG::GameCore::EntityLodDetail* NAGPCEJPING; // 0x68
	::Class_2_01F4079471966D8C* KBLNOFHLAMD; // 0x70
	::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x78
	::RPG::GameCore::AdventureCharacterController* DJFMDJHOAJO; // 0x80
	::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x88
	::RPG::GameCore::EntityLodTemplate* ODIAIHHPEKC; // 0x90
	::Class_2_5A5C70F7A3C39C00* FJFHCCEOINJ; // 0x98
	::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0xA0
	::System::Single DGBOJJLJNOJ; // 0xA8
	::RPG::GameCore::EntityLodTemplateName DKALEOEIJAG; // 0xAC
	::System::Boolean CGHCKFOMCCA; // 0xB0
	::System::Boolean _IsMoveable_k__BackingField; // 0xB1
	::System::Boolean ELHEEEFNFNC; // 0xB2
	::System::Boolean DIMECBLLOGB; // 0xB3
	::System::Int32 DHMOIAAGCFK; // 0xB4
	::System::Single FDCMDHFIBKC; // 0xB8
	::RPG::GameCore::EntityLodTemplateName LOJBDLFPIGE; // 0xBC
	::System::Boolean GFAMGLFOMGI; // 0xC0
	::System::Boolean INOCABNHKGK; // 0xC1
	::System::Boolean ANGAIGLBELJ; // 0xC2
	::System::Boolean IKPOHDLOEEG; // 0xC3
	::System::Boolean PMOJILOJEPE; // 0xC4
	::System::Boolean HMKFOCMIFHA; // 0xC5
	::System::Boolean LBNBPMIFDHI; // 0xC6
	::UnityEngine::Vector3 GPFEGGMFEBG; // 0xC8
	::RPG::Client::ReasonBool_1<::RPG::GameCore::LockEntityStreamingReason> BIMGAPKFFPH; // 0xD8
	::System::Single FCPMCKHHGCK; // 0xE0
	::System::Int32 NEOEPKMILKD; // 0xE4
	::RPG::GameCore::EntityLodTemplateName PDPMCENCKHE; // 0xE8
	::UnityEngine::Vector3 IKKNJMJCDOJ; // 0xEC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_EC5C1AC08DA276C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_EC5C1AC08DA276C7_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_20E8013D4AB67E17_OFFSET))(this);
	}

	::System::Void Method_2_AD0B0E12407A9C62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_AD0B0E12407A9C62_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_ECBDEBC7E0D122FE(::System::String* a1, ::UnityEngine::SkinnedMeshRenderer* a2, ::UnityEngine::Mesh* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_ECBDEBC7E0D122FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EA3C63A9D7DB277F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_EA3C63A9D7DB277F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0A08BEB5A6FF1267()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_0A08BEB5A6FF1267_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_966135F9822D270A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_966135F9822D270A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5E3C4CA92AB4366E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_5E3C4CA92AB4366E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_CDC866873C69EAE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_CDC866873C69EAE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C573D8373912096(::RPG::Client::Stage* a1, ::RPG::GameCore::EntityLodTemplateName a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::RPG::GameCore::EntityLodTemplateName, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_8C573D8373912096_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::EntityLodTemplateName Method_2_0EA1E9ED58A6D702(::RPG::GameCore::PropRow* a1, ::RPG::GameCore::PropConfig* a2, ::UnityEngine::GameObject* a3, ::Class_2_7CF36DB1DCE43BAF* a4, ::RPG::Client::MapPropDef* a5)
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::RPG::GameCore::PropRow*, ::RPG::GameCore::PropConfig*, ::UnityEngine::GameObject*, ::Class_2_7CF36DB1DCE43BAF*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_0EA1E9ED58A6D702_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_927E9FED80D8DD89(::RPG::GameCore::PropRow* a1, ::System::Single a2, ::System::Single& a3, ::RPG::GameCore::EntityLodTemplateName& a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::PropRow*, ::System::Single, ::System::Single&, ::RPG::GameCore::EntityLodTemplateName&))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_927E9FED80D8DD89_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_2_FA62BCB480AFF4EA(::System::String* a1)
	{
		return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_FA62BCB480AFF4EA_OFFSET))(a1);
	}

	::System::Void Method_2_7F61773A0561F28B(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_7F61773A0561F28B_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF6E23481D62F7D7(::RPG::GameCore::EntityLodTemplateName a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_FF6E23481D62F7D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_08A14F75C7774341(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_08A14F75C7774341_OFFSET))(this, a1);
	}

	::System::Void Method_2_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_70F996834AEFED46_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CEBE1EADAE34D3(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_51CEBE1EADAE34D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_EDF18EDB284DEFF4(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_EDF18EDB284DEFF4_OFFSET))(this, a1);
	}

	::System::Void Method_2_9046D4DE6D91F652(::System::Int32 a1, ::RPG::GameCore::EntityLodDetail* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodDetail*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_9046D4DE6D91F652_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4269E3E00874962(::RPG::GameCore::LockEntityStreamingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LockEntityStreamingReason))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_A4269E3E00874962_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4269E3E00874962_1(::RPG::GameCore::LockEntityStreamingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LockEntityStreamingReason))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_A4269E3E00874962_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityLodTemplateName Method_2_D063D7D09D8EF070()
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_D063D7D09D8EF070_OFFSET))(this);
	}

	::System::Void Method_2_06FB5CE9453808CD(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_06FB5CE9453808CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_BF972395CC722BF9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_D074F7FF8D9C8961()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_D074F7FF8D9C8961_OFFSET))(this);
	}

	::System::Boolean get_IsMoveable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_GET_ISMOVEABLE_OFFSET))(this);
	}

	::System::Void set_IsMoveable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_SET_ISMOVEABLE_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0_StreamingFeatureType Method_2_78DC90973F252701()
	{
		return ((::Class_1_8A6989C352B0F0F0_StreamingFeatureType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_78DC90973F252701_OFFSET))(this);
	}

	::System::Void Method_2_0D17F2CAF848BF89(::Class_2_00007E9796694121_ForceEntityLodReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_00007E9796694121_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_0D17F2CAF848BF89_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC232EE597095738(::Class_2_00007E9796694121_ForceEntityLodReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_00007E9796694121_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_FC232EE597095738_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD5C1F5B4FE53096(::System::Int32 a1, ::Class_2_00007E9796694121_ForceEntityLodReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_00007E9796694121_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_METHOD_2_BD5C1F5B4FE53096_OFFSET))(this, a1, a2);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00007E9796694121_RESETTODEFAULT_OFFSET))(this);
	}
};
