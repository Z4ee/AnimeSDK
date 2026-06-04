#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNpcMoveAlongPathStatus.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_19E76B515E7B257C;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNpcMoveAlongPath; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CED1F202A4878567_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABD5CE0)
#define CLASS_2_CED1F202A4878567_METHOD_2_467ECC487C2581DD_OFFSET UNITYSDK_OFFSET(0xABD5EC0)
#define CLASS_2_CED1F202A4878567_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0xABD64B0)
#define CLASS_2_CED1F202A4878567_METHOD_2_6F9CFB69CAB3BEF0_OFFSET UNITYSDK_OFFSET(0xABD6B40)
#define CLASS_2_CED1F202A4878567_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xABD5FF0)
#define CLASS_2_CED1F202A4878567_METHOD_2_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0xABD6850)
#define CLASS_2_CED1F202A4878567_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xABD69B0)
#define CLASS_2_CED1F202A4878567_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xABD6920)
#define CLASS_2_CED1F202A4878567_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xABD7130)
#define CLASS_2_CED1F202A4878567_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0xABD6AD0)
#define CLASS_2_CED1F202A4878567_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABD6160)
#define CLASS_2_CED1F202A4878567_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xABD6210)
#define CLASS_2_CED1F202A4878567_TICK_OFFSET UNITYSDK_OFFSET(0xABD70C0)
#define CLASS_2_CED1F202A4878567__CTOR_OFFSET UNITYSDK_OFFSET(0xABD58B0)

inline static constexpr unsigned int Class_2_CED1F202A4878567_TypeDefinitionIndex = 49055;

class Class_2_CED1F202A4878567 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcMoveAlongPath* Field_2_0; // 0x18
	::Class_2_A0580152EB393340* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5F51D4049EA87B7B*>* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::Class_2_19E76B515E7B257C* Field_2_5; // 0x40
	::RPG::GameCore::NPCComponent* Field_2_6; // 0x48
	::RPG::GameCore::AdvNpcMoveAlongPathStatus Field_2_7; // 0x50
	::System::Single Field_2_8; // 0x54
	::UnityEngine::Vector3 Field_2_9; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcMoveAlongPath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcMoveAlongPath*))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::CharacterMotionFlag Method_2_467ECC487C2581DD()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_467ECC487C2581DD_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_2_6F9CFB69CAB3BEF0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_6F9CFB69CAB3BEF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_2_7E3C0318CC90CDC0()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CED1F202A4878567_METHOD_2_7E3C0318CC90CDC0_OFFSET))(this);
	}
};
