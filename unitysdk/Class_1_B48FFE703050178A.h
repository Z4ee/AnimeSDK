#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B48FFE703050178A_UseCameraAsStreamingCenterPosReason.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_375BC79DC2945ABF;
class Class_1_7956089D4F15495C;
class Class_1_B48FFE703050178A_Class_1_45C1679A8AACB55C;
class Class_1_C6FD03DFDE9D9EFF;
class Class_1_DAF29F92478F6143;
class Class_1_FFB8A2463BCB64C3;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class ConfigMunicipal; }
namespace RPG::GameCore { class ConfigMunicipalPedestrianOverride; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_B48FFE703050178A_LodAssetRef_1;

#define CLASS_1_B48FFE703050178A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199EC5A0)
#define CLASS_1_B48FFE703050178A_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x199F1020)
#define CLASS_1_B48FFE703050178A_GET_USE_UNLOAD_MODE_OFFSET UNITYSDK_OFFSET(0x199EBE40)
#define CLASS_1_B48FFE703050178A_METHOD_1_033E7FB1F728E6D8_OFFSET UNITYSDK_OFFSET(0x199F0650)
#define CLASS_1_B48FFE703050178A_METHOD_1_0C9ED05CEC07EE80_OFFSET UNITYSDK_OFFSET(0x199EE8B0)
#define CLASS_1_B48FFE703050178A_METHOD_1_14B208BC8BAFAB72_OFFSET UNITYSDK_OFFSET(0x199ECDA0)
#define CLASS_1_B48FFE703050178A_METHOD_1_1709D3280A2D3A51_OFFSET UNITYSDK_OFFSET(0x199F1090)
#define CLASS_1_B48FFE703050178A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x199F0FC0)
#define CLASS_1_B48FFE703050178A_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x199EECC0)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x199F1060)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x199F1070)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x199F1080)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x199F1050)
#define CLASS_1_B48FFE703050178A_METHOD_1_25E887788436F519_OFFSET UNITYSDK_OFFSET(0x199F0CB0)
#define CLASS_1_B48FFE703050178A_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x199EC600)
#define CLASS_1_B48FFE703050178A_METHOD_1_38120EE64C23EC1F_OFFSET UNITYSDK_OFFSET(0x199F0820)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x199EF650)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x199EF7F0)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x199EF930)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x199EF510)
#define CLASS_1_B48FFE703050178A_METHOD_1_4BA38819BBD4AC04_OFFSET UNITYSDK_OFFSET(0x199F0980)
#define CLASS_1_B48FFE703050178A_METHOD_1_4F190C0374A336BC_OFFSET UNITYSDK_OFFSET(0x199F0570)
#define CLASS_1_B48FFE703050178A_METHOD_1_51C8137D5F369996_OFFSET UNITYSDK_OFFSET(0x199F00B0)
#define CLASS_1_B48FFE703050178A_METHOD_1_5372A60C2D3E0724_OFFSET UNITYSDK_OFFSET(0x199EC090)
#define CLASS_1_B48FFE703050178A_METHOD_1_53FE75B00F3A21BF_OFFSET UNITYSDK_OFFSET(0x199EFA00)
#define CLASS_1_B48FFE703050178A_METHOD_1_55EB336B57E6DF60_OFFSET UNITYSDK_OFFSET(0x199F0280)
#define CLASS_1_B48FFE703050178A_METHOD_1_5D3796EB9E57E19B_OFFSET UNITYSDK_OFFSET(0x199EEA00)
#define CLASS_1_B48FFE703050178A_METHOD_1_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0x199EFB10)
#define CLASS_1_B48FFE703050178A_METHOD_1_624AA189447107DD_OFFSET UNITYSDK_OFFSET(0x199EBE80)
#define CLASS_1_B48FFE703050178A_METHOD_1_68A2CA32DC720C44_1_OFFSET UNITYSDK_OFFSET(0x199ECEA0)
#define CLASS_1_B48FFE703050178A_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x199EE500)
#define CLASS_1_B48FFE703050178A_METHOD_1_6A3D6C9BA18CFB7D_OFFSET UNITYSDK_OFFSET(0x199EE640)
#define CLASS_1_B48FFE703050178A_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x199EDB40)
#define CLASS_1_B48FFE703050178A_METHOD_1_7244B72D2B0B3D10_OFFSET UNITYSDK_OFFSET(0x199F0520)
#define CLASS_1_B48FFE703050178A_METHOD_1_7BC960AC6249711A_OFFSET UNITYSDK_OFFSET(0x199ED580)
#define CLASS_1_B48FFE703050178A_METHOD_1_804FD1465F915FF6_OFFSET UNITYSDK_OFFSET(0x199F02F0)
#define CLASS_1_B48FFE703050178A_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x199EC3D0)
#define CLASS_1_B48FFE703050178A_METHOD_1_881ECDB0423A42B4_OFFSET UNITYSDK_OFFSET(0x199ECB80)
#define CLASS_1_B48FFE703050178A_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x199EF1E0)
#define CLASS_1_B48FFE703050178A_METHOD_1_94D63CD6A22D9150_OFFSET UNITYSDK_OFFSET(0x199EDC20)
#define CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x199EF870)
#define CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x199EF440)
#define CLASS_1_B48FFE703050178A_METHOD_1_9B22289F0759E606_OFFSET UNITYSDK_OFFSET(0x199F0390)
#define CLASS_1_B48FFE703050178A_METHOD_1_9DBD6035FFABEE8F_1_OFFSET UNITYSDK_OFFSET(0x199EDF70)
#define CLASS_1_B48FFE703050178A_METHOD_1_9DBD6035FFABEE8F_OFFSET UNITYSDK_OFFSET(0x199EDC80)
#define CLASS_1_B48FFE703050178A_METHOD_1_9FCCB5B9D36D35E9_OFFSET UNITYSDK_OFFSET(0x199ECFB0)
#define CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x199EF6C0)
#define CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x199EF580)
#define CLASS_1_B48FFE703050178A_METHOD_1_A30B58436EF85543_OFFSET UNITYSDK_OFFSET(0x199F0B50)
#define CLASS_1_B48FFE703050178A_METHOD_1_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x199EFD90)
#define CLASS_1_B48FFE703050178A_METHOD_1_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x199EFC00)
#define CLASS_1_B48FFE703050178A_METHOD_1_B4FB8F0E42A77C76_OFFSET UNITYSDK_OFFSET(0x199ECD10)
#define CLASS_1_B48FFE703050178A_METHOD_1_CEA6D0FCAC133580_OFFSET UNITYSDK_OFFSET(0x199EE830)
#define CLASS_1_B48FFE703050178A_METHOD_1_D13CC732D8FAC62B_OFFSET UNITYSDK_OFFSET(0x199EEB70)
#define CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x199F1150)
#define CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x199F1130)
#define CLASS_1_B48FFE703050178A_METHOD_1_D49459DDE8B0DB26_OFFSET UNITYSDK_OFFSET(0x199F0E20)
#define CLASS_1_B48FFE703050178A_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x199F0F20)
#define CLASS_1_B48FFE703050178A_METHOD_1_DC7787569730BDA2_OFFSET UNITYSDK_OFFSET(0x199F0D60)
#define CLASS_1_B48FFE703050178A_METHOD_1_E691C2EF6AE6A4A5_OFFSET UNITYSDK_OFFSET(0x199EE2C0)
#define CLASS_1_B48FFE703050178A_METHOD_1_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0x199EF9A0)
#define CLASS_1_B48FFE703050178A_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x199EFFA0)
#define CLASS_1_B48FFE703050178A_METHOD_1_EA03228A65A776C9_OFFSET UNITYSDK_OFFSET(0x199F0220)
#define CLASS_1_B48FFE703050178A_METHOD_1_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x199F0430)
#define CLASS_1_B48FFE703050178A_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x199EEC50)
#define CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x199F1120)
#define CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x199F1040)
#define CLASS_1_B48FFE703050178A_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x199F0480)
#define CLASS_1_B48FFE703050178A_METHOD_1_F1FEBBADC39F3EAB_OFFSET UNITYSDK_OFFSET(0x199EFE80)
#define CLASS_1_B48FFE703050178A_METHOD_1_FC26FA0DD9B4AAF4_OFFSET UNITYSDK_OFFSET(0x199F1170)
#define CLASS_1_B48FFE703050178A_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x199F0EC0)
#define CLASS_1_B48FFE703050178A_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x199F1030)
#define CLASS_1_B48FFE703050178A__CCTOR_OFFSET UNITYSDK_OFFSET(0x199F1210)
#define CLASS_1_B48FFE703050178A__CTOR_OFFSET UNITYSDK_OFFSET(0x199EBF20)

inline static constexpr unsigned int Class_1_B48FFE703050178A_TypeDefinitionIndex = 69167;

class Class_1_B48FFE703050178A : public ::System::Object
{
public:
	static ::System::Object** StaticGet_HLOKPFHJPAK()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x5AB50);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_PGJENCNMHIO()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x5AB58);
	}
	static ::Class_1_B48FFE703050178A** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_B48FFE703050178A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x5AB60);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_EPAOALAGIDG()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x5AB68);
	}
	static ::System::String** StaticGet_JDGBNEMINGK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x5AB70);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_IEPEBANINFA()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x5AB78);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_GAIPMKOKLMK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x5AB80);
	}
	static ::System::Int32* StaticGet_OHLDOJEPKIK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x126F0);
	}
	static ::System::Boolean* StaticGet__USE_UNLOAD_MODE_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x126F4);
	}
	static ::System::Boolean* StaticGet_MFAPAKONJHM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x126F5);
	}
	static ::System::Int32* StaticGet_MNNGKCFIJDL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x126F8);
	}
	static ::System::Int32* StaticGet_LPMNPMOGHNC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x126FC);
	}
	static ::System::Int32* StaticGet_DLLJPLKOKNJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x12700);
	}
	static ::System::Int32* StaticGet_BCFCOBBLHHK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x12704);
	}
	// static const ::System::Boolean PODAEAGLOIH; // 0x0
	::Class_1_DAF29F92478F6143* MLJLFFKDFLN; // 0x10
	::Class_1_375BC79DC2945ABF* OHIFADIMNBI; // 0x18
	::RPG::Client::AdventurePhase* FPILJLGACHP; // 0x20
	::RPG::GameCore::ConfigMunicipal* KNDIEMFEKOE; // 0x28
	::RPG::Client::Stage* PDAIGLPEMEE; // 0x30
	::Class_1_FFB8A2463BCB64C3* OELFHGJGCMC; // 0x38
	::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0x40
	::Class_1_C6FD03DFDE9D9EFF* GONBDOEJEEI; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_LodAssetRef_1<::UnityEngine::Material*>*>* CCCJFJHMKLL; // 0x50
	::RPG::GameCore::EntityManager* KDKBEPAJODM; // 0x58
	::Class_1_7956089D4F15495C* LAHKCCHHPEI; // 0x60
	::RPG::Client::MapDef* MJKJCCNJACA; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_Class_1_45C1679A8AACB55C*>* OHMLOKOKLDB; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_LodAssetRef_1<::UnityEngine::Mesh*>*>* JJDIAILEHIF; // 0x78
	::UnityEngine::Transform* KDFKBLCDHAD; // 0x80
	::System::String* PKDDJGKNAIA; // 0x88
	::RPG::GameCore::LodConfig* HEBPCEFHMHF; // 0x90
	::System::Boolean AFNOIPANLJD; // 0x98
	::System::Boolean MMDJHHBDDOH; // 0x99
	::System::Boolean AIBABFJNPFC; // 0x9A
	::System::Boolean OBIGBOCLHDL; // 0x9B
	::UnityEngine::Vector3 JJJMGGNCEIA; // 0x9C
	::System::UInt32 GHILCHKJHBD; // 0xA8
	::System::Boolean CKADKEJIEBK; // 0xAC
	::System::Boolean LPBDPPGMOBH; // 0xAD
	::System::Boolean AAECOAAJBFE; // 0xAE
	::System::Boolean LMPBNBJGKNA; // 0xAF
	::System::Boolean KKKDDNFCPNL; // 0xB0
	::System::Boolean MKPIJNBFOKG; // 0xB1
	::System::Boolean OFJLMEBKLAF; // 0xB2
	::System::Boolean KLPIKIAJPND; // 0xB3
	::System::Boolean ECDGFEHILJN; // 0xB4
	::UnityEngine::Vector3 KDBIIKOOGCP; // 0xB8
	::System::Nullable_1<::UnityEngine::Vector3> LBFMKPLAAFD; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_USE_UNLOAD_MODE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_GET_USE_UNLOAD_MODE_OFFSET))();
	}

	static ::System::Void Method_1_624AA189447107DD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_624AA189447107DD_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_B48FFE703050178A* Method_1_5372A60C2D3E0724()
	{
		return ((::Class_1_B48FFE703050178A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_5372A60C2D3E0724_OFFSET))();
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_881ECDB0423A42B4(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_881ECDB0423A42B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B4FB8F0E42A77C76(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_B4FB8F0E42A77C76_OFFSET))(this, a1);
	}

	::System::Void Method_1_14B208BC8BAFAB72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_14B208BC8BAFAB72_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BC960AC6249711A(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_7BC960AC6249711A_OFFSET))(this, a1);
	}

	::RPG::GameCore::WorldType Method_1_94D63CD6A22D9150()
	{
		return ((::RPG::GameCore::WorldType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_94D63CD6A22D9150_OFFSET))(this);
	}

	::System::Int32 Method_1_9DBD6035FFABEE8F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_9DBD6035FFABEE8F_OFFSET))(this);
	}

	::System::Int32 Method_1_9DBD6035FFABEE8F_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_9DBD6035FFABEE8F_1_OFFSET))(this);
	}

	::System::Single Method_1_E691C2EF6AE6A4A5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_E691C2EF6AE6A4A5_OFFSET))(this);
	}

	::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_68A2CA32DC720C44_OFFSET))(this);
	}

	::RPG::GameCore::GraphicQuality Method_1_6A3D6C9BA18CFB7D(::RPG::Client::EAssemblyNPC a1)
	{
		return ((::RPG::GameCore::GraphicQuality(*)(::PVOID, ::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_6A3D6C9BA18CFB7D_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_CEA6D0FCAC133580(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_CEA6D0FCAC133580_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_0C9ED05CEC07EE80(::RPG::Client::AssemNPC* a1, ::RPG::GameCore::LevelNPCPossessionInfo* a2, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a3, ::System::String* a4, ::RPG::Client::EAssemblyNPC a5, ::UnityEngine::Vector3 a6, ::System::UInt32 a7, ::System::Action_1<::RPG::GameCore::GameEntity*>* a8)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*, ::System::String*, ::RPG::Client::EAssemblyNPC, ::UnityEngine::Vector3, ::System::UInt32, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_0C9ED05CEC07EE80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_5D3796EB9E57E19B(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_5D3796EB9E57E19B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_D13CC732D8FAC62B(::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* a1, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D13CC732D8FAC62B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_3_OFFSET))(this);
	}

	::System::Void Method_1_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_E6D3C4C666E119D9_OFFSET))(this);
	}

	::System::Void Method_1_53FE75B00F3A21BF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_53FE75B00F3A21BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_60BAB51FAB46DBD1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_60BAB51FAB46DBD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_1_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1FEBBADC39F3EAB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_F1FEBBADC39F3EAB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FCCB5B9D36D35E9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_9FCCB5B9D36D35E9_OFFSET))(this, a1);
	}

	::RPG::GameCore::LodTemplate* Method_1_51C8137D5F369996(::RPG::Client::EAssemblyNPC a1)
	{
		return ((::RPG::GameCore::LodTemplate*(*)(::PVOID, ::RPG::Client::EAssemblyNPC))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_51C8137D5F369996_OFFSET))(this, a1);
	}

	::RPG::GameCore::ConfigMunicipalPedestrianOverride* Method_1_EA03228A65A776C9()
	{
		return ((::RPG::GameCore::ConfigMunicipalPedestrianOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_EA03228A65A776C9_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_55EB336B57E6DF60(::System::Boolean a1, ::Class_1_B48FFE703050178A_UseCameraAsStreamingCenterPosReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_B48FFE703050178A_UseCameraAsStreamingCenterPosReason))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_55EB336B57E6DF60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_804FD1465F915FF6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_804FD1465F915FF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B22289F0759E606(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_9B22289F0759E606_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_1_7244B72D2B0B3D10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_7244B72D2B0B3D10_OFFSET))(this);
	}

	::System::Void Method_1_4F190C0374A336BC(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4F190C0374A336BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_033E7FB1F728E6D8(::System::String* a1, ::System::Action_1<::UnityEngine::Mesh*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_033E7FB1F728E6D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_38120EE64C23EC1F(::System::String* a1, ::System::Action_1<::UnityEngine::Mesh*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_38120EE64C23EC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4BA38819BBD4AC04(::System::String* a1, ::System::Action_1<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_4BA38819BBD4AC04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A30B58436EF85543(::System::String* a1, ::System::Action_1<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_A30B58436EF85543_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_25E887788436F519(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_25E887788436F519_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC7787569730BDA2(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_DC7787569730BDA2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D49459DDE8B0DB26(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D49459DDE8B0DB26_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_68A2CA32DC720C44_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_68A2CA32DC720C44_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::TimeScaleStack* get_TimeScaleStack()
	{
		return ((::RPG::GameCore::TimeScaleStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_GET_TIMESCALESTACK_OFFSET))(this);
	}

	::System::Void set_TimeScaleStack(::RPG::GameCore::TimeScaleStack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeScaleStack*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_SET_TIMESCALESTACK_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_DAF29F92478F6143* Method_1_24748FC20F375725()
	{
		return ((::Class_1_DAF29F92478F6143*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_7956089D4F15495C* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_7956089D4F15495C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::Class_1_375BC79DC2945ABF* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_375BC79DC2945ABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::Class_1_C6FD03DFDE9D9EFF* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_C6FD03DFDE9D9EFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_1709D3280A2D3A51()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_1709D3280A2D3A51_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_FC26FA0DD9B4AAF4_OFFSET))(this);
	}
};
