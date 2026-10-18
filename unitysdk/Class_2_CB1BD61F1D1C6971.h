#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DebateInitialize; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CB1BD61F1D1C6971_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159C93D0)
#define CLASS_2_CB1BD61F1D1C6971_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159C9700)
#define CLASS_2_CB1BD61F1D1C6971_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159C9420)
#define CLASS_2_CB1BD61F1D1C6971_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159C9650)
#define CLASS_2_CB1BD61F1D1C6971_TICK_OFFSET UNITYSDK_OFFSET(0x159C96A0)
#define CLASS_2_CB1BD61F1D1C6971__CTOR_OFFSET UNITYSDK_OFFSET(0x159C93C0)

inline static constexpr unsigned int Class_2_CB1BD61F1D1C6971_TypeDefinitionIndex = 52726;

class Class_2_CB1BD61F1D1C6971 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DebateInitialize* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DebateInitialize* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DebateInitialize*))((::PBYTE)hIl2Cpp + CLASS_2_CB1BD61F1D1C6971__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB1BD61F1D1C6971_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB1BD61F1D1C6971_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB1BD61F1D1C6971_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB1BD61F1D1C6971_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB1BD61F1D1C6971_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
