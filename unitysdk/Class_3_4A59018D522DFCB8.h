#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4A59018D522DFCB8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA453630)
#define CLASS_3_4A59018D522DFCB8__CTOR_OFFSET UNITYSDK_OFFSET(0xA453600)

inline static constexpr unsigned int Class_3_4A59018D522DFCB8_TypeDefinitionIndex = 47414;

class Class_3_4A59018D522DFCB8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopMunicipalChat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopMunicipalChat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopMunicipalChat*))((::PBYTE)hIl2Cpp + CLASS_3_4A59018D522DFCB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A59018D522DFCB8_ONTASKBEGIN_OFFSET))(this);
	}
};
