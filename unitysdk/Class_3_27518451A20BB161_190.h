#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8283A71771D5D945;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_190_METHOD_3_BCE9BF3965BE8B02_OFFSET UNITYSDK_OFFSET(0x163568D0)
#define CLASS_3_27518451A20BB161_190_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16356240)
#define CLASS_3_27518451A20BB161_190__CTOR_OFFSET UNITYSDK_OFFSET(0x16356210)

inline static constexpr unsigned int Class_3_27518451A20BB161_190_TypeDefinitionIndex = 52725;

class Class_3_27518451A20BB161_190 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8283A71771D5D945*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8283A71771D5D945* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8283A71771D5D945*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_190__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_190_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::PoolList_1<::RPG::GameCore::GameEntity*>* Method_3_BCE9BF3965BE8B02(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_190_METHOD_3_BCE9BF3965BE8B02_OFFSET))(a1);
	}
};
