#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapCreator; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E6B380B2EEF3B744_1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x170CBE60)
#define CLASS_2_E6B380B2EEF3B744_1__CTOR_OFFSET UNITYSDK_OFFSET(0x170CBE40)

inline static constexpr unsigned int Class_2_E6B380B2EEF3B744_1_TypeDefinitionIndex = 59394;

class Class_2_E6B380B2EEF3B744_1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapCreator*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapCreator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + CLASS_2_E6B380B2EEF3B744_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E6B380B2EEF3B744_1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
