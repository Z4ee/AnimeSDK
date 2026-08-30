#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindSetSpecularMat; }

#define CLASS_3_63B40BD4B0336135_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161DE570)
#define CLASS_3_63B40BD4B0336135__CTOR_OFFSET UNITYSDK_OFFSET(0x161DE540)

inline static constexpr unsigned int Class_3_63B40BD4B0336135_TypeDefinitionIndex = 53662;

class Class_3_63B40BD4B0336135 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TimeRewindSetSpecularMat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindSetSpecularMat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindSetSpecularMat*))((::PBYTE)hIl2Cpp + CLASS_3_63B40BD4B0336135__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_63B40BD4B0336135_ONTASKBEGIN_OFFSET))(this);
	}
};
