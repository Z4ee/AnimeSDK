#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByModifierStatusCount; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_498DDD46E390C418_COMPARE_OFFSET UNITYSDK_OFFSET(0x14289E30)
#define CLASS_2_498DDD46E390C418_METHOD_2_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0x14289F30)
#define CLASS_2_498DDD46E390C418_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x14289F80)
#define CLASS_2_498DDD46E390C418__CTOR_OFFSET UNITYSDK_OFFSET(0x14289E10)

inline static constexpr unsigned int Class_2_498DDD46E390C418_TypeDefinitionIndex = 56538;

class Class_2_498DDD46E390C418 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByModifierStatusCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByModifierStatusCount* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + CLASS_2_498DDD46E390C418__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_498DDD46E390C418_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_498DDD46E390C418_METHOD_2_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_498DDD46E390C418_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
