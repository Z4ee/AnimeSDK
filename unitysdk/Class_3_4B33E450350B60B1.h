#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpenHipplenGrowthPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4B33E450350B60B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7A5130)
#define CLASS_3_4B33E450350B60B1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A5100)

inline static constexpr unsigned int Class_3_4B33E450350B60B1_TypeDefinitionIndex = 52564;

class Class_3_4B33E450350B60B1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpenHipplenGrowthPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenHipplenGrowthPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenHipplenGrowthPage*))((::PBYTE)hIl2Cpp + CLASS_3_4B33E450350B60B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B33E450350B60B1_ONTASKBEGIN_OFFSET))(this);
	}
};
