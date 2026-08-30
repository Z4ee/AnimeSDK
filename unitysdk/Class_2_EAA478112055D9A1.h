#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_C3183153408A386B;
class Class_2_15C1107F59D2E68D;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerSimpleNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerTransitionInfo; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_EAA478112055D9A1_GET_GRAPHNAME_OFFSET UNITYSDK_OFFSET(0x1990B770)
#define CLASS_2_EAA478112055D9A1_GET_INFO_OFFSET UNITYSDK_OFFSET(0x19909EB0)
#define CLASS_2_EAA478112055D9A1_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x19909E40)
#define CLASS_2_EAA478112055D9A1_GET_MODE_OFFSET UNITYSDK_OFFSET(0x19909EA0)
#define CLASS_2_EAA478112055D9A1_METHOD_2_0D7B5DCCDE94E1A3_OFFSET UNITYSDK_OFFSET(0x1990B390)
#define CLASS_2_EAA478112055D9A1_METHOD_2_1B4418493CBE7E89_OFFSET UNITYSDK_OFFSET(0x1990A770)
#define CLASS_2_EAA478112055D9A1_METHOD_2_1BB9C827421A05BD_OFFSET UNITYSDK_OFFSET(0x1990B660)
#define CLASS_2_EAA478112055D9A1_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x1990B050)
#define CLASS_2_EAA478112055D9A1_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1990A030)
#define CLASS_2_EAA478112055D9A1_METHOD_2_61FD66D870E9DE3E_OFFSET UNITYSDK_OFFSET(0x1990B1B0)
#define CLASS_2_EAA478112055D9A1_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x1990AA80)
#define CLASS_2_EAA478112055D9A1_METHOD_2_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x1990AEA0)
#define CLASS_2_EAA478112055D9A1_METHOD_2_84816770B063DB77_1_OFFSET UNITYSDK_OFFSET(0x1990A0F0)
#define CLASS_2_EAA478112055D9A1_METHOD_2_84816770B063DB77_OFFSET UNITYSDK_OFFSET(0x19909F70)
#define CLASS_2_EAA478112055D9A1_METHOD_2_9F93A4AC46D6E7E9_OFFSET UNITYSDK_OFFSET(0x1990A2E0)
#define CLASS_2_EAA478112055D9A1_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x1990AF50)
#define CLASS_2_EAA478112055D9A1_METHOD_2_B1971FCD21F5B2F8_OFFSET UNITYSDK_OFFSET(0x1990A370)
#define CLASS_2_EAA478112055D9A1_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x1990AF00)
#define CLASS_2_EAA478112055D9A1_METHOD_2_C3B7C579BBD45F06_OFFSET UNITYSDK_OFFSET(0x1990A1B0)
#define CLASS_2_EAA478112055D9A1_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x1990A490)
#define CLASS_2_EAA478112055D9A1_METHOD_2_E4960DD9B8574C3F_OFFSET UNITYSDK_OFFSET(0x1990B400)
#define CLASS_2_EAA478112055D9A1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1990B790)
#define CLASS_2_EAA478112055D9A1_SET_GRAPHNAME_OFFSET UNITYSDK_OFFSET(0x1990B780)
#define CLASS_2_EAA478112055D9A1__CTOR_OFFSET UNITYSDK_OFFSET(0x19909CB0)

inline static constexpr unsigned int Class_2_EAA478112055D9A1_TypeDefinitionIndex = 57438;

class Class_2_EAA478112055D9A1 : public ::RPG::GameCore::FreeStyleController
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* HGHJGOBMHGK; // 0x28
	::Class_2_15C1107F59D2E68D* OPFHJALFFIC; // 0x30
	::RPG::GameCore::FreeStyleTriggerNodeInfo* BECOOHALAFM; // 0x38
	::System::Random* OLEEIPHBJKB; // 0x40
	::System::String* _GraphName_k__BackingField; // 0x48
	::RPG::GameCore::FreeStyleTriggerGraphInfo* GKKJCLNMALH; // 0x50
	::Struct_2_648594091F1A68D6 BIHPGALKKKA; // 0x58
	::System::Boolean IALIKGJGEML; // 0x78
	::System::Single EHILLPBCBAB; // 0x7C

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_GET_ISPLAYING_OFFSET))(this);
	}

	::RPG::GameCore::EFreeStyleControlMode get_Mode()
	{
		return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_GET_MODE_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_84816770B063DB77(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_84816770B063DB77_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_84816770B063DB77_1(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_84816770B063DB77_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C3B7C579BBD45F06(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_C3B7C579BBD45F06_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9F93A4AC46D6E7E9(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_9F93A4AC46D6E7E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1971FCD21F5B2F8(::System::String* a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_B1971FCD21F5B2F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7B0A407379BA27E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_7B0A407379BA27E7_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_1B4418493CBE7E89(::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_1B4418493CBE7E89_OFFSET))(this, a1);
	}

	::System::Void Method_2_61FD66D870E9DE3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_61FD66D870E9DE3E_OFFSET))(this, a1);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_0D7B5DCCDE94E1A3()
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_0D7B5DCCDE94E1A3_OFFSET))(this);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_1BB9C827421A05BD(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_1BB9C827421A05BD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* Method_2_E4960DD9B8574C3F(::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_E4960DD9B8574C3F_OFFSET))(this, a1);
	}

	::System::String* get_GraphName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_GET_GRAPHNAME_OFFSET))(this);
	}

	::System::Void set_GraphName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_SET_GRAPHNAME_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
