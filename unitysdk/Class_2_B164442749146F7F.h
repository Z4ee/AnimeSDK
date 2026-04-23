#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_2B2C39A45CFC5540;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfinitePerWaveData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaveMonster; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B164442749146F7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA8BDF0)
#define CLASS_2_B164442749146F7F_METHOD_2_0EA837295AE4519F_OFFSET UNITYSDK_OFFSET(0xAA8CC70)
#define CLASS_2_B164442749146F7F_METHOD_2_28C532CD321F20DC_OFFSET UNITYSDK_OFFSET(0xAA8BF90)
#define CLASS_2_B164442749146F7F_METHOD_2_2A539F1403D9A5F7_OFFSET UNITYSDK_OFFSET(0xAA8CDB0)
#define CLASS_2_B164442749146F7F_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xAA8CB90)
#define CLASS_2_B164442749146F7F_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0xAA8D180)
#define CLASS_2_B164442749146F7F_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xAA8C720)
#define CLASS_2_B164442749146F7F_METHOD_2_EBEF4B6C71D9E0F7_OFFSET UNITYSDK_OFFSET(0xAA8CF10)
#define CLASS_2_B164442749146F7F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA8BE40)
#define CLASS_2_B164442749146F7F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA8C8F0)
#define CLASS_2_B164442749146F7F_TICK_OFFSET UNITYSDK_OFFSET(0xAA8C970)
#define CLASS_2_B164442749146F7F__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8BDA0)

inline static constexpr unsigned int Class_2_B164442749146F7F_TypeDefinitionIndex = 54356;

class Class_2_B164442749146F7F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_2B2C39A45CFC5540* Field_2_3; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::RPG::GameCore::WaveMonster* Field_2_0; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaveMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaveMonster*))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0EA837295AE4519F(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_METHOD_2_0EA837295AE4519F_OFFSET))(this, a1);
	}

	::System::Void Method_2_28C532CD321F20DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_METHOD_2_28C532CD321F20DC_OFFSET))(this);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_EBEF4B6C71D9E0F7(::System::Int32 a1, ::RPG::GameCore::InfinitePerWaveData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_METHOD_2_EBEF4B6C71D9E0F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2A539F1403D9A5F7(::System::Int32 a1, ::RPG::GameCore::InfinitePerWaveData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F_METHOD_2_2A539F1403D9A5F7_OFFSET))(this, a1, a2);
	}
};
