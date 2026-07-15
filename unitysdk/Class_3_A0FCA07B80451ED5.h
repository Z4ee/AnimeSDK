#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntityEnableRootDamper; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A0FCA07B80451ED5_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x18AD2190)
#define CLASS_3_A0FCA07B80451ED5_ONSKIP_OFFSET UNITYSDK_OFFSET(0x18AD21A0)
#define CLASS_3_A0FCA07B80451ED5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AD20C0)
#define CLASS_3_A0FCA07B80451ED5__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD2090)

inline static constexpr unsigned int Class_3_A0FCA07B80451ED5_TypeDefinitionIndex = 49972;

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
