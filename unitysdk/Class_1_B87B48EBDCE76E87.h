#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/RPG/Client/PedestrianV2State.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Pose.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_56AE464A4331143D;
class Class_1_68DDCD4A4411AB4A;
class Class_1_9BAFBE9EEC7CF1E0;
class Class_1_E7D4F1B8FC35E82D;
class Class_1_F8E6AA28A352CA0E;
class Class_2_7B2654787DC492CD;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B87B48EBDCE76E87_ADD_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E3F20)
#define CLASS_1_B87B48EBDCE76E87_ADD_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E3FE0)
#define CLASS_1_B87B48EBDCE76E87_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5E20C0)
#define CLASS_1_B87B48EBDCE76E87_GET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0xB5E3EA0)
#define CLASS_1_B87B48EBDCE76E87_GET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xB5E3E80)
#define CLASS_1_B87B48EBDCE76E87_GET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xB5E3F00)
#define CLASS_1_B87B48EBDCE76E87_GET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0xB5E3EE0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_003F1611EE5C6470_OFFSET UNITYSDK_OFFSET(0xB5E39A0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xB5E4C00)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0xB5E4E40)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0xB5E4D30)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xB5E4D20)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xB5E38F0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xB5E4D90)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB5E4BA0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB5E3890)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_2AE400D58830E28D_OFFSET UNITYSDK_OFFSET(0xB5E23C0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_2DA5E14835AEFAD5_OFFSET UNITYSDK_OFFSET(0xB5E4C30)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB5E4D40)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xB5E3D40)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_3DEA63D69EBFCE9B_OFFSET UNITYSDK_OFFSET(0xB5E3950)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB5E3A10)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0xB5E2EE0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_48D844B20A8C3D3D_1_OFFSET UNITYSDK_OFFSET(0xB5E3840)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_48D844B20A8C3D3D_OFFSET UNITYSDK_OFFSET(0xB5E37F0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xB5E3CD0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xB5E40A0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xB5E3730)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_871AC6DBEB0AF4F3_OFFSET UNITYSDK_OFFSET(0xB5E3BC0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_9B477FAA89F19EA1_OFFSET UNITYSDK_OFFSET(0xB5E4CB0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0xB5E3660)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB5E3590)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_A34DDEE3C44EBB6B_OFFSET UNITYSDK_OFFSET(0xB5E2790)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_A93CA8A3372168B2_OFFSET UNITYSDK_OFFSET(0xB5E2D40)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0xB5E4B20)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_C044E746D2A259E9_OFFSET UNITYSDK_OFFSET(0xB5E4D10)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_C145705A054F47D2_OFFSET UNITYSDK_OFFSET(0xB5E28A0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_D8176826A8AD7EFF_OFFSET UNITYSDK_OFFSET(0xB5E3E00)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0xB5E4250)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_E34D65A3EBA8DAE3_1_OFFSET UNITYSDK_OFFSET(0xB5E4190)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0xB5E3A60)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB5E4DF0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_EC7859CE92065CC7_OFFSET UNITYSDK_OFFSET(0xB5E3C70)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xB5E4B90)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0xB5E4C10)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0xB5E4C20)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB5E4B80)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_FB642453C6267705_OFFSET UNITYSDK_OFFSET(0xB5E32E0)
#define CLASS_1_B87B48EBDCE76E87_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xB5E3CE0)
#define CLASS_1_B87B48EBDCE76E87_REMOVE_ONDISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E3F80)
#define CLASS_1_B87B48EBDCE76E87_REMOVE_ONPOSTLATEUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5E4040)
#define CLASS_1_B87B48EBDCE76E87_SET_INITIALPOSE_OFFSET UNITYSDK_OFFSET(0xB5E3EC0)
#define CLASS_1_B87B48EBDCE76E87_SET_SPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xB5E3E90)
#define CLASS_1_B87B48EBDCE76E87_SET_SUPPRESSDISTANCELIFECYCLE_OFFSET UNITYSDK_OFFSET(0xB5E3F10)
#define CLASS_1_B87B48EBDCE76E87_SET_SUPPRESSMOTIONAGENTONSTART_OFFSET UNITYSDK_OFFSET(0xB5E3EF0)
#define CLASS_1_B87B48EBDCE76E87__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5E4F10)
#define CLASS_1_B87B48EBDCE76E87__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E4ED0)

