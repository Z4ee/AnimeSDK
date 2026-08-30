#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OverrideTimeRewindSpecularMatStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7D0A616A8F87B472_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186DA390)
#define CLASS_3_7D0A616A8F87B472__CTOR_OFFSET UNITYSDK_OFFSET(0x186DA360)

inline static constexpr unsigned int Class_3_7D0A616A8F87B472_TypeDefinitionIndex = 53637;

class Class_3_7D0A616A8F87B472 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OverrideTimeRewindSpecularMatStyle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle*))((::PBYTE)hIl2Cpp + CLASS_3_7D0A616A8F87B472__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D0A616A8F87B472_ONTASKBEGIN_OFFSET))(this);
	}
};
