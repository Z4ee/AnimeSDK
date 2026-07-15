#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByActionOrder; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_25A45BBFEC938344_COMPARE_OFFSET UNITYSDK_OFFSET(0x18B21CE0)
#define CLASS_2_25A45BBFEC938344_METHOD_2_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0x18B21820)
#define CLASS_2_25A45BBFEC938344_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B21870)
#define CLASS_2_25A45BBFEC938344__CTOR_OFFSET UNITYSDK_OFFSET(0x18B21800)

inline static constexpr unsigned int Class_2_25A45BBFEC938344_TypeDefinitionIndex = 56536;

class Class_2_25A45BBFEC938344 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByActionOrder*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByActionOrder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + CLASS_2_25A45BBFEC938344__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_25A45BBFEC938344_METHOD_2_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_25A45BBFEC938344_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_25A45BBFEC938344_COMPARE_OFFSET))(this, a1, a2);
	}
};
