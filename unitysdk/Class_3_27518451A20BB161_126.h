#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8283A71771D5D945;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_126_METHOD_3_40E51A39F224985F_OFFSET UNITYSDK_OFFSET(0x11B85430)
#define CLASS_3_27518451A20BB161_126_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B84CE0)
#define CLASS_3_27518451A20BB161_126__CTOR_OFFSET UNITYSDK_OFFSET(0x11B84CB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_126_TypeDefinitionIndex = 50913;

class Class_3_27518451A20BB161_126 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8283A71771D5D945*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8283A71771D5D945* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8283A71771D5D945*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::PoolList_1<::RPG::GameCore::GameEntity*>* Method_3_40E51A39F224985F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126_METHOD_3_40E51A39F224985F_OFFSET))(a1);
	}
};
