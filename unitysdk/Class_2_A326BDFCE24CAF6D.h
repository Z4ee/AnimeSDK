#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchMainCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A326BDFCE24CAF6D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1157C160)
#define CLASS_2_A326BDFCE24CAF6D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1157C1F0)
#define CLASS_2_A326BDFCE24CAF6D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1157C1A0)
#define CLASS_2_A326BDFCE24CAF6D_TICK_OFFSET UNITYSDK_OFFSET(0x1157C400)
#define CLASS_2_A326BDFCE24CAF6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1157C150)

inline static constexpr unsigned int Class_2_A326BDFCE24CAF6D_TypeDefinitionIndex = 44608;

class Class_2_A326BDFCE24CAF6D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SwitchMainCamera* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMainCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMainCamera*))((::PBYTE)hIl2Cpp + CLASS_2_A326BDFCE24CAF6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A326BDFCE24CAF6D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A326BDFCE24CAF6D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A326BDFCE24CAF6D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A326BDFCE24CAF6D_TICK_OFFSET))(this, a1);
	}
};
