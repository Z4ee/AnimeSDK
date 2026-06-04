#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopTimeline; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_312F41298DD57945_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7C7340)
#define CLASS_3_312F41298DD57945__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C7310)

inline static constexpr unsigned int Class_3_312F41298DD57945_TypeDefinitionIndex = 52639;

class Class_3_312F41298DD57945 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopTimeline*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopTimeline*))((::PBYTE)hIl2Cpp + CLASS_3_312F41298DD57945__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_312F41298DD57945_ONTASKBEGIN_OFFSET))(this);
	}
};
