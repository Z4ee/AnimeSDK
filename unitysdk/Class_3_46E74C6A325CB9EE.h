#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ForceSetDialogCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_46E74C6A325CB9EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144070B0)
#define CLASS_3_46E74C6A325CB9EE__CTOR_OFFSET UNITYSDK_OFFSET(0x14407080)

inline static constexpr unsigned int Class_3_46E74C6A325CB9EE_TypeDefinitionIndex = 54325;

class Class_3_46E74C6A325CB9EE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForceSetDialogCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceSetDialogCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceSetDialogCamera*))((::PBYTE)hIl2Cpp + CLASS_3_46E74C6A325CB9EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E74C6A325CB9EE_ONTASKBEGIN_OFFSET))(this);
	}
};
