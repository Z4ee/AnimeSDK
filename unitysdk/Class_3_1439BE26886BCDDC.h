#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialForbidAutoBattle; }

#define CLASS_3_1439BE26886BCDDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x91ECB90)
#define CLASS_3_1439BE26886BCDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x91ECB60)

inline static constexpr unsigned int Class_3_1439BE26886BCDDC_TypeDefinitionIndex = 51431;

class Class_3_1439BE26886BCDDC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialForbidAutoBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialForbidAutoBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialForbidAutoBattle*))((::PBYTE)hIl2Cpp + CLASS_3_1439BE26886BCDDC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1439BE26886BCDDC_ONTASKBEGIN_OFFSET))(this);
	}
};
