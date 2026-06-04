#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6E05D06815E8E983_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA38E6C0)
#define CLASS_2_6E05D06815E8E983_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA38E700)
#define CLASS_2_6E05D06815E8E983_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA38EAD0)
#define CLASS_2_6E05D06815E8E983_TICK_OFFSET UNITYSDK_OFFSET(0xA38EB20)
#define CLASS_2_6E05D06815E8E983__CTOR_OFFSET UNITYSDK_OFFSET(0xA38E6B0)

inline static constexpr unsigned int Class_2_6E05D06815E8E983_TypeDefinitionIndex = 54444;

class Class_2_6E05D06815E8E983 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PauseGame* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseGame*))((::PBYTE)hIl2Cpp + CLASS_2_6E05D06815E8E983__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E05D06815E8E983_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E05D06815E8E983_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E05D06815E8E983_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E05D06815E8E983_TICK_OFFSET))(this, a1);
	}
};
