#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_0FC69F51F876980B_1.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_1.h"
#include "unitysdk/Enum_3_BEADE0D60E8972CC.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_B6B482D5E3A4F997.h"
#include "unitysdk/Struct_2_BD55FB98E7CE49F3.h"
#include "unitysdk/Struct_2_E555EF9B1EABB0B4.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_436;
class Class_0_16E4307DCC419505_437;
class Class_1_66C4D81440373C6E;
class Class_1_B7E341C5F1A6F199;
class Class_2_13CC21223F9A564C;
class Class_2_1F102D37972FE675;
class Class_2_32FEDBEB5C8D92AF;
class Class_2_3AF9FF30E97A5BEE;
class Class_2_3CB5FE397F4526FE;
class Class_2_659FD8D80237B753_27;
class Class_2_C66010578763963F;
class Class_2_D2635BA9D50B0AA7;
class Class_2_FF870BBAEF08CB0B_4;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E20366D1301D6555_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x194F5A90)
#define CLASS_3_E20366D1301D6555_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x194F5FE0)
#define CLASS_3_E20366D1301D6555_METHOD_3_0068EB3874903B5C_1_OFFSET UNITYSDK_OFFSET(0x19501950)
#define CLASS_3_E20366D1301D6555_METHOD_3_0068EB3874903B5C_OFFSET UNITYSDK_OFFSET(0x19501070)
#define CLASS_3_E20366D1301D6555_METHOD_3_02F12016C38772D9_OFFSET UNITYSDK_OFFSET(0x194F7F90)
#define CLASS_3_E20366D1301D6555_METHOD_3_048FD57E844426DD_OFFSET UNITYSDK_OFFSET(0x19502F10)
#define CLASS_3_E20366D1301D6555_METHOD_3_04E5A3C91BCECA3E_OFFSET UNITYSDK_OFFSET(0x19501400)
#define CLASS_3_E20366D1301D6555_METHOD_3_088C9E99B2B1F58A_OFFSET UNITYSDK_OFFSET(0x194F9490)
#define CLASS_3_E20366D1301D6555_METHOD_3_0944E13101E3B11D_OFFSET UNITYSDK_OFFSET(0x194F6830)
#define CLASS_3_E20366D1301D6555_METHOD_3_0998F9CB19169425_OFFSET UNITYSDK_OFFSET(0x194FD5D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_0D5E1D6B20EA2168_OFFSET UNITYSDK_OFFSET(0x19501CE0)
#define CLASS_3_E20366D1301D6555_METHOD_3_0E1A217F5578530C_OFFSET UNITYSDK_OFFSET(0x194FE260)
#define CLASS_3_E20366D1301D6555_METHOD_3_0FF805A65B4CA9B6_OFFSET UNITYSDK_OFFSET(0x19502D30)
#define CLASS_3_E20366D1301D6555_METHOD_3_14C8E83BE7B9FF05_OFFSET UNITYSDK_OFFSET(0x19502DD0)
#define CLASS_3_E20366D1301D6555_METHOD_3_21DB8E6F31E6B2BF_OFFSET UNITYSDK_OFFSET(0x19500360)
#define CLASS_3_E20366D1301D6555_METHOD_3_2D03A833DDDE3FCB_OFFSET UNITYSDK_OFFSET(0x194FCED0)
#define CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_1_OFFSET UNITYSDK_OFFSET(0x19504170)
#define CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_OFFSET UNITYSDK_OFFSET(0x19502050)
#define CLASS_3_E20366D1301D6555_METHOD_3_3645FDB85192C5E2_OFFSET UNITYSDK_OFFSET(0x194F6C70)
#define CLASS_3_E20366D1301D6555_METHOD_3_3B2233B36BC190C7_OFFSET UNITYSDK_OFFSET(0x194FF610)
#define CLASS_3_E20366D1301D6555_METHOD_3_3D61BF6677F37AD0_OFFSET UNITYSDK_OFFSET(0x194F8120)
#define CLASS_3_E20366D1301D6555_METHOD_3_3E93FA6F20F95942_1_OFFSET UNITYSDK_OFFSET(0x194FE650)
#define CLASS_3_E20366D1301D6555_METHOD_3_3E93FA6F20F95942_OFFSET UNITYSDK_OFFSET(0x194F84E0)
#define CLASS_3_E20366D1301D6555_METHOD_3_432E8114528FD5E4_OFFSET UNITYSDK_OFFSET(0x19503540)
#define CLASS_3_E20366D1301D6555_METHOD_3_471DB1CFA13F2FBB_OFFSET UNITYSDK_OFFSET(0x19504900)
#define CLASS_3_E20366D1301D6555_METHOD_3_47E478EA85B22218_1_OFFSET UNITYSDK_OFFSET(0x19501A40)
#define CLASS_3_E20366D1301D6555_METHOD_3_47E478EA85B22218_OFFSET UNITYSDK_OFFSET(0x19501160)
#define CLASS_3_E20366D1301D6555_METHOD_3_4919F93F1EBB4B5A_OFFSET UNITYSDK_OFFSET(0x194FB7C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_1_OFFSET UNITYSDK_OFFSET(0x194FAFA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_OFFSET UNITYSDK_OFFSET(0x194F9D70)
#define CLASS_3_E20366D1301D6555_METHOD_3_5162853E985ABA1B_OFFSET UNITYSDK_OFFSET(0x194FCBA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_54762394B0510DCC_OFFSET UNITYSDK_OFFSET(0x19501FA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_6653806D0E572E4B_OFFSET UNITYSDK_OFFSET(0x195042F0)
#define CLASS_3_E20366D1301D6555_METHOD_3_66983D3853E5820F_OFFSET UNITYSDK_OFFSET(0x194F6A80)
#define CLASS_3_E20366D1301D6555_METHOD_3_7509E66D5185EE9B_OFFSET UNITYSDK_OFFSET(0x194FE380)
#define CLASS_3_E20366D1301D6555_METHOD_3_75A06BFA1B0DD60C_OFFSET UNITYSDK_OFFSET(0x194F61D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_7724916078DA132B_OFFSET UNITYSDK_OFFSET(0x194F8780)
#define CLASS_3_E20366D1301D6555_METHOD_3_7B312B287EB64FEB_OFFSET UNITYSDK_OFFSET(0x19503090)
#define CLASS_3_E20366D1301D6555_METHOD_3_7CADE60E739F1365_OFFSET UNITYSDK_OFFSET(0x19503320)
#define CLASS_3_E20366D1301D6555_METHOD_3_803589031DCB0BDA_OFFSET UNITYSDK_OFFSET(0x19505370)
#define CLASS_3_E20366D1301D6555_METHOD_3_905FD4FF0CBCACB3_OFFSET UNITYSDK_OFFSET(0x194FEB50)
#define CLASS_3_E20366D1301D6555_METHOD_3_965CEF19961E4EB8_OFFSET UNITYSDK_OFFSET(0x194F7650)
#define CLASS_3_E20366D1301D6555_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x19500DC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_9F06645D4D4EE749_OFFSET UNITYSDK_OFFSET(0x194F7A70)
#define CLASS_3_E20366D1301D6555_METHOD_3_A1B7F4023607C863_1_OFFSET UNITYSDK_OFFSET(0x194F7790)
#define CLASS_3_E20366D1301D6555_METHOD_3_A1B7F4023607C863_OFFSET UNITYSDK_OFFSET(0x194F6CC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_A630782CBAD30FEA_OFFSET UNITYSDK_OFFSET(0x194F9C60)
#define CLASS_3_E20366D1301D6555_METHOD_3_A7A0D4230851EFAF_OFFSET UNITYSDK_OFFSET(0x194F7980)
#define CLASS_3_E20366D1301D6555_METHOD_3_AF5C6F6152377069_OFFSET UNITYSDK_OFFSET(0x195032A0)
#define CLASS_3_E20366D1301D6555_METHOD_3_B2811DD8EFB34178_OFFSET UNITYSDK_OFFSET(0x194F6BB0)
#define CLASS_3_E20366D1301D6555_METHOD_3_B3E229B668ACCF23_OFFSET UNITYSDK_OFFSET(0x194FAB80)
#define CLASS_3_E20366D1301D6555_METHOD_3_B8EEE779B6BF1C93_1_OFFSET UNITYSDK_OFFSET(0x194F74B0)
#define CLASS_3_E20366D1301D6555_METHOD_3_B8EEE779B6BF1C93_OFFSET UNITYSDK_OFFSET(0x194F6EB0)
#define CLASS_3_E20366D1301D6555_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x194FF7C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_BE7162BD5F0777E0_OFFSET UNITYSDK_OFFSET(0x194F7050)
#define CLASS_3_E20366D1301D6555_METHOD_3_C6B38F382EBB9D9D_1_OFFSET UNITYSDK_OFFSET(0x195021D0)
#define CLASS_3_E20366D1301D6555_METHOD_3_C6B38F382EBB9D9D_OFFSET UNITYSDK_OFFSET(0x19502720)
#define CLASS_3_E20366D1301D6555_METHOD_3_C6C048AEE0387135_OFFSET UNITYSDK_OFFSET(0x19503A00)
#define CLASS_3_E20366D1301D6555_METHOD_3_C6C0F471E996E270_OFFSET UNITYSDK_OFFSET(0x194FACC0)
#define CLASS_3_E20366D1301D6555_METHOD_3_C878AA2CC201D2EB_1_OFFSET UNITYSDK_OFFSET(0x195006F0)
#define CLASS_3_E20366D1301D6555_METHOD_3_C878AA2CC201D2EB_OFFSET UNITYSDK_OFFSET(0x194FB700)
#define CLASS_3_E20366D1301D6555_METHOD_3_C905AA086F4814DA_OFFSET UNITYSDK_OFFSET(0x194FB620)
#define CLASS_3_E20366D1301D6555_METHOD_3_CA35629A705ECA46_OFFSET UNITYSDK_OFFSET(0x194FF850)
#define CLASS_3_E20366D1301D6555_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x194FAAF0)
#define CLASS_3_E20366D1301D6555_METHOD_3_CB5EDB7E5E2C90F5_OFFSET UNITYSDK_OFFSET(0x19505290)
#define CLASS_3_E20366D1301D6555_METHOD_3_D1C6E7E2DD79C148_OFFSET UNITYSDK_OFFSET(0x19500E00)
#define CLASS_3_E20366D1301D6555_METHOD_3_D2570AA6795434FE_OFFSET UNITYSDK_OFFSET(0x194FA3F0)
#define CLASS_3_E20366D1301D6555_METHOD_3_D4326C7FAE1D4241_OFFSET UNITYSDK_OFFSET(0x194FE8F0)
#define CLASS_3_E20366D1301D6555_METHOD_3_D613321D03157EDB_OFFSET UNITYSDK_OFFSET(0x194FE450)
#define CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_1_OFFSET UNITYSDK_OFFSET(0x194FA2C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_OFFSET UNITYSDK_OFFSET(0x194FB4F0)
#define CLASS_3_E20366D1301D6555_METHOD_3_DA3ACFA1316D231A_OFFSET UNITYSDK_OFFSET(0x195007B0)
#define CLASS_3_E20366D1301D6555_METHOD_3_DF518C5F5B4B18A5_1_OFFSET UNITYSDK_OFFSET(0x19502C70)
#define CLASS_3_E20366D1301D6555_METHOD_3_DF518C5F5B4B18A5_OFFSET UNITYSDK_OFFSET(0x19501890)
#define CLASS_3_E20366D1301D6555_METHOD_3_E028D6792B3F2719_OFFSET UNITYSDK_OFFSET(0x19503250)
#define CLASS_3_E20366D1301D6555_METHOD_3_E0586961C3344BFB_OFFSET UNITYSDK_OFFSET(0x195049B0)
#define CLASS_3_E20366D1301D6555_METHOD_3_E2B524554C60449B_OFFSET UNITYSDK_OFFSET(0x195033C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_E4251622442C23DF_OFFSET UNITYSDK_OFFSET(0x194FFC00)
#define CLASS_3_E20366D1301D6555_METHOD_3_EF79E6A82B470572_1_OFFSET UNITYSDK_OFFSET(0x19503AA0)
#define CLASS_3_E20366D1301D6555_METHOD_3_EF79E6A82B470572_OFFSET UNITYSDK_OFFSET(0x194FA4C0)
#define CLASS_3_E20366D1301D6555_METHOD_3_F098C4EC951B3DB9_OFFSET UNITYSDK_OFFSET(0x19501780)
#define CLASS_3_E20366D1301D6555_METHOD_3_F7630BA667E7E395_OFFSET UNITYSDK_OFFSET(0x194F7DB0)
#define CLASS_3_E20366D1301D6555_METHOD_3_FF4813ED04EAEC95_OFFSET UNITYSDK_OFFSET(0x195040D0)
#define CLASS_3_E20366D1301D6555__CCTOR_OFFSET UNITYSDK_OFFSET(0x194F6190)
#define CLASS_3_E20366D1301D6555__CTOR_OFFSET UNITYSDK_OFFSET(0x194F6140)

