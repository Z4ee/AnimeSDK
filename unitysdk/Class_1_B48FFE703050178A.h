#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B48FFE703050178A_UseCameraAsStreamingCenterPosReason.h"
#include "unitysdk/RPG/Client/EAssemblyNPC.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/WorldType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_59E967A53C7B71C0;
class Class_1_7956089D4F15495C;
class Class_1_B48FFE703050178A_Class_1_45C1679A8AACB55C;
class Class_1_BDD8A5928D7AD0BA;
class Class_1_C933C1C9CFD23DE2;
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

#define CLASS_1_B48FFE703050178A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x135F7C60)
#define CLASS_1_B48FFE703050178A_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x135FC420)
#define CLASS_1_B48FFE703050178A_GET_USE_UNLOAD_MODE_OFFSET UNITYSDK_OFFSET(0x135F7500)
#define CLASS_1_B48FFE703050178A_METHOD_1_033E7FB1F728E6D8_OFFSET UNITYSDK_OFFSET(0x135FBAF0)
#define CLASS_1_B48FFE703050178A_METHOD_1_0C9ED05CEC07EE80_OFFSET UNITYSDK_OFFSET(0x135F9D10)
#define CLASS_1_B48FFE703050178A_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x135F99A0)
#define CLASS_1_B48FFE703050178A_METHOD_1_14B208BC8BAFAB72_OFFSET UNITYSDK_OFFSET(0x135F8400)
#define CLASS_1_B48FFE703050178A_METHOD_1_1709D3280A2D3A51_OFFSET UNITYSDK_OFFSET(0x135FC490)
#define CLASS_1_B48FFE703050178A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x135FC3C0)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x135FC460)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x135FC470)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x135FC480)
#define CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x135FC450)
#define CLASS_1_B48FFE703050178A_METHOD_1_25E887788436F519_OFFSET UNITYSDK_OFFSET(0x135FC150)
#define CLASS_1_B48FFE703050178A_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x135F7CC0)
#define CLASS_1_B48FFE703050178A_METHOD_1_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x135FAE20)
#define CLASS_1_B48FFE703050178A_METHOD_1_38120EE64C23EC1F_OFFSET UNITYSDK_OFFSET(0x135FBCC0)
#define CLASS_1_B48FFE703050178A_METHOD_1_41B0BDA999296668_OFFSET UNITYSDK_OFFSET(0x135F8260)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x135FAAD0)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x135FAC70)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x135FADB0)
#define CLASS_1_B48FFE703050178A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x135FA980)
#define CLASS_1_B48FFE703050178A_METHOD_1_4BA38819BBD4AC04_OFFSET UNITYSDK_OFFSET(0x135FBE20)
#define CLASS_1_B48FFE703050178A_METHOD_1_4F190C0374A336BC_OFFSET UNITYSDK_OFFSET(0x135FBA10)
#define CLASS_1_B48FFE703050178A_METHOD_1_51C8137D5F369996_OFFSET UNITYSDK_OFFSET(0x135FB540)
#define CLASS_1_B48FFE703050178A_METHOD_1_5372A60C2D3E0724_OFFSET UNITYSDK_OFFSET(0x135F7750)
#define CLASS_1_B48FFE703050178A_METHOD_1_53FE75B00F3A21BF_OFFSET UNITYSDK_OFFSET(0x135FAE80)
#define CLASS_1_B48FFE703050178A_METHOD_1_55EB336B57E6DF60_OFFSET UNITYSDK_OFFSET(0x135FB710)
#define CLASS_1_B48FFE703050178A_METHOD_1_5A417FF45128DEF5_OFFSET UNITYSDK_OFFSET(0x135F8A30)
#define CLASS_1_B48FFE703050178A_METHOD_1_5D3796EB9E57E19B_OFFSET UNITYSDK_OFFSET(0x135F9E60)
#define CLASS_1_B48FFE703050178A_METHOD_1_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0x135FAF90)
#define CLASS_1_B48FFE703050178A_METHOD_1_624AA189447107DD_OFFSET UNITYSDK_OFFSET(0x135F7540)
#define CLASS_1_B48FFE703050178A_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x135F8500)
#define CLASS_1_B48FFE703050178A_METHOD_1_6A3D6C9BA18CFB7D_OFFSET UNITYSDK_OFFSET(0x135F9AA0)
#define CLASS_1_B48FFE703050178A_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x135F8FC0)
#define CLASS_1_B48FFE703050178A_METHOD_1_7244B72D2B0B3D10_OFFSET UNITYSDK_OFFSET(0x135FB9C0)
#define CLASS_1_B48FFE703050178A_METHOD_1_804FD1465F915FF6_OFFSET UNITYSDK_OFFSET(0x135FB780)
#define CLASS_1_B48FFE703050178A_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x135F7A90)
#define CLASS_1_B48FFE703050178A_METHOD_1_94D63CD6A22D9150_OFFSET UNITYSDK_OFFSET(0x135F90A0)
#define CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x135FACF0)
#define CLASS_1_B48FFE703050178A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x135FA8A0)
#define CLASS_1_B48FFE703050178A_METHOD_1_9B22289F0759E606_OFFSET UNITYSDK_OFFSET(0x135FB820)
#define CLASS_1_B48FFE703050178A_METHOD_1_9DBD6035FFABEE8F_1_OFFSET UNITYSDK_OFFSET(0x135F9400)
#define CLASS_1_B48FFE703050178A_METHOD_1_9DBD6035FFABEE8F_OFFSET UNITYSDK_OFFSET(0x135F9100)
#define CLASS_1_B48FFE703050178A_METHOD_1_9FCCB5B9D36D35E9_OFFSET UNITYSDK_OFFSET(0x135F8600)
#define CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x135FAB40)
#define CLASS_1_B48FFE703050178A_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x135FA9F0)
#define CLASS_1_B48FFE703050178A_METHOD_1_A30B58436EF85543_OFFSET UNITYSDK_OFFSET(0x135FBFF0)
#define CLASS_1_B48FFE703050178A_METHOD_1_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x135FB220)
#define CLASS_1_B48FFE703050178A_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x135FA110)
#define CLASS_1_B48FFE703050178A_METHOD_1_B036E5806AE655F4_OFFSET UNITYSDK_OFFSET(0x135FA650)
#define CLASS_1_B48FFE703050178A_METHOD_1_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x135FB090)
#define CLASS_1_B48FFE703050178A_METHOD_1_B4FB8F0E42A77C76_OFFSET UNITYSDK_OFFSET(0x135F8370)
#define CLASS_1_B48FFE703050178A_METHOD_1_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x135FA0A0)
#define CLASS_1_B48FFE703050178A_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x135FB920)
#define CLASS_1_B48FFE703050178A_METHOD_1_CEA6D0FCAC133580_OFFSET UNITYSDK_OFFSET(0x135F9C90)
#define CLASS_1_B48FFE703050178A_METHOD_1_D13CC732D8FAC62B_OFFSET UNITYSDK_OFFSET(0x135F9FC0)
#define CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x135FC550)
#define CLASS_1_B48FFE703050178A_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x135FC530)
#define CLASS_1_B48FFE703050178A_METHOD_1_DC7787569730BDA2_OFFSET UNITYSDK_OFFSET(0x135FC200)
#define CLASS_1_B48FFE703050178A_METHOD_1_E49089327984AE52_OFFSET UNITYSDK_OFFSET(0x135FC2C0)
#define CLASS_1_B48FFE703050178A_METHOD_1_E691C2EF6AE6A4A5_OFFSET UNITYSDK_OFFSET(0x135F9760)
#define CLASS_1_B48FFE703050178A_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x135FB430)
#define CLASS_1_B48FFE703050178A_METHOD_1_EA03228A65A776C9_OFFSET UNITYSDK_OFFSET(0x135FB6B0)
#define CLASS_1_B48FFE703050178A_METHOD_1_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x135FB8C0)
#define CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x135FC520)
#define CLASS_1_B48FFE703050178A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x135FC440)
#define CLASS_1_B48FFE703050178A_METHOD_1_F1FEBBADC39F3EAB_OFFSET UNITYSDK_OFFSET(0x135FB310)
#define CLASS_1_B48FFE703050178A_METHOD_1_FC26FA0DD9B4AAF4_OFFSET UNITYSDK_OFFSET(0x135FC570)
#define CLASS_1_B48FFE703050178A_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x135FC360)
#define CLASS_1_B48FFE703050178A_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0x135FC430)
#define CLASS_1_B48FFE703050178A__CCTOR_OFFSET UNITYSDK_OFFSET(0x135FC610)
#define CLASS_1_B48FFE703050178A__CTOR_OFFSET UNITYSDK_OFFSET(0x135F75E0)

