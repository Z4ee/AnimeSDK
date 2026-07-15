#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_23D2CD7D9920A53A.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskA; }

#define CLASS_3_1F57DC33FC6C99E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17ACA5F0)
#define CLASS_3_1F57DC33FC6C99E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17ACA4F0)
#define CLASS_3_1F57DC33FC6C99E4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17ACA5A0)
#define CLASS_3_1F57DC33FC6C99E4_TICK_OFFSET UNITYSDK_OFFSET(0x17ACA540)
#define CLASS_3_1F57DC33FC6C99E4__CTOR_OFFSET UNITYSDK_OFFSET(0x17ACA470)

inline static constexpr unsigned int Class_3_1F57DC33FC6C99E4_TypeDefinitionIndex = 53261;

class Class_3_1F57DC33FC6C99E4 : public ::Class_2_23D2CD7D9920A53A
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskA*))((::PBYTE)hIl2Cpp + CLASS_3_1F57DC33FC6C99E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F57DC33FC6C99E4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1F57DC33FC6C99E4_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F57DC33FC6C99E4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F57DC33FC6C99E4_DISPOSE_OFFSET))(this);
	}
};
