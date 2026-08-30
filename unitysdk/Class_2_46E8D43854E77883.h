#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByMultiModifierValueSum; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_46E8D43854E77883_COMPARE_OFFSET UNITYSDK_OFFSET(0x1A855820)
#define CLASS_2_46E8D43854E77883_METHOD_2_196275224DB2F151_OFFSET UNITYSDK_OFFSET(0x1A8556C0)
#define CLASS_2_46E8D43854E77883_METHOD_2_E32BDF5C9351F70A_OFFSET UNITYSDK_OFFSET(0x1A855930)
#define CLASS_2_46E8D43854E77883_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A855980)
#define CLASS_2_46E8D43854E77883__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8556A0)

inline static constexpr unsigned int Class_2_46E8D43854E77883_TypeDefinitionIndex = 59319;

class Class_2_46E8D43854E77883 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByMultiModifierValueSum*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByMultiModifierValueSum* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + CLASS_2_46E8D43854E77883__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_196275224DB2F151(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_46E8D43854E77883_METHOD_2_196275224DB2F151_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_46E8D43854E77883_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E32BDF5C9351F70A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_46E8D43854E77883_METHOD_2_E32BDF5C9351F70A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_46E8D43854E77883_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
