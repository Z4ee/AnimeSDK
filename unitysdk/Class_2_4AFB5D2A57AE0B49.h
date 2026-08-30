#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetNoShadowCaster; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4AFB5D2A57AE0B49_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB947530)
#define CLASS_2_4AFB5D2A57AE0B49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB947570)
#define CLASS_2_4AFB5D2A57AE0B49_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB947AE0)
#define CLASS_2_4AFB5D2A57AE0B49_TICK_OFFSET UNITYSDK_OFFSET(0xB947B30)
#define CLASS_2_4AFB5D2A57AE0B49__CTOR_OFFSET UNITYSDK_OFFSET(0xB947520)

inline static constexpr unsigned int Class_2_4AFB5D2A57AE0B49_TypeDefinitionIndex = 55747;

class Class_2_4AFB5D2A57AE0B49 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetNoShadowCaster* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNoShadowCaster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNoShadowCaster*))((::PBYTE)hIl2Cpp + CLASS_2_4AFB5D2A57AE0B49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AFB5D2A57AE0B49_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AFB5D2A57AE0B49_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AFB5D2A57AE0B49_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4AFB5D2A57AE0B49_TICK_OFFSET))(this, a1);
	}
};
