#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetDieImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D6A07F190CC9DA82_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA66B5C0)
#define CLASS_2_D6A07F190CC9DA82_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA66B600)
#define CLASS_2_D6A07F190CC9DA82_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA66B7D0)
#define CLASS_2_D6A07F190CC9DA82_TICK_OFFSET UNITYSDK_OFFSET(0xA66B820)
#define CLASS_2_D6A07F190CC9DA82__CTOR_OFFSET UNITYSDK_OFFSET(0xA66B5B0)

inline static constexpr unsigned int Class_2_D6A07F190CC9DA82_TypeDefinitionIndex = 51742;

class Class_2_D6A07F190CC9DA82 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetDieImmediately* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDieImmediately* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDieImmediately*))((::PBYTE)hIl2Cpp + CLASS_2_D6A07F190CC9DA82__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A07F190CC9DA82_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A07F190CC9DA82_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A07F190CC9DA82_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D6A07F190CC9DA82_TICK_OFFSET))(this, a1);
	}
};
