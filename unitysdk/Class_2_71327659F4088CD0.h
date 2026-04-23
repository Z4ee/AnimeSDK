#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/Class_2_71327659F4088CD0_NpcState.h"
#include "unitysdk/RPG/Client/ChaseBailuResult.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_11AD7A2D72029F1E;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client::Prop { class ChaseBailuConfig; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_71327659F4088CD0_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x11D5A990)
#define CLASS_2_71327659F4088CD0_METHOD_2_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0x11D58CE0)
#define CLASS_2_71327659F4088CD0_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x11D59F00)
#define CLASS_2_71327659F4088CD0_METHOD_2_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x11D59400)
#define CLASS_2_71327659F4088CD0_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x11D58A60)
#define CLASS_2_71327659F4088CD0_METHOD_2_3D42765ED80D6DAA_OFFSET UNITYSDK_OFFSET(0x11D5A180)
#define CLASS_2_71327659F4088CD0_METHOD_2_4194D22D527AD187_OFFSET UNITYSDK_OFFSET(0x11D59700)
#define CLASS_2_71327659F4088CD0_METHOD_2_425B226ADBC6BFAE_OFFSET UNITYSDK_OFFSET(0x11D5A930)
#define CLASS_2_71327659F4088CD0_METHOD_2_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x11D58EE0)
#define CLASS_2_71327659F4088CD0_METHOD_2_7408B4908233C620_OFFSET UNITYSDK_OFFSET(0x11D5A390)
#define CLASS_2_71327659F4088CD0_METHOD_2_749F6C996BE82B95_OFFSET UNITYSDK_OFFSET(0x11D5A550)
#define CLASS_2_71327659F4088CD0_METHOD_2_7C3F9BC9F59B706F_OFFSET UNITYSDK_OFFSET(0x11D598D0)
#define CLASS_2_71327659F4088CD0_METHOD_2_7D4EB13DAB711B21_OFFSET UNITYSDK_OFFSET(0x11D595A0)
#define CLASS_2_71327659F4088CD0_METHOD_2_82B886502AF8E904_OFFSET UNITYSDK_OFFSET(0x11D59870)
#define CLASS_2_71327659F4088CD0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11D5A0A0)
#define CLASS_2_71327659F4088CD0_METHOD_2_999F013FC7D047C7_OFFSET UNITYSDK_OFFSET(0x11D5A9C0)
#define CLASS_2_71327659F4088CD0_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x11D5A250)
#define CLASS_2_71327659F4088CD0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11D5A130)
#define CLASS_2_71327659F4088CD0_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11D5A9B0)
#define CLASS_2_71327659F4088CD0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11D5A9A0)
#define CLASS_2_71327659F4088CD0_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x11D58920)
#define CLASS_2_71327659F4088CD0_TICK_OFFSET UNITYSDK_OFFSET(0x11D589B0)
#define CLASS_2_71327659F4088CD0__CTOR_OFFSET UNITYSDK_OFFSET(0x11D5A9D0)
#define CLASS_2_71327659F4088CD0___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x11D5AA70)
#define CLASS_2_71327659F4088CD0___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11D5AAD0)

inline static constexpr unsigned int Class_2_71327659F4088CD0_TypeDefinitionIndex = 55481;

class Class_2_71327659F4088CD0 : public ::Class_1_47C4886CB6C61234
{
public:
	// static const ::System::Int32 Field_2_19 = 0xFFFFFFFE; // 0x0
	// static const ::System::Single Field_2_20; // 0x0
	::Class_2_11AD7A2D72029F1E* Field_2_5; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_25; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_18; // 0x38
	::RPG::GameCore::TransformComponent* Field_2_1; // 0x40
	::System::String* Field_2_24; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_2_17; // 0x50
	::RPG::GameCore::GameEntity* Field_2_0; // 0x58
	::RPG::Client::Prop::ChaseBailuConfig* Field_2_4; // 0x60
	::UnityEngine::GameObject* Field_2_3; // 0x68
	::System::Single Field_2_16; // 0x70
	::System::Int32 Field_2_12; // 0x74
	::System::Int32 Field_2_14; // 0x78
	::System::Int32 Field_2_11; // 0x7C
	::System::Single Field_2_22; // 0x80
	::System::Single Field_2_21; // 0x84
	::System::Boolean Field_2_7; // 0x88
	::System::Boolean Field_2_6; // 0x89
	::System::Single Field_2_15; // 0x8C
	::System::Int32 Field_2_13; // 0x90
	::RPG::Client::ChaseBailuResult Field_2_8; // 0x94
	::System::Single Field_2_23; // 0x98
	::System::Int32 Field_2_10; // 0x9C
	::Class_2_71327659F4088CD0_NpcState Field_2_9; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0__CTOR_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_ONUNINIT_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D4EB13DAB711B21(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_7D4EB13DAB711B21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4194D22D527AD187(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_4194D22D527AD187_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_82B886502AF8E904(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_82B886502AF8E904_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C3F9BC9F59B706F(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::CharacterMotionFlag a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Single a14, ::System::String* a15, ::RPG::GameCore::TaskContext* a16, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a17)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_7C3F9BC9F59B706F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_3D42765ED80D6DAA(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_3D42765ED80D6DAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_2_01244C5D42565CB2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_01244C5D42565CB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_2_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_2898E3EC91BCF259_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Int32 Method_2_749F6C996BE82B95()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_749F6C996BE82B95_OFFSET))(this);
	}

	::System::Boolean Method_2_425B226ADBC6BFAE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_425B226ADBC6BFAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7408B4908233C620(::RPG::Client::ChaseBailuResult a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChaseBailuResult))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_7408B4908233C620_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::ChaseBailuResult Method_2_999F013FC7D047C7()
	{
		return ((::RPG::Client::ChaseBailuResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0_METHOD_2_999F013FC7D047C7_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
