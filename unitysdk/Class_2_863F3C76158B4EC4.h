#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_C3183153408A386B;
class Class_2_C69D26FE77F9D6B4;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerSimpleNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerTransitionInfo; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_863F3C76158B4EC4_GET_GRAPHNAME_OFFSET UNITYSDK_OFFSET(0x9E41C30)
#define CLASS_2_863F3C76158B4EC4_GET_INFO_OFFSET UNITYSDK_OFFSET(0x9E404B0)
#define CLASS_2_863F3C76158B4EC4_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x9E40440)
#define CLASS_2_863F3C76158B4EC4_GET_MODE_OFFSET UNITYSDK_OFFSET(0x9E404A0)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_0D58E5AE76576E0A_OFFSET UNITYSDK_OFFSET(0x9E408E0)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_0D7B5DCCDE94E1A3_OFFSET UNITYSDK_OFFSET(0x9E41870)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_1BB9C827421A05BD_OFFSET UNITYSDK_OFFSET(0x9E41B10)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x9E40630)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x9E41530)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_4EA8229CB596B3D2_OFFSET UNITYSDK_OFFSET(0x9E41E10)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_532E79473A88D04E_OFFSET UNITYSDK_OFFSET(0x9E41D80)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_53515DED96891DBC_OFFSET UNITYSDK_OFFSET(0x9E41EF0)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_547129A2049405D7_OFFSET UNITYSDK_OFFSET(0x9E41CF0)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_74D12A8FF157D0A5_OFFSET UNITYSDK_OFFSET(0x9E406F0)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_754A4AF1CA90749A_OFFSET UNITYSDK_OFFSET(0x9E41690)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x9E40F60)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x9E41F70)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_9341993418AA02AF_OFFSET UNITYSDK_OFFSET(0x9E40570)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x9E41430)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x9E41380)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_AD3AA2A4D224BFF3_OFFSET UNITYSDK_OFFSET(0x9E418F0)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_B1971FCD21F5B2F8_OFFSET UNITYSDK_OFFSET(0x9E40970)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x9E413E0)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_C3B7C579BBD45F06_OFFSET UNITYSDK_OFFSET(0x9E407B0)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x9E40A90)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9E41C50)
#define CLASS_2_863F3C76158B4EC4_METHOD_2_FA4785548165040B_OFFSET UNITYSDK_OFFSET(0x9E40D80)
#define CLASS_2_863F3C76158B4EC4_SET_GRAPHNAME_OFFSET UNITYSDK_OFFSET(0x9E41C40)
#define CLASS_2_863F3C76158B4EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x9E402D0)
#define CLASS_2_863F3C76158B4EC4___IFIXBASEPROXY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x9E41CE0)
#define CLASS_2_863F3C76158B4EC4___IFIXBASEPROXY_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x9E41C60)

inline static constexpr unsigned int Class_2_863F3C76158B4EC4_TypeDefinitionIndex = 52795;

class Class_2_863F3C76158B4EC4 : public ::RPG::GameCore::FreeStyleController
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_3; // 0x28
	::RPG::GameCore::FreeStyleTriggerGraphInfo* Field_2_4; // 0x30
	::System::Random* Field_2_8; // 0x38
	::Class_2_C69D26FE77F9D6B4* Field_2_7; // 0x40
	::RPG::GameCore::FreeStyleTriggerNodeInfo* Field_2_2; // 0x48
	::System::String* _GraphName_k__BackingField; // 0x50
	::System::Single Field_2_5; // 0x58
	::System::Boolean Field_2_1; // 0x5C
	::Struct_2_648594091F1A68D6 Field_2_6; // 0x60

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_GET_ISPLAYING_OFFSET))(this);
	}

	::RPG::GameCore::EFreeStyleControlMode get_Mode()
	{
		return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_GET_MODE_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_9341993418AA02AF(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_9341993418AA02AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_74D12A8FF157D0A5(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_74D12A8FF157D0A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C3B7C579BBD45F06(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_C3B7C579BBD45F06_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0D58E5AE76576E0A(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_0D58E5AE76576E0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1971FCD21F5B2F8(::System::String* a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_B1971FCD21F5B2F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_A5809AB80389F7DE_OFFSET))(this);
	}

	::System::Void Method_2_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_FA4785548165040B(::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_FA4785548165040B_OFFSET))(this, a1);
	}

	::System::Void Method_2_754A4AF1CA90749A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_754A4AF1CA90749A_OFFSET))(this, a1);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_0D7B5DCCDE94E1A3()
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_0D7B5DCCDE94E1A3_OFFSET))(this);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_1BB9C827421A05BD(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_1BB9C827421A05BD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_AD3AA2A4D224BFF3(::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_AD3AA2A4D224BFF3_OFFSET))(this, a1);
	}

	::System::String* get_GraphName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_GET_GRAPHNAME_OFFSET))(this);
	}

	::System::Void set_GraphName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_SET_GRAPHNAME_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_get_IsPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4___IFIXBASEPROXY_GET_ISPLAYING_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* __iFixBaseProxy_get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4___IFIXBASEPROXY_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_547129A2049405D7(::System::Int32 P0, ::System::Single P1, ::System::Single P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_547129A2049405D7_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_532E79473A88D04E(::System::Int32 P0, ::System::Single P1, ::System::Single P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_532E79473A88D04E_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_4EA8229CB596B3D2(::System::UInt32 P0, ::RPG::GameCore::FreeStyleMotionInfoConfig* P1, ::System::Nullable_1<::Struct_2_648594091F1A68D6> P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_4EA8229CB596B3D2_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_53515DED96891DBC(::System::Boolean P0, ::Struct_2_D3B84DD3734B83D6 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_53515DED96891DBC_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_863F3C76158B4EC4_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
