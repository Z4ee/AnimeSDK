#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNpcPatrolStatus.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_19E76B515E7B257C;
class Class_2_21055A9FA74B791E;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNPCPatrol; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D6A5585BAB07BFBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C856E0)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x18C85B90)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x18C86880)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x18C86340)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_467ECC487C2581DD_OFFSET UNITYSDK_OFFSET(0x18C859A0)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_6F9CFB69CAB3BEF0_OFFSET UNITYSDK_OFFSET(0x18C86A80)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0x18C867B0)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18C85AD0)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x18C87130)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x18C868F0)
#define CLASS_2_D6A5585BAB07BFBF_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x18C86A00)
#define CLASS_2_D6A5585BAB07BFBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C85F10)
#define CLASS_2_D6A5585BAB07BFBF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18C85FC0)
#define CLASS_2_D6A5585BAB07BFBF_TICK_OFFSET UNITYSDK_OFFSET(0x18C870C0)
#define CLASS_2_D6A5585BAB07BFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x18C84F00)

inline static constexpr unsigned int Class_2_D6A5585BAB07BFBF_TypeDefinitionIndex = 50048;

class Class_2_D6A5585BAB07BFBF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::NPCComponent* Field_2_0; // 0x18
	::RPG::GameCore::AdvNPCPatrol* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5F51D4049EA87B7B*>* Field_2_2; // 0x28
	::Class_2_A0580152EB393340* Field_2_3; // 0x30
	::RPG::GameCore::TransformComponent* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40
	::Class_2_21055A9FA74B791E* Field_2_6; // 0x48
	::Class_1_5F51D4049EA87B7B* Field_2_7; // 0x50
	::Class_2_19E76B515E7B257C* Field_2_8; // 0x58
	::System::Single Field_2_9; // 0x60
	::System::Single Field_2_10; // 0x64
	::UnityEngine::Vector3 Field_2_11; // 0x68
	::RPG::GameCore::AdvNpcPatrolStatus Field_2_12; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCPatrol* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCPatrol*))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::CharacterMotionFlag Method_2_467ECC487C2581DD()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_467ECC487C2581DD_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_2_6F9CFB69CAB3BEF0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_6F9CFB69CAB3BEF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_2_7E3C0318CC90CDC0()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A5585BAB07BFBF_METHOD_2_7E3C0318CC90CDC0_OFFSET))(this);
	}
};
