#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapTeamFormation; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CF722012FAFB148A_1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x17F6BED0)
#define CLASS_2_CF722012FAFB148A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F6BEB0)

inline static constexpr unsigned int Class_2_CF722012FAFB148A_1_TypeDefinitionIndex = 59396;

class Class_2_CF722012FAFB148A_1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapTeamFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapTeamFormation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_2_CF722012FAFB148A_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF722012FAFB148A_1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
