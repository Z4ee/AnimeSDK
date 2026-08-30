#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class SetHudTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7BF427774E4578DA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B7B940)
#define CLASS_2_7BF427774E4578DA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B7B980)
#define CLASS_2_7BF427774E4578DA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B7BAE0)
#define CLASS_2_7BF427774E4578DA_TICK_OFFSET UNITYSDK_OFFSET(0x18B7BB30)
#define CLASS_2_7BF427774E4578DA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7B930)

inline static constexpr unsigned int Class_2_7BF427774E4578DA_TypeDefinitionIndex = 58696;

class Class_2_7BF427774E4578DA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetHudTemplate* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHudTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHudTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_7BF427774E4578DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF427774E4578DA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF427774E4578DA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF427774E4578DA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7BF427774E4578DA_TICK_OFFSET))(this, a1);
	}
};