inline static constexpr unsigned int Class_1_B48FFE703050178A_TypeDefinitionIndex = 64726;

class Class_1_B48FFE703050178A : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x44270);
	}
	static ::Class_1_B48FFE703050178A** StaticGet_Field_1_1()
	{
		return (::Class_1_B48FFE703050178A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x44278);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x44280);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x44288);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_4()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x44290);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_5()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x44298);
	}
	static ::System::Object** StaticGet_Field_1_6()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0x442A0);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xC220);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xC224);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xC228);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xC22C);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xC230);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xC234);
	}
	static ::System::Boolean* StaticGet__USE_UNLOAD_MODE_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48FFE703050178A_TypeDefinitionIndex)->GetStaticField(0xC235);
	}
	// static const ::System::Boolean Field_1_14; // 0x0
	::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0x10
	::RPG::Client::AdventurePhase* Field_1_16; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_LodAssetRef_1<::UnityEngine::Mesh*>*>* Field_1_17; // 0x20
	::RPG::GameCore::LodConfig* Field_1_18; // 0x28
	::System::String* Field_1_19; // 0x30
	::RPG::Client::MapDef* Field_1_20; // 0x38
	::Class_1_C933C1C9CFD23DE2* Field_1_21; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_LodAssetRef_1<::UnityEngine::Material*>*>* Field_1_22; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B48FFE703050178A_Class_1_45C1679A8AACB55C*>* Field_1_23; // 0x50
	::RPG::Client::Stage* Field_1_24; // 0x58
	::Class_1_7956089D4F15495C* Field_1_25; // 0x60
	::Class_1_FFB8A2463BCB64C3* Field_1_26; // 0x68
	::Class_1_BDD8A5928D7AD0BA* Field_1_27; // 0x70
	::RPG::GameCore::EntityManager* Field_1_28; // 0x78
	::Class_1_59E967A53C7B71C0* Field_1_29; // 0x80
	::UnityEngine::Transform* Field_1_30; // 0x88
	::RPG::GameCore::ConfigMunicipal* Field_1_31; // 0x90
	::System::Boolean Field_1_32; // 0x98
	::System::Boolean Field_1_33; // 0x99
	::System::UInt32 Field_1_34; // 0x9C
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_35; // 0xA0
	::System::Boolean Field_1_36; // 0xB0
	::System::Boolean Field_1_37; // 0xB1
	::System::Boolean Field_1_38; // 0xB2
	::System::Boolean Field_1_39; // 0xB3
	::System::Boolean Field_1_40; // 0xB4
	::System::Boolean Field_1_41; // 0xB5
	::System::Boolean Field_1_42; // 0xB6
	::System::Boolean Field_1_43; // 0xB7
	::System::Boolean Field_1_44; // 0xB8
	::System::Boolean Field_1_45; // 0xB9
	::System::Boolean Field_1_46; // 0xBA
	::UnityEngine::Vector3 Field_1_47; // 0xBC
	::UnityEngine::Vector3 Field_1_48; // 0xC8

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

	::System::Void Method_1_41B0BDA999296668(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_41B0BDA999296668_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B4FB8F0E42A77C76(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_B4FB8F0E42A77C76_OFFSET))(this, a1);
	}

	::System::Void Method_1_14B208BC8BAFAB72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_14B208BC8BAFAB72_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A417FF45128DEF5(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_5A417FF45128DEF5_OFFSET))(this, a1);
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

	::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_124E7DAB85EAFECD_OFFSET))(this);
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

	::System::Void Method_1_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_AAD21DE195D05736_OFFSET))(this);
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

	::System::Void Method_1_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_2DA8F7A684C1DC34_OFFSET))(this);
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

	::System::Void Method_1_B036E5806AE655F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_B036E5806AE655F4_OFFSET))(this);
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

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
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

	::System::Void Method_1_E49089327984AE52(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_E49089327984AE52_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_68A2CA32DC720C44_OFFSET))(this);
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

	::Class_1_59E967A53C7B71C0* Method_1_24748FC20F375725()
	{
		return ((::Class_1_59E967A53C7B71C0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_7956089D4F15495C* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_7956089D4F15495C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::Class_1_BDD8A5928D7AD0BA* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_BDD8A5928D7AD0BA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::Class_1_C933C1C9CFD23DE2* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_C933C1C9CFD23DE2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48FFE703050178A_METHOD_1_24748FC20F375725_3_OFFSET))(this);
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
