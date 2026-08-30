#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DestroyUnstageCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A237D0311AA3C736_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E4A510)
#define CLASS_2_A237D0311AA3C736_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E4A550)
#define CLASS_2_A237D0311AA3C736_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E4A780)
#define CLASS_2_A237D0311AA3C736_TICK_OFFSET UNITYSDK_OFFSET(0x16E4A7D0)
#define CLASS_2_A237D0311AA3C736__CTOR_OFFSET UNITYSDK_OFFSET(0x16E4A500)

inline static constexpr unsigned int Class_2_A237D0311AA3C736_TypeDefinitionIndex = 55208;

class Class_2_A237D0311AA3C736 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DestroyUnstageCharacter* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyUnstageCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyUnstageCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_A237D0311AA3C736__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A237D0311AA3C736_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A237D0311AA3C736_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A237D0311AA3C736_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A237D0311AA3C736_TICK_OFFSET))(this, a1);
	}
};
