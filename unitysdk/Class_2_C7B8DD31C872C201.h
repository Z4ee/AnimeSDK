#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnableInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C7B8DD31C872C201_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10049040)
#define CLASS_2_C7B8DD31C872C201_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10049080)
#define CLASS_2_C7B8DD31C872C201_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10049280)
#define CLASS_2_C7B8DD31C872C201_TICK_OFFSET UNITYSDK_OFFSET(0x100492D0)
#define CLASS_2_C7B8DD31C872C201__CTOR_OFFSET UNITYSDK_OFFSET(0x10049030)

inline static constexpr unsigned int Class_2_C7B8DD31C872C201_TypeDefinitionIndex = 53592;

class Class_2_C7B8DD31C872C201 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::EnableInput* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableInput*))((::PBYTE)hIl2Cpp + CLASS_2_C7B8DD31C872C201__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7B8DD31C872C201_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7B8DD31C872C201_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7B8DD31C872C201_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7B8DD31C872C201_TICK_OFFSET))(this, a1);
	}
};
