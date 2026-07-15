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

#define CLASS_2_414A864C67121082_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164567B0)
#define CLASS_2_414A864C67121082_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x164571B0)
#define CLASS_2_414A864C67121082_METHOD_2_467ECC487C2581DD_OFFSET UNITYSDK_OFFSET(0x16456A70)
#define CLASS_2_414A864C67121082_METHOD_2_6F9CFB69CAB3BEF0_OFFSET UNITYSDK_OFFSET(0x16457910)
#define CLASS_2_414A864C67121082_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x16456BA0)
#define CLASS_2_414A864C67121082_METHOD_2_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0x16457620)
#define CLASS_2_414A864C67121082_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x16457780)
#define CLASS_2_414A864C67121082_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x164576F0)
#define CLASS_2_414A864C67121082_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x16457FD0)
#define CLASS_2_414A864C67121082_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x164578A0)
#define CLASS_2_414A864C67121082_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16456D80)
#define CLASS_2_414A864C67121082_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16456E30)
#define CLASS_2_414A864C67121082_TICK_OFFSET UNITYSDK_OFFSET(0x16457F60)
#define CLASS_2_414A864C67121082__CTOR_OFFSET UNITYSDK_OFFSET(0x16456250)

inline static constexpr unsigned int Class_2_414A864C67121082_TypeDefinitionIndex = 50068;

class Class_2_414A864C67121082 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5F51D4049EA87B7B*>* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::Class_2_A0580152EB393340* Field_2_3; // 0x30
	::RPG::GameCore::AdvNpcMoveAlongPath* Field_2_4; // 0x38
	::RPG::GameCore::NPCComponent* Field_2_5; // 0x40
	::Class_2_19E76B515E7B257C* Field_2_6; // 0x48
	::RPG::GameCore::AdvNpcMoveAlongPathStatus Field_2_7; // 0x50
	::System::Single Field_2_8; // 0x54
	::UnityEngine::Vector3 Field_2_9; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcMoveAlongPath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcMoveAlongPath*))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::CharacterMotionFlag Method_2_467ECC487C2581DD()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_467ECC487C2581DD_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_2_6F9CFB69CAB3BEF0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_6F9CFB69CAB3BEF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_2_7E3C0318CC90CDC0()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414A864C67121082_METHOD_2_7E3C0318CC90CDC0_OFFSET))(this);
	}
};
