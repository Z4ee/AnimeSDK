#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RewindTimeRewindTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2BCCDE2861139949_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DC3CE0)
#define CLASS_3_2BCCDE2861139949__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC3CB0)

inline static constexpr unsigned int Class_3_2BCCDE2861139949_TypeDefinitionIndex = 49217;

class Class_3_2BCCDE2861139949 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RewindTimeRewindTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RewindTimeRewindTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RewindTimeRewindTarget*))((::PBYTE)hIl2Cpp + CLASS_3_2BCCDE2861139949__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BCCDE2861139949_ONTASKBEGIN_OFFSET))(this);
	}
};