inline static constexpr unsigned int Class_1_B87B48EBDCE76E87_TypeDefinitionIndex = 69252;

class Class_1_B87B48EBDCE76E87 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_JEFNLODHKMG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B87B48EBDCE76E87_TypeDefinitionIndex)->GetStaticField(0x23D0);
	}
	static ::System::Single* StaticGet_LEDBOINMMLO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B87B48EBDCE76E87_TypeDefinitionIndex)->GetStaticField(0x23D4);
	}
	static ::System::Single* StaticGet_KJJGKGKBMKD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B87B48EBDCE76E87_TypeDefinitionIndex)->GetStaticField(0x23D8);
	}
	static ::System::Single* StaticGet_KJGAFKIOHBA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B87B48EBDCE76E87_TypeDefinitionIndex)->GetStaticField(0x23DC);
	}
	// static const ::System::Single CFGCPDGFEHC; // 0x0
	// static const ::System::Single KMNAKCDIJHB; // 0x0
	// static const ::System::Single ODAMIEFLLFM; // 0x0
	// static const ::System::Single FKMDGMLEDOG; // 0x0
	// static const ::System::Single OCEENCGFFEM; // 0x0
	// static const ::System::Single KIHJGGFNHBB; // 0x0
	::Class_1_F8E6AA28A352CA0E* FLMODBLFAGD; // 0x10
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x18
	::Class_1_9BAFBE9EEC7CF1E0* PCOHLAAKEMN; // 0x20
	::System::String* EOFPCPIHGJA; // 0x28
	::System::Action_1<::Class_1_B87B48EBDCE76E87*>* OnPostLateUpdateCallback; // 0x30
	::Class_1_E7D4F1B8FC35E82D* _SpawnGroup_k__BackingField; // 0x38
	::System::String* PLGOIHMNDLO; // 0x40
	::System::Action_1<::Class_1_B87B48EBDCE76E87*>* PNELGAPKCLO; // 0x48
	::System::Action_1<::Class_1_B87B48EBDCE76E87*>* OnDisposeCallback; // 0x50
	::RPG::Client::PedestrianV2State DLNIGFGLPLJ; // 0x58
	::RPG::Client::EPedestrianV2MotionState HCCHHGLDGGL; // 0x5C
	::System::Single EKHJIFJBBCJ; // 0x60
	::System::Single HGHKDHCEIJB; // 0x64
	::System::UInt32 FMAGLGKDEAJ; // 0x68
	::System::Int32 DJKPDGNOKHB; // 0x6C
	::System::Single DCKKAHPGIFI; // 0x70
	::System::Nullable_1<::UnityEngine::Pose> _InitialPose_k__BackingField; // 0x74
	::System::Boolean MPECKIIKDGD; // 0x94
	::System::Boolean ODCBFIJPEKJ; // 0x95
	::System::Boolean _SuppressDistanceLifecycle_k__BackingField; // 0x96
	::System::Boolean FODMOOINMGF; // 0x97
	::System::Single PCECPNFNBFH; // 0x98
	::UnityEngine::Vector3 OGAOJOLPMOH; // 0x9C
	::System::Single DNOAFIKANPL; // 0xA8
	::System::Single OKCBJDFDNNG; // 0xAC
	::UnityEngine::Vector3 HANLGPEACPL; // 0xB0
	::System::Int32 CPEGMMDCIAI; // 0xBC
	::System::Boolean LFJHKGPGMKN; // 0xC0
	::System::Boolean _SuppressMotionAgentOnStart_k__BackingField; // 0xC1
	::System::Boolean ECOBDMJJEBD; // 0xC2
	::System::Boolean OIHMEIBDAKJ; // 0xC3

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87__CCTOR_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_2AE400D58830E28D(::Class_1_F8E6AA28A352CA0E* a1, ::System::UInt32 a2, ::Class_1_483ED67B5E0A21FB* a3, ::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8E6AA28A352CA0E*, ::System::UInt32, ::Class_1_483ED67B5E0A21FB*, ::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_2AE400D58830E28D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A34DDEE3C44EBB6B(::System::Action_1<::Class_1_B87B48EBDCE76E87*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B87B48EBDCE76E87*>*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_A34DDEE3C44EBB6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C145705A054F47D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_C145705A054F47D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Void Method_1_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_1_48D844B20A8C3D3D(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_48D844B20A8C3D3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48D844B20A8C3D3D_1(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_48D844B20A8C3D3D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DEA63D69EBFCE9B(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_3DEA63D69EBFCE9B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_003F1611EE5C6470(::System::String* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_003F1611EE5C6470_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_E34D65A3EBA8DAE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_E34D65A3EBA8DAE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_871AC6DBEB0AF4F3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_871AC6DBEB0AF4F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EC7859CE92065CC7(::Class_2_7B2654787DC492CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7B2654787DC492CD*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_EC7859CE92065CC7_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8176826A8AD7EFF(::Class_2_7B2654787DC492CD* a1, ::Struct_2_085541A9CFF64383 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7B2654787DC492CD*, ::Struct_2_085541A9CFF64383, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_D8176826A8AD7EFF_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_E7D4F1B8FC35E82D* get_SpawnGroup()
	{
		return ((::Class_1_E7D4F1B8FC35E82D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_GET_SPAWNGROUP_OFFSET))(this);
	}

	::System::Void set_SpawnGroup(::Class_1_E7D4F1B8FC35E82D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7D4F1B8FC35E82D*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_SET_SPAWNGROUP_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Pose> get_InitialPose()
	{
		return ((::System::Nullable_1<::UnityEngine::Pose>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_GET_INITIALPOSE_OFFSET))(this);
	}

	::System::Void set_InitialPose(::System::Nullable_1<::UnityEngine::Pose> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Pose>))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_SET_INITIALPOSE_OFFSET))(this, a1);
	}

	::System::Boolean get_SuppressMotionAgentOnStart()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_GET_SUPPRESSMOTIONAGENTONSTART_OFFSET))(this);
	}

	::System::Void set_SuppressMotionAgentOnStart(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_SET_SUPPRESSMOTIONAGENTONSTART_OFFSET))(this, a1);
	}

	::System::Boolean get_SuppressDistanceLifecycle()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_GET_SUPPRESSDISTANCELIFECYCLE_OFFSET))(this);
	}

	::System::Void set_SuppressDistanceLifecycle(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_SET_SUPPRESSDISTANCELIFECYCLE_OFFSET))(this, a1);
	}

	::System::Void add_OnDisposeCallback(::System::Action_1<::Class_1_B87B48EBDCE76E87*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B87B48EBDCE76E87*>*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_ADD_ONDISPOSECALLBACK_OFFSET))(this, a1);
	}

	::System::Void remove_OnDisposeCallback(::System::Action_1<::Class_1_B87B48EBDCE76E87*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B87B48EBDCE76E87*>*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_REMOVE_ONDISPOSECALLBACK_OFFSET))(this, a1);
	}

	::System::Void add_OnPostLateUpdateCallback(::System::Action_1<::Class_1_B87B48EBDCE76E87*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B87B48EBDCE76E87*>*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_ADD_ONPOSTLATEUPDATECALLBACK_OFFSET))(this, a1);
	}

	::System::Void remove_OnPostLateUpdateCallback(::System::Action_1<::Class_1_B87B48EBDCE76E87*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B87B48EBDCE76E87*>*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_REMOVE_ONPOSTLATEUPDATECALLBACK_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_E34D65A3EBA8DAE3_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_E34D65A3EBA8DAE3_1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_FB642453C6267705()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_FB642453C6267705_OFFSET))(this);
	}

	::System::Single Method_1_A93CA8A3372168B2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_A93CA8A3372168B2_OFFSET))(this);
	}

	::System::Boolean Method_1_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_B7BFE5D35A542E8B()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_B7BFE5D35A542E8B_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2DA5E14835AEFAD5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_2DA5E14835AEFAD5_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_9B477FAA89F19EA1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_9B477FAA89F19EA1_OFFSET))(this);
	}

	::RPG::GameCore::NPCBodySize Method_1_C044E746D2A259E9()
	{
		return ((::RPG::GameCore::NPCBodySize(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_C044E746D2A259E9_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_56AE464A4331143D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56AE464A4331143D*))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B87B48EBDCE76E87_METHOD_1_055E3BF644BB741B_OFFSET))(a1);
	}
};
