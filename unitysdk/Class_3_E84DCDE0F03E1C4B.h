#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetNpcMonsterVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E84DCDE0F03E1C4B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1185E480)
#define CLASS_3_E84DCDE0F03E1C4B_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1185E310)
#define CLASS_3_E84DCDE0F03E1C4B_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1185E490)
#define CLASS_3_E84DCDE0F03E1C4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1185E2C0)
#define CLASS_3_E84DCDE0F03E1C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1185E290)

inline static constexpr unsigned int Class_3_E84DCDE0F03E1C4B_TypeDefinitionIndex = 47257;

class Class_3_E84DCDE0F03E1C4B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetNpcMonsterVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNpcMonsterVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNpcMonsterVisible*))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B_METHOD_3_1290EA767C459179_OFFSET))(this);
	}
};
