#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvOverridePropButtonConfig; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_455BB1AD6B2B8CC4_METHOD_3_58920859582B86DB_OFFSET UNITYSDK_OFFSET(0x146A68B0)
#define CLASS_3_455BB1AD6B2B8CC4_METHOD_3_65DFBC6F8001491F_OFFSET UNITYSDK_OFFSET(0x146A6560)
#define CLASS_3_455BB1AD6B2B8CC4_METHOD_3_779C954A4F20925A_OFFSET UNITYSDK_OFFSET(0x146A6700)
#define CLASS_3_455BB1AD6B2B8CC4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146A6C30)
#define CLASS_3_455BB1AD6B2B8CC4__CTOR_OFFSET UNITYSDK_OFFSET(0x146A6530)

inline static constexpr unsigned int Class_3_455BB1AD6B2B8CC4_TypeDefinitionIndex = 50075;

class Class_3_455BB1AD6B2B8CC4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvOverridePropButtonConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOverridePropButtonConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOverridePropButtonConfig*))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_65DFBC6F8001491F()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4_METHOD_3_65DFBC6F8001491F_OFFSET))(this);
	}

	::System::Void Method_3_779C954A4F20925A(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4_METHOD_3_779C954A4F20925A_OFFSET))(this, a1);
	}

	::System::Void Method_3_58920859582B86DB(::RPG::GameCore::ColliderTriggerComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderTriggerComponent*))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4_METHOD_3_58920859582B86DB_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4_ONTASKBEGIN_OFFSET))(this);
	}
};
