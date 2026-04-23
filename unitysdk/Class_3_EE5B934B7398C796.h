#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockOrthographicReset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EE5B934B7398C796_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E16300)
#define CLASS_3_EE5B934B7398C796__CTOR_OFFSET UNITYSDK_OFFSET(0x11E162D0)

inline static constexpr unsigned int Class_3_EE5B934B7398C796_TypeDefinitionIndex = 53681;

class Class_3_EE5B934B7398C796 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockOrthographicReset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockOrthographicReset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockOrthographicReset*))((::PBYTE)hIl2Cpp + CLASS_3_EE5B934B7398C796__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE5B934B7398C796_ONTASKBEGIN_OFFSET))(this);
	}
};
