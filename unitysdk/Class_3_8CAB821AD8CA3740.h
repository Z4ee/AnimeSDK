#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindForbidSelect; }

#define CLASS_3_8CAB821AD8CA3740_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1765F740)
#define CLASS_3_8CAB821AD8CA3740__CTOR_OFFSET UNITYSDK_OFFSET(0x1765F710)

inline static constexpr unsigned int Class_3_8CAB821AD8CA3740_TypeDefinitionIndex = 50972;

class Class_3_8CAB821AD8CA3740 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TimeRewindForbidSelect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindForbidSelect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindForbidSelect*))((::PBYTE)hIl2Cpp + CLASS_3_8CAB821AD8CA3740__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CAB821AD8CA3740_ONTASKBEGIN_OFFSET))(this);
	}
};
