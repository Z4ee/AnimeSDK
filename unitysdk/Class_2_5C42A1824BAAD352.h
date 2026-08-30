#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5C42A1824BAAD352_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159338C0)
#define CLASS_2_5C42A1824BAAD352_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15933900)
#define CLASS_2_5C42A1824BAAD352_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15933D60)
#define CLASS_2_5C42A1824BAAD352_TICK_OFFSET UNITYSDK_OFFSET(0x15933DB0)
#define CLASS_2_5C42A1824BAAD352__CTOR_OFFSET UNITYSDK_OFFSET(0x159337F0)

inline static constexpr unsigned int Class_2_5C42A1824BAAD352_TypeDefinitionIndex = 55593;

class Class_2_5C42A1824BAAD352 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetDynamicEntityParam* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicEntityParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicEntityParam*))((::PBYTE)hIl2Cpp + CLASS_2_5C42A1824BAAD352__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C42A1824BAAD352_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C42A1824BAAD352_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C42A1824BAAD352_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C42A1824BAAD352_TICK_OFFSET))(this, a1);
	}
};
