#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseTalk; }

#define CLASS_2_519634C860493812_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BAC5E0)
#define CLASS_2_519634C860493812_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BAC620)
#define CLASS_2_519634C860493812_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BAC670)
#define CLASS_2_519634C860493812_TICK_OFFSET UNITYSDK_OFFSET(0x10BAC6C0)
#define CLASS_2_519634C860493812__CTOR_OFFSET UNITYSDK_OFFSET(0x10BAC5D0)

inline static constexpr unsigned int Class_2_519634C860493812_TypeDefinitionIndex = 47650;

class Class_2_519634C860493812 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + CLASS_2_519634C860493812__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_519634C860493812_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_519634C860493812_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_519634C860493812_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_519634C860493812_TICK_OFFSET))(this, a1);
	}
};
