#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvSetPetDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F7DC5AFC990D5381_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A15990)
#define CLASS_2_F7DC5AFC990D5381_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A15730)
#define CLASS_2_F7DC5AFC990D5381_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A15940)
#define CLASS_2_F7DC5AFC990D5381_TICK_OFFSET UNITYSDK_OFFSET(0x17A159D0)
#define CLASS_2_F7DC5AFC990D5381__CTOR_OFFSET UNITYSDK_OFFSET(0x17A15720)

inline static constexpr unsigned int Class_2_F7DC5AFC990D5381_TypeDefinitionIndex = 55316;

class Class_2_F7DC5AFC990D5381 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvSetPetDynamicValue* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
