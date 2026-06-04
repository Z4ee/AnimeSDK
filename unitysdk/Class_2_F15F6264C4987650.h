#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0_StreamingFeatureType.h"
#include "unitysdk/Class_2_F15F6264C4987650_ForceEntityLodReason.h"
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

#define CLASS_2_F15F6264C4987650_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CDAA00)
#define CLASS_2_F15F6264C4987650_GET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x13CDE2F0)
#define CLASS_2_F15F6264C4987650_METHOD_2_08A14F75C7774341_OFFSET UNITYSDK_OFFSET(0x13CDD080)
#define CLASS_2_F15F6264C4987650_METHOD_2_0A08BEB5A6FF1267_OFFSET UNITYSDK_OFFSET(0x13CDA830)
#define CLASS_2_F15F6264C4987650_METHOD_2_0D17F2CAF848BF89_OFFSET UNITYSDK_OFFSET(0x13CDE600)
#define CLASS_2_F15F6264C4987650_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x13CD9DF0)
#define CLASS_2_F15F6264C4987650_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x13CDB0E0)
#define CLASS_2_F15F6264C4987650_METHOD_2_11BB806D54B97F87_OFFSET UNITYSDK_OFFSET(0x13CDA660)
#define CLASS_2_F15F6264C4987650_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13CDE490)
#define CLASS_2_F15F6264C4987650_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x13CDA890)
#define CLASS_2_F15F6264C4987650_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x13CDDF20)
#define CLASS_2_F15F6264C4987650_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x13CDDF80)
#define CLASS_2_F15F6264C4987650_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13CD9D30)
#define CLASS_2_F15F6264C4987650_METHOD_2_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x13CD9E60)
#define CLASS_2_F15F6264C4987650_METHOD_2_2ACDCE06CE43D89F_OFFSET UNITYSDK_OFFSET(0x13CDC510)
#define CLASS_2_F15F6264C4987650_METHOD_2_2EF4DDB4E8DBC06A_OFFSET UNITYSDK_OFFSET(0x13CDE520)
#define CLASS_2_F15F6264C4987650_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13CD9980)
#define CLASS_2_F15F6264C4987650_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13CDE440)
#define CLASS_2_F15F6264C4987650_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x13CDA520)
#define CLASS_2_F15F6264C4987650_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x13CDD010)
#define CLASS_2_F15F6264C4987650_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x13CD9A10)
#define CLASS_2_F15F6264C4987650_METHOD_2_5C5C18426C245931_OFFSET UNITYSDK_OFFSET(0x13CDD770)
#define CLASS_2_F15F6264C4987650_METHOD_2_5E3C4CA92AB4366E_OFFSET UNITYSDK_OFFSET(0x13CDA9A0)
#define CLASS_2_F15F6264C4987650_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x13CD97D0)
#define CLASS_2_F15F6264C4987650_METHOD_2_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0x13CDD400)
#define CLASS_2_F15F6264C4987650_METHOD_2_7F61773A0561F28B_OFFSET UNITYSDK_OFFSET(0x13CDC7F0)
#define CLASS_2_F15F6264C4987650_METHOD_2_8F447322803007F0_OFFSET UNITYSDK_OFFSET(0x13CDAE00)
#define CLASS_2_F15F6264C4987650_METHOD_2_9046D4DE6D91F652_OFFSET UNITYSDK_OFFSET(0x13CDDD00)
#define CLASS_2_F15F6264C4987650_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x13CDE380)
#define CLASS_2_F15F6264C4987650_METHOD_2_966135F9822D270A_OFFSET UNITYSDK_OFFSET(0x13CDA920)
#define CLASS_2_F15F6264C4987650_METHOD_2_980E30039C154A9E_OFFSET UNITYSDK_OFFSET(0x13CDB010)
#define CLASS_2_F15F6264C4987650_METHOD_2_A4269E3E00874962_1_OFFSET UNITYSDK_OFFSET(0x13CDDE90)
#define CLASS_2_F15F6264C4987650_METHOD_2_A4269E3E00874962_OFFSET UNITYSDK_OFFSET(0x13CDDE00)
#define CLASS_2_F15F6264C4987650_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x13CDDFE0)
#define CLASS_2_F15F6264C4987650_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x13CDD9D0)
#define CLASS_2_F15F6264C4987650_METHOD_2_AD0B0E12407A9C62_OFFSET UNITYSDK_OFFSET(0x13CD9710)
#define CLASS_2_F15F6264C4987650_METHOD_2_BD5C1F5B4FE53096_OFFSET UNITYSDK_OFFSET(0x13CDE6B0)
#define CLASS_2_F15F6264C4987650_METHOD_2_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x13CDE090)
#define CLASS_2_F15F6264C4987650_METHOD_2_C0A237B6F1EC0BFD_OFFSET UNITYSDK_OFFSET(0x13CDDBE0)
#define CLASS_2_F15F6264C4987650_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13CDE310)
#define CLASS_2_F15F6264C4987650_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13CDA620)
#define CLASS_2_F15F6264C4987650_METHOD_2_D063D7D09D8EF070_OFFSET UNITYSDK_OFFSET(0x13CDD370)
#define CLASS_2_F15F6264C4987650_METHOD_2_D074F7FF8D9C8961_OFFSET UNITYSDK_OFFSET(0x13CDE1D0)
#define CLASS_2_F15F6264C4987650_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x13CDE3E0)
#define CLASS_2_F15F6264C4987650_METHOD_2_D86E7FCDFD91FC39_OFFSET UNITYSDK_OFFSET(0x13CDB4F0)
#define CLASS_2_F15F6264C4987650_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x13CD9530)
#define CLASS_2_F15F6264C4987650_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x13CD9660)
#define CLASS_2_F15F6264C4987650_METHOD_2_E45143741316DBFE_OFFSET UNITYSDK_OFFSET(0x13CDC1F0)
#define CLASS_2_F15F6264C4987650_METHOD_2_EA3C63A9D7DB277F_OFFSET UNITYSDK_OFFSET(0x13CDA7C0)
#define CLASS_2_F15F6264C4987650_METHOD_2_EC5C1AC08DA276C7_OFFSET UNITYSDK_OFFSET(0x13CD96C0)
#define CLASS_2_F15F6264C4987650_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x13CDE320)
#define CLASS_2_F15F6264C4987650_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x13CDE140)
#define CLASS_2_F15F6264C4987650_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x13CDA400)
#define CLASS_2_F15F6264C4987650_METHOD_2_FC232EE597095738_OFFSET UNITYSDK_OFFSET(0x13CDE8C0)
#define CLASS_2_F15F6264C4987650_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x13CDAD70)
#define CLASS_2_F15F6264C4987650_METHOD_2_FF6E23481D62F7D7_OFFSET UNITYSDK_OFFSET(0x13CDC8A0)
#define CLASS_2_F15F6264C4987650_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x13CDAD20)
#define CLASS_2_F15F6264C4987650_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13CDABD0)
#define CLASS_2_F15F6264C4987650_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x13CDAC80)
#define CLASS_2_F15F6264C4987650_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13CDAC20)
#define CLASS_2_F15F6264C4987650_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x13CDE920)
#define CLASS_2_F15F6264C4987650_SET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x13CDE300)
#define CLASS_2_F15F6264C4987650_TICK_OFFSET UNITYSDK_OFFSET(0x13CDDD80)
#define CLASS_2_F15F6264C4987650__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CDEB40)
#define CLASS_2_F15F6264C4987650__CTOR_OFFSET UNITYSDK_OFFSET(0x13CDEAA0)
#define CLASS_2_F15F6264C4987650___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13CDF9F0)

