#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSummoner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E6B380B2EEF3B744_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18715030)
#define CLASS_2_E6B380B2EEF3B744__CTOR_OFFSET UNITYSDK_OFFSET(0x18715010)

inline static constexpr unsigned int Class_2_E6B380B2EEF3B744_TypeDefinitionIndex = 59393;

class Class_2_E6B380B2EEF3B744 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSummoner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSummoner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + CLASS_2_E6B380B2EEF3B744__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E6B380B2EEF3B744_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