inline static constexpr unsigned int Class_3_E20366D1301D6555_TypeDefinitionIndex = 83801;

class Class_3_E20366D1301D6555 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_3_7()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_3_E20366D1301D6555_TypeDefinitionIndex)->GetStaticField(0xC600);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void EndOfFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_ENDOFFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_75A06BFA1B0DD60C(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_75A06BFA1B0DD60C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_0944E13101E3B11D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0944E13101E3B11D_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_66983D3853E5820F(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_66983D3853E5820F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B2811DD8EFB34178(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B2811DD8EFB34178_OFFSET))(a1);
	}

	static ::System::Void Method_3_3645FDB85192C5E2(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3645FDB85192C5E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A1B7F4023607C863(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A1B7F4023607C863_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_3_B8EEE779B6BF1C93(::Class_3_F97B015544BE936B* a1, ::Enum_3_7609C87F8335DE37_1 a2)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::Enum_3_7609C87F8335DE37_1))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B8EEE779B6BF1C93_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BE7162BD5F0777E0(::Class_3_F97B015544BE936B* a1, ::Class_2_1F102D37972FE675* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_1F102D37972FE675*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_BE7162BD5F0777E0_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_B8EEE779B6BF1C93_1(::Class_3_F97B015544BE936B* a1, ::Enum_3_7609C87F8335DE37_1 a2)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::Enum_3_7609C87F8335DE37_1))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B8EEE779B6BF1C93_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_965CEF19961E4EB8(::Class_3_F97B015544BE936B* a1, ::System::Single a2, ::MoleMole::Config::PropertyModifyFunction a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_965CEF19961E4EB8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A1B7F4023607C863_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A1B7F4023607C863_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_A7A0D4230851EFAF(::Class_3_F97B015544BE936B* a1, ::System::Single a2, ::MoleMole::Config::PropertyModifyFunction a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Single, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A7A0D4230851EFAF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9F06645D4D4EE749(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_9F06645D4D4EE749_OFFSET))(a1);
	}

	static ::System::Void Method_3_F7630BA667E7E395(::MoleMole::Battle::Entity* a1, ::Struct_2_E555EF9B1EABB0B4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_E555EF9B1EABB0B4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F7630BA667E7E395_OFFSET))(a1, a2, a3);
	}

	static ::System::Double Method_3_3D61BF6677F37AD0(::System::Single a1, ::System::Double a2, ::MoleMole::Config::BaseProperty a3, ::System::String* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Double(*)(::System::Single, ::System::Double, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3D61BF6677F37AD0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_3E93FA6F20F95942(::Class_2_659FD8D80237B753_27* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_659FD8D80237B753_27*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3E93FA6F20F95942_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7724916078DA132B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7724916078DA132B_OFFSET))(a1);
	}

	static ::System::Void Method_3_50DA494A5EA31306(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_D2570AA6795434FE(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D2570AA6795434FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EF79E6A82B470572(::Struct_2_E555EF9B1EABB0B4 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Struct_2_E555EF9B1EABB0B4, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_EF79E6A82B470572_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_B3E229B668ACCF23(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_B3E229B668ACCF23_OFFSET))(a1);
	}

	static ::System::Void Method_3_C6C0F471E996E270(::Class_3_F97B015544BE936B* a1, ::System::Collections::Generic::Dictionary_2<::Enum_3_7609C87F8335DE37_1, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Collections::Generic::Dictionary_2<::Enum_3_7609C87F8335DE37_1, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C6C0F471E996E270_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_50DA494A5EA31306_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_50DA494A5EA31306_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_3_D852386318F57E8F(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_OFFSET))(a1);
	}

	::System::Void Method_3_C905AA086F4814DA(::Class_3_F97B015544BE936B* a1, ::Class_0_16E4307DCC419505_437* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::Class_0_16E4307DCC419505_437*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C905AA086F4814DA_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_C878AA2CC201D2EB(::Class_3_F97B015544BE936B* a1, ::Class_2_3AF9FF30E97A5BEE* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_3AF9FF30E97A5BEE*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C878AA2CC201D2EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4919F93F1EBB4B5A(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_4919F93F1EBB4B5A_OFFSET))(a1);
	}

	static ::System::Void Method_3_2D03A833DDDE3FCB(::Class_3_F97B015544BE936B* a1, ::System::Double a2, ::MoleMole::Config::PropertyModifyFunction a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Double, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_2D03A833DDDE3FCB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0998F9CB19169425(::MoleMole::Battle::Entity* a1, ::Struct_2_BD55FB98E7CE49F3 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_BD55FB98E7CE49F3))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0998F9CB19169425_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7509E66D5185EE9B(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7509E66D5185EE9B_OFFSET))(a1);
	}

	static ::System::Void Method_3_D613321D03157EDB(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D613321D03157EDB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_3E93FA6F20F95942_1(::Class_2_D2635BA9D50B0AA7* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_D2635BA9D50B0AA7*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3E93FA6F20F95942_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D4326C7FAE1D4241(::Class_3_F97B015544BE936B* a1, ::Class_2_1F102D37972FE675* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_1F102D37972FE675*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D4326C7FAE1D4241_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_905FD4FF0CBCACB3(::Class_3_F97B015544BE936B* a1, ::System::Double a2, ::System::Boolean a3, ::Enum_3_BEADE0D60E8972CC a4)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double, ::System::Boolean, ::Enum_3_BEADE0D60E8972CC))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_905FD4FF0CBCACB3_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_CA35629A705ECA46(::Class_2_3CB5FE397F4526FE* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_3CB5FE397F4526FE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_CA35629A705ECA46_OFFSET))(a1, a2);
	}

	::System::Void Method_3_21DB8E6F31E6B2BF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_21DB8E6F31E6B2BF_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5162853E985ABA1B(::Class_3_F97B015544BE936B* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_436*>* a2, ::System::Collections::Generic::List_1<::Struct_2_B6B482D5E3A4F997>* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_436*>*, ::System::Collections::Generic::List_1<::Struct_2_B6B482D5E3A4F997>*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_5162853E985ABA1B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C878AA2CC201D2EB_1(::Class_3_F97B015544BE936B* a1, ::Class_2_32FEDBEB5C8D92AF* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_32FEDBEB5C8D92AF*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C878AA2CC201D2EB_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DA3ACFA1316D231A(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DA3ACFA1316D231A_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_D1C6E7E2DD79C148(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::MoleMole::Config::ConfigPosRot* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D1C6E7E2DD79C148_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0068EB3874903B5C(::Class_3_F97B015544BE936B* a1, ::Class_2_13CC21223F9A564C* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_13CC21223F9A564C*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0068EB3874903B5C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_47E478EA85B22218(::Class_3_F97B015544BE936B* a1, ::Class_1_66C4D81440373C6E* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_66C4D81440373C6E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_47E478EA85B22218_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_088C9E99B2B1F58A(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5, ::System::Boolean a6, ::MoleMole::Battle::Entity* a7)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_088C9E99B2B1F58A_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_3_F098C4EC951B3DB9(::Class_3_F97B015544BE936B* a1, ::Enum_3_7609C87F8335DE37_1 a2)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::Enum_3_7609C87F8335DE37_1))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_F098C4EC951B3DB9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DF518C5F5B4B18A5(::Class_3_F97B015544BE936B* a1, ::Class_2_32FEDBEB5C8D92AF* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_32FEDBEB5C8D92AF*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DF518C5F5B4B18A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0068EB3874903B5C_1(::Class_3_F97B015544BE936B* a1, ::Class_2_13CC21223F9A564C* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_13CC21223F9A564C*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0068EB3874903B5C_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_47E478EA85B22218_1(::Class_3_F97B015544BE936B* a1, ::Class_1_66C4D81440373C6E* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_66C4D81440373C6E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_47E478EA85B22218_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0D5E1D6B20EA2168(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0D5E1D6B20EA2168_OFFSET))(a1);
	}

	static ::System::Void Method_3_54762394B0510DCC(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_54762394B0510DCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_305196D46D542C4F(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_DF518C5F5B4B18A5_1(::Class_3_F97B015544BE936B* a1, ::Class_2_3AF9FF30E97A5BEE* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_2_3AF9FF30E97A5BEE*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_DF518C5F5B4B18A5_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_0FF805A65B4CA9B6(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0FF805A65B4CA9B6_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_D852386318F57E8F_1(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_D852386318F57E8F_1_OFFSET))(a1);
	}

	::System::Void Method_3_14C8E83BE7B9FF05(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_14C8E83BE7B9FF05_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_048FD57E844426DD(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_048FD57E844426DD_OFFSET))(a1);
	}

	static ::System::Void Method_3_C6B38F382EBB9D9D(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C6B38F382EBB9D9D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_7B312B287EB64FEB(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7B312B287EB64FEB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_E028D6792B3F2719(::Class_2_FF870BBAEF08CB0B_4* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_FF870BBAEF08CB0B_4*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_E028D6792B3F2719_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AF5C6F6152377069(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_AF5C6F6152377069_OFFSET))(a1);
	}

	static ::System::Void Method_3_7CADE60E739F1365(::Class_3_F97B015544BE936B* a1, ::Enum_3_0FC69F51F876980B_1 a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Enum_3_0FC69F51F876980B_1))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_7CADE60E739F1365_OFFSET))(a1, a2);
	}

	static ::System::Double Method_3_0E1A217F5578530C(::Class_3_F97B015544BE936B* a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::Class_3_F97B015544BE936B*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_0E1A217F5578530C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E2B524554C60449B(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::Struct_2_FC595D1A561D8C6F_1& a3)
	{
		return ((::System::Boolean(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::Struct_2_FC595D1A561D8C6F_1&))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_E2B524554C60449B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_432E8114528FD5E4(::Class_2_C66010578763963F* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_C66010578763963F*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_432E8114528FD5E4_OFFSET))(a1, a2);
	}

	::System::Void Method_3_C6C048AEE0387135(::Class_3_F97B015544BE936B* a1, ::Class_0_16E4307DCC419505_437* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::Class_0_16E4307DCC419505_437*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C6C048AEE0387135_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_E4251622442C23DF(::MoleMole::Config::BaseProperty a1, ::System::Single a2, ::System::Double a3, ::MoleMole::Config::PropertyModifyFunction a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BaseProperty, ::System::Single, ::System::Double, ::MoleMole::Config::PropertyModifyFunction, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_E4251622442C23DF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_EF79E6A82B470572_1(::Struct_2_E555EF9B1EABB0B4 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Struct_2_E555EF9B1EABB0B4, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_EF79E6A82B470572_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FF4813ED04EAEC95(::Class_3_F97B015544BE936B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_FF4813ED04EAEC95_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_04E5A3C91BCECA3E(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_04E5A3C91BCECA3E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_305196D46D542C4F_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_305196D46D542C4F_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_6653806D0E572E4B(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_6653806D0E572E4B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_3_471DB1CFA13F2FBB(::Class_3_F97B015544BE936B* a1, ::System::Double a2, ::Enum_3_BEADE0D60E8972CC a3)
	{
		return ((::System::Single(*)(::Class_3_F97B015544BE936B*, ::System::Double, ::Enum_3_BEADE0D60E8972CC))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_471DB1CFA13F2FBB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C6B38F382EBB9D9D_1(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_C6B38F382EBB9D9D_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_E0586961C3344BFB(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_E0586961C3344BFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3B2233B36BC190C7(::System::UInt32 a1, ::Class_2_1F102D37972FE675* a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::Class_2_1F102D37972FE675*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_3B2233B36BC190C7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A630782CBAD30FEA(::Class_3_F97B015544BE936B* a1, ::Class_1_66C4D81440373C6E* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::Class_1_66C4D81440373C6E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_A630782CBAD30FEA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_02F12016C38772D9(::MoleMole::Battle::Entity* a1, ::Struct_2_E555EF9B1EABB0B4 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_E555EF9B1EABB0B4))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_02F12016C38772D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CB5EDB7E5E2C90F5(::Class_3_F97B015544BE936B* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_CB5EDB7E5E2C90F5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_803589031DCB0BDA(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_METHOD_3_803589031DCB0BDA_OFFSET))(a1);
	}
};
