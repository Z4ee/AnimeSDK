#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransitEnvProfile; }

#define CLASS_2_514F769FE6FD8DD1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15987DC0)
#define CLASS_2_514F769FE6FD8DD1_METHOD_2_5C4548BA617DD291_OFFSET UNITYSDK_OFFSET(0x15988860)
#define CLASS_2_514F769FE6FD8DD1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15987E00)
#define CLASS_2_514F769FE6FD8DD1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159887B0)
#define CLASS_2_514F769FE6FD8DD1_TICK_OFFSET UNITYSDK_OFFSET(0x15988800)
#define CLASS_2_514F769FE6FD8DD1__CTOR_OFFSET UNITYSDK_OFFSET(0x15987DB0)

inline static constexpr unsigned int Class_2_514F769FE6FD8DD1_TypeDefinitionIndex = 58915;

class Class_2_514F769FE6FD8DD1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TransitEnvProfile* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TransitEnvProfile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TransitEnvProfile*))((::PBYTE)hIl2Cpp + CLASS_2_514F769FE6FD8DD1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_514F769FE6FD8DD1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_514F769FE6FD8DD1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_514F769FE6FD8DD1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_514F769FE6FD8DD1_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnviromentControlPriority Method_2_5C4548BA617DD291()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_514F769FE6FD8DD1_METHOD_2_5C4548BA617DD291_OFFSET))(this);
	}
};
