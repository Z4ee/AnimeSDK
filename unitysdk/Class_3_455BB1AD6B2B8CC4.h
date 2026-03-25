#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvOverridePropButtonConfig; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_455BB1AD6B2B8CC4_METHOD_3_1FC489CDBE98B9A3_OFFSET UNITYSDK_OFFSET(0x117046A0)
#define CLASS_3_455BB1AD6B2B8CC4_METHOD_3_33ED5010033F78E4_OFFSET UNITYSDK_OFFSET(0x11704870)
#define CLASS_3_455BB1AD6B2B8CC4_METHOD_3_DB6AE91A68719504_OFFSET UNITYSDK_OFFSET(0x117045F0)
#define CLASS_3_455BB1AD6B2B8CC4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11704B90)
#define CLASS_3_455BB1AD6B2B8CC4__CTOR_OFFSET UNITYSDK_OFFSET(0x117045C0)

inline static constexpr unsigned int Class_3_455BB1AD6B2B8CC4_TypeDefinitionIndex = 42475;

class Class_3_455BB1AD6B2B8CC4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvOverridePropButtonConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOverridePropButtonConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOverridePropButtonConfig*))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_DB6AE91A68719504()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4_METHOD_3_DB6AE91A68719504_OFFSET))(this);
	}

	::System::Void Method_3_1FC489CDBE98B9A3(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4_METHOD_3_1FC489CDBE98B9A3_OFFSET))(this, a1);
	}

	::System::Void Method_3_33ED5010033F78E4(::RPG::GameCore::ColliderTriggerComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderTriggerComponent*))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4_METHOD_3_33ED5010033F78E4_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_455BB1AD6B2B8CC4_ONTASKBEGIN_OFFSET))(this);
	}
};
