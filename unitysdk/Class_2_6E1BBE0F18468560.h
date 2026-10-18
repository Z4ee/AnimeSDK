#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFor; }

#define CLASS_2_6E1BBE0F18468560_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB917F20)
#define CLASS_2_6E1BBE0F18468560_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB917FF0)
#define CLASS_2_6E1BBE0F18468560_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB918080)
#define CLASS_2_6E1BBE0F18468560_TICK_OFFSET UNITYSDK_OFFSET(0xB9180D0)
#define CLASS_2_6E1BBE0F18468560__CTOR_OFFSET UNITYSDK_OFFSET(0xB917E60)

inline static constexpr unsigned int Class_2_6E1BBE0F18468560_TypeDefinitionIndex = 58892;

class Class_2_6E1BBE0F18468560 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitFor* OFKGLJOAMLD; // 0x18
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFor*))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E1BBE0F18468560_TICK_OFFSET))(this, a1);
	}
};
