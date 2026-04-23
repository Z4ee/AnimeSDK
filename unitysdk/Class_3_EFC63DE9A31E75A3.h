#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CloseTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EFC63DE9A31E75A3_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x95C61E0)
#define CLASS_3_EFC63DE9A31E75A3_ONSKIP_OFFSET UNITYSDK_OFFSET(0x95C61F0)
#define CLASS_3_EFC63DE9A31E75A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95C60F0)
#define CLASS_3_EFC63DE9A31E75A3__CTOR_OFFSET UNITYSDK_OFFSET(0x95C60C0)

inline static constexpr unsigned int Class_3_EFC63DE9A31E75A3_TypeDefinitionIndex = 49200;

class Class_3_EFC63DE9A31E75A3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CloseTimeRewindRecreateWorldPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + CLASS_3_EFC63DE9A31E75A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFC63DE9A31E75A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFC63DE9A31E75A3_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFC63DE9A31E75A3_ONSKIP_OFFSET))(this);
	}
};
