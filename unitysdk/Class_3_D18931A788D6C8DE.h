#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetHoyoGroupNpcAnimSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D18931A788D6C8DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E21530)
#define CLASS_3_D18931A788D6C8DE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E21500)

inline static constexpr unsigned int Class_3_D18931A788D6C8DE_TypeDefinitionIndex = 52770;

class Class_3_D18931A788D6C8DE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetHoyoGroupNpcAnimSpeedRatio*))((::PBYTE)hIl2Cpp + CLASS_3_D18931A788D6C8DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D18931A788D6C8DE_ONTASKBEGIN_OFFSET))(this);
	}
};
