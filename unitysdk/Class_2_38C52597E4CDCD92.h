#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetTake; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_38C52597E4CDCD92_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x89A38D0)
#define CLASS_2_38C52597E4CDCD92__CTOR_OFFSET UNITYSDK_OFFSET(0x89A38B0)

inline static constexpr unsigned int Class_2_38C52597E4CDCD92_TypeDefinitionIndex = 47861;

class Class_2_38C52597E4CDCD92 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetTake*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetTake* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + CLASS_2_38C52597E4CDCD92__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_38C52597E4CDCD92_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
