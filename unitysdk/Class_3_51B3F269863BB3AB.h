#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvDistrictEnableTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_51B3F269863BB3AB_METHOD_3_B53183EAC5C595C7_OFFSET UNITYSDK_OFFSET(0x936C330)
#define CLASS_3_51B3F269863BB3AB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x936C750)
#define CLASS_3_51B3F269863BB3AB__CTOR_OFFSET UNITYSDK_OFFSET(0x936C300)

inline static constexpr unsigned int Class_3_51B3F269863BB3AB_TypeDefinitionIndex = 48324;

class Class_3_51B3F269863BB3AB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvDistrictEnableTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDistrictEnableTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDistrictEnableTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_51B3F269863BB3AB__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_B53183EAC5C595C7()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51B3F269863BB3AB_METHOD_3_B53183EAC5C595C7_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51B3F269863BB3AB_ONTASKBEGIN_OFFSET))(this);
	}
};
