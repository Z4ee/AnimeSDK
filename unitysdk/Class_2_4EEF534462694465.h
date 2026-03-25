#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/SoldierLineupPatrolStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2ECF3E74BC6E7972;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNPCSoldierLineupPatrol; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_4EEF534462694465_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111026E0)
#define CLASS_2_4EEF534462694465_METHOD_2_0B18028B73596FE0_OFFSET UNITYSDK_OFFSET(0x11103040)
#define CLASS_2_4EEF534462694465_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x111028C0)
#define CLASS_2_4EEF534462694465_METHOD_2_263AF43A5B4AB6EE_OFFSET UNITYSDK_OFFSET(0x11102C90)
#define CLASS_2_4EEF534462694465_METHOD_2_29622B5284E27113_OFFSET UNITYSDK_OFFSET(0x111033F0)
#define CLASS_2_4EEF534462694465_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x11102C30)
#define CLASS_2_4EEF534462694465_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11103310)
#define CLASS_2_4EEF534462694465_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x11103180)
#define CLASS_2_4EEF534462694465_METHOD_2_7E832D0C2C340C33_OFFSET UNITYSDK_OFFSET(0x11103090)
#define CLASS_2_4EEF534462694465_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x11103370)
#define CLASS_2_4EEF534462694465_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11103270)
#define CLASS_2_4EEF534462694465_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x11102B30)
#define CLASS_2_4EEF534462694465_METHOD_2_BFE4E1CE97CAD8AC_OFFSET UNITYSDK_OFFSET(0x11102D40)
#define CLASS_2_4EEF534462694465_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x11103480)
#define CLASS_2_4EEF534462694465_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11102770)
#define CLASS_2_4EEF534462694465_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11102950)
#define CLASS_2_4EEF534462694465_TICK_OFFSET UNITYSDK_OFFSET(0x11102A90)
#define CLASS_2_4EEF534462694465__CTOR_OFFSET UNITYSDK_OFFSET(0x111025E0)

inline static constexpr unsigned int Class_2_4EEF534462694465_TypeDefinitionIndex = 42458;

class Class_2_4EEF534462694465 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x18
	::RPG::GameCore::NPCComponent* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_2_2ECF3E74BC6E7972* Field_2_12; // 0x30
	::Class_2_A0580152EB393340* Field_2_1; // 0x38
	::UnityEngine::Vector3 Field_2_7; // 0x40
	::UnityEngine::Vector3 Field_2_10; // 0x4C
	::RPG::GameCore::CharacterMotionFlag Field_2_11; // 0x58
	::UnityEngine::Vector3 Field_2_5; // 0x5C
	::System::Boolean Field_2_14; // 0x68
	::System::Boolean Field_2_13; // 0x69
	::UnityEngine::Vector3 Field_2_9; // 0x6C
	::UnityEngine::Vector3 Field_2_8; // 0x78
	::RPG::GameCore::SoldierLineupPatrolStatus Field_2_4; // 0x84
	::UnityEngine::Vector3 Field_2_6; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_263AF43A5B4AB6EE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_263AF43A5B4AB6EE_OFFSET))(this, a1);
	}

	::RPG::GameCore::SoldierLineupPatrolStatus Method_2_0B18028B73596FE0()
	{
		return ((::RPG::GameCore::SoldierLineupPatrolStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_0B18028B73596FE0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7E832D0C2C340C33()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_7E832D0C2C340C33_OFFSET))(this);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BFE4E1CE97CAD8AC(::UnityEngine::Vector3 a1, ::RPG::GameCore::CharacterMotionFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_BFE4E1CE97CAD8AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_29622B5284E27113(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_29622B5284E27113_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEF534462694465_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}
};
