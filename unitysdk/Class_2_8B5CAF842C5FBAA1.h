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

#define CLASS_2_8B5CAF842C5FBAA1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E68BC0)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_03334346FF66DC56_OFFSET UNITYSDK_OFFSET(0x16E69410)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_0B18028B73596FE0_OFFSET UNITYSDK_OFFSET(0x16E697B0)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x16E68E40)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_29622B5284E27113_OFFSET UNITYSDK_OFFSET(0x16E69C40)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x16E69280)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16E69B60)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_5CDBA3B04DB53D1D_OFFSET UNITYSDK_OFFSET(0x16E69950)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x16E69BC0)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16E69AC0)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x16E69110)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_AA907F79A6302F77_OFFSET UNITYSDK_OFFSET(0x16E692E0)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_DE973A2760D546FC_OFFSET UNITYSDK_OFFSET(0x16E69800)
#define CLASS_2_8B5CAF842C5FBAA1_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x16E69CD0)
#define CLASS_2_8B5CAF842C5FBAA1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E68C80)
#define CLASS_2_8B5CAF842C5FBAA1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E68ED0)
#define CLASS_2_8B5CAF842C5FBAA1_TICK_OFFSET UNITYSDK_OFFSET(0x16E69010)
#define CLASS_2_8B5CAF842C5FBAA1__CTOR_OFFSET UNITYSDK_OFFSET(0x16E68A50)

inline static constexpr unsigned int Class_2_8B5CAF842C5FBAA1_TypeDefinitionIndex = 50058;

class Class_2_8B5CAF842C5FBAA1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18
	::Class_2_2ECF3E74BC6E7972* Field_2_1; // 0x20
	::RPG::GameCore::NPCComponent* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::Class_2_A0580152EB393340* Field_2_4; // 0x38
	::RPG::GameCore::CharacterMotionFlag Field_2_5; // 0x40
	::System::Boolean Field_2_6; // 0x44
	::System::Boolean Field_2_7; // 0x45
	::UnityEngine::Vector3 Field_2_8; // 0x48
	::UnityEngine::Vector3 Field_2_9; // 0x54
	::UnityEngine::Vector3 Field_2_10; // 0x60
	::UnityEngine::Vector3 Field_2_11; // 0x6C
	::UnityEngine::Vector3 Field_2_12; // 0x78
	::UnityEngine::Vector3 Field_2_13; // 0x84
	::RPG::GameCore::SoldierLineupPatrolStatus Field_2_14; // 0x90

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA907F79A6302F77(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_AA907F79A6302F77_OFFSET))(this, a1);
	}

	::RPG::GameCore::SoldierLineupPatrolStatus Method_2_0B18028B73596FE0()
	{
		return ((::RPG::GameCore::SoldierLineupPatrolStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_0B18028B73596FE0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_DE973A2760D546FC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_DE973A2760D546FC_OFFSET))(this);
	}

	::System::Void Method_2_5CDBA3B04DB53D1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_5CDBA3B04DB53D1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_03334346FF66DC56(::UnityEngine::Vector3 a1, ::RPG::GameCore::CharacterMotionFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_03334346FF66DC56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_29622B5284E27113(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_29622B5284E27113_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5CAF842C5FBAA1_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}
};
