#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpenTrainPartyBuildUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DA38FCB5DF21DCB9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA4B98A0)
#define CLASS_3_DA38FCB5DF21DCB9__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B9870)

inline static constexpr unsigned int Class_3_DA38FCB5DF21DCB9_TypeDefinitionIndex = 49912;

class Class_3_DA38FCB5DF21DCB9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpenTrainPartyBuildUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTrainPartyBuildUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTrainPartyBuildUI*))((::PBYTE)hIl2Cpp + CLASS_3_DA38FCB5DF21DCB9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA38FCB5DF21DCB9_ONTASKBEGIN_OFFSET))(this);
	}
};
