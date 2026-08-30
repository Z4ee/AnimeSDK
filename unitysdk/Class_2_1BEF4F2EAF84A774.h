#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ForceKill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1BEF4F2EAF84A774_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6D3360)
#define CLASS_2_1BEF4F2EAF84A774_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D33A0)
#define CLASS_2_1BEF4F2EAF84A774_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6D4290)
#define CLASS_2_1BEF4F2EAF84A774_TICK_OFFSET UNITYSDK_OFFSET(0xB6D42E0)
#define CLASS_2_1BEF4F2EAF84A774__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D3350)

inline static constexpr unsigned int Class_2_1BEF4F2EAF84A774_TypeDefinitionIndex = 55279;

class Class_2_1BEF4F2EAF84A774 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ForceKill* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceKill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceKill*))((::PBYTE)hIl2Cpp + CLASS_2_1BEF4F2EAF84A774__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BEF4F2EAF84A774_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BEF4F2EAF84A774_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BEF4F2EAF84A774_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1BEF4F2EAF84A774_TICK_OFFSET))(this, a1);
	}
};
