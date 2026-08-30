#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AudioSetRTPCValueByRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BFA1A4956B6E0F3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4B49F0)
#define CLASS_3_BFA1A4956B6E0F3C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B49C0)

inline static constexpr unsigned int Class_3_BFA1A4956B6E0F3C_TypeDefinitionIndex = 56531;

class Class_3_BFA1A4956B6E0F3C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AudioSetRTPCValueByRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AudioSetRTPCValueByRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AudioSetRTPCValueByRatio*))((::PBYTE)hIl2Cpp + CLASS_3_BFA1A4956B6E0F3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFA1A4956B6E0F3C_ONTASKBEGIN_OFFSET))(this);
	}
};
