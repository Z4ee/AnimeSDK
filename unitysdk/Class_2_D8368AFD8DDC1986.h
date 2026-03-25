#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierAttachEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D8368AFD8DDC1986_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A24F00)
#define CLASS_2_D8368AFD8DDC1986_METHOD_2_5690A272C6403EDD_OFFSET UNITYSDK_OFFSET(0x8A257C0)
#define CLASS_2_D8368AFD8DDC1986_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A24F40)
#define CLASS_2_D8368AFD8DDC1986_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A258C0)
#define CLASS_2_D8368AFD8DDC1986_TICK_OFFSET UNITYSDK_OFFSET(0x8A25910)
#define CLASS_2_D8368AFD8DDC1986__CTOR_OFFSET UNITYSDK_OFFSET(0x8A24EF0)

inline static constexpr unsigned int Class_2_D8368AFD8DDC1986_TypeDefinitionIndex = 44163;

class Class_2_D8368AFD8DDC1986 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ModifierAttachEffect* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierAttachEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierAttachEffect*))((::PBYTE)hIl2Cpp + CLASS_2_D8368AFD8DDC1986__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8368AFD8DDC1986_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8368AFD8DDC1986_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_5690A272C6403EDD(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_D8368AFD8DDC1986_METHOD_2_5690A272C6403EDD_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8368AFD8DDC1986_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8368AFD8DDC1986_TICK_OFFSET))(this, a1);
	}
};
