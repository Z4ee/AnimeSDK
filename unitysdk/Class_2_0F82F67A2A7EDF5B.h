#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RemoveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0F82F67A2A7EDF5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13560DB0)
#define CLASS_2_0F82F67A2A7EDF5B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13560DF0)
#define CLASS_2_0F82F67A2A7EDF5B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13561480)
#define CLASS_2_0F82F67A2A7EDF5B_TICK_OFFSET UNITYSDK_OFFSET(0x135614D0)
#define CLASS_2_0F82F67A2A7EDF5B__CTOR_OFFSET UNITYSDK_OFFSET(0x13560D00)

inline static constexpr unsigned int Class_2_0F82F67A2A7EDF5B_TypeDefinitionIndex = 51658;

class Class_2_0F82F67A2A7EDF5B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RemoveEffect* Field_2_1; // 0x20
	::RPG::GameCore::StringHash Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveEffect*))((::PBYTE)hIl2Cpp + CLASS_2_0F82F67A2A7EDF5B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82F67A2A7EDF5B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82F67A2A7EDF5B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82F67A2A7EDF5B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F82F67A2A7EDF5B_TICK_OFFSET))(this, a1);
	}
};
