#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetShenJunActionBar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9090DA4B9E3B4864_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176EDE10)
#define CLASS_2_9090DA4B9E3B4864_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176EDE50)
#define CLASS_2_9090DA4B9E3B4864_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x176EDEB0)
#define CLASS_2_9090DA4B9E3B4864_TICK_OFFSET UNITYSDK_OFFSET(0x176EDF00)
#define CLASS_2_9090DA4B9E3B4864__CTOR_OFFSET UNITYSDK_OFFSET(0x176EDE00)

inline static constexpr unsigned int Class_2_9090DA4B9E3B4864_TypeDefinitionIndex = 53883;

class Class_2_9090DA4B9E3B4864 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetShenJunActionBar* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetShenJunActionBar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetShenJunActionBar*))((::PBYTE)hIl2Cpp + CLASS_2_9090DA4B9E3B4864__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9090DA4B9E3B4864_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9090DA4B9E3B4864_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9090DA4B9E3B4864_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9090DA4B9E3B4864_TICK_OFFSET))(this, a1);
	}
};
