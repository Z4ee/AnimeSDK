#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetPhainonActionCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_85154DE4F3EFCFAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD26EFB0)
#define CLASS_2_85154DE4F3EFCFAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD26EFF0)
#define CLASS_2_85154DE4F3EFCFAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD26F1E0)
#define CLASS_2_85154DE4F3EFCFAC_TICK_OFFSET UNITYSDK_OFFSET(0xD26F230)
#define CLASS_2_85154DE4F3EFCFAC__CTOR_OFFSET UNITYSDK_OFFSET(0xD26EFA0)

inline static constexpr unsigned int Class_2_85154DE4F3EFCFAC_TypeDefinitionIndex = 56602;

class Class_2_85154DE4F3EFCFAC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetPhainonActionCount* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPhainonActionCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPhainonActionCount*))((::PBYTE)hIl2Cpp + CLASS_2_85154DE4F3EFCFAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85154DE4F3EFCFAC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85154DE4F3EFCFAC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85154DE4F3EFCFAC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_85154DE4F3EFCFAC_TICK_OFFSET))(this, a1);
	}
};
