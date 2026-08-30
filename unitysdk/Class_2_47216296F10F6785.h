#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChangeActionEntityToObserveState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_47216296F10F6785_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1912F430)
#define CLASS_2_47216296F10F6785_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1912F110)
#define CLASS_2_47216296F10F6785_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1912F3E0)
#define CLASS_2_47216296F10F6785_TICK_OFFSET UNITYSDK_OFFSET(0x1912F380)
#define CLASS_2_47216296F10F6785__CTOR_OFFSET UNITYSDK_OFFSET(0x1912F100)

inline static constexpr unsigned int Class_2_47216296F10F6785_TypeDefinitionIndex = 55119;

class Class_2_47216296F10F6785 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ChangeActionEntityToObserveState* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeActionEntityToObserveState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeActionEntityToObserveState*))((::PBYTE)hIl2Cpp + CLASS_2_47216296F10F6785__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47216296F10F6785_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47216296F10F6785_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47216296F10F6785_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47216296F10F6785_DISPOSE_OFFSET))(this);
	}
};
