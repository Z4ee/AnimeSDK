#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ReleaseEnvProfile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_64BFD0961B5D1E90_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCDCD70)
#define CLASS_2_64BFD0961B5D1E90_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCDCDB0)
#define CLASS_2_64BFD0961B5D1E90_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCCDD1E0)
#define CLASS_2_64BFD0961B5D1E90_TICK_OFFSET UNITYSDK_OFFSET(0xCCDD230)
#define CLASS_2_64BFD0961B5D1E90__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDCD60)

inline static constexpr unsigned int Class_2_64BFD0961B5D1E90_TypeDefinitionIndex = 58529;

class Class_2_64BFD0961B5D1E90 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ReleaseEnvProfile* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseEnvProfile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseEnvProfile*))((::PBYTE)hIl2Cpp + CLASS_2_64BFD0961B5D1E90__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BFD0961B5D1E90_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BFD0961B5D1E90_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BFD0961B5D1E90_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_64BFD0961B5D1E90_TICK_OFFSET))(this, a1);
	}
};
