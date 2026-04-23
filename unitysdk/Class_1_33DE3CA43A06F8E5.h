#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerStepOnUnstablePlatformReason.h"
#include "unitysdk/RPG/Client/StopPlayerMotionReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_20D743894CDF214D_1;
class Class_1_5D48F7CA334C7FAF_1;
class Class_1_D5B39CC94761152A;
class Class_2_DACB2D3D3C70FB8C;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_33DE3CA43A06F8E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC730DB0)
#define CLASS_1_33DE3CA43A06F8E5_GET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET UNITYSDK_OFFSET(0xC732F90)
#define CLASS_1_33DE3CA43A06F8E5_GET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xC732F70)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_09C37DA900040245_OFFSET UNITYSDK_OFFSET(0xC732030)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_0A204F7E8ED9337F_OFFSET UNITYSDK_OFFSET(0xC732140)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_0F570F731FADCD58_OFFSET UNITYSDK_OFFSET(0xC7321A0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xC730FB0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_3E8D8F782717D30A_OFFSET UNITYSDK_OFFSET(0xC732090)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0xC7314C0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_77F74DAD72851D45_OFFSET UNITYSDK_OFFSET(0xC7322D0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_8FE4AC9F2F06A97E_OFFSET UNITYSDK_OFFSET(0xC7324D0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xC732250)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_9C0422269654A935_OFFSET UNITYSDK_OFFSET(0xC731580)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xC732EE0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_C1B4F2A7F75BF57C_OFFSET UNITYSDK_OFFSET(0xC732650)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_C274E6C59B4CA004_OFFSET UNITYSDK_OFFSET(0xC730E70)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xC731FC0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_CB74603E77CF9AD9_OFFSET UNITYSDK_OFFSET(0xC7310F0)
#define CLASS_1_33DE3CA43A06F8E5_METHOD_1_E975629435F9C6D4_OFFSET UNITYSDK_OFFSET(0xC7323F0)
#define CLASS_1_33DE3CA43A06F8E5_SET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET UNITYSDK_OFFSET(0xC732FA0)
#define CLASS_1_33DE3CA43A06F8E5_SET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xC732F80)
#define CLASS_1_33DE3CA43A06F8E5__CCTOR_OFFSET UNITYSDK_OFFSET(0xC732FB0)
#define CLASS_1_33DE3CA43A06F8E5__CTOR_OFFSET UNITYSDK_OFFSET(0xC730BC0)

inline static constexpr unsigned int Class_1_33DE3CA43A06F8E5_TypeDefinitionIndex = 56175;

class Class_1_33DE3CA43A06F8E5 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_7()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33DE3CA43A06F8E5_TypeDefinitionIndex)->GetStaticField(0x44CE0);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33DE3CA43A06F8E5_TypeDefinitionIndex)->GetStaticField(0xF480);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_33DE3CA43A06F8E5_TypeDefinitionIndex)->GetStaticField(0xF484);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::Stack_1<::Class_1_5D48F7CA334C7FAF_1*>* Field_1_4; // 0x18
	::System::Text::StringBuilder* Field_1_5; // 0x20
	::Class_2_DACB2D3D3C70FB8C* Field_1_10; // 0x28
	::RPG::Client::AdventurePhase* Field_1_2; // 0x30
	::Class_2_DACB2D3D3C70FB8C* Field_1_11; // 0x38
	::System::Single Field_1_3; // 0x40
	::System::Boolean _BlockMovementSyncOnReconnecting_k__BackingField; // 0x44
	::System::Boolean _PauseGame_k__BackingField; // 0x45

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

	::System::Void Method_1_09C37DA900040245(::RPG::Client::StopPlayerMotionReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StopPlayerMotionReason))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_09C37DA900040245_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E8D8F782717D30A(::RPG::Client::StopPlayerMotionReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StopPlayerMotionReason))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_3E8D8F782717D30A_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A204F7E8ED9337F(::RPG::Client::PlayerStepOnUnstablePlatformReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStepOnUnstablePlatformReason))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_0A204F7E8ED9337F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F570F731FADCD58(::RPG::Client::PlayerStepOnUnstablePlatformReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStepOnUnstablePlatformReason))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_0F570F731FADCD58_OFFSET))(this, a1);
	}

	::Class_1_5D48F7CA334C7FAF_1* Method_1_9C0422269654A935(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_1_5D48F7CA334C7FAF_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_9C0422269654A935_OFFSET))(this, a1, a2);
	}

	::Class_1_20D743894CDF214D_1* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_20D743894CDF214D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_E975629435F9C6D4(::Class_1_5D48F7CA334C7FAF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D48F7CA334C7FAF_1*))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_E975629435F9C6D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB74603E77CF9AD9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_CB74603E77CF9AD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1B4F2A7F75BF57C(::RPG::GameCore::EntityType a1, ::Class_1_D5B39CC94761152A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType, ::Class_1_D5B39CC94761152A*))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_C1B4F2A7F75BF57C_OFFSET))(this, a1, a2);
	}

	::Class_1_D5B39CC94761152A* Method_1_8FE4AC9F2F06A97E()
	{
		return ((::Class_1_D5B39CC94761152A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_8FE4AC9F2F06A97E_OFFSET))(this);
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

	::System::Void set_PauseGame(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_SET_PAUSEGAME_OFFSET))(this, value);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Boolean get_BlockMovementSyncOnReconnecting()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_GET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET))(this);
	}

	::System::Void set_BlockMovementSyncOnReconnecting(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33DE3CA43A06F8E5_SET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET))(this, value);
	}
};
