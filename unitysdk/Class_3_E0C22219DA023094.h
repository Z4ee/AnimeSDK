#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetupOptionsTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E0C22219DA023094_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198DF240)
#define CLASS_3_E0C22219DA023094__CTOR_OFFSET UNITYSDK_OFFSET(0x198DF210)

inline static constexpr unsigned int Class_3_E0C22219DA023094_TypeDefinitionIndex = 53440;

class Class_3_E0C22219DA023094 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupOptionsTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupOptionsTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupOptionsTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_E0C22219DA023094__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0C22219DA023094_ONTASKBEGIN_OFFSET))(this);
	}
};
