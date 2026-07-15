#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerHitProp; }

#define CLASS_3_CE3BFA88804D4982_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x16274DE0)
#define CLASS_3_CE3BFA88804D4982_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16274D90)
#define CLASS_3_CE3BFA88804D4982__CTOR_OFFSET UNITYSDK_OFFSET(0x16274D60)

inline static constexpr unsigned int Class_3_CE3BFA88804D4982_TypeDefinitionIndex = 56159;

class Class_3_CE3BFA88804D4982 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerHitProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerHitProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerHitProp*))((::PBYTE)hIl2Cpp + CLASS_3_CE3BFA88804D4982__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE3BFA88804D4982_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE3BFA88804D4982_METHOD_3_07280B24DFAC0CA9_OFFSET))(this);
	}
};
