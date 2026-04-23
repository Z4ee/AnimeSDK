#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B9FAD554C5BF3A94_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2E3430)
#define CLASS_2_B9FAD554C5BF3A94_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0xA2E3D40)
#define CLASS_2_B9FAD554C5BF3A94_METHOD_2_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0xA2E3B80)
#define CLASS_2_B9FAD554C5BF3A94_METHOD_2_FABFA21254FBB3C1_OFFSET UNITYSDK_OFFSET(0xA2E3690)
#define CLASS_2_B9FAD554C5BF3A94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA2E34D0)
#define CLASS_2_B9FAD554C5BF3A94_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA2E3A80)
#define CLASS_2_B9FAD554C5BF3A94_TICK_OFFSET UNITYSDK_OFFSET(0xA2E3B20)
#define CLASS_2_B9FAD554C5BF3A94__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E3420)

inline static constexpr unsigned int Class_2_B9FAD554C5BF3A94_TypeDefinitionIndex = 48605;

class Class_2_B9FAD554C5BF3A94 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CaptureNPCToCharacter* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::GameWorld* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureNPCToCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureNPCToCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_METHOD_2_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FABFA21254FBB3C1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_METHOD_2_FABFA21254FBB3C1_OFFSET))(this);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}
};
