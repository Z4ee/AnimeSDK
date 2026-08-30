#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvFireStimulus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_31D872A4B7BC905A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105C7000)
#define CLASS_3_31D872A4B7BC905A__CTOR_OFFSET UNITYSDK_OFFSET(0x105C6FD0)

inline static constexpr unsigned int Class_3_31D872A4B7BC905A_TypeDefinitionIndex = 52649;

class Class_3_31D872A4B7BC905A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvFireStimulus*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvFireStimulus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvFireStimulus*))((::PBYTE)hIl2Cpp + CLASS_3_31D872A4B7BC905A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31D872A4B7BC905A_ONTASKBEGIN_OFFSET))(this);
	}
};
