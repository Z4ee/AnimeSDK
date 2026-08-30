#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerStepOnUnstablePlatformReason.h"
#include "unitysdk/RPG/Client/StopPlayerMotionReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_20D743894CDF214D_1;
class Class_1_4D744DD7551F9856;
class Class_1_D40FE34A95C0AFE2_5;
class Class_2_74B1F4B989D8EA57;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_33DE3CA43A06F8E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB39D90)
#define CLASS_1_33DE3CA43A06F8E5_GET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET UNITYSDK_OFFSET(0xBB3BF30)
#define CLASS_1_33DE3CA43A06F8E5_GET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xBB3BF10)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xBB39F90)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_33090FA40C9183F7_OFFSET UNITYSDK_OFFSET(0xBB3B1A0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0xBB3A4B0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_77F74DAD72851D45_OFFSET UNITYSDK_OFFSET(0xBB3B2D0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xBB3B250)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_9C0422269654A935_OFFSET UNITYSDK_OFFSET(0xBB3A570)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_A4B6BABBEDBA8189_OFFSET UNITYSDK_OFFSET(0xBB3B090)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_A961D3DAA634B407_OFFSET UNITYSDK_OFFSET(0xBB3B6A0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_C10DBCB04CC31BFE_OFFSET UNITYSDK_OFFSET(0xBB3B030)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_C274E6C59B4CA004_OFFSET UNITYSDK_OFFSET(0xBB39E50)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xBB3AFC0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_CB74603E77CF9AD9_OFFSET UNITYSDK_OFFSET(0xBB3A0E0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_CBCF7D766E92735C_OFFSET UNITYSDK_OFFSET(0xBB3B140)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0xBB3BEC0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_E975629435F9C6D4_OFFSET UNITYSDK_OFFSET(0xBB3B3F0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_FED1D984D82967AD_OFFSET UNITYSDK_OFFSET(0xBB3B4C0)
#define CLASS_1_33DE3CA43A06F8E5_SET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET UNITYSDK_OFFSET(0xBB3BF40)
#define CLASS_1_33DE3CA43A06F8E5_SET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xBB3BF20)
#define CLASS_1_33DE3CA43A06F8E5__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB3BF50)
#define CLASS_1_33DE3CA43A06F8E5__CTOR_OFFSET UNITYSDK_OFFSET(0xBB39B60)

inline static constexpr unsigned int Class_1_33DE3CA43A06F8E5_TypeDefinitionIndex = 61011;

class Class_1_33DE3CA43A06F8E5 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_OFKOKKHCNCI()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33DE3CA43A06F8E5_TypeDefinitionIndex)->GetStaticField(0x60890);
	}
	static ::System::Single* StaticGet_LKNEIJKAIHI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33DE3CA43A06F8E5_TypeDefinitionIndex)->GetStaticField(0x13BC0);
	}
	static ::System::Single* StaticGet_OLIKFIBJFEA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33DE3CA43A06F8E5_TypeDefinitionIndex)->GetStaticField(0x13BC4);
	}
	::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x10
	::Class_2_74B1F4B989D8EA57* KOFFNKGOKDE; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* IFEJPPFNBCH; // 0x20
	::System::Text::StringBuilder* DJKLHOHKMNH; // 0x28
	::System::Collections::Generic::Stack_1<::Class_1_D40FE34A95C0AFE2_5*>* CABFDBJKKGN; // 0x30
	::Class_2_74B1F4B989D8EA57* BPNMAHNOAEG; // 0x38
	::System::Single GFBJIODGOGO; // 0x40
	::System::Boolean _PauseGame_k__BackingField; // 0x44
	::System::Boolean _BlockMovementSyncOnReconnecting_k__BackingField; // 0x45

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C274E6C59B4CA004(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_C274E6C59B4CA004_OFFSET))(this, a1);
	}

	::System::Void Method_1_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_C10DBCB04CC31BFE(::RPG::Client::StopPlayerMotionReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StopPlayerMotionReason))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_C10DBCB04CC31BFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4B6BABBEDBA8189(::RPG::Client::StopPlayerMotionReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StopPlayerMotionReason))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_A4B6BABBEDBA8189_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBCF7D766E92735C(::RPG::Client::PlayerStepOnUnstablePlatformReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStepOnUnstablePlatformReason))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_CBCF7D766E92735C_OFFSET))(this, a1);
	}

	::System::Void Method_1_33090FA40C9183F7(::RPG::Client::PlayerStepOnUnstablePlatformReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStepOnUnstablePlatformReason))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_33090FA40C9183F7_OFFSET))(this, a1);
	}

	::Class_1_D40FE34A95C0AFE2_5* Method_1_9C0422269654A935(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_1_D40FE34A95C0AFE2_5*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_9C0422269654A935_OFFSET))(this, a1, a2);
	}

	::Class_1_20D743894CDF214D_1* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_20D743894CDF214D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_E975629435F9C6D4(::Class_1_D40FE34A95C0AFE2_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40FE34A95C0AFE2_5*))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_E975629435F9C6D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB74603E77CF9AD9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_CB74603E77CF9AD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A961D3DAA634B407(::RPG::GameCore::EntityType a1, ::Class_1_4D744DD7551F9856* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType, ::Class_1_4D744DD7551F9856*))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_A961D3DAA634B407_OFFSET))(this, a1, a2);
	}

	::Class_1_4D744DD7551F9856* Method_1_FED1D984D82967AD()
	{
		return ((::Class_1_4D744DD7551F9856*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_FED1D984D82967AD_OFFSET))(this);
	}

	::Class_1_20D743894CDF214D_1* Method_1_77F74DAD72851D45(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_1_20D743894CDF214D_1* a3)
	{
		return ((::Class_1_20D743894CDF214D_1*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_77F74DAD72851D45_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean get_PauseGame()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_GET_PAUSEGAME_OFFSET))(this);
	}

	::System::Void set_PauseGame(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_SET_PAUSEGAME_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D67046CBB357BF79()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_D67046CBB357BF79_OFFSET))(this);
	}

	::System::Boolean get_BlockMovementSyncOnReconnecting()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_GET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET))(this);
	}

	::System::Void set_BlockMovementSyncOnReconnecting(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_SET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET))(this, a1);
	}
};
