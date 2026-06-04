#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DispelStatus; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AAC15A8C76AF280B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C1240)
#define CLASS_2_AAC15A8C76AF280B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7C12F0)
#define CLASS_2_AAC15A8C76AF280B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA7C21B0)
#define CLASS_2_AAC15A8C76AF280B_TICK_OFFSET UNITYSDK_OFFSET(0xA7C2200)
#define CLASS_2_AAC15A8C76AF280B__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C1140)

inline static constexpr unsigned int Class_2_AAC15A8C76AF280B_TypeDefinitionIndex = 51405;

class Class_2_AAC15A8C76AF280B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DispelStatus* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_2; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DispelStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DispelStatus*))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B_TICK_OFFSET))(this, a1);
	}
};
