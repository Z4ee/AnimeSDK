#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClosePage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_FA1CB65EF1F83693_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D9E9E0)
#define CLASS_2_FA1CB65EF1F83693_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D9EA20)
#define CLASS_2_FA1CB65EF1F83693_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16D9ED10)
#define CLASS_2_FA1CB65EF1F83693_TICK_OFFSET UNITYSDK_OFFSET(0x16D9ED60)
#define CLASS_2_FA1CB65EF1F83693__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9E9D0)

inline static constexpr unsigned int Class_2_FA1CB65EF1F83693_TypeDefinitionIndex = 53819;

class Class_2_FA1CB65EF1F83693 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ClosePage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClosePage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClosePage*))((::PBYTE)hIl2Cpp + CLASS_2_FA1CB65EF1F83693__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA1CB65EF1F83693_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA1CB65EF1F83693_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA1CB65EF1F83693_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA1CB65EF1F83693_TICK_OFFSET))(this, a1);
	}
};
