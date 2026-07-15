#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AudioSetRTPCValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C92D2FC5FA572B96_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16051B70)
#define CLASS_3_C92D2FC5FA572B96__CTOR_OFFSET UNITYSDK_OFFSET(0x16051B40)

inline static constexpr unsigned int Class_3_C92D2FC5FA572B96_TypeDefinitionIndex = 53812;

class Class_3_C92D2FC5FA572B96 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AudioSetRTPCValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AudioSetRTPCValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AudioSetRTPCValue*))((::PBYTE)hIl2Cpp + CLASS_3_C92D2FC5FA572B96__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C92D2FC5FA572B96_ONTASKBEGIN_OFFSET))(this);
	}
};
