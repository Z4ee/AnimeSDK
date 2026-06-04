#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_3F916053B9BB8D97;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfinitePerWaveData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaveMonster; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_90D8AD0AAE354ED5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137D64D0)
#define CLASS_2_90D8AD0AAE354ED5_METHOD_2_0EA837295AE4519F_OFFSET UNITYSDK_OFFSET(0x137D7400)
#define CLASS_2_90D8AD0AAE354ED5_METHOD_2_2F77DD26AD1BB08D_OFFSET UNITYSDK_OFFSET(0x137D7740)
#define CLASS_2_90D8AD0AAE354ED5_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x137D7320)
#define CLASS_2_90D8AD0AAE354ED5_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x137D7AE0)
#define CLASS_2_90D8AD0AAE354ED5_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x137D6ED0)
#define CLASS_2_90D8AD0AAE354ED5_METHOD_2_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x137D6670)
#define CLASS_2_90D8AD0AAE354ED5_METHOD_2_D0022214F9CA6242_OFFSET UNITYSDK_OFFSET(0x137D7540)
#define CLASS_2_90D8AD0AAE354ED5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x137D6520)
#define CLASS_2_90D8AD0AAE354ED5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x137D70A0)
#define CLASS_2_90D8AD0AAE354ED5_TICK_OFFSET UNITYSDK_OFFSET(0x137D7110)
#define CLASS_2_90D8AD0AAE354ED5__CTOR_OFFSET UNITYSDK_OFFSET(0x137D6480)

inline static constexpr unsigned int Class_2_90D8AD0AAE354ED5_TypeDefinitionIndex = 55083;

class Class_2_90D8AD0AAE354ED5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_3F916053B9BB8D97* Field_2_2; // 0x28
	::RPG::GameCore::WaveMonster* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaveMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaveMonster*))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0EA837295AE4519F(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_METHOD_2_0EA837295AE4519F_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AF91962BC6E178A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_METHOD_2_9AF91962BC6E178A_OFFSET))(this);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_2F77DD26AD1BB08D(::System::Int32 a1, ::RPG::GameCore::InfinitePerWaveData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_METHOD_2_2F77DD26AD1BB08D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0022214F9CA6242(::System::Int32 a1, ::RPG::GameCore::InfinitePerWaveData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5_METHOD_2_D0022214F9CA6242_OFFSET))(this, a1, a2);
	}
};
