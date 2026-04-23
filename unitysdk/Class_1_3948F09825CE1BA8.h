#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PauseRegionManagerReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_CEDC0206E1A3EA8E;
class Class_1_D256EDA05CFBDF64;
class Class_1_DE4C6B309308A230;
class Class_1_ECBCF86CDE61CBCA;
namespace RPG::Client { class RegionManagerDebugMono; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRegionCollection; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3948F09825CE1BA8_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0x9885C70)
#define CLASS_1_3948F09825CE1BA8_GET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0x9885C40)
#define CLASS_1_3948F09825CE1BA8_GET_HASREGION_OFFSET UNITYSDK_OFFSET(0x9885C20)
#define CLASS_1_3948F09825CE1BA8_GET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0x9885CB0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_047BB41CCD1DE9E0_OFFSET UNITYSDK_OFFSET(0x98845B0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x9882F10)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x98811E0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0DEC1A8F053BEBEC_OFFSET UNITYSDK_OFFSET(0x987E920)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_1_OFFSET UNITYSDK_OFFSET(0x987EA40)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_2_OFFSET UNITYSDK_OFFSET(0x987EAE0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_3_OFFSET UNITYSDK_OFFSET(0x987EB80)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_OFFSET UNITYSDK_OFFSET(0x987E9A0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_0F43B59E3B7133BF_OFFSET UNITYSDK_OFFSET(0x9881250)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_1408C4EC15DBC35E_OFFSET UNITYSDK_OFFSET(0x9885CD0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_1BA8221723B2A0E3_1_OFFSET UNITYSDK_OFFSET(0x987ECE0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_1BA8221723B2A0E3_OFFSET UNITYSDK_OFFSET(0x987EC70)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x987EC20)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x9885C10)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_2964439C006AF9F5_OFFSET UNITYSDK_OFFSET(0x9885AE0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x9884700)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x9880DD0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_394905343968AA47_OFFSET UNITYSDK_OFFSET(0x987FB50)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_418875B112A8CF2C_OFFSET UNITYSDK_OFFSET(0x987F4C0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_42174EA9AC16B0A9_OFFSET UNITYSDK_OFFSET(0x987F920)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_591B9DD5207D4D7E_OFFSET UNITYSDK_OFFSET(0x9883F40)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_6ACD15849AFFCD1A_OFFSET UNITYSDK_OFFSET(0x9881380)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_7A2B229F4DF63EA8_OFFSET UNITYSDK_OFFSET(0x987F2A0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x987FA00)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x9882670)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A313B98EFA8DDABE_OFFSET UNITYSDK_OFFSET(0x987EE50)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_1_OFFSET UNITYSDK_OFFSET(0x987EDD0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_OFFSET UNITYSDK_OFFSET(0x987ED50)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A57CD14D7124C9B1_OFFSET UNITYSDK_OFFSET(0x9884790)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A85A5A4F484E8E77_OFFSET UNITYSDK_OFFSET(0x987E420)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_A8B54A6DA5DF3C6F_OFFSET UNITYSDK_OFFSET(0x987E5D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_AA8D34EB42413671_OFFSET UNITYSDK_OFFSET(0x9884890)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_ABE6546F7C9289D5_OFFSET UNITYSDK_OFFSET(0x987F1D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_B4C5013482293259_OFFSET UNITYSDK_OFFSET(0x9884810)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_B65D7F5A3F231470_OFFSET UNITYSDK_OFFSET(0x9884640)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_BA7208D5810564A8_OFFSET UNITYSDK_OFFSET(0x987E6F0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_BE1D74FB34792AB9_OFFSET UNITYSDK_OFFSET(0x987E530)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9884570)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CA4D841D64DC3EA2_OFFSET UNITYSDK_OFFSET(0x98805A0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_CCD7CE05545A362B_OFFSET UNITYSDK_OFFSET(0x9885C60)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_D80E77267CCBA66A_OFFSET UNITYSDK_OFFSET(0x9883090)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E138663013B7F6C5_OFFSET UNITYSDK_OFFSET(0x9885CA0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E6A156CCCF0451F6_OFFSET UNITYSDK_OFFSET(0x9884DD0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_E90A8A4A64A324ED_OFFSET UNITYSDK_OFFSET(0x987E160)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9885C90)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F3FEE5E138A4E64E_OFFSET UNITYSDK_OFFSET(0x98837F0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x987E3D0)
#define CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x987E120)
#define CLASS_1_3948F09825CE1BA8_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0x9885C80)
#define CLASS_1_3948F09825CE1BA8_SET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0x9885C50)
#define CLASS_1_3948F09825CE1BA8_SET_HASREGION_OFFSET UNITYSDK_OFFSET(0x9885C30)
#define CLASS_1_3948F09825CE1BA8_SET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0x9885CC0)
#define CLASS_1_3948F09825CE1BA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x9885CE0)
#define CLASS_1_3948F09825CE1BA8__CTOR_OFFSET UNITYSDK_OFFSET(0x987FBF0)

