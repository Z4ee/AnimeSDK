#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToastLockFunction; }

#define CLASS_3_F2FB110179EE551C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x108F4AA0)
#define CLASS_3_F2FB110179EE551C__CTOR_OFFSET UNITYSDK_OFFSET(0x108F4A70)

inline static constexpr unsigned int Class_3_F2FB110179EE551C_TypeDefinitionIndex = 43240;

class Class_3_F2FB110179EE551C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToastLockFunction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToastLockFunction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToastLockFunction*))((::PBYTE)hIl2Cpp + CLASS_3_F2FB110179EE551C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FB110179EE551C_ONTASKBEGIN_OFFSET))(this);
	}
};
