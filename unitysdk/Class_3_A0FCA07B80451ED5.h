#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntityEnableRootDamper; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A0FCA07B80451ED5_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE634A20)
#define CLASS_3_A0FCA07B80451ED5_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE634A30)
#define CLASS_3_A0FCA07B80451ED5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE634950)
#define CLASS_3_A0FCA07B80451ED5__CTOR_OFFSET UNITYSDK_OFFSET(0xE634920)

inline static constexpr unsigned int Class_3_A0FCA07B80451ED5_TypeDefinitionIndex = 48333;

class Class_3_A0FCA07B80451ED5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEntityEnableRootDamper*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityEnableRootDamper* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityEnableRootDamper*))((::PBYTE)hIl2Cpp + CLASS_3_A0FCA07B80451ED5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0FCA07B80451ED5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0FCA07B80451ED5_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0FCA07B80451ED5_ONSKIP_OFFSET))(this);
	}
};
