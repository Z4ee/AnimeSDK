#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActivityElationHideCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D4A9501DB31C286D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA47B460)
#define CLASS_3_D4A9501DB31C286D__CTOR_OFFSET UNITYSDK_OFFSET(0xA47B430)

inline static constexpr unsigned int Class_3_D4A9501DB31C286D_TypeDefinitionIndex = 52603;

class Class_3_D4A9501DB31C286D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActivityElationHideCutIn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActivityElationHideCutIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActivityElationHideCutIn*))((::PBYTE)hIl2Cpp + CLASS_3_D4A9501DB31C286D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4A9501DB31C286D_ONTASKBEGIN_OFFSET))(this);
	}
};
