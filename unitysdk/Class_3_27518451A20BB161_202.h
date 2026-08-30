#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_89AEF13151A6486C;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_202_METHOD_3_BCE9BF3965BE8B02_OFFSET UNITYSDK_OFFSET(0x156E4D40)
#define CLASS_3_27518451A20BB161_202_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156E4700)
#define CLASS_3_27518451A20BB161_202__CTOR_OFFSET UNITYSDK_OFFSET(0x156E46D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_202_TypeDefinitionIndex = 55425;

class Class_3_27518451A20BB161_202 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_89AEF13151A6486C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_89AEF13151A6486C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_89AEF13151A6486C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_202__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_202_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::PoolList_1<::RPG::GameCore::GameEntity*>* Method_3_BCE9BF3965BE8B02(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_202_METHOD_3_BCE9BF3965BE8B02_OFFSET))(a1);
	}
};
