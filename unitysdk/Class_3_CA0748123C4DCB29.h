#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableNPCMonsterAI; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA0748123C4DCB29_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15A7AB30)
#define CLASS_3_CA0748123C4DCB29_METHOD_3_62D1BD926C7A660C_OFFSET UNITYSDK_OFFSET(0x15A7AB90)
#define CLASS_3_CA0748123C4DCB29_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x15A7A610)
#define CLASS_3_CA0748123C4DCB29_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15A7AB40)
#define CLASS_3_CA0748123C4DCB29_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A7A5C0)
#define CLASS_3_CA0748123C4DCB29__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7A590)

inline static constexpr unsigned int Class_3_CA0748123C4DCB29_TypeDefinitionIndex = 58261;

class Class_3_CA0748123C4DCB29 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableNPCMonsterAI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableNPCMonsterAI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableNPCMonsterAI*))((::PBYTE)hIl2Cpp + CLASS_3_CA0748123C4DCB29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA0748123C4DCB29_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA0748123C4DCB29_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA0748123C4DCB29_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA0748123C4DCB29_METHOD_3_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_3_62D1BD926C7A660C(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CA0748123C4DCB29_METHOD_3_62D1BD926C7A660C_OFFSET))(this, a1, a2, a3, a4);
	}
};
