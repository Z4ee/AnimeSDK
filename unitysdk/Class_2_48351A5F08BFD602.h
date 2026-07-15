#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifySP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_48351A5F08BFD602_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DD6B00)
#define CLASS_2_48351A5F08BFD602_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DD6B40)
#define CLASS_2_48351A5F08BFD602_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16DD7120)
#define CLASS_2_48351A5F08BFD602_TICK_OFFSET UNITYSDK_OFFSET(0x16DD7170)
#define CLASS_2_48351A5F08BFD602__CTOR_OFFSET UNITYSDK_OFFSET(0x16DD6AF0)

inline static constexpr unsigned int Class_2_48351A5F08BFD602_TypeDefinitionIndex = 52711;

class Class_2_48351A5F08BFD602 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ModifySP* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySP*))((::PBYTE)hIl2Cpp + CLASS_2_48351A5F08BFD602__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48351A5F08BFD602_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48351A5F08BFD602_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48351A5F08BFD602_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48351A5F08BFD602_TICK_OFFSET))(this, a1);
	}
};
