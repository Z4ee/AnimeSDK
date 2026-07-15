#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToastPileIgnore; }

#define CLASS_3_AAADA32FF37A5CBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C800D0)
#define CLASS_3_AAADA32FF37A5CBA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C800A0)

inline static constexpr unsigned int Class_3_AAADA32FF37A5CBA_TypeDefinitionIndex = 50981;

class Class_3_AAADA32FF37A5CBA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToastPileIgnore*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToastPileIgnore* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToastPileIgnore*))((::PBYTE)hIl2Cpp + CLASS_3_AAADA32FF37A5CBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAADA32FF37A5CBA_ONTASKBEGIN_OFFSET))(this);
	}
};
