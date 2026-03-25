#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetTeammateAttackFormation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_927184137CE93B15_METHOD_3_8B4CC4824B24DC4A_OFFSET UNITYSDK_OFFSET(0xBEC7D00)
#define CLASS_3_927184137CE93B15_METHOD_3_8CC9316E9FA0838D_OFFSET UNITYSDK_OFFSET(0xBEC7C80)
#define CLASS_3_927184137CE93B15_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEC70A0)
#define CLASS_3_927184137CE93B15__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC7070)

inline static constexpr unsigned int Class_3_927184137CE93B15_TypeDefinitionIndex = 45371;

class Class_3_927184137CE93B15 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTeammateAttackFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTeammateAttackFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTeammateAttackFormation*))((::PBYTE)hIl2Cpp + CLASS_3_927184137CE93B15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_927184137CE93B15_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_8B4CC4824B24DC4A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_927184137CE93B15_METHOD_3_8B4CC4824B24DC4A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_8CC9316E9FA0838D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_927184137CE93B15_METHOD_3_8CC9316E9FA0838D_OFFSET))(this, a1, a2);
	}
};
