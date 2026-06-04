#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNpcPatrolStatus.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_19E76B515E7B257C;
class Class_2_9D4DD2F4235F8658;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNPCPatrol; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AF8E840B1182AF2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1CF650)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_467ECC487C2581DD_OFFSET UNITYSDK_OFFSET(0xC1CF830)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0xC1D0010)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_6F9CFB69CAB3BEF0_OFFSET UNITYSDK_OFFSET(0xC1D0680)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0xC1D03B0)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0xC1D0600)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xC1CF960)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0xC1D0480)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xC1D0C60)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xC1CFA20)
#define CLASS_2_AF8E840B1182AF2A_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xC1D04F0)
#define CLASS_2_AF8E840B1182AF2A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1CFCC0)
#define CLASS_2_AF8E840B1182AF2A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1CFD70)
#define CLASS_2_AF8E840B1182AF2A_TICK_OFFSET UNITYSDK_OFFSET(0xC1D0BF0)
#define CLASS_2_AF8E840B1182AF2A__CTOR_OFFSET UNITYSDK_OFFSET(0xC1CF0F0)

inline static constexpr unsigned int Class_2_AF8E840B1182AF2A_TypeDefinitionIndex = 49035;

class Class_2_AF8E840B1182AF2A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::NPCComponent* Field_2_0; // 0x18
	::Class_2_9D4DD2F4235F8658* Field_2_1; // 0x20
	::Class_2_A0580152EB393340* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5F51D4049EA87B7B*>* Field_2_3; // 0x30
	::Class_2_19E76B515E7B257C* Field_2_4; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x40
	::RPG::GameCore::TaskContext* Field_2_6; // 0x48
	::RPG::GameCore::TransformComponent* Field_2_7; // 0x50
	::RPG::GameCore::AdvNPCPatrol* Field_2_8; // 0x58
	::System::Single Field_2_9; // 0x60
	::UnityEngine::Vector3 Field_2_10; // 0x64
	::RPG::GameCore::AdvNpcPatrolStatus Field_2_11; // 0x70
	::System::Single Field_2_12; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCPatrol* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCPatrol*))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::CharacterMotionFlag Method_2_467ECC487C2581DD()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_467ECC487C2581DD_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_6F9CFB69CAB3BEF0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_6F9CFB69CAB3BEF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_A91086AED8314DB5_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_2_7E3C0318CC90CDC0()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF8E840B1182AF2A_METHOD_2_7E3C0318CC90CDC0_OFFSET))(this);
	}
};
