#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StackCustomUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F8F77B7A82F0D634_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEDA9D60)
#define CLASS_2_F8F77B7A82F0D634_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEDA9E30)
#define CLASS_2_F8F77B7A82F0D634_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEDAA0A0)
#define CLASS_2_F8F77B7A82F0D634_TICK_OFFSET UNITYSDK_OFFSET(0xEDAA0F0)
#define CLASS_2_F8F77B7A82F0D634__CTOR_OFFSET UNITYSDK_OFFSET(0xEDA9CA0)

inline static constexpr unsigned int Class_2_F8F77B7A82F0D634_TypeDefinitionIndex = 55833;

class Class_2_F8F77B7A82F0D634 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::StackCustomUnselectable* OFKGLJOAMLD; // 0x20
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackCustomUnselectable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackCustomUnselectable*))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634_TICK_OFFSET))(this, a1);
	}
};
