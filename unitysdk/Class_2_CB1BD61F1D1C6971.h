#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DebateInitialize; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CB1BD61F1D1C6971_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B64430)
#define CLASS_2_CB1BD61F1D1C6971_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B64760)
#define CLASS_2_CB1BD61F1D1C6971_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B64480)
#define CLASS_2_CB1BD61F1D1C6971_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B646B0)
#define CLASS_2_CB1BD61F1D1C6971_TICK_OFFSET UNITYSDK_OFFSET(0x18B64700)
#define CLASS_2_CB1BD61F1D1C6971__CTOR_OFFSET UNITYSDK_OFFSET(0x18B64410)

inline static constexpr unsigned int Class_2_CB1BD61F1D1C6971_TypeDefinitionIndex = 50337;

class Class_2_CB1BD61F1D1C6971 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::DebateInitialize* Field_2_1; // 0x20

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
