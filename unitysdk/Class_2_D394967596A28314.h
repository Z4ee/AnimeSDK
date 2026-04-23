#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ParkourGameSetCameraFOV; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D394967596A28314_DISPOSE_OFFSET UNITYSDK_OFFSET(0x982B270)
#define CLASS_2_D394967596A28314_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x982B310)
#define CLASS_2_D394967596A28314_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x982B500)
#define CLASS_2_D394967596A28314_TICK_OFFSET UNITYSDK_OFFSET(0x982B2B0)
#define CLASS_2_D394967596A28314__CTOR_OFFSET UNITYSDK_OFFSET(0x982B260)

inline static constexpr unsigned int Class_2_D394967596A28314_TypeDefinitionIndex = 48928;

class Class_2_D394967596A28314 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ParkourGameSetCameraFOV* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParkourGameSetCameraFOV* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParkourGameSetCameraFOV*))((::PBYTE)hIl2Cpp + CLASS_2_D394967596A28314__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D394967596A28314_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D394967596A28314_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D394967596A28314_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D394967596A28314_ONTASKRESET_OFFSET))(this);
	}
};
