#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvCharacterDisableHitBox; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EA329707555000AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87FC110)
#define CLASS_3_EA329707555000AB_METHOD_3_DAE35D411655B259_OFFSET UNITYSDK_OFFSET(0x87FC390)
#define CLASS_3_EA329707555000AB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87FC150)
#define CLASS_3_EA329707555000AB__CTOR_OFFSET UNITYSDK_OFFSET(0x87FC0E0)
#define CLASS_3_EA329707555000AB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87FC4B0)

inline static constexpr unsigned int Class_3_EA329707555000AB_TypeDefinitionIndex = 46655;

class Class_3_EA329707555000AB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvCharacterDisableHitBox*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterDisableHitBox* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterDisableHitBox*))((::PBYTE)hIl2Cpp + CLASS_3_EA329707555000AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA329707555000AB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA329707555000AB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_DAE35D411655B259(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA329707555000AB_METHOD_3_DAE35D411655B259_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA329707555000AB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
