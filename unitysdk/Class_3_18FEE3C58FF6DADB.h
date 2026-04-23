#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindOverrideMaxRewindTime; }

#define CLASS_3_18FEE3C58FF6DADB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEC97AF0)
#define CLASS_3_18FEE3C58FF6DADB__CTOR_OFFSET UNITYSDK_OFFSET(0xEC97AC0)

inline static constexpr unsigned int Class_3_18FEE3C58FF6DADB_TypeDefinitionIndex = 49232;

class Class_3_18FEE3C58FF6DADB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TimeRewindOverrideMaxRewindTime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindOverrideMaxRewindTime*))((::PBYTE)hIl2Cpp + CLASS_3_18FEE3C58FF6DADB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18FEE3C58FF6DADB_ONTASKBEGIN_OFFSET))(this);
	}
};
