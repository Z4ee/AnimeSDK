#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RemoveDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9DA81A9DAFE4A133_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186F01F0)
#define CLASS_2_9DA81A9DAFE4A133_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186F0230)
#define CLASS_2_9DA81A9DAFE4A133_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186F05F0)
#define CLASS_2_9DA81A9DAFE4A133_TICK_OFFSET UNITYSDK_OFFSET(0x186F0640)
#define CLASS_2_9DA81A9DAFE4A133__CTOR_OFFSET UNITYSDK_OFFSET(0x186F0120)

inline static constexpr unsigned int Class_2_9DA81A9DAFE4A133_TypeDefinitionIndex = 55503;

class Class_2_9DA81A9DAFE4A133 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::RemoveDynamicEntityParam* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveDynamicEntityParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveDynamicEntityParam*))((::PBYTE)hIl2Cpp + CLASS_2_9DA81A9DAFE4A133__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DA81A9DAFE4A133_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DA81A9DAFE4A133_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DA81A9DAFE4A133_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9DA81A9DAFE4A133_TICK_OFFSET))(this, a1);
	}
};