inline static constexpr unsigned int Class_2_F15F6264C4987650_TypeDefinitionIndex = 53471;

class Class_2_F15F6264C4987650 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x27680);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x27688);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x27690);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x27698);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_4()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x276A0);
	}
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_Field_2_5()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x276A8);
	}
	static ::System::Int32* StaticGet_Field_2_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x96F0);
	}
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x96F4);
	}
	static ::System::Int32* StaticGet_Field_2_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x96F8);
	}
	static ::System::Int32* StaticGet_Field_2_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x96FC);
	}
	static ::System::Int32* StaticGet_Field_2_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x9700);
	}
	static ::System::Single* StaticGet_Field_2_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x9704);
	}
	static ::System::Single* StaticGet_Field_2_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F15F6264C4987650_TypeDefinitionIndex)->GetStaticField(0x9708);
	}
	// static const ::System::Int32 Field_2_13 = 0x2; // 0x0
	// static const ::System::Int32 Field_2_14 = 0xFFFFFF9C; // 0x0
	// static const ::System::Int32 Field_2_15 = 0xFFFFFFFF; // 0x0
	::RPG::Client::NpcMonoLod* Field_2_16; // 0x18
	::Class_1_A966C8DDC3B81EDD* Field_2_17; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_18; // 0x28
	::RPG::GameCore::EntityLodDetail* Field_2_19; // 0x30
	::RPG::GameCore::CharacterVisibleComponent* Field_2_20; // 0x38
	::RPG::GameCore::EntityLodTemplate* Field_2_21; // 0x40
	::RPG::GameCore::PropComponent* Field_2_22; // 0x48
	::Class_2_01F4079471966D8C* Field_2_23; // 0x50
	::RPG::GameCore::NPCComponent* Field_2_24; // 0x58
	::Class_1_877AA22B04AFB81F_3* Field_2_25; // 0x60
	::RPG::Client::Stage* Field_2_26; // 0x68
	::RPG::GameCore::TransformComponent* Field_2_27; // 0x70
	::System::Collections::Generic::List_1<::System::Single>* Field_2_28; // 0x78
	::RPG::GameCore::CharacterModelComponent* Field_2_29; // 0x80
	::Class_2_5A5C70F7A3C39C00* Field_2_30; // 0x88
	::Class_2_5D39AC189E1C49A8* Field_2_31; // 0x90
	::RPG::GameCore::AdventureCharacterController* Field_2_32; // 0x98
	::Class_2_849DACF0B6D839B1* Field_2_33; // 0xA0
	::System::Single Field_2_34; // 0xA8
	::UnityEngine::Vector3 Field_2_35; // 0xAC
	::UnityEngine::Vector3 Field_2_36; // 0xB8
	::System::Int32 Field_2_37; // 0xC4
	::System::Int32 Field_2_38; // 0xC8
	::System::Single Field_2_39; // 0xCC
	::System::Boolean _IsMoveable_k__BackingField; // 0xD0
	::System::Boolean Field_2_41; // 0xD1
	::System::Boolean Field_2_42; // 0xD2
	::System::Boolean Field_2_43; // 0xD3
	::System::Boolean Field_2_44; // 0xD4
	::System::Boolean Field_2_45; // 0xD5
	::System::Boolean Field_2_46; // 0xD6
	::System::Single Field_2_47; // 0xD8
	::RPG::Client::ReasonBool_1<::RPG::GameCore::LockEntityStreamingReason> Field_2_48; // 0xE0
	::System::Boolean Field_2_49; // 0xE8
	::System::Boolean Field_2_50; // 0xE9
	::System::Boolean Field_2_51; // 0xEA
	::System::Boolean Field_2_52; // 0xEB
	::RPG::GameCore::EntityLodTemplateName Field_2_53; // 0xEC
	::RPG::GameCore::EntityLodTemplateName Field_2_54; // 0xF0
	::RPG::GameCore::EntityLodTemplateName Field_2_55; // 0xF4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_EC5C1AC08DA276C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_EC5C1AC08DA276C7_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_20E8013D4AB67E17()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_20E8013D4AB67E17_OFFSET))(this);
	}

	::System::Void Method_2_AD0B0E12407A9C62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_AD0B0E12407A9C62_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_11BB806D54B97F87(::System::String* a1, ::UnityEngine::SkinnedMeshRenderer* a2, ::UnityEngine::Mesh* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_11BB806D54B97F87_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EA3C63A9D7DB277F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_EA3C63A9D7DB277F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0A08BEB5A6FF1267()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_0A08BEB5A6FF1267_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_966135F9822D270A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_966135F9822D270A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5E3C4CA92AB4366E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_5E3C4CA92AB4366E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F447322803007F0(::RPG::Client::Stage* a1, ::RPG::GameCore::EntityLodTemplateName a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::RPG::GameCore::EntityLodTemplateName, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_8F447322803007F0_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::EntityLodTemplateName Method_2_D86E7FCDFD91FC39(::RPG::GameCore::PropRow* a1, ::RPG::GameCore::PropConfig* a2, ::UnityEngine::GameObject* a3, ::Class_2_7CF36DB1DCE43BAF* a4, ::RPG::Client::MapPropDef* a5)
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::RPG::GameCore::PropRow*, ::RPG::GameCore::PropConfig*, ::UnityEngine::GameObject*, ::Class_2_7CF36DB1DCE43BAF*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_D86E7FCDFD91FC39_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_E45143741316DBFE(::RPG::GameCore::PropRow* a1, ::System::Single a2, ::System::Single& a3, ::RPG::GameCore::EntityLodTemplateName& a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::PropRow*, ::System::Single, ::System::Single&, ::RPG::GameCore::EntityLodTemplateName&))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_E45143741316DBFE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_2_2ACDCE06CE43D89F(::System::String* a1)
	{
		return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_2ACDCE06CE43D89F_OFFSET))(a1);
	}

	::System::Void Method_2_7F61773A0561F28B(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_7F61773A0561F28B_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF6E23481D62F7D7(::RPG::GameCore::EntityLodTemplateName a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_FF6E23481D62F7D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_08A14F75C7774341(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_08A14F75C7774341_OFFSET))(this, a1);
	}

	::System::Void Method_2_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_70F996834AEFED46_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C5C18426C245931(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_5C5C18426C245931_OFFSET))(this, a1);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_C0A237B6F1EC0BFD(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_C0A237B6F1EC0BFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9046D4DE6D91F652(::System::Int32 a1, ::RPG::GameCore::EntityLodDetail* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodDetail*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_9046D4DE6D91F652_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4269E3E00874962(::RPG::GameCore::LockEntityStreamingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LockEntityStreamingReason))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_A4269E3E00874962_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4269E3E00874962_1(::RPG::GameCore::LockEntityStreamingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LockEntityStreamingReason))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_A4269E3E00874962_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityLodTemplateName Method_2_D063D7D09D8EF070()
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_D063D7D09D8EF070_OFFSET))(this);
	}

	::System::Void Method_2_980E30039C154A9E(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_980E30039C154A9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_BF972395CC722BF9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_D074F7FF8D9C8961()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_D074F7FF8D9C8961_OFFSET))(this);
	}

	::System::Boolean get_IsMoveable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_GET_ISMOVEABLE_OFFSET))(this);
	}

	::System::Void set_IsMoveable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_SET_ISMOVEABLE_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0_StreamingFeatureType Method_2_2EF4DDB4E8DBC06A()
	{
		return ((::Class_1_8A6989C352B0F0F0_StreamingFeatureType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_2EF4DDB4E8DBC06A_OFFSET))(this);
	}

	::System::Void Method_2_0D17F2CAF848BF89(::Class_2_F15F6264C4987650_ForceEntityLodReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F15F6264C4987650_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_0D17F2CAF848BF89_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC232EE597095738(::Class_2_F15F6264C4987650_ForceEntityLodReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F15F6264C4987650_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_FC232EE597095738_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD5C1F5B4FE53096(::System::Int32 a1, ::Class_2_F15F6264C4987650_ForceEntityLodReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_F15F6264C4987650_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_METHOD_2_BD5C1F5B4FE53096_OFFSET))(this, a1, a2);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650_RESETTODEFAULT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F15F6264C4987650___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
