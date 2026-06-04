#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetNpcStatus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B75C3DE4C27B1A17_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6891F0)
#define CLASS_3_B75C3DE4C27B1A17__CTOR_OFFSET UNITYSDK_OFFSET(0xA6891C0)

inline static constexpr unsigned int Class_3_B75C3DE4C27B1A17_TypeDefinitionIndex = 49770;

class Class_3_B75C3DE4C27B1A17 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetNpcStatus*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNpcStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNpcStatus*))((::PBYTE)hIl2Cpp + CLASS_3_B75C3DE4C27B1A17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B75C3DE4C27B1A17_ONTASKBEGIN_OFFSET))(this);
	}
};
