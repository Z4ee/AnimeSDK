#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByWeaknessMatch; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D154F2BACB8FC52_COMPARE_OFFSET UNITYSDK_OFFSET(0xABB4830)
#define CLASS_2_0D154F2BACB8FC52_METHOD_2_00CA235AA4505DA9_OFFSET UNITYSDK_OFFSET(0xABB4440)
#define CLASS_2_0D154F2BACB8FC52_METHOD_2_D0A3AC3D851E8C42_OFFSET UNITYSDK_OFFSET(0xABB48E0)
#define CLASS_2_0D154F2BACB8FC52_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xABB4190)
#define CLASS_2_0D154F2BACB8FC52__CTOR_OFFSET UNITYSDK_OFFSET(0xABB4170)

inline static constexpr unsigned int Class_2_0D154F2BACB8FC52_TypeDefinitionIndex = 55306;

class Class_2_0D154F2BACB8FC52 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByWeaknessMatch*>
{
public:
	::RPG::GameCore::AttackDamageType Field_2_0; // 0x18
	::RPG::GameCore::AttackDamageType Field_2_1; // 0x1C

	::System::Void _ctor(::RPG::GameCore::TargetSortByWeaknessMatch* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + CLASS_2_0D154F2BACB8FC52__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_0D154F2BACB8FC52_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00CA235AA4505DA9(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_0D154F2BACB8FC52_METHOD_2_00CA235AA4505DA9_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D154F2BACB8FC52_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_D0A3AC3D851E8C42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D154F2BACB8FC52_METHOD_2_D0A3AC3D851E8C42_OFFSET))(this, a1);
	}
};
