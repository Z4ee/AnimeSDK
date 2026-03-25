#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyAiVisionExcludeTagRuntime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27203D4C70FBE678_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11867770)
#define CLASS_3_27203D4C70FBE678__CTOR_OFFSET UNITYSDK_OFFSET(0x11867740)

inline static constexpr unsigned int Class_3_27203D4C70FBE678_TypeDefinitionIndex = 42912;

class Class_3_27203D4C70FBE678 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyAiVisionExcludeTagRuntime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAiVisionExcludeTagRuntime*))((::PBYTE)hIl2Cpp + CLASS_3_27203D4C70FBE678__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27203D4C70FBE678_ONTASKBEGIN_OFFSET))(this);
	}
};
