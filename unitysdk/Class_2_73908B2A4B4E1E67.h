#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetDitherGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_73908B2A4B4E1E67_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160EDE90)
#define CLASS_2_73908B2A4B4E1E67_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160EDED0)
#define CLASS_2_73908B2A4B4E1E67_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x160EE090)
#define CLASS_2_73908B2A4B4E1E67_TICK_OFFSET UNITYSDK_OFFSET(0x160EE0E0)
#define CLASS_2_73908B2A4B4E1E67__CTOR_OFFSET UNITYSDK_OFFSET(0x160EDE80)

inline static constexpr unsigned int Class_2_73908B2A4B4E1E67_TypeDefinitionIndex = 54095;

class Class_2_73908B2A4B4E1E67 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetDitherGroup* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDitherGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDitherGroup*))((::PBYTE)hIl2Cpp + CLASS_2_73908B2A4B4E1E67__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73908B2A4B4E1E67_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73908B2A4B4E1E67_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73908B2A4B4E1E67_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73908B2A4B4E1E67_TICK_OFFSET))(this, a1);
	}
};
