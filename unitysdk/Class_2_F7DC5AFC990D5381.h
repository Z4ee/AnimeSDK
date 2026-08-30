#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvSetPetDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F7DC5AFC990D5381_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB94F5F0)
#define CLASS_2_F7DC5AFC990D5381_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB94F390)
#define CLASS_2_F7DC5AFC990D5381_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB94F5A0)
#define CLASS_2_F7DC5AFC990D5381_TICK_OFFSET UNITYSDK_OFFSET(0xB94F630)
#define CLASS_2_F7DC5AFC990D5381__CTOR_OFFSET UNITYSDK_OFFSET(0xB94F380)

inline static constexpr unsigned int Class_2_F7DC5AFC990D5381_TypeDefinitionIndex = 58040;

class Class_2_F7DC5AFC990D5381 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::AdvSetPetDynamicValue* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetPetDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetPetDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_2_F7DC5AFC990D5381__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7DC5AFC990D5381_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7DC5AFC990D5381_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7DC5AFC990D5381_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F7DC5AFC990D5381_TICK_OFFSET))(this, a1);
	}
};
