#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CreateAvatarAssistant; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_32BED63646BEADBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0B6410)
#define CLASS_2_32BED63646BEADBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0B6450)
#define CLASS_2_32BED63646BEADBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A0B64A0)
#define CLASS_2_32BED63646BEADBE_TICK_OFFSET UNITYSDK_OFFSET(0x1A0B64F0)
#define CLASS_2_32BED63646BEADBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B6400)

inline static constexpr unsigned int Class_2_32BED63646BEADBE_TypeDefinitionIndex = 58190;

class Class_2_32BED63646BEADBE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::CreateAvatarAssistant* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateAvatarAssistant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateAvatarAssistant*))((::PBYTE)hIl2Cpp + CLASS_2_32BED63646BEADBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32BED63646BEADBE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32BED63646BEADBE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32BED63646BEADBE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_32BED63646BEADBE_TICK_OFFSET))(this, a1);
	}
};