inline static constexpr unsigned int Class_1_3948F09825CE1BA8_TypeDefinitionIndex = 57355;

class Class_1_3948F09825CE1BA8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_41()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0x121F0);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0x5770);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3948F09825CE1BA8_TypeDefinitionIndex)->GetStaticField(0x5771);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_ECBCF86CDE61CBCA*>* Field_1_39; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_23; // 0x18
	::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_27; // 0x20
	::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_21; // 0x30
	::RPG::GameCore::StageRegionCollection* Field_1_12; // 0x38
	::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_29; // 0x40
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurrentActiveAndConnectionRegionsIDs_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ECBCF86CDE61CBCA*>* Field_1_31; // 0x50
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Action_2<::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*>*>* Field_1_40; // 0x58
	::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_24; // 0x60
	::UnityEngine::GameObject* Field_1_32; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_ECBCF86CDE61CBCA*>* Field_1_42; // 0x70
	::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*>* Field_1_36; // 0x78
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_43; // 0x80
	::RPG::Client::RegionManagerDebugMono* Field_1_33; // 0x88
	::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_19; // 0x90
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D256EDA05CFBDF64*>* Field_1_38; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0xA0
	::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_35; // 0xA8
	::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_20; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_11; // 0xB8
	::System::Action_2<::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*>* Field_1_37; // 0xC0
	::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_26; // 0xC8
	::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* Field_1_28; // 0xD0
	::RPG::Client::Stage* Field_1_14; // 0xD8
	::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_22; // 0xE0
	::Class_1_CEDC0206E1A3EA8E* Field_1_0; // 0xE8
	::Class_1_ECBCF86CDE61CBCA* Field_1_17; // 0xF0
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_44; // 0xF8
	::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_25; // 0x100
	::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_34; // 0x108
	::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>* Field_1_30; // 0x110
	::RPG::Client::ReasonBool_1<::RPG::Client::PauseRegionManagerReason> Field_1_16; // 0x118
	::System::UInt64 Field_1_2; // 0x120
	::System::Boolean Field_1_18; // 0x128
	::System::Boolean Field_1_15; // 0x129
	::System::Boolean _HasRegion_k__BackingField; // 0x12A
	::System::Boolean _EnableGroupRegionStreaming_k__BackingField; // 0x12B
	::System::Boolean Field_1_6; // 0x12C
	::System::Boolean _SourceDistUseRegionV1_k__BackingField; // 0x12D
	::System::UInt64 Field_1_3; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8__CCTOR_OFFSET))();
	}

	::Class_1_CEDC0206E1A3EA8E* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CEDC0206E1A3EA8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_E90A8A4A64A324ED(::Class_1_DE4C6B309308A230* a1, ::Class_1_ECBCF86CDE61CBCA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E90A8A4A64A324ED_OFFSET))(this, a1, a2);
	}

	::Class_1_ECBCF86CDE61CBCA* Method_1_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_ECBCF86CDE61CBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::Class_1_ECBCF86CDE61CBCA* Method_1_A85A5A4F484E8E77(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::Class_1_ECBCF86CDE61CBCA*(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A85A5A4F484E8E77_OFFSET))(this, a1);
	}

	static ::Class_1_ECBCF86CDE61CBCA* Method_1_A8B54A6DA5DF3C6F(::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_ECBCF86CDE61CBCA*(*)(::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A8B54A6DA5DF3C6F_OFFSET))(a1, a2);
	}

	::Class_1_ECBCF86CDE61CBCA* Method_1_BE1D74FB34792AB9(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_ECBCF86CDE61CBCA*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_BE1D74FB34792AB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA7208D5810564A8(::RPG::GameCore::GameEntity* a1, ::System::Action_2<::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_2<::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_BA7208D5810564A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DEC1A8F053BEBEC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0DEC1A8F053BEBEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536(::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_1(::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_2(::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536_3(::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0E5012DEE8909536_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_1_1BA8221723B2A0E3(::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_1BA8221723B2A0E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BA8221723B2A0E3_1(::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_1BA8221723B2A0E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55C38544D359C3B(::System::Action_2<::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A55C38544D359C3B_1(::System::Action_2<::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A55C38544D359C3B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A313B98EFA8DDABE(::System::Action_3<::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A313B98EFA8DDABE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7A2B229F4DF63EA8(::System::Action_3<::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_7A2B229F4DF63EA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_418875B112A8CF2C(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action* a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_418875B112A8CF2C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_42174EA9AC16B0A9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_42174EA9AC16B0A9_OFFSET))(this, a1);
	}

	static ::Class_1_3948F09825CE1BA8* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_3948F09825CE1BA8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_995B4AEB9D9468D5_OFFSET))();
	}

	static ::RPG::GameCore::StageRegionCollection* Method_1_394905343968AA47(::System::String* a1)
	{
		return ((::RPG::GameCore::StageRegionCollection*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_394905343968AA47_OFFSET))(a1);
	}

	::System::Void Method_1_CA4D841D64DC3EA2(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CA4D841D64DC3EA2_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_0F43B59E3B7133BF(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0F43B59E3B7133BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D80E77267CCBA66A(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_D80E77267CCBA66A_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_047BB41CCD1DE9E0(::RPG::Client::PauseRegionManagerReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_047BB41CCD1DE9E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B65D7F5A3F231470(::RPG::Client::PauseRegionManagerReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_B65D7F5A3F231470_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ABE6546F7C9289D5(::System::UInt32 a1, ::Class_1_ECBCF86CDE61CBCA*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_ECBCF86CDE61CBCA*&))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_ABE6546F7C9289D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6ACD15849AFFCD1A(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_6ACD15849AFFCD1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_591B9DD5207D4D7E(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_591B9DD5207D4D7E_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Method_1_AA8D34EB42413671(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_AA8D34EB42413671_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_E6A156CCCF0451F6(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E6A156CCCF0451F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F3FEE5E138A4E64E(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F3FEE5E138A4E64E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A57CD14D7124C9B1(::Class_1_ECBCF86CDE61CBCA* a1, ::Class_1_DE4C6B309308A230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_A57CD14D7124C9B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B4C5013482293259(::Class_1_ECBCF86CDE61CBCA* a1, ::Class_1_DE4C6B309308A230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_B4C5013482293259_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_2964439C006AF9F5()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_2964439C006AF9F5_OFFSET))(this);
	}

	::Class_1_ECBCF86CDE61CBCA* Method_1_24748FC20F375725()
	{
		return ((::Class_1_ECBCF86CDE61CBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_ECBCF86CDE61CBCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Boolean get_HasRegion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_HASREGION_OFFSET))(this);
	}

	::System::Void set_HasRegion(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_HASREGION_OFFSET))(this, value);
	}

	::System::Boolean get_EnableGroupRegionStreaming()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this);
	}

	::System::Void set_EnableGroupRegionStreaming(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_CCD7CE05545A362B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_CCD7CE05545A362B_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_CurrentActiveAndConnectionRegionsIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this);
	}

	::System::Void set_CurrentActiveAndConnectionRegionsIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionCollection* Method_1_E138663013B7F6C5()
	{
		return ((::RPG::GameCore::StageRegionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_E138663013B7F6C5_OFFSET))(this);
	}

	::System::Boolean get_SourceDistUseRegionV1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_GET_SOURCEDISTUSEREGIONV1_OFFSET))(this);
	}

	::System::Void set_SourceDistUseRegionV1(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_SET_SOURCEDISTUSEREGIONV1_OFFSET))(this, value);
	}

	::RPG::Client::Stage* Method_1_1408C4EC15DBC35E()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3948F09825CE1BA8_METHOD_1_1408C4EC15DBC35E_OFFSET))(this);
	}
};
