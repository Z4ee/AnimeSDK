#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CloseRogueNousPages; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_481D7B32C371E378_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19111B70)
#define CLASS_2_481D7B32C371E378_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19111BB0)
#define CLASS_2_481D7B32C371E378_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19111C70)
#define CLASS_2_481D7B32C371E378_TICK_OFFSET UNITYSDK_OFFSET(0x19111CC0)
#define CLASS_2_481D7B32C371E378__CTOR_OFFSET UNITYSDK_OFFSET(0x19111B60)

inline static constexpr unsigned int Class_2_481D7B32C371E378_TypeDefinitionIndex = 58181;

class Class_2_481D7B32C371E378 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* DNDBFANMBKD; // 0x0
	::RPG::GameCore::CloseRogueNousPages* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseRogueNousPages* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseRogueNousPages*))((::PBYTE)hIl2Cpp + CLASS_2_481D7B32C371E378__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_481D7B32C371E378_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_481D7B32C371E378_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_481D7B32C371E378_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_481D7B32C371E378_TICK_OFFSET))(this, a1);
	}
};
