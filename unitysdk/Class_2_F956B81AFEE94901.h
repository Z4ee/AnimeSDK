#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetSortByCustomFormationIndexClientOnly; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F956B81AFEE94901_COMPARE_OFFSET UNITYSDK_OFFSET(0x87740D0)
#define CLASS_2_F956B81AFEE94901_METHOD_2_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0x8774220)
#define CLASS_2_F956B81AFEE94901_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x8774270)
#define CLASS_2_F956B81AFEE94901__CTOR_OFFSET UNITYSDK_OFFSET(0x87740B0)

inline static constexpr unsigned int Class_2_F956B81AFEE94901_TypeDefinitionIndex = 47826;

class Class_2_F956B81AFEE94901 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*>
{
public:
	::RPG::GameCore::GameEntityList* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + CLASS_2_F956B81AFEE94901__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F956B81AFEE94901_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_F956B81AFEE94901_METHOD_2_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_F956B81AFEE94901_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
