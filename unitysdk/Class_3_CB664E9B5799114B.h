#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class LoseHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CB664E9B5799114B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11967200)
#define CLASS_3_CB664E9B5799114B__CTOR_OFFSET UNITYSDK_OFFSET(0x11967130)

inline static constexpr unsigned int Class_3_CB664E9B5799114B_TypeDefinitionIndex = 50858;

class Class_3_CB664E9B5799114B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LoseHP*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoseHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoseHP*))((::PBYTE)hIl2Cpp + CLASS_3_CB664E9B5799114B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB664E9B5799114B_ONTASKBEGIN_OFFSET))(this);
	}
};
