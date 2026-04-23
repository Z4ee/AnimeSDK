#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertAction; }

#define CLASS_3_262674739D3399D1_METHOD_3_56F93621BC731B71_OFFSET UNITYSDK_OFFSET(0x1000A230)
#define CLASS_3_262674739D3399D1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10009E40)
#define CLASS_3_262674739D3399D1__CTOR_OFFSET UNITYSDK_OFFSET(0x10009E10)

inline static constexpr unsigned int Class_3_262674739D3399D1_TypeDefinitionIndex = 51427;

class Class_3_262674739D3399D1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TurnInsertAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TurnInsertAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TurnInsertAction*))((::PBYTE)hIl2Cpp + CLASS_3_262674739D3399D1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_262674739D3399D1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_56F93621BC731B71(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_262674739D3399D1_METHOD_3_56F93621BC731B71_OFFSET))(this, a1, a2);
	}
};
