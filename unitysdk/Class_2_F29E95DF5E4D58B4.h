#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LoadLevelGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F29E95DF5E4D58B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC074F0)
#define CLASS_2_F29E95DF5E4D58B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC07530)
#define CLASS_2_F29E95DF5E4D58B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC07580)
#define CLASS_2_F29E95DF5E4D58B4_TICK_OFFSET UNITYSDK_OFFSET(0xBC075D0)
#define CLASS_2_F29E95DF5E4D58B4__CTOR_OFFSET UNITYSDK_OFFSET(0xBC074E0)

inline static constexpr unsigned int Class_2_F29E95DF5E4D58B4_TypeDefinitionIndex = 52981;

class Class_2_F29E95DF5E4D58B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::LoadLevelGroup* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadLevelGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadLevelGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F29E95DF5E4D58B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29E95DF5E4D58B4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29E95DF5E4D58B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29E95DF5E4D58B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F29E95DF5E4D58B4_TICK_OFFSET))(this, a1);
	}
};
